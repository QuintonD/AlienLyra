// Copyright Epic Games, Inc. All Rights Reserved.

#include "Character/DungeonStatsComponent.h"

#include "AbilitySystem/Attributes/LyraAttributeSet.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/DungeonStats.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"

#include "LyraLogChannels.h"

UDungeonStatsComponent::UDungeonStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    PrimaryComponentTick.bStartWithTickEnabled = false;
    PrimaryComponentTick.bCanEverTick = false;

    SetIsReplicatedByDefault(true);

    AbilitySystemComponent = nullptr;
    EnergySet = nullptr;
    ShieldSet = nullptr;
    StrengthSet = nullptr;
    AgilitySet = nullptr;
}

//Energy
void UDungeonStatsComponent::EnergyInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC)
{
    AActor* Owner = GetOwner();
    check(Owner);

    if (AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Energy component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
        return;
    }

    AbilitySystemComponent = InASC;
    if (!AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Energy component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
        return;
    }

    EnergySet = AbilitySystemComponent->GetSet<UDungeonStats>();
    if (!EnergySet)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Energy component for owner [%s] with NULL Stats set on the ability system."), *GetNameSafe(Owner));
        return;
    }

    // Register to listen for attribute changes.


    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetEnergyAttribute()).AddUObject(this, &ThisClass::HandleEnergyChanged);
    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetMaxEnergyAttribute()).AddUObject(this, &ThisClass::HandleMaxEnergyChanged);

    OnEnergyChanged.Broadcast(this, 0.0f, 100.0f);
}

void UDungeonStatsComponent::EnergyUninitializeFromAbilitySystem()
{
    EnergySet = nullptr;
    AbilitySystemComponent = nullptr;
}

float UDungeonStatsComponent::GetEnergy() const
{
    return (EnergySet ? EnergySet->GetEnergy() : 0.0f);
}

float UDungeonStatsComponent::GetMaxEnergy() const
{
    return (EnergySet ? EnergySet->GetEnergy() : 0.0f);
}

float UDungeonStatsComponent::GetEnergyNormalized() const
{
    if (EnergySet)
    {
        const float Energy = EnergySet->GetEnergy();
        const float MaxEnergy = EnergySet->GetMaxEnergy();

        return ((MaxEnergy > 0.0f) ? (Energy / MaxEnergy) : 0.0f);
    }

    return 0.0f;
}

void UDungeonStatsComponent::HandleEnergyChanged(const FOnAttributeChangeData& ChangeData)
{
    OnEnergyChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

void UDungeonStatsComponent::HandleMaxEnergyChanged(const FOnAttributeChangeData& ChangeData)
{
    OnMaxEnergyChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

//SHield

void UDungeonStatsComponent::ShieldInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC)
{
    AActor* Owner = GetOwner();
    check(Owner);

    if (AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Shield component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
        return;
    }

    AbilitySystemComponent = InASC;
    if (!AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Shield component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
        return;
    }

    ShieldSet = AbilitySystemComponent->GetSet<UDungeonStats>();
    if (!ShieldSet)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Shield component for owner [%s] with NULL Stats set on the ability system."), *GetNameSafe(Owner));
        return;
    }

    // Register to listen for attribute changes.


    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetShieldAttribute()).AddUObject(this, &ThisClass::HandleShieldChanged);
    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetMaxShieldAttribute()).AddUObject(this, &ThisClass::HandleMaxShieldChanged);

    OnShieldChanged.Broadcast(this, 0.0f, 100.0f);
}

void UDungeonStatsComponent::ShieldUninitializeFromAbilitySystem()
{
    ShieldSet = nullptr;
    AbilitySystemComponent = nullptr;
}

float UDungeonStatsComponent::GetShield() const
{
    return (ShieldSet ? ShieldSet->GetShield() : 0.0f);
}

float UDungeonStatsComponent::GetMaxShield() const
{
    return (ShieldSet ? ShieldSet->GetMaxShield() : 0.0f);
}

float UDungeonStatsComponent::GetShieldNormalized() const
{
    if (ShieldSet)
    {
        const float Shield = ShieldSet->GetShield();
        const float MaxShield = ShieldSet->GetMaxShield();

        return ((MaxShield > 0.0f) ? (Shield / MaxShield) : 0.0f);
    }

    return 0.0f;
}

void UDungeonStatsComponent::HandleShieldChanged(const FOnAttributeChangeData& ChangeData)
{
    OnShieldChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

void UDungeonStatsComponent::HandleMaxShieldChanged(const FOnAttributeChangeData& ChangeData)
{
    OnMaxShieldChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

//Strength
void UDungeonStatsComponent::StrengthInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC)
{
    AActor* Owner = GetOwner();
    check(Owner);

    if (AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Strength component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
        return;
    }

    AbilitySystemComponent = InASC;
    if (!AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Strength component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
        return;
    }

    StrengthSet = AbilitySystemComponent->GetSet<UDungeonStats>();
    if (!StrengthSet)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Strength component for owner [%s] with NULL Stats set on the ability system."), *GetNameSafe(Owner));
        return;
    }

    // Register to listen for attribute changes.


    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetStrengthAttribute()).AddUObject(this, &ThisClass::HandleStrengthChanged);
    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetMaxStrengthAttribute()).AddUObject(this, &ThisClass::HandleMaxStrengthChanged);

    OnStrengthChanged.Broadcast(this, 0.0f, 100.0f);
}

void UDungeonStatsComponent::StrengthUninitializeFromAbilitySystem()
{
    StrengthSet = nullptr;
    AbilitySystemComponent = nullptr;
}

float UDungeonStatsComponent::GetStrength() const
{
    return (StrengthSet ? StrengthSet->GetStrength() : 0.0f);
}

float UDungeonStatsComponent::GetMaxStrength() const
{
    return (StrengthSet ? StrengthSet->GetMaxStrength() : 0.0f);
}

float UDungeonStatsComponent::GetStrengthNormalized() const
{
    if (StrengthSet)
    {
        const float Strength = StrengthSet->GetStrength();
        const float MaxStrength = StrengthSet->GetMaxStrength();

        return ((MaxStrength > 0.0f) ? (Strength / MaxStrength) : 0.0f);
    }

    return 0.0f;
}

void UDungeonStatsComponent::HandleStrengthChanged(const FOnAttributeChangeData& ChangeData)
{
    OnStrengthChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

void UDungeonStatsComponent::HandleMaxStrengthChanged(const FOnAttributeChangeData& ChangeData)
{
    OnMaxStrengthChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

//Agility

void UDungeonStatsComponent::AgilityInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC)
{
    AActor* Owner = GetOwner();
    check(Owner);

    if (AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Agility component for owner [%s] has already been initialized with an ability system."), *GetNameSafe(Owner));
        return;
    }

    AbilitySystemComponent = InASC;
    if (!AbilitySystemComponent)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Agility component for owner [%s] with NULL ability system."), *GetNameSafe(Owner));
        return;
    }

    StrengthSet = AbilitySystemComponent->GetSet<UDungeonStats>();
    if (!AgilitySet)
    {
        UE_LOG(LogLyra, Error, TEXT("DungeonStatsComponent: Cannot initialize Agility component for owner [%s] with NULL Stats set on the ability system."), *GetNameSafe(Owner));
        return;
    }

    // Register to listen for attribute changes.


    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetAgilityAttribute()).AddUObject(this, &ThisClass::HandleAgilityChanged);
    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UDungeonStats::GetMaxAgilityAttribute()).AddUObject(this, &ThisClass::HandleMaxAgilityChanged);

    OnAgilityChanged.Broadcast(this, 0.0f, 100.0f);
}

void UDungeonStatsComponent::AgilityUninitializeFromAbilitySystem()
{
    AgilitySet = nullptr;
    AbilitySystemComponent = nullptr;
}

float UDungeonStatsComponent::GetAgility() const
{
    return (AgilitySet ? AgilitySet->GetAgility() : 0.0f);
}

float UDungeonStatsComponent::GetMaxAgility() const
{
    return (AgilitySet ? AgilitySet->GetMaxAgility() : 0.0f);
}

float UDungeonStatsComponent::GetAgilityNormalized() const
{
    if (AgilitySet)
    {
        const float Agility = AgilitySet->GetAgility();
        const float MaxAgility = AgilitySet->GetMaxAgility();

        return ((MaxAgility > 0.0f) ? (Agility / MaxAgility) : 0.0f);
    }

    return 0.0f;
}

void UDungeonStatsComponent::HandleAgilityChanged(const FOnAttributeChangeData& ChangeData)
{
    OnAgilityChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}

void UDungeonStatsComponent::HandleMaxAgilityChanged(const FOnAttributeChangeData& ChangeData)
{
    OnMaxAgilityChanged.Broadcast(this, ChangeData.OldValue, ChangeData.NewValue);
}



void UDungeonStatsComponent::OnUnregister()
{
    EnergyUninitializeFromAbilitySystem();
    ShieldUninitializeFromAbilitySystem();
    StrengthUninitializeFromAbilitySystem();
    AgilityUninitializeFromAbilitySystem();

    Super::OnUnregister();
}


