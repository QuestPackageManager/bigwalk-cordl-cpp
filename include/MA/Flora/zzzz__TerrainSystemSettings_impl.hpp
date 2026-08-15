#pragma once
// IWYU pragma private; include "MA/Flora/TerrainSystemSettings.hpp"
#include "MA/Flora/zzzz__TerrainSystemSettings_def.hpp"
// Ctor Parameters [CppParam { name: "AllowPerTreeMotionVectors", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllowPerTreeLightProbes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllowPerDetailMotionVectors", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllowPerDetailLightProbes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailStreamingDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailUnloadHysteresisSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailPatchLayerBudgetPerFrame", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailStructuralInstanceBudgetPerFrame", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainSystemSettings::TerrainSystemSettings(bool  AllowPerTreeMotionVectors, bool  AllowPerTreeLightProbes, bool  AllowPerDetailMotionVectors, bool  AllowPerDetailLightProbes, float_t  DetailStreamingDeltaTime, float_t  DetailUnloadHysteresisSeconds, int32_t  DetailPatchLayerBudgetPerFrame, int32_t  DetailStructuralInstanceBudgetPerFrame) noexcept  {
this->AllowPerTreeMotionVectors = AllowPerTreeMotionVectors;
this->AllowPerTreeLightProbes = AllowPerTreeLightProbes;
this->AllowPerDetailMotionVectors = AllowPerDetailMotionVectors;
this->AllowPerDetailLightProbes = AllowPerDetailLightProbes;
this->DetailStreamingDeltaTime = DetailStreamingDeltaTime;
this->DetailUnloadHysteresisSeconds = DetailUnloadHysteresisSeconds;
this->DetailPatchLayerBudgetPerFrame = DetailPatchLayerBudgetPerFrame;
this->DetailStructuralInstanceBudgetPerFrame = DetailStructuralInstanceBudgetPerFrame;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainSystemSettings::TerrainSystemSettings()   {
}
