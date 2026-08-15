#pragma once
// IWYU pragma private; include "GlobalNamespace/BPMData.hpp"
#include "GlobalNamespace/zzzz__BPMData_def.hpp"
// Ctor Parameters [CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BPM", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LinearTransitionToNext", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BPMData::BPMData(float_t  Time, float_t  BPM, bool  LinearTransitionToNext) noexcept  {
this->Time = Time;
this->BPM = BPM;
this->LinearTransitionToNext = LinearTransitionToNext;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BPMData::BPMData()   {
}
