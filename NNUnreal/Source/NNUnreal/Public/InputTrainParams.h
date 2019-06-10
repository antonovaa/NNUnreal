#pragma once
class InputTrainParams
{
public:
	InputTrainParams(float*, float*, int inCount, int outCount);
	~InputTrainParams();

	float * getInput() {
		return input;
	}
	float * getOutput() {
		return output;
	}

private:
	int inCount;
	int outCount;
	float *input;
	float *output;
};



