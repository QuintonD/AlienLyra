// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraAttributeSet.h"
#include "NativeGameplayTags.h"

#include "DungeonStaminaSet.generated.h"

class UObject;
struct FFrame;

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_StaminaImmunity);

namespace DungeonGameplayTags
{
    DUNGEONCORERUNTIME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Cheat_UnlimitedStamina);
}

struct FGameplayEffectModCallbackData;

/**
 *
 */
UCLASS(BlueprintType)
class DUNGEONCORERUNTIME_API UDungeonStaminaSet : public ULyraAttributeSet
{
    GENERATED_BODY()

public:

    UDungeonStaminaSet();

    ATTRIBUTE_ACCESSORS(UDungeonStaminaSet, Stamina);
    ATTRIBUTE_ACCESSORS(UDungeonStaminaSet, MaxStamina);
    ATTRIBUTE_ACCESSORS(UDungeonStaminaSet, Regening);
    ATTRIBUTE_ACCESSORS(UDungeonStaminaSet, BaseRegen);


    // Delegate when health changes due to damage/healing, some information may be missing on the client
    mutable FLyraAttributeEvent OnStaminaChanged;

    // Delegate when max health changes
    mutable FLyraAttributeEvent OnMaxStaminaChanged;

    // Delegate to broadcast when the health attribute reaches zero
    mutable FLyraAttributeEvent OnOutOfStamina;

protected:

    UFUNCTION()
    void OnRep_Stamina(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_BaseRegen(const FGameplayAttributeData& OldValue);

    virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

    virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
    virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

    void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;

private:

    // The current stamina attribute.  The health will be capped by the max stamina attribute.  Stamina is hidden from modifiers so only executions can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Stamina, Category = "Dungeon|Stamina", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Stamina;

    // The current max stamina attribute.  Max stamina is an attribute since gameplay effects can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxStamina, Category = "Dungeon|Stamina", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxStamina;

    // The base amount of Regening to apply in the heal execution.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BaseRegen, Category = "Dungeon|Stamina", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData BaseRegen;

    // Used to track when the health reaches 0.
    bool bOutOfStamina;

    // Store the health before any changes
    float MaxStaminaBeforeAttributeChange;
    float StaminaBeforeAttributeChange;

    // -------------------------------------------------------------------
    //    Meta Attribute (please keep attributes that aren't 'stateful' below
    // -------------------------------------------------------------------

    // Incoming stamina. This is mapped directly to +Stamina
    UPROPERTY(BlueprintReadOnly, Category = "Dungeon|Stamina", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Regening;
};
