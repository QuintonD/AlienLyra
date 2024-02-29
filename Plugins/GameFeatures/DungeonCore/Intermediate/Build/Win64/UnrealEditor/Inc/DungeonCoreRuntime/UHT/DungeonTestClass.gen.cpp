// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCoreRuntime/Public/DungeonTestClass.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonTestClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonTestClass();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonTestClass_NoRegister();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UGameAttributeSet();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UGameAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
	UPackage* Z_Construct_UPackage__Script_DungeonCoreRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UGameAttributeSet::execGetAttributesForAttributeSetClass)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_OBJECT(UClass,Z_Param_AttributSetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayAttribute>*)Z_Param__Result=P_THIS->GetAttributesForAttributeSetClass(Z_Param_AbilitySystemComponent,Z_Param_AttributSetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execRemoveFromASC)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromASC(Z_Param_AbilitySystemComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAttributeSet::execAttachToASC)
	{
		P_GET_OBJECT(ULyraAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToASC(Z_Param_AbilitySystemComponent);
		P_NATIVE_END;
	}
	void UGameAttributeSet::StaticRegisterNativesUGameAttributeSet()
	{
		UClass* Class = UGameAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToASC", &UGameAttributeSet::execAttachToASC },
			{ "GetAttributesForAttributeSetClass", &UGameAttributeSet::execGetAttributesForAttributeSetClass },
			{ "RemoveFromASC", &UGameAttributeSet::execRemoveFromASC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics
	{
		struct GameAttributeSet_eventAttachToASC_Parms
		{
			ULyraAbilitySystemComponent* AbilitySystemComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameAttributeSet_eventAttachToASC_Parms, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::Function_MetaDataParams[] = {
		{ "Category", "UGameAttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attaches this AttributeSet to a given ASC */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches this AttributeSet to a given ASC" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "AttachToASC", nullptr, nullptr, Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::GameAttributeSet_eventAttachToASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::GameAttributeSet_eventAttachToASC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameAttributeSet_AttachToASC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_AttachToASC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics
	{
		struct GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms
		{
			ULyraAbilitySystemComponent* AbilitySystemComponent;
			TSubclassOf<UAttributeSet>  AttributSetClass;
			TArray<FGameplayAttribute> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributSetClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AttributSetClass = { "AttributSetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms, AttributSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_AttributSetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "UGameAttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Looks for an instance of the given AttributeSet class in the given AbilitySetComponent and returns all Attributes found in that instance with their current values */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Looks for an instance of the given AttributeSet class in the given AbilitySetComponent and returns all Attributes found in that instance with their current values" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "GetAttributesForAttributeSetClass", nullptr, nullptr, Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::GameAttributeSet_eventGetAttributesForAttributeSetClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics
	{
		struct GameAttributeSet_eventRemoveFromASC_Parms
		{
			ULyraAbilitySystemComponent* AbilitySystemComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameAttributeSet_eventRemoveFromASC_Parms, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::Function_MetaDataParams[] = {
		{ "Category", "UGameAttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes this AttributeSet from a given ASC. This can be dangerous if a value has not been already replicated and cannot find its corresponding AttributSet - this will crash the game!!! */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes this AttributeSet from a given ASC. This can be dangerous if a value has not been already replicated and cannot find its corresponding AttributSet - this will crash the game!!!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAttributeSet, nullptr, "RemoveFromASC", nullptr, nullptr, Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::GameAttributeSet_eventRemoveFromASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::GameAttributeSet_eventRemoveFromASC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAttributeSet);
	UClass* Z_Construct_UClass_UGameAttributeSet_NoRegister()
	{
		return UGameAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGameAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCoreRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAttributeSet_AttachToASC, "AttachToASC" }, // 859400613
		{ &Z_Construct_UFunction_UGameAttributeSet_GetAttributesForAttributeSetClass, "GetAttributesForAttributeSetClass" }, // 3872907151
		{ &Z_Construct_UFunction_UGameAttributeSet_RemoveFromASC, "RemoveFromASC" }, // 4052698201
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Class for classes generated by the AttributeSet Generator (https://bit.ly/AttributeGenerator)\n */" },
#endif
		{ "IncludePath", "DungeonTestClass.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Class for classes generated by the AttributeSet Generator (https://bit.ly/AttributeGenerator)" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAttributeSet_Statics::ClassParams = {
		&UGameAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x002000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameAttributeSet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton, Z_Construct_UClass_UGameAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameAttributeSet.OuterSingleton;
	}
	template<> DUNGEONCORERUNTIME_API UClass* StaticClass<UGameAttributeSet>()
	{
		return UGameAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAttributeSet);
	UGameAttributeSet::~UGameAttributeSet() {}
	DEFINE_FUNCTION(UDungeonTestClass::execOnRep_Shield)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Shield(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execOnRep_Strength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Strength(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execOnRep_Agility)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Agility(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execOnRep_Energy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Energy(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetGameplayTag_Shield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Shield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execSetBaseShield)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseShield(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetRelativeShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetCurrentShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetBaseShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetShieldAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UDungeonTestClass::GetShieldAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetGameplayTag_Strength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Strength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execSetBaseStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseStrength(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetRelativeStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetCurrentStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetBaseStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetStrengthAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UDungeonTestClass::GetStrengthAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetGameplayTag_Agility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Agility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execSetBaseAgility)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseAgility(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetRelativeAgility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeAgility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetCurrentAgility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAgility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetBaseAgility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseAgility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetAgilityAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UDungeonTestClass::GetAgilityAttribute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetGameplayTag_Energy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetGameplayTag_Energy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execSetBaseEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseEnergy(Z_Param_NewVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetRelativeEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelativeEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetCurrentEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetBaseEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonTestClass::execGetEnergyAttribute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAttribute*)Z_Param__Result=UDungeonTestClass::GetEnergyAttribute();
		P_NATIVE_END;
	}
	void UDungeonTestClass::StaticRegisterNativesUDungeonTestClass()
	{
		UClass* Class = UDungeonTestClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAgilityAttribute", &UDungeonTestClass::execGetAgilityAttribute },
			{ "GetBaseAgility", &UDungeonTestClass::execGetBaseAgility },
			{ "GetBaseEnergy", &UDungeonTestClass::execGetBaseEnergy },
			{ "GetBaseShield", &UDungeonTestClass::execGetBaseShield },
			{ "GetBaseStrength", &UDungeonTestClass::execGetBaseStrength },
			{ "GetCurrentAgility", &UDungeonTestClass::execGetCurrentAgility },
			{ "GetCurrentEnergy", &UDungeonTestClass::execGetCurrentEnergy },
			{ "GetCurrentShield", &UDungeonTestClass::execGetCurrentShield },
			{ "GetCurrentStrength", &UDungeonTestClass::execGetCurrentStrength },
			{ "GetEnergyAttribute", &UDungeonTestClass::execGetEnergyAttribute },
			{ "GetGameplayTag_Agility", &UDungeonTestClass::execGetGameplayTag_Agility },
			{ "GetGameplayTag_Energy", &UDungeonTestClass::execGetGameplayTag_Energy },
			{ "GetGameplayTag_Shield", &UDungeonTestClass::execGetGameplayTag_Shield },
			{ "GetGameplayTag_Strength", &UDungeonTestClass::execGetGameplayTag_Strength },
			{ "GetRelativeAgility", &UDungeonTestClass::execGetRelativeAgility },
			{ "GetRelativeEnergy", &UDungeonTestClass::execGetRelativeEnergy },
			{ "GetRelativeShield", &UDungeonTestClass::execGetRelativeShield },
			{ "GetRelativeStrength", &UDungeonTestClass::execGetRelativeStrength },
			{ "GetShieldAttribute", &UDungeonTestClass::execGetShieldAttribute },
			{ "GetStrengthAttribute", &UDungeonTestClass::execGetStrengthAttribute },
			{ "OnRep_Agility", &UDungeonTestClass::execOnRep_Agility },
			{ "OnRep_Energy", &UDungeonTestClass::execOnRep_Energy },
			{ "OnRep_Shield", &UDungeonTestClass::execOnRep_Shield },
			{ "OnRep_Strength", &UDungeonTestClass::execOnRep_Strength },
			{ "SetBaseAgility", &UDungeonTestClass::execSetBaseAgility },
			{ "SetBaseEnergy", &UDungeonTestClass::execSetBaseEnergy },
			{ "SetBaseShield", &UDungeonTestClass::execSetBaseShield },
			{ "SetBaseStrength", &UDungeonTestClass::execSetBaseStrength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics
	{
		struct DungeonTestClass_eventGetAgilityAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetAgilityAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Agility's FGameplayAttribute */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Agility's FGameplayAttribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetAgilityAttribute", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::DungeonTestClass_eventGetAgilityAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::DungeonTestClass_eventGetAgilityAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics
	{
		struct DungeonTestClass_eventGetBaseAgility_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetBaseAgility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Agility base value (without any currently ongoing modifications */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Agility base value (without any currently ongoing modifications" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetBaseAgility", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::DungeonTestClass_eventGetBaseAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::DungeonTestClass_eventGetBaseAgility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics
	{
		struct DungeonTestClass_eventGetBaseEnergy_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetBaseEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Energy base value (without any currently ongoing modifications */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Energy base value (without any currently ongoing modifications" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetBaseEnergy", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::DungeonTestClass_eventGetBaseEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::DungeonTestClass_eventGetBaseEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics
	{
		struct DungeonTestClass_eventGetBaseShield_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetBaseShield_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Shield base value (without any currently ongoing modifications */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Shield base value (without any currently ongoing modifications" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetBaseShield", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::DungeonTestClass_eventGetBaseShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::DungeonTestClass_eventGetBaseShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetBaseShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetBaseShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics
	{
		struct DungeonTestClass_eventGetBaseStrength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetBaseStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Strength base value (without any currently ongoing modifications */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Strength base value (without any currently ongoing modifications" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetBaseStrength", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::DungeonTestClass_eventGetBaseStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::DungeonTestClass_eventGetBaseStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics
	{
		struct DungeonTestClass_eventGetCurrentAgility_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetCurrentAgility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Agility value. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Agility value. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetCurrentAgility", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::DungeonTestClass_eventGetCurrentAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::DungeonTestClass_eventGetCurrentAgility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics
	{
		struct DungeonTestClass_eventGetCurrentEnergy_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetCurrentEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Energy value. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Energy value. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetCurrentEnergy", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::DungeonTestClass_eventGetCurrentEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::DungeonTestClass_eventGetCurrentEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics
	{
		struct DungeonTestClass_eventGetCurrentShield_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetCurrentShield_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Shield value. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Shield value. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetCurrentShield", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::DungeonTestClass_eventGetCurrentShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::DungeonTestClass_eventGetCurrentShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics
	{
		struct DungeonTestClass_eventGetCurrentStrength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetCurrentStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Strength value. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Strength value. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetCurrentStrength", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::DungeonTestClass_eventGetCurrentStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::DungeonTestClass_eventGetCurrentStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics
	{
		struct DungeonTestClass_eventGetEnergyAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetEnergyAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Energy's FGameplayAttribute */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Energy's FGameplayAttribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetEnergyAttribute", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::DungeonTestClass_eventGetEnergyAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::DungeonTestClass_eventGetEnergyAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics
	{
		struct DungeonTestClass_eventGetGameplayTag_Agility_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetGameplayTag_Agility_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetGameplayTag_Agility", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::DungeonTestClass_eventGetGameplayTag_Agility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::DungeonTestClass_eventGetGameplayTag_Agility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics
	{
		struct DungeonTestClass_eventGetGameplayTag_Energy_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetGameplayTag_Energy_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetGameplayTag_Energy", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::DungeonTestClass_eventGetGameplayTag_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::DungeonTestClass_eventGetGameplayTag_Energy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics
	{
		struct DungeonTestClass_eventGetGameplayTag_Shield_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetGameplayTag_Shield_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetGameplayTag_Shield", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::DungeonTestClass_eventGetGameplayTag_Shield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::DungeonTestClass_eventGetGameplayTag_Shield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics
	{
		struct DungeonTestClass_eventGetGameplayTag_Strength_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetGameplayTag_Strength_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each attribute corresponds to a gameplay tag with the format AttributeSets.YourAttributeSetName.AttributeName" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetGameplayTag_Strength", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::DungeonTestClass_eventGetGameplayTag_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::DungeonTestClass_eventGetGameplayTag_Strength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics
	{
		struct DungeonTestClass_eventGetRelativeAgility_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetRelativeAgility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets relative Agility value between 0 and 1. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets relative Agility value between 0 and 1. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetRelativeAgility", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::DungeonTestClass_eventGetRelativeAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::DungeonTestClass_eventGetRelativeAgility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics
	{
		struct DungeonTestClass_eventGetRelativeEnergy_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetRelativeEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets relative Energy value between 0 and 1. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets relative Energy value between 0 and 1. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetRelativeEnergy", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::DungeonTestClass_eventGetRelativeEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::DungeonTestClass_eventGetRelativeEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics
	{
		struct DungeonTestClass_eventGetRelativeShield_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetRelativeShield_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets relative Shield value between 0 and 1. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets relative Shield value between 0 and 1. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetRelativeShield", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::DungeonTestClass_eventGetRelativeShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::DungeonTestClass_eventGetRelativeShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics
	{
		struct DungeonTestClass_eventGetRelativeStrength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetRelativeStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets relative Strength value between 0 and 1. Current value is base value plus/minus all modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets relative Strength value between 0 and 1. Current value is base value plus/minus all modifiers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetRelativeStrength", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::DungeonTestClass_eventGetRelativeStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::DungeonTestClass_eventGetRelativeStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics
	{
		struct DungeonTestClass_eventGetShieldAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetShieldAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Shield's FGameplayAttribute */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Shield's FGameplayAttribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetShieldAttribute", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::DungeonTestClass_eventGetShieldAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::DungeonTestClass_eventGetShieldAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics
	{
		struct DungeonTestClass_eventGetStrengthAttribute_Parms
		{
			FGameplayAttribute ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventGetStrengthAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 359123813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets current Strength's FGameplayAttribute */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets current Strength's FGameplayAttribute" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "GetStrengthAttribute", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::DungeonTestClass_eventGetStrengthAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::DungeonTestClass_eventGetStrengthAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics
	{
		struct DungeonTestClass_eventOnRep_Agility_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventOnRep_Agility_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "OnRep_Agility", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::DungeonTestClass_eventOnRep_Agility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::DungeonTestClass_eventOnRep_Agility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics
	{
		struct DungeonTestClass_eventOnRep_Energy_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventOnRep_Energy_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::DungeonTestClass_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::DungeonTestClass_eventOnRep_Energy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics
	{
		struct DungeonTestClass_eventOnRep_Shield_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventOnRep_Shield_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "OnRep_Shield", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::DungeonTestClass_eventOnRep_Shield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::DungeonTestClass_eventOnRep_Shield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics
	{
		struct DungeonTestClass_eventOnRep_Strength_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventOnRep_Strength_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::DungeonTestClass_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::DungeonTestClass_eventOnRep_Strength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics
	{
		struct DungeonTestClass_eventSetBaseAgility_Parms
		{
			float NewVal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventSetBaseAgility_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets Agility base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Agility base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "SetBaseAgility", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::DungeonTestClass_eventSetBaseAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::DungeonTestClass_eventSetBaseAgility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics
	{
		struct DungeonTestClass_eventSetBaseEnergy_Parms
		{
			float NewVal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventSetBaseEnergy_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets Energy base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Energy base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "SetBaseEnergy", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::DungeonTestClass_eventSetBaseEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::DungeonTestClass_eventSetBaseEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics
	{
		struct DungeonTestClass_eventSetBaseShield_Parms
		{
			float NewVal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventSetBaseShield_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets Shield base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Shield base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "SetBaseShield", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::DungeonTestClass_eventSetBaseShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::DungeonTestClass_eventSetBaseShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_SetBaseShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_SetBaseShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics
	{
		struct DungeonTestClass_eventSetBaseStrength_Parms
		{
			float NewVal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonTestClass_eventSetBaseStrength_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::NewProp_NewVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "DungeonTestClass|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets Strength base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization */" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Strength base (and current) value. Base value is the permanent base, current value is after all modifiers. Should only be called on initialization" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonTestClass, nullptr, "SetBaseStrength", nullptr, nullptr, Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::DungeonTestClass_eventSetBaseStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::DungeonTestClass_eventSetBaseStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonTestClass);
	UClass* Z_Construct_UClass_UDungeonTestClass_NoRegister()
	{
		return UDungeonTestClass::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonTestClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonTestClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCoreRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonTestClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonTestClass_GetAgilityAttribute, "GetAgilityAttribute" }, // 2707483823
		{ &Z_Construct_UFunction_UDungeonTestClass_GetBaseAgility, "GetBaseAgility" }, // 3527910503
		{ &Z_Construct_UFunction_UDungeonTestClass_GetBaseEnergy, "GetBaseEnergy" }, // 3079021065
		{ &Z_Construct_UFunction_UDungeonTestClass_GetBaseShield, "GetBaseShield" }, // 231625372
		{ &Z_Construct_UFunction_UDungeonTestClass_GetBaseStrength, "GetBaseStrength" }, // 2260254393
		{ &Z_Construct_UFunction_UDungeonTestClass_GetCurrentAgility, "GetCurrentAgility" }, // 4073373620
		{ &Z_Construct_UFunction_UDungeonTestClass_GetCurrentEnergy, "GetCurrentEnergy" }, // 814424434
		{ &Z_Construct_UFunction_UDungeonTestClass_GetCurrentShield, "GetCurrentShield" }, // 3734854641
		{ &Z_Construct_UFunction_UDungeonTestClass_GetCurrentStrength, "GetCurrentStrength" }, // 1975753361
		{ &Z_Construct_UFunction_UDungeonTestClass_GetEnergyAttribute, "GetEnergyAttribute" }, // 2622591152
		{ &Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Agility, "GetGameplayTag_Agility" }, // 592374803
		{ &Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Energy, "GetGameplayTag_Energy" }, // 772293679
		{ &Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Shield, "GetGameplayTag_Shield" }, // 967403298
		{ &Z_Construct_UFunction_UDungeonTestClass_GetGameplayTag_Strength, "GetGameplayTag_Strength" }, // 4125250869
		{ &Z_Construct_UFunction_UDungeonTestClass_GetRelativeAgility, "GetRelativeAgility" }, // 193175500
		{ &Z_Construct_UFunction_UDungeonTestClass_GetRelativeEnergy, "GetRelativeEnergy" }, // 4248663999
		{ &Z_Construct_UFunction_UDungeonTestClass_GetRelativeShield, "GetRelativeShield" }, // 1873438820
		{ &Z_Construct_UFunction_UDungeonTestClass_GetRelativeStrength, "GetRelativeStrength" }, // 243398573
		{ &Z_Construct_UFunction_UDungeonTestClass_GetShieldAttribute, "GetShieldAttribute" }, // 1101643456
		{ &Z_Construct_UFunction_UDungeonTestClass_GetStrengthAttribute, "GetStrengthAttribute" }, // 1297409834
		{ &Z_Construct_UFunction_UDungeonTestClass_OnRep_Agility, "OnRep_Agility" }, // 4236802336
		{ &Z_Construct_UFunction_UDungeonTestClass_OnRep_Energy, "OnRep_Energy" }, // 3310735707
		{ &Z_Construct_UFunction_UDungeonTestClass_OnRep_Shield, "OnRep_Shield" }, // 907773301
		{ &Z_Construct_UFunction_UDungeonTestClass_OnRep_Strength, "OnRep_Strength" }, // 2427490002
		{ &Z_Construct_UFunction_UDungeonTestClass_SetBaseAgility, "SetBaseAgility" }, // 2718015558
		{ &Z_Construct_UFunction_UDungeonTestClass_SetBaseEnergy, "SetBaseEnergy" }, // 1162187980
		{ &Z_Construct_UFunction_UDungeonTestClass_SetBaseShield, "SetBaseShield" }, // 1709735870
		{ &Z_Construct_UFunction_UDungeonTestClass_SetBaseStrength, "SetBaseStrength" }, // 1576568139
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonTestClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DungeonTestClass\n * Test attributes with FText\n */" },
#endif
		{ "IncludePath", "DungeonTestClass.h" },
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DungeonTestClass\nTest attributes with FText" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Energy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DungeonTestClass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// one property per attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "one property per attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonTestClass, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Energy_MetaData), Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Energy_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Agility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DungeonTestClass" },
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Agility = { "Agility", "OnRep_Agility", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonTestClass, Agility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Agility_MetaData), Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Agility_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DungeonTestClass" },
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonTestClass, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Strength_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Shield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DungeonTestClass" },
		{ "ModuleRelativePath", "Public/DungeonTestClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonTestClass, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Shield_MetaData), Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Shield_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonTestClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Agility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonTestClass_Statics::NewProp_Shield,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonTestClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonTestClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonTestClass_Statics::ClassParams = {
		&UDungeonTestClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonTestClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonTestClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTestClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDungeonTestClass()
	{
		if (!Z_Registration_Info_UClass_UDungeonTestClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonTestClass.OuterSingleton, Z_Construct_UClass_UDungeonTestClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonTestClass.OuterSingleton;
	}
	template<> DUNGEONCORERUNTIME_API UClass* StaticClass<UDungeonTestClass>()
	{
		return UDungeonTestClass::StaticClass();
	}

	void UDungeonTestClass::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Energy(TEXT("Energy"));
		static const FName Name_Agility(TEXT("Agility"));
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_Shield(TEXT("Shield"));

		const bool bIsValid = true
			&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
			&& Name_Agility == ClassReps[(int32)ENetFields_Private::Agility].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDungeonTestClass"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonTestClass);
	UDungeonTestClass::~UDungeonTestClass() {}
	struct Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameAttributeSet, UGameAttributeSet::StaticClass, TEXT("UGameAttributeSet"), &Z_Registration_Info_UClass_UGameAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAttributeSet), 167846027U) },
		{ Z_Construct_UClass_UDungeonTestClass, UDungeonTestClass::StaticClass, TEXT("UDungeonTestClass"), &Z_Registration_Info_UClass_UDungeonTestClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonTestClass), 138428382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_13199767(TEXT("/Script/DungeonCoreRuntime"),
		Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
