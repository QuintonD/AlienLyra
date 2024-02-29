// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/DungeonStaminaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDungeonStaminaComponent;
class ULyraAbilitySystemComponent;
#ifdef DUNGEONCORERUNTIME_DungeonStaminaComponent_generated_h
#error "DungeonStaminaComponent.generated.h already included, missing '#pragma once' in DungeonStaminaComponent.h"
#endif
#define DUNGEONCORERUNTIME_DungeonStaminaComponent_generated_h

#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_14_DELEGATE \
DUNGEONCORERUNTIME_API void FStamina_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& Stamina_AttributeChanged, UDungeonStaminaComponent* StaminaComponent, float OldValue, float NewValue);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_SPARSE_DATA
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStaminaNormalized); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindStaminaComponent);


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_ACCESSORS
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonStaminaComponent(); \
	friend struct Z_Construct_UClass_UDungeonStaminaComponent_Statics; \
public: \
	DECLARE_CLASS(UDungeonStaminaComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStaminaComponent)


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonStaminaComponent(UDungeonStaminaComponent&&); \
	NO_API UDungeonStaminaComponent(const UDungeonStaminaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStaminaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStaminaComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStaminaComponent) \
	NO_API virtual ~UDungeonStaminaComponent();


#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_19_PROLOG
#define FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_SPARSE_DATA \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_ACCESSORS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCORERUNTIME_API UClass* StaticClass<class UDungeonStaminaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_LyraStarterGame2_Plugins_GameFeatures_DungeonCore_Source_DungeonCoreRuntime_Public_Character_DungeonStaminaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
