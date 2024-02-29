// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameFrameworkComponent.h"

#include "DungeonStaminaComponent.generated.h"

struct FOnAttributeChangeData;
class ULyraAbilitySystemComponent;
class UDungeonStaminaSet;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStamina_AttributeChanged, UDungeonStaminaComponent*, StaminaComponent, float, OldValue, float, NewValue);

/**
 *
 */
UCLASS(Blueprintable, Meta = (BlueprintSpawnableComponent))
class DUNGEONCORERUNTIME_API UDungeonStaminaComponent : public UGameFrameworkComponent
{
    GENERATED_BODY()

public:
    UDungeonStaminaComponent(const FObjectInitializer& ObjectInitializer);

    // Returns the Stamina component if one exists on the specified actor.
    UFUNCTION(BlueprintPure, Category = "Dungeon|Stamina")
    static UDungeonStaminaComponent* FindStaminaComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UDungeonStaminaComponent>() : nullptr); }

    // Initialize the component using an ability system component.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Stamina")
    void InitializeWithAbilitySystem(ULyraAbilitySystemComponent* InASC);

    // Uninitialize the component, clearing any references to the ability system.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Stamina")
    void UninitializeFromAbilitySystem();

    // Returns the current Stamina value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Stamina")
    float GetStamina() const;

    // Returns the current maximum Stamina value.
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Stamina")
    float GetMaxStamina() const;

    // Returns the current Stamina in the range [0.0, 1.0].
    UFUNCTION(BlueprintCallable, Category = "Dungeon|Stamina")
    float GetStaminaNormalized() const;

public:

    // Delegate fired when the mana value has changed.
    UPROPERTY(BlueprintAssignable)
    FStamina_AttributeChanged OnStaminaChanged;

    // Delegate fired when the max mana value has changed.
    UPROPERTY(BlueprintAssignable)
    FStamina_AttributeChanged OnMaxStaminaChanged;


protected:
    virtual void OnUnregister() override;

    virtual void HandleStaminaChanged(const FOnAttributeChangeData& ChangeData);
    virtual void HandleMaxStaminaChanged(const FOnAttributeChangeData& ChangeData);

    // Ability system used by this component.
    UPROPERTY()
    TObjectPtr<ULyraAbilitySystemComponent> AbilitySystemComponent;


    // Stamina set used by this component.
    UPROPERTY()
    const UDungeonStaminaSet* StaminaSet;
};
