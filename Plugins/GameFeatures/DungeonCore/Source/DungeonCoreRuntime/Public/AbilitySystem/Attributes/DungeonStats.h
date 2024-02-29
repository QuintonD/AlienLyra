#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/LyraAttributeSet.h"
#include "NativeGameplayTags.h"

#include "DungeonStats.generated.h"

class UObject;
struct FFrame;

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_EnergyImmunity);

namespace DungeonGameplayTags
{
    DUNGEONCORERUNTIME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Cheat_UnlimitedEnergy);
}

struct FGameplayEffectModCallbackData;

/**
 *
 */
UCLASS(BlueprintType)
class DUNGEONCORERUNTIME_API UDungeonStats : public ULyraAttributeSet
{
    GENERATED_BODY()

public:

    UDungeonStats();
    //Energy Components
    ATTRIBUTE_ACCESSORS(UDungeonStats, Energy);
    ATTRIBUTE_ACCESSORS(UDungeonStats, MaxEnergy);
    ATTRIBUTE_ACCESSORS(UDungeonStats, EnergyRegening);
    ATTRIBUTE_ACCESSORS(UDungeonStats, BaseEnergyRegen);
    //Strength Components
    ATTRIBUTE_ACCESSORS(UDungeonStats, Strength);
    ATTRIBUTE_ACCESSORS(UDungeonStats, MaxStrength);
    //Agility Components
    ATTRIBUTE_ACCESSORS(UDungeonStats, Agility);
    ATTRIBUTE_ACCESSORS(UDungeonStats, MaxAgility);
    //Shield Components Needs to extend Health functionality 
    ATTRIBUTE_ACCESSORS(UDungeonStats, Shield);
    ATTRIBUTE_ACCESSORS(UDungeonStats, MaxShield);
    ATTRIBUTE_ACCESSORS(UDungeonStats, ShieldRegening);
    ATTRIBUTE_ACCESSORS(UDungeonStats, BaseShieldRegen);

    // Delegate when energy changes due to use/regening, some information may be missing on the client
    mutable FLyraAttributeEvent OnEnergyChanged;

    // Delegate when max energy changes
    mutable FLyraAttributeEvent OnMaxEnergyChanged;

    // Delegate to broadcast when the energy attribute reaches zero
    mutable FLyraAttributeEvent OnOutOfEnergy;

    // Delegate when Shield changes due to damage/regening, some information may be missing on the client
    mutable FLyraAttributeEvent OnShieldChanged;

    // Delegate when max Shield changes
    mutable FLyraAttributeEvent OnMaxShieldChanged;

    // Delegate to broadcast when the Shield attribute reaches zero
    mutable FLyraAttributeEvent OnOutOfShield;

    // Delegate when Agility changes due to buff/debuff, some information may be missing on the client
    mutable FLyraAttributeEvent OnAgilityChanged;

    // Delegate when max Agility changes
    mutable FLyraAttributeEvent OnMaxAgilityChanged;

    // Delegate to broadcast when the agility attribute reaches zero
    mutable FLyraAttributeEvent OnOutOfAgility;

    // Delegate when Strength changes due to buff/debuff, some information may be missing on the client
    mutable FLyraAttributeEvent OnStrengthChanged;

    // Delegate when max Strength changes
    mutable FLyraAttributeEvent OnMaxStrengthChanged;

    // Delegate to broadcast when the Strength attribute reaches zero
    mutable FLyraAttributeEvent OnOutOfStrength;

protected:

    //Energy Functions

    UFUNCTION()
    void OnRep_Energy(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_MaxEnergy(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_BaseEnergyRegen(const FGameplayAttributeData& OldValue);

    //Shield Functions

    UFUNCTION()
    void OnRep_Shield(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_MaxShield(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_BaseShieldRegen(const FGameplayAttributeData& OldValue);

    //Strength Functions

    UFUNCTION()
    void OnRep_Strength(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_MaxStrength(const FGameplayAttributeData& OldValue);

    //Agility Functions

    UFUNCTION()
    void OnRep_Agility(const FGameplayAttributeData& OldValue);

    UFUNCTION()
    void OnRep_MaxAgility(const FGameplayAttributeData& OldValue);


    virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

    virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
    virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

    void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;

private:

    //Energy

    // The current Energy attribute.  The health will be capped by the max Energy attribute.  Energy is hidden from modifiers so only executions can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Energy, Category = "Dungeon|Energy", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Energy;

    // The current max Energy attribute.  Max Energy is an attribute since gameplay effects can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxEnergy, Category = "Dungeon|Energy", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxEnergy;

    // The base amount of EnergyRegening to apply in the heal execution.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BaseEnergyRegen, Category = "Dungeon|Energy", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData BaseEnergyRegen;

    //Shield

    // The current Shield attribute.  The health will be capped by the max Shield attribute.  Shield is hidden from modifiers so only executions can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Shield, Category = "Dungeon|Shield", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Shield;

    // The current max Shield attribute.  Max Shield is an attribute since gameplay effects can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxShield, Category = "Dungeon|Shield", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxShield;

    // The base amount of ShieldRegening to apply in the heal execution.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BaseShieldRegen, Category = "Dungeon|Shield", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData BaseShieldRegen;

    //Strength

    // The current Strength attribute.  The health will be capped by the max Strength attribute.  Strength is hidden from modifiers so only executions can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Strength, Category = "Dungeon|Strength", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Strength;

    // The current max Strength attribute.  Max Strength is an attribute since gameplay effects can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxStrength, Category = "Dungeon|Strength", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxStrength;

    //Agility

    // The current Agility attribute.  The health will be capped by the max Agility attribute.  Strength is hidden from modifiers so only executions can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Agility, Category = "Dungeon|Agility", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Agility;

    // The current max Agility attribute.  Max Agility is an attribute since gameplay effects can modify it.
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxAgility, Category = "Dungeon|Agility", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxAgility;

    // Used to track when the Energy/Shield reaches 0.
    bool bOutOfEnergy;
    bool bOutOfShield;
    //Try it for Strength/Agility but maybe not used
    bool bOutOfStrength;
    bool bOutOfAgility;

    // Store the Energy before any changes
    float MaxEnergyBeforeAttributeChange;
    float EnergyBeforeAttributeChange;
    
    // Store the Shield before any changes
    float MaxShieldBeforeAttributeChange;
    float ShieldBeforeAttributeChange;

    // Store the Strength before any changes
    float MaxStrengthBeforeAttributeChange;
    float StrengthBeforeAttributeChange;

    // Store the Agility before any changes
    float MaxAgilityBeforeAttributeChange;
    float AgilityBeforeAttributeChange;

    // -------------------------------------------------------------------
    //    Meta Attribute (please keep attributes that aren't 'stateful' below
    // -------------------------------------------------------------------

    // Incoming Energy. This is mapped directly to +Energy
    UPROPERTY(BlueprintReadOnly, Category = "Dungeon|Energy", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData EnergyRegening;
    // Incoming Shield. This is mapped directly to +Shield
    UPROPERTY(BlueprintReadOnly, Category = "Dungeon|Shield", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData ShieldRegening;
};
