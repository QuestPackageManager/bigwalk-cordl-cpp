#pragma once
// IWYU pragma private; include "Animancer/OptionalWarning.hpp"
#include "Animancer/zzzz__OptionalWarning_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::OptionalWarning::OptionalWarning(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::OptionalWarning::OptionalWarning()   {
}
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::ProOnly{static_cast<int32_t>(0x1)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::CreateGraphWhileDisabled{static_cast<int32_t>(0x2)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::CreateGraphDuringGuiEvent{static_cast<int32_t>(0x4)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::AnimatorDisabled{static_cast<int32_t>(0x8)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::NativeControllerHumanoid{static_cast<int32_t>(0x10)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::NativeControllerHybrid{static_cast<int32_t>(0x20)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::DuplicateEvent{static_cast<int32_t>(0x40)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::EndEventInterrupt{static_cast<int32_t>(0x80)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::UselessEvent{static_cast<int32_t>(0x100)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::LockedEvents{static_cast<int32_t>(0x200)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::UnsupportedEvents{static_cast<int32_t>(0x400)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::UnsupportedSpeed{static_cast<int32_t>(0x800)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::UnsupportedIK{static_cast<int32_t>(0x1000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::MixerMinChildren{static_cast<int32_t>(0x2000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::MixerSynchronizeZeroLength{static_cast<int32_t>(0x4000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::CustomFadeBounds{static_cast<int32_t>(0x8000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::CustomFadeNotNull{static_cast<int32_t>(0x10000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::AnimatorSpeed{static_cast<int32_t>(0x20000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::UnusedNode{static_cast<int32_t>(0x40000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::PlayableAssetAnimatorBinding{static_cast<int32_t>(0x80000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::CloneComplexState{static_cast<int32_t>(0x100000)};
constexpr ::Animancer::OptionalWarning  Animancer::OptionalWarning::All{static_cast<int32_t>(0xffffffff)};
