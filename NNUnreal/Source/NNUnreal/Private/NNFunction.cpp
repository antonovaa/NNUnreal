#include "NNFunction.h"


static FRunnableThread* Thread;
static UNeuralNetwork* network = NewObject<UNeuralNetwork>();
static vector<InputTrainParams*> inputTrainParamsListSt;
static int countIterations;
static UNNFunction* Runnable;
static bool isTrained;
UNNFunction::UNNFunction()
{
	Runnable = this;
}


UNNFunction::~UNNFunction()
{
}

bool UNNFunction::startTrainFromFile(FString pathWithFile,bool isRelativePath, int countInputParams, int countOutputParams, TArray<int> hiddenLayerArrayNeural,int countIter)
{
	isTrained = false;
	//network = NewObject<UNeuralNetwork>();
	int countHiddenLayers = hiddenLayerArrayNeural.Num();		
	if (isRelativePath) {
		pathWithFile = FPaths::Combine(FPaths::GameDir(), pathWithFile);
		if (!FPaths::FileExists(pathWithFile))return false;
	}
	else {
		if (!FPaths::FileExists(pathWithFile))return false;
	}
	vector<InputTrainParams*> inputTrain = ReaderParams::getParamsInputOutput(std::string(TCHAR_TO_UTF8(*pathWithFile)), countInputParams, countOutputParams);
	network->setParamsNeuralNetwork(countOutputParams,countInputParams, countHiddenLayers, hiddenLayerArrayNeural, 0.1);
	//network->trainNN(inputTrain, countIter);
	inputTrainParamsListSt = inputTrain;
	countIterations = countIter;

	Thread = FRunnableThread::Create(Runnable, TEXT("FPrimeNumberWorker"), 0, TPri_BelowNormal); //windows default = 8mb for thread, could specify more

	return true;
}

bool UNNFunction::startTrainFromData(TArray<FInputParams> inputTrain, int countInputParams, int countOutputParams, TArray<int> hiddenLayerArrayNeural, int countIter)
{
	isTrained = false;
	network = NewObject<UNeuralNetwork>();
	int countHiddenLayers = hiddenLayerArrayNeural.Num();
	int countTrain = inputTrain.Num();
	vector<InputTrainParams*> inputTrainParamsList;
	for (int trainIter = 0; trainIter < countTrain; trainIter++)
	{
		float *fInput = new float[countInputParams];
		float *fOutput = new float[countOutputParams];
		for (int inIter = 0; inIter < countInputParams; inIter++)
		{
			fInput[inIter] = inputTrain[trainIter].inputTrain[inIter];
		}		
		for (int outIter = 0; outIter < countOutputParams; outIter++)
		{
			fOutput[outIter] = inputTrain[trainIter].inputTrain[countInputParams+outIter];
		}
		InputTrainParams *itp= new InputTrainParams(fInput, fOutput, countInputParams, countOutputParams);
		inputTrainParamsList.push_back(itp);
	}	
	network->setParamsNeuralNetwork(countOutputParams, countInputParams, countHiddenLayers, hiddenLayerArrayNeural, 0.1);
	inputTrainParamsListSt = inputTrainParamsList;
	countIterations = countIter;

	Thread = FRunnableThread::Create(Runnable, TEXT("FPrimeNumberWorker"), 0, TPri_BelowNormal); //windows default = 8mb for thread, could specify more
	//network->trainNN(inputTrainParamsList, countIter);
	return true;
}

TArray<float> UNNFunction::startTest(TArray<float> inputTest)
{
	return UNNFunction::startTestCpp(inputTest);
}

TArray<float> UNNFunction::startTestCpp(TArray<float> inputTest)
{
	return network->test(inputTest);
}

FString UNNFunction::showWeight()
{
	return network->showWeight();
}

bool UNNFunction::getIsTrained()
{
		return isTrained;
}

void UNNFunction::saveWeight(FString pathWithFile, bool isRelativePath)
{
	if (isRelativePath) {
		pathWithFile = FPaths::Combine(FPaths::GameDir(), pathWithFile);
	}
	network->saveWeight(TCHAR_TO_UTF8(*pathWithFile));
}

void UNNFunction::loadWeight(FString pathWithFile, bool isRelativePath)
{
	if (isRelativePath) {
		pathWithFile = FPaths::Combine(FPaths::GameDir(), pathWithFile);
	}
	network->loadWeight(TCHAR_TO_UTF8(*pathWithFile));
}

uint32 UNNFunction::Run()
{
	network->trainNN(inputTrainParamsListSt, countIterations);
	isTrained = true;
	return 0;
}