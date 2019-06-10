#pragma once

#include "Object.h"
#include <vector>
#include "ReaderParams.h"
#include "NeuralNetwork.generated.h"


UCLASS()
class NNUNREAL_API UNeuralNetwork : public UObject {

	GENERATED_BODY()
public:

	void setParamsNeuralNetwork(int outputCount, int inputCount, const int  countHiddenLayers, TArray<int> layer, float h);
	void trainNN(std::vector<InputTrainParams*> inputTrain, int &iteration);
	UNeuralNetwork();
	~UNeuralNetwork();

	TArray<float> test(TArray<float> input);
	float sigmoid(float in) {
		return (float)(1 / (1 + exp(-in)));//0 to 1 for our params
	}
	void feedForward(int op, float *input);
	void backPropogation(int op, float *output);
	void saveWeight(string path);
	void loadWeight(string path);
	float Out(int op);
	FString showWeight();
private:
	float sum;
	float h;
	int *layers;
	int countLayers;
	float ****weight;//op--count outputs params, l-count layers,i-current neural, j-priv neural;
	float ***delta;
	float ***outNneuron;
	int outputCount;
	int inputCount;
};

