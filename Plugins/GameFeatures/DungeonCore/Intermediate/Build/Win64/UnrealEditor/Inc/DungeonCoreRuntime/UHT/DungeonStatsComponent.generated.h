// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/DungeonStatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDungeonStatsComponent;
class ULyraAbilitySystemComponent;
#ifdef DUNGEONCORERUNTIME_DungeonStatsComponent_generated_h
#error "DungeonStatsComponent.generated.h already included, missing '#pragma once' in DungeonStatsComponent.h"
#endif
#define DUNGEONCORERUNTIME_DungeonStatsComponent_generated_h

#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_14_DELEGATE \
DUNGEONCORERUNTIME_API void FDungeonEnergy_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& DungeonEnergy_AttributeChanged, UDungeonStatsComponent* EnergyComponent, float OldValue, float NewValue);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_15_DELEGATE \
DUNGEONCORERUNTIME_API void FDungeonShield_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& DungeonShield_AttributeChanged, UDungeonStatsComponent* ShieldComponent, float OldValue, float NewValue);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_16_DELEGATE \
DUNGEONCORERUNTIME_API void FDungeonStrength_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& DungeonStrength_AttributeChanged, UDungeonStatsComponent* StrengthComponent, float OldValue, float NewValue);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_17_DELEGATE \
DUNGEONCORERUNTIME_API void FDungeonAgility_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& DungeonAgility_AttributeChanged, UDungeonStatsComponent* AgilityComponent, float OldValue, float NewValue);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_SPARSE_DATA
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAgilityNormalized); \
	DECLARE_FUNCTION(execGetMaxAgility); \
	DECLARE_FUNCTION(execGetAgility); \
	DECLARE_FUNCTION(execAgilityUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execAgilityInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execAgilityFindComponent); \
	DECLARE_FUNCTION(execGetStrengthNormalized); \
	DECLARE_FUNCTION(execGetMaxStrength); \
	DECLARE_FUNCTION(execGetStrength); \
	DECLARE_FUNCTION(execStrengthUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execStrengthInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execStrengthFindComponent); \
	DECLARE_FUNCTION(execGetShieldNormalized); \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetShield); \
	DECLARE_FUNCTION(execShieldUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execShieldInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execShieldFindComponent); \
	DECLARE_FUNCTION(execGetEnergyNormalized); \
	DECLARE_FUNCTION(execGetMaxEnergy); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execEnergyUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execEnergyInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execEnergyFindComponent);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonStatsComponent(); \
	friend struct Z_Construct_UClass_UDungeonStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UDungeonStatsComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStatsComponent)


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonStatsComponent(UDungeonStatsComponent&&); \
	NO_API UDungeonStatsComponent(const UDungeonStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStatsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStatsComponent) \
	NO_API virtual ~UDungeonStatsComponent();


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_22_PROLOG
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_SPARSE_DATA \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCORERUNTIME_API UClass* StaticClass<class UDungeonStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
