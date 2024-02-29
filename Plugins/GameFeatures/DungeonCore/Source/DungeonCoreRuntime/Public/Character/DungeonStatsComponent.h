// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameFrameworkComponent.h"

#include "DungeonStatsComponent.generated.h"

struct FOnAttributeChangeData;
class ULyraAbilitySystemComponent;
class UDungeonStats;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDungeonEnergy_AttributeChanged, UDungeonStatsComponent*, EnergyComponent, float, OldValue, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDungeonShield_AttributeChanged, UDungeonStatsComponent*, ShieldComponent, float, OldValue, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDungeonStrength_AttributeChanged, UDungeonStatsComponent*, StrengthComponent, float, OldValue, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDungeonAgility_AttributeChanged, UDungeonStatsComponent*, AgilityComponent, float, OldValue, float, NewValue);

/**
 *
 */
UCLASS(Blueprintable, Meta = (BlueprintSpawnableComponent))
class DUNGEONCORERUNTIME_API UDungeonStatsComponent : public UGameFrameworkComponent
{
    GENERATED_BODY()

public:
    UDungeonStatsComponent(const FObjectInitializer& ObjectInitializer);

    //Energy

    // Returns the Energy component if one exists on the specified actor.
    UFUNCTION(BlueprintPure, Category = "Dungeon|Energy")
    static UDungeonStatsComponent* EnergyFindComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UDungeonStatsComponent>() : nullptr); }

    // Initialize the component using an ability system component.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Energy")
    void EnergyInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC);

    // Uninitialize the component, clearing any references to the ability system.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Energy")
    void EnergyUninitializeFromAbilitySystem();

    // Returns the current Energy value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Energy")
    float GetEnergy() const;

    // Returns the current maximum Energy value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Energy")
    float GetMaxEnergy() const;

    // Returns the current Energy in the range [0.0, 1.0].
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Energy")
    float GetEnergyNormalized() const;

    //Shield

    // Returns the Shield component if one exists on the specified actor.
    UFUNCTION(BlueprintPure, Category = "Dungeon|Shield")
    static UDungeonStatsComponent* ShieldFindComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UDungeonStatsComponent>() : nullptr); }

    // Initialize the component using an ability system component.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Shield")
    void ShieldInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC);

    // Uninitialize the component, clearing any references to the ability system.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Shield")
    void ShieldUninitializeFromAbilitySystem();

    // Returns the current Shield value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Shield")
    float GetShield() const;

    // Returns the current maximum Shield value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Shield")
    float GetMaxShield() const;

    // Returns the current Shield in the range [0.0, 1.0].
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Shield")
    float GetShieldNormalized() const;

    //Strength

    // Returns the Strength component if one exists on the specified actor.
    UFUNCTION(BlueprintPure, Category = "Dungeon|Strength")
    static UDungeonStatsComponent* StrengthFindComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UDungeonStatsComponent>() : nullptr); }

    // Initialize the component using an ability system component.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Strength")
    void StrengthInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC);

    // Uninitialize the component, clearing any references to the ability system.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Strength")
    void StrengthUninitializeFromAbilitySystem();

    // Returns the current Strength value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Strength")
    float GetStrength() const;

    // Returns the current maximum Strength value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Strength")
    float GetMaxStrength() const;

    // Returns the current Strength in the range [0.0, 1.0].
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Strength")
    float GetStrengthNormalized() const;

    //Agility

    // Returns the Agility component if one exists on the specified actor.
    UFUNCTION(BlueprintPure, Category = "Dungeon|Agility")
    static UDungeonStatsComponent* AgilityFindComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UDungeonStatsComponent>() : nullptr); }

    // Initialize the component using an ability system component.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Agility")
    void AgilityInitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC);

    // Uninitialize the component, clearing any references to the ability system.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Agility")
    void AgilityUninitializeFromAbilitySystem();

    // Returns the current Agility value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Agility")
    float GetAgility() const;

    // Returns the current maximum Agility value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Agility")
    float GetMaxAgility() const;

    // Returns the current Agility in the range [0.0, 1.0].
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Agility")
    float GetAgilityNormalized() const;

public:

    //Energy

    // Delegate fired when the energy value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonEnergy_AttributeChanged OnEnergyChanged;

    // Delegate fired when the max energy value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonEnergy_AttributeChanged OnMaxEnergyChanged;

    //Shield

    // Delegate fired when the Shield value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonShield_AttributeChanged OnShieldChanged;

    // Delegate fired when the max Shield value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonShield_AttributeChanged OnMaxShieldChanged;

    //Strength

    // Delegate fired when the Strength value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonStrength_AttributeChanged OnStrengthChanged;

    // Delegate fired when the max Strength value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonStrength_AttributeChanged OnMaxStrengthChanged;

    //Agility

    // Delegate fired when the Agility value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonAgility_AttributeChanged OnAgilityChanged;

    // Delegate fired when the max Agility value has changed.
    UPROPERTY(BlueprintAssignable)
    FDungeonAgility_AttributeChanged OnMaxAgilityChanged;


protected:
    virtual void OnUnregister() override;

    //Energy
    virtual void HandleEnergyChanged(const FOnAttributeChangeData& ChangeData);
    virtual void HandleMaxEnergyChanged(const FOnAttributeChangeData& ChangeData);

    //Shield
    virtual void HandleShieldChanged(const FOnAttributeChangeData& ChangeData);
    virtual void HandleMaxShieldChanged(const FOnAttributeChangeData& ChangeData);

    //Strength
    virtual void HandleStrengthChanged(const FOnAttributeChangeData& ChangeData);
    virtual void HandleMaxStrengthChanged(const FOnAttributeChangeData& ChangeData);

    //Agility
    virtual void HandleAgilityChanged(const FOnAttributeChangeData& ChangeData);
    virtual void HandleMaxAgilityChanged(const FOnAttributeChangeData& ChangeData);

    // Ability system used by this component.
    UPROPERTY()
    TObjectPtr<ULyraAbilitySystemComponent> AbilitySystemComponent;


    // Energy set used by this component.
    UPROPERTY()
    const UDungeonStats* EnergySet;

    // Shield set used by this component.
    UPROPERTY()
    const UDungeonStats* ShieldSet;

    // Strength set used by this component.
    UPROPERTY()
    const UDungeonStats* StrengthSet;

    // Agility set used by this component.
    UPROPERTY()
    const UDungeonStats* AgilitySet;
};
