// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attributes/DungeonStaminaSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef DUNGEONCORERUNTIME_DungeonStaminaSet_generated_h
#error "DungeonStaminaSet.generated.h already included, missing '#pragma once' in DungeonStaminaSet.h"
#endif
#define DUNGEONCORERUNTIME_DungeonStaminaSet_generated_h

#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_SPARSE_DATA
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_BaseRegen); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonStaminaSet(); \
	friend struct Z_Construct_UClass_UDungeonStaminaSet_Statics; \
public: \
	DECLARE_CLASS(UDungeonStaminaSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStaminaSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Stamina=NETFIELD_REP_START, \
		MaxStamina, \
		BaseRegen, \
		NETFIELD_REP_END=BaseRegen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDungeonStaminaSet) \
public:


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonStaminaSet(UDungeonStaminaSet&&); \
	NO_API UDungeonStaminaSet(const UDungeonStaminaSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStaminaSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStaminaSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonStaminaSet) \
	NO_API virtual ~UDungeonStaminaSet();


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_27_PROLOG
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_SPARSE_DATA \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_INCLASS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCORERUNTIME_API UClass* StaticClass<class UDungeonStaminaSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_AbilitySystem_Attributes_DungeonStaminaSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
