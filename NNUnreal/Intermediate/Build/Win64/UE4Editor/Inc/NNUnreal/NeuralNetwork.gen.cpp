// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNUnreal/Public/NeuralNetwork.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetwork() {}
// Cross Module References
	NNUNREAL_API UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister();
	NNUNREAL_API UClass* Z_Construct_UClass_UNeuralNetwork();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NNUnreal();
// End Cross Module References
	void UNeuralNetwork::StaticRegisterNativesUNeuralNetwork()
	{
	}
	UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister()
	{
		return UNeuralNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NNUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NeuralNetwork.h" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetwork>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetwork_Statics::ClassParams = {
		&UNeuralNetwork::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetwork()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNeuralNetwork_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNeuralNetwork, 1561647951);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNeuralNetwork(Z_Construct_UClass_UNeuralNetwork, &UNeuralNetwork::StaticClass, TEXT("/Script/NNUnreal"), TEXT("UNeuralNetwork"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetwork);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
