// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Executions/DungeonRegenExecution.h"

struct FRegenStatics
{
    FGameplayEffectAttributeCaptureDefinition BaseRegenDef;

    FRegenStatics()
    {
        BaseRegenDef = FGameplayEffectAttributeCaptureDefinition(UDungeonStaminaSet::GetBaseRegenAttribute(), EGameplayEffectAttributeCaptureSource::Source, true);
    }
};

static FRegenStatics& RegenStatics()
{
    static FRegenStatics Statics;
    return Statics;
}


UDungeonRegenExecution::UDungeonRegenExecution()
{
    RelevantAttributesToCapture.Add(RegenStatics().BaseRegenDef);
}

void UDungeonRegenExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
#if WITH_SERVER_CODE
    const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

    const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

    FAggregatorEvaluateParameters EvaluateParameters;
    EvaluateParameters.SourceTags = SourceTags;
    EvaluateParameters.TargetTags = TargetTags;

    float BaseRegen = 0.0f;
    ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(RegenStatics().BaseRegenDef, EvaluateParameters, BaseRegen);

    const float RegeningDone = FMath::Max(0.0f, BaseRegen);

    if (RegeningDone > 0.0f)
    {
        // Apply a recupering modifier, this gets turned into + stamina on the target
        OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(UDungeonStaminaSet::GetRegeningAttribute(), EGameplayModOp::Additive, RegeningDone));
    }
#endif // #if WITH_SERVER_CODE
}

