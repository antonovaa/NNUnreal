#include "NeuralNetwork.h"

UNeuralNetwork::UNeuralNetwork()
{

}
void UNeuralNetwork::setParamsNeuralNetwork(int outputCount, int inputCount, const int countHiddenLayers, TArray<int> hiddenLayers, float h)
{
	this->outputCount = outputCount;
	this->inputCount = inputCount;
	this->h = h;
	countLayers = countHiddenLayers + 2;
	layers = new int[countLayers];
	layers[0] = inputCount;
	for (int hl = 1; hl < countHiddenLayers + 1; hl++)
	{
		layers[hl] = hiddenLayers[hl - 1];
	}
	layers[countLayers - 1] = 1;
	weight = new float***[outputCount];
	delta = new float**[outputCount];
	outNneuron = new float**[outputCount];
	for (int op = 0; op < outputCount; op++)
	{

		weight[op] = new float**[countLayers];
		delta[op] = new float*[countLayers];
		outNneuron[op] = new float*[countLayers];
		for (int l = 0; l < countLayers; l++)
		{
			weight[op][l] = new float*[layers[l]];
			delta[op][l] = new float[layers[l]];
			outNneuron[op][l] = new float[layers[l]];
			for (int i = 0; i < layers[l]; i++)//0 layer = input layer and haven't priv weight
			{
				if (l >= 1) {
					weight[op][l][i] = new float[layers[l - 1]];
					for (int j = 0; j < layers[l - 1]; j++)
					{
						weight[op][l][i][j] = (float)(rand()) / (RAND_MAX / 2) - 1;
					}
				}
			}
		}
	}
}
void UNeuralNetwork::trainNN(std::vector<InputTrainParams*> inputTrain, int &iteration)
{
	int c = (int)inputTrain.size();
	//count iter
	for (int iter = 0; iter < iteration; iter++)
	{
		//count output
		for (int op = 0; op < outputCount; op++)
		{
			//count input rows
			for (int inpunNum = 0; inpunNum < c; inpunNum++)
			{
				feedForward(op, inputTrain[inpunNum]->getInput());
				backPropogation(op, inputTrain[inpunNum]->getOutput());
			}
			if (iter % (iteration / 10) == 0) {
				float temp = delta[op][countLayers - 1][0];
				//cout << "output param #" << op << " delta= " << temp << endl;
			}
		}
	}
}
float UNeuralNetwork::Out(int op) {
	return outNneuron[op][countLayers - 1][0];
}
void UNeuralNetwork::feedForward(int op, float *input)
{
	for (int i = 0; i < layers[0]; i++) {
		outNneuron[op][0][i] = input[i];
	}
	for (int l = 1; l < countLayers; l++) {
		for (int curNneuron = 0; curNneuron < layers[l]; curNneuron++) {
			sum = 0.0;
			for (int prevNneuron = 0; prevNneuron < layers[l - 1]; prevNneuron++) {
				sum += outNneuron[op][l - 1][prevNneuron] * weight[op][l][curNneuron][prevNneuron];
			}
			//sum += weight[op][l][curNneuron][layers[l - 1]];
			outNneuron[op][l][curNneuron] = sigmoid(sum);
		}
	}
	//cout << "out fact=" << Out(op) <<endl;
}

FString UNeuralNetwork::showWeight() {
	FString s="";
	for (int op = 0; op < outputCount; op++)
	{
		for (int l = 1; l < countLayers; l++)
		{
			for (int i = 0; i < layers[l]; i++)
			{
				s += FString::Printf(TEXT("weight for neural# %d  in layer: %d for params: %d \n"),i,l,op);
				for (int j = 0; j < layers[l - 1]; j++)
				{
					s += FString::Printf(TEXT("  \t %f"), weight[op][l][i][j]);
				}
				s += FString("\n");

			}
		}
	}
	return s;

}

void UNeuralNetwork::backPropogation(int op, float *output)
{
	delta[op][countLayers - 1][0] = Out(op) * (1 - Out(op)) * (output[op] - Out(op));
	float temp = delta[op][countLayers - 1][0];
	//delta
	for (int i = countLayers - 2; i > 0; i--) {
		for (int j = 0; j < layers[i]; j++) {
			sum = 0.0;
			for (int k = 0; k < layers[i + 1]; k++) {
				sum += delta[op][i + 1][k] * weight[op][i + 1][k][j];
			}
			delta[op][i][j] = outNneuron[op][i][j] * (1 - outNneuron[op][i][j]) * sum;
		}
	}
	//weight
	for (int l = 1; l < countLayers; l++) {
		for (int curNeural = 0; curNeural < layers[l]; curNeural++) {
			for (int privNeural = 0; privNeural < layers[l - 1]; privNeural++) {
				float temp = outNneuron[op][l - 1][privNeural];
				weight[op][l][curNeural][privNeural] += delta[op][l][curNeural] * temp*h;
			}
			//prevDwt[l][curNeural][neuronCnt[l - 1]] = beta * delta[l][curNeural];
			//weight[l][curNeural][neuronCnt[l - 1]] += prevDwt[l][curNeural][neuronCnt[l - 1]];
		}
	}
}

void UNeuralNetwork::saveWeight(string path)
{
	ofstream myfile;
	myfile.open(path);
	if (!myfile.is_open()) return;
	myfile << outputCount<<" "<< inputCount<<" "<< countLayers<<endl;
	for (int i = 0; i < countLayers; i++)
	{
		myfile << layers[i]<<" ";
	}
	myfile << endl;
	for (int op = 0; op < outputCount; op++)
	{
		for (int l = 0; l < countLayers; l++)
		{
			for (int i = 0; i < layers[l]; i++)//0 layer = input layer and haven't priv weight
			{
				if (l >= 1) {
					for (int j = 0; j < layers[l - 1]; j++)
					{
						myfile<<weight[op][l][i][j]<<endl;
					}
				}
			}
		}
	}


	myfile.close();
}

void UNeuralNetwork::loadWeight(string path)
{
	string lines, l;
	ifstream myfile(path);
	char delim = ' ';
	int i = 0;
	if (myfile.is_open())
	{

		getline(myfile, lines);//1 str

		stringstream ss(lines);
		getline(ss, l, delim);
		int temp = stoi(l);
		this->outputCount = temp;

		getline(ss, l, delim);
		temp = stoi(l);
		this->inputCount = temp;

		getline(ss, l, delim);
		temp = stoi(l);
		this->countLayers = temp;

		layers = new int[countLayers];
		getline(myfile, lines);//2 str
		stringstream ss2(lines);
		for (int i = 0; i < countLayers; i++)
		{
			getline(ss2, l, delim);
			temp = stoi(l);
			layers[i] = temp;
		}

		weight = new float***[outputCount];
		//delta = new float**[outputCount];
		outNneuron = new float**[outputCount];
		for (int op = 0; op < outputCount; op++)
		{

			weight[op] = new float**[countLayers];
			//delta[op] = new float*[countLayers];
			outNneuron[op] = new float*[countLayers];
			for (int l = 0; l < countLayers; l++)
			{
				weight[op][l] = new float*[layers[l]];
				//	delta[op][l] = new float[layers[l]];
				outNneuron[op][l] = new float[layers[l]];
				for (int i = 0; i < layers[l]; i++)//0 layer = input layer and haven't priv weight
				{
					if (l >= 1) {
						weight[op][l][i] = new float[layers[l - 1]];
						for (int j = 0; j < layers[l - 1]; j++)
						{
							getline(myfile, lines);
							istringstream buffer(lines);
							float t;
							buffer >> t;
							weight[op][l][i][j] = t;
						}
					}
				}
			}
		}
		myfile.close();
	}
}

UNeuralNetwork::~UNeuralNetwork()
{
	//int i;
	//for (int op = 0; op < outputCount; op++)
	//{


	//	// outNneuron
	//	for (int i = 0; i < countLayers; i++) {
	//		delete[] outNneuron[op][i];
	//	}
	//	delete[] outNneuron[op];

	//	// delta
	//	for (i = 1; i < countLayers; i++) {
	//		delete[] delta[op][i];
	//	}
	//	delete[] delta[op];

	//	// weight
	//	for (i = 1; i < countLayers; i++)
	//		for (int j = 0; j < layers[i]; j++) {
	//			delete[] weight[op][i][j];
	//		}
	//	for (i = 1; i < countLayers; i++) {
	//		delete[] weight[op][i];
	//	}
	//	delete[] weight[op];
	//}
	//delete[] weight;
	//delete[] outNneuron;
	//// neuronCnt
	//delete[] layers;
}

TArray<float> UNeuralNetwork::test(TArray<float> input)
{
	TArray<float> s;
	int c = input.Num();
	float *a = new float[input.Num()];
	for (int t = 0; t < c; t++)
	{
		a[t] = input[t];
	}
	for (int op = 0; op < outputCount; op++)
	{
		feedForward(op, a);
		s.Add(Out(op));
	}
	return s;
}