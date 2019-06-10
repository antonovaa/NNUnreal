// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNUnreal/Public/NNFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNFunction() {}
// Cross Module References
	NNUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FInputParams();
	UPackage* Z_Construct_UPackage__Script_NNUnreal();
	NNUNREAL_API UClass* Z_Construct_UClass_UNNFunction_NoRegister();
	NNUNREAL_API UClass* Z_Construct_UClass_UNNFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_getIsTrained();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_loadWeight();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_saveWeight();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_showWeight();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_startTest();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_startTrainFromData();
	NNUNREAL_API UFunction* Z_Construct_UFunction_UNNFunction_startTrainFromFile();
// End Cross Module References
class UScriptStruct* FInputParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NNUNREAL_API uint32 Get_Z_Construct_UScriptStruct_FInputParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputParams, Z_Construct_UPackage__Script_NNUnreal(), TEXT("InputParams"), sizeof(FInputParams), Get_Z_Construct_UScriptStruct_FInputParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputParams(FInputParams::StaticStruct, TEXT("/Script/NNUnreal"), TEXT("InputParams"), false, nullptr, nullptr);
static struct FScriptStruct_NNUnreal_StaticRegisterNativesFInputParams
{
	FScriptStruct_NNUnreal_StaticRegisterNativesFInputParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputParams")),new UScriptStruct::TCppStructOps<FInputParams>);
	}
} ScriptStruct_NNUnreal_StaticRegisterNativesFInputParams;
	struct Z_Construct_UScriptStruct_FInputParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputTrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inputTrain;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inputTrain_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
		{ "ToolTip", "Blueprint function library, convenience stuff." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain_MetaData[] = {
		{ "Category", "InputParams" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain = { UE4CodeGen_Private::EPropertyClass::Array, "inputTrain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FInputParams, inputTrain), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "inputTrain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputParams_Statics::NewProp_inputTrain_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NNUnreal,
		nullptr,
		&NewStructOps,
		"InputParams",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInputParams),
		alignof(FInputParams),
		Z_Construct_UScriptStruct_FInputParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputParams_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_NNUnreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputParams"), sizeof(FInputParams), Get_Z_Construct_UScriptStruct_FInputParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputParams_CRC() { return 3363144894U; }
	void UNNFunction::StaticRegisterNativesUNNFunction()
	{
		UClass* Class = UNNFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getIsTrained", &UNNFunction::execgetIsTrained },
			{ "loadWeight", &UNNFunction::execloadWeight },
			{ "saveWeight", &UNNFunction::execsaveWeight },
			{ "showWeight", &UNNFunction::execshowWeight },
			{ "startTest", &UNNFunction::execstartTest },
			{ "startTrainFromData", &UNNFunction::execstartTrainFromData },
			{ "startTrainFromFile", &UNNFunction::execstartTrainFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNNFunction_getIsTrained_Statics
	{
		struct NNFunction_eventgetIsTrained_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NNFunction_eventgetIsTrained_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NNFunction_eventgetIsTrained_Parms), &Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "getIsTrained", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventgetIsTrained_Parms), Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_getIsTrained()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_getIsTrained_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNNFunction_loadWeight_Statics
	{
		struct NNFunction_eventloadWeight_Parms
		{
			FString pathWithFile;
			bool isRelativePath;
		};
		static void NewProp_isRelativePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRelativePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathWithFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNNFunction_loadWeight_Statics::NewProp_isRelativePath_SetBit(void* Obj)
	{
		((NNFunction_eventloadWeight_Parms*)Obj)->isRelativePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNNFunction_loadWeight_Statics::NewProp_isRelativePath = { UE4CodeGen_Private::EPropertyClass::Bool, "isRelativePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NNFunction_eventloadWeight_Parms), &Z_Construct_UFunction_UNNFunction_loadWeight_Statics::NewProp_isRelativePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNNFunction_loadWeight_Statics::NewProp_pathWithFile = { UE4CodeGen_Private::EPropertyClass::Str, "pathWithFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventloadWeight_Parms, pathWithFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_loadWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_loadWeight_Statics::NewProp_isRelativePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_loadWeight_Statics::NewProp_pathWithFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_loadWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_loadWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "loadWeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventloadWeight_Parms), Z_Construct_UFunction_UNNFunction_loadWeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_loadWeight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_loadWeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_loadWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_loadWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_loadWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNNFunction_saveWeight_Statics
	{
		struct NNFunction_eventsaveWeight_Parms
		{
			FString pathWithFile;
			bool isRelativePath;
		};
		static void NewProp_isRelativePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRelativePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathWithFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNNFunction_saveWeight_Statics::NewProp_isRelativePath_SetBit(void* Obj)
	{
		((NNFunction_eventsaveWeight_Parms*)Obj)->isRelativePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNNFunction_saveWeight_Statics::NewProp_isRelativePath = { UE4CodeGen_Private::EPropertyClass::Bool, "isRelativePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NNFunction_eventsaveWeight_Parms), &Z_Construct_UFunction_UNNFunction_saveWeight_Statics::NewProp_isRelativePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNNFunction_saveWeight_Statics::NewProp_pathWithFile = { UE4CodeGen_Private::EPropertyClass::Str, "pathWithFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventsaveWeight_Parms, pathWithFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_saveWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_saveWeight_Statics::NewProp_isRelativePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_saveWeight_Statics::NewProp_pathWithFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_saveWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_saveWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "saveWeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventsaveWeight_Parms), Z_Construct_UFunction_UNNFunction_saveWeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_saveWeight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_saveWeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_saveWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_saveWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_saveWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNNFunction_showWeight_Statics
	{
		struct NNFunction_eventshowWeight_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNNFunction_showWeight_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NNFunction_eventshowWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_showWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_showWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_showWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_showWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "showWeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventshowWeight_Parms), Z_Construct_UFunction_UNNFunction_showWeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_showWeight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_showWeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_showWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_showWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_showWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNNFunction_startTest_Statics
	{
		struct NNFunction_eventstartTest_Parms
		{
			TArray<float> inputTest;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inputTest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inputTest_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_inputTest = { UE4CodeGen_Private::EPropertyClass::Array, "inputTest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTest_Parms, inputTest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_inputTest_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "inputTest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_startTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_inputTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTest_Statics::NewProp_inputTest_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_startTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_startTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "startTest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventstartTest_Parms), Z_Construct_UFunction_UNNFunction_startTest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_startTest_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_startTest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_startTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_startTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_startTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics
	{
		struct NNFunction_eventstartTrainFromData_Parms
		{
			TArray<FInputParams> input;
			int32 countInputParams;
			int32 countOutputParams;
			TArray<int32> hiddenLayer;
			int32 countIter;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_countIter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_hiddenLayer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hiddenLayer_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_countOutputParams;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_countInputParams;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NNFunction_eventstartTrainFromData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NNFunction_eventstartTrainFromData_Parms), &Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_countIter = { UE4CodeGen_Private::EPropertyClass::Int, "countIter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromData_Parms, countIter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_hiddenLayer = { UE4CodeGen_Private::EPropertyClass::Array, "hiddenLayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromData_Parms, hiddenLayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_hiddenLayer_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "hiddenLayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_countOutputParams = { UE4CodeGen_Private::EPropertyClass::Int, "countOutputParams", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromData_Parms, countOutputParams), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_countInputParams = { UE4CodeGen_Private::EPropertyClass::Int, "countInputParams", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromData_Parms, countInputParams), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromData_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_countIter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_hiddenLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_hiddenLayer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_countOutputParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_countInputParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "CPP_Default_countIter", "100000" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "startTrainFromData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventstartTrainFromData_Parms), Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_startTrainFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_startTrainFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics
	{
		struct NNFunction_eventstartTrainFromFile_Parms
		{
			FString path;
			bool isRelativePath;
			int32 countInputParams;
			int32 countOutputParams;
			TArray<int32> hiddenLayer;
			int32 countIter;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_countIter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_hiddenLayer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hiddenLayer_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_countOutputParams;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_countInputParams;
		static void NewProp_isRelativePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRelativePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NNFunction_eventstartTrainFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NNFunction_eventstartTrainFromFile_Parms), &Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_countIter = { UE4CodeGen_Private::EPropertyClass::Int, "countIter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromFile_Parms, countIter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_hiddenLayer = { UE4CodeGen_Private::EPropertyClass::Array, "hiddenLayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromFile_Parms, hiddenLayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_hiddenLayer_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "hiddenLayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_countOutputParams = { UE4CodeGen_Private::EPropertyClass::Int, "countOutputParams", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromFile_Parms, countOutputParams), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_countInputParams = { UE4CodeGen_Private::EPropertyClass::Int, "countInputParams", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromFile_Parms, countInputParams), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_isRelativePath_SetBit(void* Obj)
	{
		((NNFunction_eventstartTrainFromFile_Parms*)Obj)->isRelativePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_isRelativePath = { UE4CodeGen_Private::EPropertyClass::Bool, "isRelativePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NNFunction_eventstartTrainFromFile_Parms), &Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_isRelativePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_path = { UE4CodeGen_Private::EPropertyClass::Str, "path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NNFunction_eventstartTrainFromFile_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_countIter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_hiddenLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_hiddenLayer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_countOutputParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_countInputParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_isRelativePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "CPP_Default_countIter", "100000" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNNFunction, "startTrainFromFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NNFunction_eventstartTrainFromFile_Parms), Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNNFunction_startTrainFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNNFunction_startTrainFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNNFunction_NoRegister()
	{
		return UNNFunction::StaticClass();
	}
	struct Z_Construct_UClass_UNNFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NNUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNNFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNNFunction_getIsTrained, "getIsTrained" }, // 1063761666
		{ &Z_Construct_UFunction_UNNFunction_loadWeight, "loadWeight" }, // 3891393086
		{ &Z_Construct_UFunction_UNNFunction_saveWeight, "saveWeight" }, // 1533912027
		{ &Z_Construct_UFunction_UNNFunction_showWeight, "showWeight" }, // 3375964571
		{ &Z_Construct_UFunction_UNNFunction_startTest, "startTest" }, // 3725480191
		{ &Z_Construct_UFunction_UNNFunction_startTrainFromData, "startTrainFromData" }, // 1022437485
		{ &Z_Construct_UFunction_UNNFunction_startTrainFromFile, "startTrainFromFile" }, // 1357092557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NNFunction.h" },
		{ "ModuleRelativePath", "Public/NNFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNNFunction_Statics::ClassParams = {
		&UNNFunction::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNNFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNNFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNNFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNNFunction, 2165961407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNNFunction(Z_Construct_UClass_UNNFunction, &UNNFunction::StaticClass, TEXT("/Script/NNUnreal"), TEXT("UNNFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
