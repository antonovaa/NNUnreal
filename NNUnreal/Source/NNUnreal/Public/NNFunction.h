#pragma once

#include "NeuralNetwork.h"
#include "Paths.h"
#include "Runtime/Core/Public/HAL/Runnable.h"
#include "Runtime/Core/Public/HAL/RunnableThread.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NNFunction.generated.h"

/**
*	Blueprint function library, convenience stuff.
*/
USTRUCT(BlueprintType)
struct FInputParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
		TArray<float> inputTrain;

};
UCLASS()
class NNUNREAL_API UNNFunction : public UBlueprintFunctionLibrary, public FRunnable
{
	GENERATED_BODY()

public:
	UNNFunction();
	~UNNFunction();	
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static bool startTrainFromFile(FString path, bool isRelativePath, int countInputParams,int countOutputParams,TArray<int> hiddenLayer, int countIter = 100000);
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static bool startTrainFromData(TArray<FInputParams> input, int countInputParams,int countOutputParams,TArray<int> hiddenLayer, int countIter = 100000);
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static TArray<float> startTest(TArray<float>inputTest);	
		static TArray<float> startTestCpp(TArray<float>inputTest);
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static FString showWeight();
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static bool getIsTrained();

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static void saveWeight(FString pathWithFile, bool isRelativePath);
	
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
		static void loadWeight(FString pathWithFile, bool isRelativePath);

	virtual uint32 Run();


};

