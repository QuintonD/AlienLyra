// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCoreRuntime/Public/AbilitySystem/Attributes/DungeonStats.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonStats() {}
// Cross Module References
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonStats();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonStats_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
	UPackage* Z_Construct_UPackage__Script_DungeonCoreRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonStats::execOnRep_MaxAgility)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxAgility(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_Agility)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Agility(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_MaxStrength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStrength(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_Strength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Strength(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_BaseShieldRegen)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BaseShieldRegen(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_MaxShield)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxShield(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_Shield)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Shield(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_BaseEnergyRegen)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BaseEnergyRegen(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_MaxEnergy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxEnergy(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStats::execOnRep_Energy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Energy(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void UDungeonStats::StaticRegisterNativesUDungeonStats()
	{
		UClass* Class = UDungeonStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Agility", &UDungeonStats::execOnRep_Agility },
			{ "OnRep_BaseEnergyRegen", &UDungeonStats::execOnRep_BaseEnergyRegen },
			{ "OnRep_BaseShieldRegen", &UDungeonStats::execOnRep_BaseShieldRegen },
			{ "OnRep_Energy", &UDungeonStats::execOnRep_Energy },
			{ "OnRep_MaxAgility", &UDungeonStats::execOnRep_MaxAgility },
			{ "OnRep_MaxEnergy", &UDungeonStats::execOnRep_MaxEnergy },
			{ "OnRep_MaxShield", &UDungeonStats::execOnRep_MaxShield },
			{ "OnRep_MaxStrength", &UDungeonStats::execOnRep_MaxStrength },
			{ "OnRep_Shield", &UDungeonStats::execOnRep_Shield },
			{ "OnRep_Strength", &UDungeonStats::execOnRep_Strength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics
	{
		struct DungeonStats_eventOnRep_Agility_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_Agility_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Agility Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Agility Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_Agility", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::DungeonStats_eventOnRep_Agility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::DungeonStats_eventOnRep_Agility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_Agility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_Agility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics
	{
		struct DungeonStats_eventOnRep_BaseEnergyRegen_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_BaseEnergyRegen_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_BaseEnergyRegen", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::DungeonStats_eventOnRep_BaseEnergyRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::DungeonStats_eventOnRep_BaseEnergyRegen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics
	{
		struct DungeonStats_eventOnRep_BaseShieldRegen_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_BaseShieldRegen_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_BaseShieldRegen", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::DungeonStats_eventOnRep_BaseShieldRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::DungeonStats_eventOnRep_BaseShieldRegen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics
	{
		struct DungeonStats_eventOnRep_Energy_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_Energy_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Energy Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Energy Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::DungeonStats_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::DungeonStats_eventOnRep_Energy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics
	{
		struct DungeonStats_eventOnRep_MaxAgility_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_MaxAgility_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_MaxAgility", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::DungeonStats_eventOnRep_MaxAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::DungeonStats_eventOnRep_MaxAgility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics
	{
		struct DungeonStats_eventOnRep_MaxEnergy_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_MaxEnergy_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_MaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::DungeonStats_eventOnRep_MaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::DungeonStats_eventOnRep_MaxEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics
	{
		struct DungeonStats_eventOnRep_MaxShield_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_MaxShield_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_MaxShield", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::DungeonStats_eventOnRep_MaxShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::DungeonStats_eventOnRep_MaxShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics
	{
		struct DungeonStats_eventOnRep_MaxStrength_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_MaxStrength_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_MaxStrength", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::DungeonStats_eventOnRep_MaxStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::DungeonStats_eventOnRep_MaxStrength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics
	{
		struct DungeonStats_eventOnRep_Shield_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_Shield_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Shield Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shield Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_Shield", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::DungeonStats_eventOnRep_Shield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::DungeonStats_eventOnRep_Shield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_Shield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_Shield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics
	{
		struct DungeonStats_eventOnRep_Strength_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStats_eventOnRep_Strength_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::NewProp_OldValue_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Strength Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStats, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::DungeonStats_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::DungeonStats_eventOnRep_Strength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDungeonStats_OnRep_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStats_OnRep_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStats);
	UClass* Z_Construct_UClass_UDungeonStats_NoRegister()
	{
		return UDungeonStats::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonStats_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseEnergyRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseEnergyRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseShieldRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseShieldRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgility_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAgility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRegening_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnergyRegening;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRegening_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShieldRegening;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCoreRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_Agility, "OnRep_Agility" }, // 4088809387
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_BaseEnergyRegen, "OnRep_BaseEnergyRegen" }, // 3935317732
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_BaseShieldRegen, "OnRep_BaseShieldRegen" }, // 3998092705
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_Energy, "OnRep_Energy" }, // 531455616
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_MaxAgility, "OnRep_MaxAgility" }, // 74810836
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_MaxEnergy, "OnRep_MaxEnergy" }, // 3724438639
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_MaxShield, "OnRep_MaxShield" }, // 3500360445
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_MaxStrength, "OnRep_MaxStrength" }, // 3015759057
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_Shield, "OnRep_Shield" }, // 2177292580
		{ &Z_Construct_UFunction_UDungeonStats_OnRep_Strength, "OnRep_Strength" }, // 760414762
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/DungeonStats.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_Energy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current Energy attribute.  The health will be capped by the max Energy attribute.  Energy is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current Energy attribute.  The health will be capped by the max Energy attribute.  Energy is hidden from modifiers so only executions can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_Energy_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_Energy_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max Energy attribute.  Max Energy is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max Energy attribute.  Max Energy is an attribute since gameplay effects can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxEnergy = { "MaxEnergy", "OnRep_MaxEnergy", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, MaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxEnergy_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxEnergy_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseEnergyRegen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base amount of EnergyRegening to apply in the heal execution.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base amount of EnergyRegening to apply in the heal execution." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseEnergyRegen = { "BaseEnergyRegen", "OnRep_BaseEnergyRegen", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, BaseEnergyRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseEnergyRegen_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseEnergyRegen_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_Shield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current Shield attribute.  The health will be capped by the max Shield attribute.  Shield is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current Shield attribute.  The health will be capped by the max Shield attribute.  Shield is hidden from modifiers so only executions can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_Shield_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_Shield_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxShield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max Shield attribute.  Max Shield is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max Shield attribute.  Max Shield is an attribute since gameplay effects can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxShield = { "MaxShield", "OnRep_MaxShield", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, MaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxShield_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxShield_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseShieldRegen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base amount of ShieldRegening to apply in the heal execution.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base amount of ShieldRegening to apply in the heal execution." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseShieldRegen = { "BaseShieldRegen", "OnRep_BaseShieldRegen", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, BaseShieldRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseShieldRegen_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseShieldRegen_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current Strength attribute.  The health will be capped by the max Strength attribute.  Strength is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current Strength attribute.  The health will be capped by the max Strength attribute.  Strength is hidden from modifiers so only executions can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_Strength_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Strength" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max Strength attribute.  Max Strength is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max Strength attribute.  Max Strength is an attribute since gameplay effects can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxStrength = { "MaxStrength", "OnRep_MaxStrength", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, MaxStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxStrength_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxStrength_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_Agility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current Agility attribute.  The health will be capped by the max Agility attribute.  Strength is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current Agility attribute.  The health will be capped by the max Agility attribute.  Strength is hidden from modifiers so only executions can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_Agility = { "Agility", "OnRep_Agility", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, Agility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_Agility_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_Agility_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxAgility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Agility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max Agility attribute.  Max Agility is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max Agility attribute.  Max Agility is an attribute since gameplay effects can modify it." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxAgility = { "MaxAgility", "OnRep_MaxAgility", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, MaxAgility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxAgility_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxAgility_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_EnergyRegening_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming Energy. This is mapped directly to +Energy\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming Energy. This is mapped directly to +Energy" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_EnergyRegening = { "EnergyRegening", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, EnergyRegening), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_EnergyRegening_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_EnergyRegening_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStats_Statics::NewProp_ShieldRegening_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon|Shield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming Shield. This is mapped directly to +Shield\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/Attributes/DungeonStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming Shield. This is mapped directly to +Shield" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStats_Statics::NewProp_ShieldRegening = { "ShieldRegening", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonStats, ShieldRegening), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::NewProp_ShieldRegening_MetaData), Z_Construct_UClass_UDungeonStats_Statics::NewProp_ShieldRegening_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseEnergyRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_Shield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_BaseShieldRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_Agility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_MaxAgility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_EnergyRegening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStats_Statics::NewProp_ShieldRegening,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStats_Statics::ClassParams = {
		&UDungeonStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonStats_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStats_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDungeonStats()
	{
		if (!Z_Registration_Info_UClass_UDungeonStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStats.OuterSingleton, Z_Construct_UClass_UDungeonStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonStats.OuterSingleton;
	}
	template<> DUNGEONCORERUNTIME_API UClass* StaticClass<UDungeonStats>()
	{
		return UDungeonStats::StaticClass();
	}

	void UDungeonStats::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Energy(TEXT("Energy"));
		static const FName Name_MaxEnergy(TEXT("MaxEnergy"));
		static const FName Name_BaseEnergyRegen(TEXT("BaseEnergyRegen"));
		static const FName Name_Shield(TEXT("Shield"));
		static const FName Name_MaxShield(TEXT("MaxShield"));
		static const FName Name_BaseShieldRegen(TEXT("BaseShieldRegen"));
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_MaxStrength(TEXT("MaxStrength"));
		static const FName Name_Agility(TEXT("Agility"));
		static const FName Name_MaxAgility(TEXT("MaxAgility"));

		const bool bIsValid = true
			&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
			&& Name_MaxEnergy == ClassReps[(int32)ENetFields_Private::MaxEnergy].Property->GetFName()
			&& Name_BaseEnergyRegen == ClassReps[(int32)ENetFields_Private::BaseEnergyRegen].Property->GetFName()
			&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName()
			&& Name_MaxShield == ClassReps[(int32)ENetFields_Private::MaxShield].Property->GetFName()
			&& Name_BaseShieldRegen == ClassReps[(int32)ENetFields_Private::BaseShieldRegen].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_MaxStrength == ClassReps[(int32)ENetFields_Private::MaxStrength].Property->GetFName()
			&& Name_Agility == ClassReps[(int32)ENetFields_Private::Agility].Property->GetFName()
			&& Name_MaxAgility == ClassReps[(int32)ENetFields_Private::MaxAgility].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDungeonStats"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStats);
	UDungeonStats::~UDungeonStats() {}
	struct Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonStats, UDungeonStats::StaticClass, TEXT("UDungeonStats"), &Z_Registration_Info_UClass_UDungeonStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStats), 1151079015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_3394990553(TEXT("/Script/DungeonCoreRuntime"),
		Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
