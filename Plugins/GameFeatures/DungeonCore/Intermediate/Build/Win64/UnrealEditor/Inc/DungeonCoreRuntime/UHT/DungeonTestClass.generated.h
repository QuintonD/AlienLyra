// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonTestClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAttributeSet;
class ULyraAbilitySystemComponent;
struct FGameplayAttribute;
struct FGameplayAttributeData;
struct FGameplayTag;
#ifdef DUNGEONCORERUNTIME_DungeonTestClass_generated_h
#error "DungeonTestClass.generated.h already included, missing '#pragma once' in DungeonTestClass.h"
#endif
#define DUNGEONCORERUNTIME_DungeonTestClass_generated_h

#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_SPARSE_DATA
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributesForAttributeSetClass); \
	DECLARE_FUNCTION(execRemoveFromASC); \
	DECLARE_FUNCTION(execAttachToASC);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameAttributeSet(); \
	friend struct Z_Construct_UClass_UGameAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGameAttributeSet, ULyraAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGameAttributeSet)


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAttributeSet(UGameAttributeSet&&); \
	NO_API UGameAttributeSet(const UGameAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameAttributeSet) \
	NO_API virtual ~UGameAttributeSet();


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_17_PROLOG
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_SPARSE_DATA \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_INCLASS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCORERUNTIME_API UClass* StaticClass<class UGameAttributeSet>();

#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_SPARSE_DATA
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execOnRep_Agility); \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execGetGameplayTag_Shield); \
	DECLARE_FUNCTION(execSetBaseShield); \
	DECLARE_FUNCTION(execGetRelativeShield); \
	DECLARE_FUNCTION(execGetCurrentShield); \
	DECLARE_FUNCTION(execGetBaseShield); \
	DECLARE_FUNCTION(execGetShieldAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Strength); \
	DECLARE_FUNCTION(execSetBaseStrength); \
	DECLARE_FUNCTION(execGetRelativeStrength); \
	DECLARE_FUNCTION(execGetCurrentStrength); \
	DECLARE_FUNCTION(execGetBaseStrength); \
	DECLARE_FUNCTION(execGetStrengthAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Agility); \
	DECLARE_FUNCTION(execSetBaseAgility); \
	DECLARE_FUNCTION(execGetRelativeAgility); \
	DECLARE_FUNCTION(execGetCurrentAgility); \
	DECLARE_FUNCTION(execGetBaseAgility); \
	DECLARE_FUNCTION(execGetAgilityAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Energy); \
	DECLARE_FUNCTION(execSetBaseEnergy); \
	DECLARE_FUNCTION(execGetRelativeEnergy); \
	DECLARE_FUNCTION(execGetCurrentEnergy); \
	DECLARE_FUNCTION(execGetBaseEnergy); \
	DECLARE_FUNCTION(execGetEnergyAttribute);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonTestClass(); \
	friend struct Z_Construct_UClass_UDungeonTestClass_Statics; \
public: \
	DECLARE_CLASS(UDungeonTestClass, UGameAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonTestClass) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Energy=NETFIELD_REP_START, \
		Agility, \
		Strength, \
		Shield, \
		NETFIELD_REP_END=Shield	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDungeonTestClass) \
public:


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonTestClass(UDungeonTestClass&&); \
	NO_API UDungeonTestClass(const UDungeonTestClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonTestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonTestClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonTestClass) \
	NO_API virtual ~UDungeonTestClass();


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_55_PROLOG
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_SPARSE_DATA \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_INCLASS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCORERUNTIME_API UClass* StaticClass<class UDungeonTestClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_DungeonTestClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
