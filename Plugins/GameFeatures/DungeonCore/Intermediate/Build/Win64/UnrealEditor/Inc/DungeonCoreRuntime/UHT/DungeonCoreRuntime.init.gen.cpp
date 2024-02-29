// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCoreRuntime_init() {}
	DUNGEONCORERUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonAgility_AttributeChanged__DelegateSignature();
	DUNGEONCORERUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonEnergy_AttributeChanged__DelegateSignature();
	DUNGEONCORERUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonShield_AttributeChanged__DelegateSignature();
	DUNGEONCORERUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonStrength_AttributeChanged__DelegateSignature();
	DUNGEONCORERUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonCoreRuntime_Stamina_AttributeChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonCoreRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonCoreRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonCoreRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonAgility_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonEnergy_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonShield_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonCoreRuntime_DungeonStrength_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonCoreRuntime_Stamina_AttributeChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonCoreRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2B3B3EC3,
				0x613B1DD8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonCoreRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonCoreRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonCoreRuntime(Z_Construct_UPackage__Script_DungeonCoreRuntime, TEXT("/Script/DungeonCoreRuntime"), Z_Registration_Info_UPackage__Script_DungeonCoreRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2B3B3EC3, 0x613B1DD8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
