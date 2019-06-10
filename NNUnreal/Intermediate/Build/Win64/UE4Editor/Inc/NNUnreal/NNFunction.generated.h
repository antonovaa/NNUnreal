// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputParams;
#ifdef NNUNREAL_NNFunction_generated_h
#error "NNFunction.generated.h already included, missing '#pragma once' in NNFunction.h"
#endif
#define NNUNREAL_NNFunction_generated_h

#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputParams_Statics; \
	NNUNREAL_API static class UScriptStruct* StaticStruct();


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execloadWeight) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_pathWithFile); \
		P_GET_UBOOL(Z_Param_isRelativePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNNFunction::loadWeight(Z_Param_pathWithFile,Z_Param_isRelativePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsaveWeight) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_pathWithFile); \
		P_GET_UBOOL(Z_Param_isRelativePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNNFunction::saveWeight(Z_Param_pathWithFile,Z_Param_isRelativePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetIsTrained) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNNFunction::getIsTrained(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execshowWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UNNFunction::showWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartTest) \
	{ \
		P_GET_TARRAY(float,Z_Param_inputTest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UNNFunction::startTest(Z_Param_inputTest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartTrainFromData) \
	{ \
		P_GET_TARRAY(FInputParams,Z_Param_input); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countInputParams); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countOutputParams); \
		P_GET_TARRAY(int32,Z_Param_hiddenLayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countIter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNNFunction::startTrainFromData(Z_Param_input,Z_Param_countInputParams,Z_Param_countOutputParams,Z_Param_hiddenLayer,Z_Param_countIter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartTrainFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_UBOOL(Z_Param_isRelativePath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countInputParams); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countOutputParams); \
		P_GET_TARRAY(int32,Z_Param_hiddenLayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countIter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNNFunction::startTrainFromFile(Z_Param_path,Z_Param_isRelativePath,Z_Param_countInputParams,Z_Param_countOutputParams,Z_Param_hiddenLayer,Z_Param_countIter); \
		P_NATIVE_END; \
	}


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execloadWeight) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_pathWithFile); \
		P_GET_UBOOL(Z_Param_isRelativePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNNFunction::loadWeight(Z_Param_pathWithFile,Z_Param_isRelativePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsaveWeight) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_pathWithFile); \
		P_GET_UBOOL(Z_Param_isRelativePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNNFunction::saveWeight(Z_Param_pathWithFile,Z_Param_isRelativePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetIsTrained) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNNFunction::getIsTrained(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execshowWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UNNFunction::showWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartTest) \
	{ \
		P_GET_TARRAY(float,Z_Param_inputTest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UNNFunction::startTest(Z_Param_inputTest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartTrainFromData) \
	{ \
		P_GET_TARRAY(FInputParams,Z_Param_input); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countInputParams); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countOutputParams); \
		P_GET_TARRAY(int32,Z_Param_hiddenLayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countIter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNNFunction::startTrainFromData(Z_Param_input,Z_Param_countInputParams,Z_Param_countOutputParams,Z_Param_hiddenLayer,Z_Param_countIter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execstartTrainFromFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_UBOOL(Z_Param_isRelativePath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countInputParams); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countOutputParams); \
		P_GET_TARRAY(int32,Z_Param_hiddenLayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_countIter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UNNFunction::startTrainFromFile(Z_Param_path,Z_Param_isRelativePath,Z_Param_countInputParams,Z_Param_countOutputParams,Z_Param_hiddenLayer,Z_Param_countIter); \
		P_NATIVE_END; \
	}


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNFunction(); \
	friend struct Z_Construct_UClass_UNNFunction_Statics; \
public: \
	DECLARE_CLASS(UNNFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNUnreal"), NO_API) \
	DECLARE_SERIALIZER(UNNFunction)


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNNFunction(); \
	friend struct Z_Construct_UClass_UNNFunction_Statics; \
public: \
	DECLARE_CLASS(UNNFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNUnreal"), NO_API) \
	DECLARE_SERIALIZER(UNNFunction)


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNNFunction(UNNFunction&&); \
	NO_API UNNFunction(const UNNFunction&); \
public:


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNNFunction(UNNFunction&&); \
	NO_API UNNFunction(const UNNFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNNFunction)


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_PRIVATE_PROPERTY_OFFSET
#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_22_PROLOG
#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_PRIVATE_PROPERTY_OFFSET \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_RPC_WRAPPERS \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_INCLASS \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_PRIVATE_PROPERTY_OFFSET \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_INCLASS_NO_PURE_DECLS \
	AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimRepl_Plugins_NNUnreal_Source_NNUnreal_Public_NNFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
