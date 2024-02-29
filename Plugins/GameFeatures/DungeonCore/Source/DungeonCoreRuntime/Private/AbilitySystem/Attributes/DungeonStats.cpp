// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/DungeonStats.h"
#include "AbilitySystem/Attributes/LyraAttributeSet.h"
#include "LyraGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "Engine/World.h"
#include "GameplayEffectExtension.h"
#include "Messages/LyraVerbMessage.h"
#include "GameFramework/GameplayMessageSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(DungeonStats)

UE_DEFINE_GAMEPLAY_TAG(TAG_Gameplay_EnergyImmunity, "Gameplay.EnergyImmunity");

namespace DungeonGameplayTags
{
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cheat_UnlimitedEnergy, "Cheat.UnlimitedEnergy", "UnlimitedEnergy cheat is active on the owner.");
}

UDungeonStats::UDungeonStats()
    : Energy(100.0f)
    , MaxEnergy(100.0f)
    , BaseEnergyRegen(0.0f)
    , Shield(100.0f)
    , MaxShield(100.0f)
    , BaseShieldRegen(0.0f)
    , Strength(10.0f)
    , MaxStrength(100.0f)
    , Agility(10.0f)
    , MaxAgility(100.0f)
{
    bOutOfEnergy = false;
    bOutOfShield = false;
    bOutOfStrength = false;
    bOutOfAgility = false;
    MaxEnergyBeforeAttributeChange = 0.0f;
    EnergyBeforeAttributeChange = 0.0f;
    MaxShieldBeforeAttributeChange = 0.0f;
    ShieldBeforeAttributeChange = 0.0f;
    MaxStrengthBeforeAttributeChange = 0.0f;
    StrengthBeforeAttributeChange = 0.0f;
    MaxAgilityBeforeAttributeChange = 0.0f;
    AgilityBeforeAttributeChange = 0.0f;
}

void UDungeonStats::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, Energy, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, MaxEnergy, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, BaseEnergyRegen, COND_OwnerOnly, REPNOTIFY_Always);

    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, Shield, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, MaxShield, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, BaseShieldRegen, COND_OwnerOnly, REPNOTIFY_Always);

    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, Strength, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, MaxStrength, COND_None, REPNOTIFY_Always);

    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, Agility, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UDungeonStats, MaxAgility, COND_None, REPNOTIFY_Always);

}

void UDungeonStats::OnRep_Energy(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, Energy, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    // These events on the client should not be changing attributes

    const float CurrentEnergy = GetEnergy();
    const float EstimatedMagnitude = CurrentEnergy - OldValue.GetCurrentValue();

    OnEnergyChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentEnergy);

    if (!bOutOfEnergy && CurrentEnergy <= 0.0f)
    {
        OnOutOfEnergy.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentEnergy);
    }

    bOutOfEnergy = (CurrentEnergy <= 0.0f);
}

void UDungeonStats::OnRep_MaxEnergy(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, MaxEnergy, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    OnMaxEnergyChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxEnergy() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxEnergy());
}

void UDungeonStats::OnRep_Shield(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, Shield, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    // These events on the client should not be changing attributes

    const float CurrentShield = GetShield();
    const float EstimatedMagnitude = CurrentShield - OldValue.GetCurrentValue();

    OnShieldChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentShield);

    if (!bOutOfShield && CurrentShield <= 0.0f)
    {
        OnOutOfShield.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentShield);
    }

    bOutOfShield = (CurrentShield <= 0.0f);
}

void UDungeonStats::OnRep_MaxShield(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, MaxShield, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    OnMaxShieldChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxShield() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxShield());
}

void UDungeonStats::OnRep_Strength(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, Strength, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    // These events on the client should not be changing attributes

    const float CurrentStrength = GetStrength();
    const float EstimatedMagnitude = CurrentStrength - OldValue.GetCurrentValue();

    OnStrengthChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentStrength);

    if (!bOutOfStrength && CurrentStrength <= 0.0f)
    {
        OnOutOfStrength.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentStrength);
    }

    bOutOfStrength = (CurrentStrength <= 0.0f);
}

void UDungeonStats::OnRep_MaxStrength(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, MaxStrength, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    OnMaxStrengthChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxStrength() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxStrength());
}

void UDungeonStats::OnRep_Agility(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, Agility, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    // These events on the client should not be changing attributes

    const float CurrentAgility = GetAgility();
    const float EstimatedMagnitude = CurrentAgility - OldValue.GetCurrentValue();

    OnAgilityChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentAgility);

    if (!bOutOfAgility && CurrentAgility <= 0.0f)
    {
        OnOutOfAgility.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentAgility);
    }

    bOutOfAgility = (CurrentAgility <= 0.0f);
}

void UDungeonStats::OnRep_MaxAgility(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, MaxAgility, OldValue);

    // Call the change callback, but without an instigator
    // This could be changed to an explicit RPC in the future
    OnMaxAgilityChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxAgility() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxAgility());
}

bool UDungeonStats::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data)
{
    if (!Super::PreGameplayEffectExecute(Data))
    {
        return false;
    }

    // Save the current Energy
    EnergyBeforeAttributeChange = GetEnergy();
    MaxEnergyBeforeAttributeChange = GetMaxEnergy();
    // Save the current Shield
    EnergyBeforeAttributeChange = GetShield();
    MaxEnergyBeforeAttributeChange = GetMaxShield();
    // Save the current Strength
    EnergyBeforeAttributeChange = GetStrength();
    MaxEnergyBeforeAttributeChange = GetMaxStrength();
    // Save the current Agility
    EnergyBeforeAttributeChange = GetAgility();
    MaxEnergyBeforeAttributeChange = GetMaxAgility();

    return true;
}

void UDungeonStats::OnRep_BaseEnergyRegen(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, BaseEnergyRegen, OldValue);
}

void UDungeonStats::OnRep_BaseShieldRegen(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UDungeonStats, BaseShieldRegen, OldValue);
}

void UDungeonStats::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    float MinimumEnergy = 0.0f;
    float MinimumShield = 0.0f;
    float MinimumStrength = 0.0f;
    float MinimumAgility = 0.0f;

#if !UE_BUILD_SHIPPING
    // Godmode and unlimited health stop death unless it's a self destruct
    if (Data.Target.HasMatchingGameplayTag(LyraGameplayTags::Cheat_GodMode) || Data.Target.HasMatchingGameplayTag(DungeonGameplayTags::Cheat_UnlimitedEnergy))
    {
        MinimumEnergy = 1.0f;
    }
    /*if (Data.Target.HasMatchingGameplayTag(LyraGameplayTags::Cheat_GodMode) || Data.Target.HasMatchingGameplayTag(DungeonGameplayTags::Cheat_UnlimitedShield))
    {
        MinimumShield = 1.0f;
    }*/
#endif // #if !UE_BUILD_SHIPPING

    const FGameplayEffectContextHandle& EffectContext = Data.EffectSpec.GetEffectContext();
    AActor* Instigator = EffectContext.GetOriginalInstigator();
    AActor* Causer = EffectContext.GetEffectCauser();

    //Energy

    if (Data.EvaluatedData.Attribute == GetEnergyRegeningAttribute())
    {
        // Convert into +Energy and then clamp
        SetEnergy(FMath::Clamp(GetEnergy() + GetEnergyRegening(), MinimumEnergy, GetMaxEnergy()));
        SetEnergyRegening(0.0f);
    }
    else if (Data.EvaluatedData.Attribute == GetEnergyAttribute())
    {
        // Clamp and fall into out of Energy handling below
        SetEnergy(FMath::Clamp(GetEnergy(), MinimumEnergy, GetMaxEnergy()));
    }
    else if (Data.EvaluatedData.Attribute == GetMaxEnergyAttribute())
    {
        // TODO clamp current energy?

        // Notify on any requested max energy changes
        OnMaxEnergyChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, MaxEnergyBeforeAttributeChange, GetMaxEnergy());
    }

    //SHield

    if (Data.EvaluatedData.Attribute == GetShieldRegeningAttribute())
    {
        // Convert into +Shield and then clamo
        SetShield(FMath::Clamp(GetShield() + GetShieldRegening(), MinimumShield, GetMaxShield()));
        SetShieldRegening(0.0f);
    }
    else if (Data.EvaluatedData.Attribute == GetShieldAttribute())
    {
        // Clamp and fall into out of shield handling below
        SetShield(FMath::Clamp(GetShield(), MinimumShield, GetMaxShield()));
    }
    else if (Data.EvaluatedData.Attribute == GetMaxShieldAttribute())
    {
        // TODO clamp current shield?

        // Notify on any requested max shield changes
        OnMaxShieldChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, MaxShieldBeforeAttributeChange, GetMaxShield());
    }

    //Strength 

    if (Data.EvaluatedData.Attribute == GetStrengthAttribute())
    {
        // Clamp and fall into out of Strength handling below
        SetStrength(FMath::Clamp(GetStrength(), MinimumStrength, GetMaxStrength()));
    }
    else if (Data.EvaluatedData.Attribute == GetMaxStrengthAttribute())
    {
        // TODO clamp current Strength?

        // Notify on any requested max Strength changes
        OnMaxStrengthChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, MaxStrengthBeforeAttributeChange, GetMaxStrength());
    }

    //Agility 

    if (Data.EvaluatedData.Attribute == GetAgilityAttribute())
    {
        // Clamp and fall into out of Agility handling below
        SetAgility(FMath::Clamp(GetAgility(), MinimumAgility, GetMaxAgility()));
    }
    else if (Data.EvaluatedData.Attribute == GetMaxAgilityAttribute())
    {
        // TODO clamp current Agility?

        // Notify on any requested max Agility changes
        OnMaxAgilityChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, MaxAgilityBeforeAttributeChange, GetMaxAgility());
    }

    //Energy
    // If energy has actually changed activate callbacks
    if (GetEnergy() != EnergyBeforeAttributeChange)
    {
        OnEnergyChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, EnergyBeforeAttributeChange, GetEnergy());
    }

    if ((GetEnergy() <= 0.0f) && !bOutOfEnergy)
    {
        OnOutOfEnergy.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, EnergyBeforeAttributeChange, GetEnergy());
    }
    // Check energy again in case an event above changed it.
    bOutOfEnergy = (GetEnergy() <= 0.0f);

    //Shield
    // If Shield has actually changed activate callbacks
    if (GetShield() != ShieldBeforeAttributeChange)
    {
        OnShieldChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, ShieldBeforeAttributeChange, GetShield());
    }

    if ((GetShield() <= 0.0f) && !bOutOfShield)
    {
        OnOutOfShield.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, ShieldBeforeAttributeChange, GetShield());
    }
    // Check Shield again in case an event above changed it.
    bOutOfShield = (GetShield() <= 0.0f);

    //Strength
    // If Strength has actually changed activate callbacks
    if (GetStrength() != StrengthBeforeAttributeChange)
    {
        OnStrengthChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, StrengthBeforeAttributeChange, GetStrength());
    }

    if ((GetStrength() <= 0.0f) && !bOutOfStrength)
    {
        OnOutOfStrength.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, StrengthBeforeAttributeChange, GetStrength());
    }
    // Check Strength again in case an event above changed it.
    bOutOfStrength = (GetStrength() <= 0.0f);

    //Agility
    // If Agility has actually changed activate callbacks
    if (GetAgility() != AgilityBeforeAttributeChange)
    {
        OnAgilityChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, AgilityBeforeAttributeChange, GetAgility());
    }

    if ((GetAgility() <= 0.0f) && !bOutOfAgility)
    {
        OnOutOfAgility.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, AgilityBeforeAttributeChange, GetAgility());
    }
    // Check Agilityh again in case an event above changed it.
    bOutOfAgility = (GetAgility() <= 0.0f);

    
}

void UDungeonStats::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
    Super::PreAttributeBaseChange(Attribute, NewValue);

    ClampAttribute(Attribute, NewValue);
}

void UDungeonStats::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue);

    ClampAttribute(Attribute, NewValue);
}

void UDungeonStats::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
    Super::PostAttributeChange(Attribute, OldValue, NewValue);

    //Energy
    if (Attribute == GetMaxEnergyAttribute())
    {
        // Make sure current health is not greater than the new max health.
        if (GetEnergy() > NewValue)
        {
            ULyraAbilitySystemComponent* LyraASC = GetLyraAbilitySystemComponent();
            check(LyraASC);

            LyraASC->ApplyModToAttribute(GetEnergyAttribute(), EGameplayModOp::Override, NewValue);
        }
    }

    if (bOutOfEnergy && (GetEnergy() > 0.0f))
    {
        bOutOfEnergy = false;
    }

    //Shield
    if (Attribute == GetMaxShieldAttribute())
    {
        // Make sure current Shield is not greater than the new max health.
        if (GetShield() > NewValue)
        {
            ULyraAbilitySystemComponent* LyraASC = GetLyraAbilitySystemComponent();
            check(LyraASC);

            LyraASC->ApplyModToAttribute(GetShieldAttribute(), EGameplayModOp::Override, NewValue);
        }
    }

    if (bOutOfShield && (GetShield() > 0.0f))
    {
        bOutOfShield = false;
    }

    //Strength
    if (Attribute == GetMaxStrengthAttribute())
    {
        // Make sure current Strength is not greater than the new max health.
        if (GetStrength() > NewValue)
        {
            ULyraAbilitySystemComponent* LyraASC = GetLyraAbilitySystemComponent();
            check(LyraASC);

            LyraASC->ApplyModToAttribute(GetStrengthAttribute(), EGameplayModOp::Override, NewValue);
        }
    }

    if (bOutOfStrength && (GetStrength() > 0.0f))
    {
        bOutOfStrength = false;
    }

    //Agility
    if (Attribute == GetMaxAgilityAttribute())
    {
        // Make sure current Agility is not greater than the new max health.
        if (GetAgility() > NewValue)
        {
            ULyraAbilitySystemComponent* LyraASC = GetLyraAbilitySystemComponent();
            check(LyraASC);

            LyraASC->ApplyModToAttribute(GetAgilityAttribute(), EGameplayModOp::Override, NewValue);
        }
    }

    if (bOutOfAgility && (GetAgility() > 0.0f))
    {
        bOutOfAgility = false;
    }
}

void UDungeonStats::ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const
{
    //Energy
    if (Attribute == GetEnergyAttribute())
    {
        // Do not allow health to go negative or above max health.
        NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxEnergy());
    }
    else if (Attribute == GetMaxEnergyAttribute())
    {
        // Do not allow max health to drop below 1.
        NewValue = FMath::Max(NewValue, 1.0f);
    }

    //Shield

    if (Attribute == GetShieldAttribute())
    {
        // Do not allow health to go negative or above max Shield.
        NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxShield());
    }
    else if (Attribute == GetMaxShieldAttribute())
    {
        // Do not allow max health to drop below 1.
        NewValue = FMath::Max(NewValue, 1.0f);
    }

    //Strength

    if (Attribute == GetStrengthAttribute())
    {
        // Do not allow health to go negative or above max Strength.
        NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxStrength());
    }
    else if (Attribute == GetMaxStrengthAttribute())
    {
        // Do not allow max health to drop below 1.
        NewValue = FMath::Max(NewValue, 1.0f);
    }

    //Agility

    if (Attribute == GetAgilityAttribute())
    {
        // Do not allow health to go negative or above max Ability.
        NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxAgility());
    }
    else if (Attribute == GetMaxAgilityAttribute())
    {
        // Do not allow max health to drop below 1.
        NewValue = FMath::Max(NewValue, 1.0f);
    }
}
