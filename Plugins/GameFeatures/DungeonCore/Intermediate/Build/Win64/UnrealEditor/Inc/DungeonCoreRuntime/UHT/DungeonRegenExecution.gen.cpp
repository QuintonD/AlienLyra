// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCoreRuntime/Public/AbilitySystem/Executions/DungeonRegenExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonRegenExecution() {}
// Cross Module References
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonRegenExecution();
	DUNGEONCORERUNTIME_API UClass* Z_Construct_UClass_UDungeonRegenExecution_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_DungeonCoreRuntime();
// End Cross Module References
	void UDungeonRegenExecution::StaticRegisterNativesUDungeonRegenExecution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonRegenExecution);
	UClass* Z_Construct_UClass_UDungeonRegenExecution_NoRegister()
	{
		return UDungeonRegenExecution::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonRegenExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonRegenExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCoreRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonRegenExecution_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonRegenExecution_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraHealExecution\n *\n *    Execution used by gameplay effects to apply healing to the health attributes.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Executions/DungeonRegenExecution.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Executions/DungeonRegenExecution.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraHealExecution\n\n   Execution used by gameplay effects to apply healing to the health attributes." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonRegenExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonRegenExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonRegenExecution_Statics::ClassParams = {
		&UDungeonRegenExecution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonRegenExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonRegenExecution_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDungeonRegenExecution()
	{
		if (!Z_Registration_Info_UClass_UDungeonRegenExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonRegenExecution.OuterSingleton, Z_Construct_UClass_UDungeonRegenExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonRegenExecution.OuterSingleton;
	}
	template<> DUNGEONCORERUNTIME_API UClass* StaticClass<UDungeonRegenExecution>()
	{
		return UDungeonRegenExecution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonRegenExecution);
	UDungeonRegenExecution::~UDungeonRegenExecution() {}
	struct Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Executions_DungeonRegenExecution_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Executions_DungeonRegenExecution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonRegenExecution, UDungeonRegenExecution::StaticClass, TEXT("UDungeonRegenExecution"), &Z_Registration_Info_UClass_UDungeonRegenExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonRegenExecution), 2175233647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Executions_DungeonRegenExecution_h_1863339608(TEXT("/Script/DungeonCoreRuntime"),
		Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Executions_DungeonRegenExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Executions_DungeonRegenExecution_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
