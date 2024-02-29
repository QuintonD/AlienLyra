// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCoreRuntime/Public/AbilitySystem/Attributes/DungeonStaminaSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonStaminaSet() {}
// Cross Module References
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonStaminaSet();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonStaminaSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
	UPackage* Z_Construct_UPackage__Script_DungeonCoreRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonStaminaSet::execOnRep_BaseRegen)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BaseRegen(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStaminaSet::execOnRep_MaxStamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStamina(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStaminaSet::execOnRep_Stamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Stamina(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void UDungeonStaminaSet::StaticRegisterNativesUDungeonStaminaSet()
	{
		UClass* Class = UDungeonStaminaSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BaseRegen", &UDungeonStaminaSet::execOnRep_BaseRegen },
			{ "OnRep_MaxStamina", &UDungeonStaminaSet::execOnRep_MaxStamina },
			{ "OnRep_Stamina", &UDungeonStaminaSet::execOnRep_Stamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics
	{
		struct DungeonStaminaSet_eventOnRep_BaseRegen_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStaminaSet_eventOnRep_BaseRegen_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStaminaSet, nullptr, "OnRep_BaseRegen", nullptr, nullptr, Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::DungeonStaminaSet_eventOnRep_BaseRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::DungeonStaminaSet_eventOnRep_BaseRegen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics
	{
		struct DungeonStaminaSet_eventOnRep_MaxStamina_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStaminaSet_eventOnRep_MaxStamina_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStaminaSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::DungeonStaminaSet_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::DungeonStaminaSet_eventOnRep_MaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics
	{
		struct DungeonStaminaSet_eventOnRep_Stamina_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStaminaSet_eventOnRep_Stamina_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStaminaSet, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::DungeonStaminaSet_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::DungeonStaminaSet_eventOnRep_Stamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStaminaSet);
	UClass* Z_Construct_UClass_UDungeonStaminaSet_NoRegister()
	{
		return UDungeonStaminaSet::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonStaminaSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Regening_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Regening;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonStaminaSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCoreRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonStaminaSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonStaminaSet_OnRep_BaseRegen, "OnRep_BaseRegen" }, // 3987765426
		{ &Z_Construct_UFunction_UDungeonStaminaSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 507004616
		{ &Z_Construct_UFunction_UDungeonStaminaSet_OnRep_Stamina, "OnRep_Stamina" }, // 1780238591
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStaminaSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/DungeonStaminaSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Stamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current stamina attribute.  The health will be capped by the max stamina attribute.  Stamina is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current stamina attribute.  The health will be capped by the max stamina attribute.  Stamina is hidden from modifiers so only executions can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStaminaSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Stamina_MetaData), Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Stamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max stamina attribute.  Max stamina is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max stamina attribute.  Max stamina is an attribute since gameplay effects can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStaminaSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_MaxStamina_MetaData), Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_MaxStamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_BaseRegen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base amount of Regening to apply in the heal execution.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base amount of Regening to apply in the heal execution." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_BaseRegen = { "BaseRegen", "OnRep_BaseRegen", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStaminaSet, BaseRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_BaseRegen_MetaData), Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_BaseRegen_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Regening_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming stamina. This is mapped directly to +Stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStaminaSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming stamina. This is mapped directly to +Stamina" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Regening = { "Regening", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStaminaSet, Regening), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Regening_MetaData), Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Regening_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonStaminaSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_BaseRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStaminaSet_Statics::NewProp_Regening,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonStaminaSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonStaminaSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStaminaSet_Statics::ClassParams = {
		&UDungeonStaminaSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonStaminaSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonStaminaSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStaminaSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDungeonStaminaSet()
	{
		if (!Z_Registration_Info_UClass_UDungeonStaminaSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStaminaSet.OuterSingleton, Z_Construct_UClass_UDungeonStaminaSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonStaminaSet.OuterSingleton;
	}
	template<> DUNGEONCORERUNTIME_API UClass* StaticClass<UDungeonStaminaSet>()
	{
		return UDungeonStaminaSet::StaticClass();
	}

	void UDungeonStaminaSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Stamina(TEXT("Stamina"));
		static const FName Name_MaxStamina(TEXT("MaxStamina"));
		static const FName Name_BaseRegen(TEXT("BaseRegen"));

		const bool bIsValid = true
			&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
			&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
			&& Name_BaseRegen == ClassReps[(int32)ENetFields_Private::BaseRegen].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDungeonStaminaSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStaminaSet);
	UDungeonStaminaSet::~UDungeonStaminaSet() {}
	struct Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonStaminaSet, UDungeonStaminaSet::StaticClass, TEXT("UDungeonStaminaSet"), &Z_Registration_Info_UClass_UDungeonStaminaSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStaminaSet), 987715624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_2842388598(TEXT("/Script/DungeonCoreRuntime"),
		Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
