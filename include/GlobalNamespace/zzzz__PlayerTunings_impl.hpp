#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTunings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerTunings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTunings_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "maxForce", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxTorque", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "angleCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings::PlayerTunings_LaunchSettings(float_t  maxForce, ::UnityEngine::Vector3  maxTorque, ::UnityEngine::AnimationCurve*  angleCurve) noexcept  {
this->maxForce = maxForce;
this->maxTorque = maxTorque;
this->angleCurve = angleCurve;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings::PlayerTunings_LaunchSettings()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerTunings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTunings::*)()>(&::GlobalNamespace::PlayerTunings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180378ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTunings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_forwardSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_forwardSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_forwardSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_forwardSprintSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardSprintSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_forwardSprintSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardSprintSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_forwardSprintSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardSprintSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_crouchForwardSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchForwardSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_crouchForwardSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchForwardSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_crouchForwardSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchForwardSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_crouchForwardSprintSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchForwardSprintSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_crouchForwardSprintSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchForwardSprintSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_crouchForwardSprintSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchForwardSprintSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_swimForwardSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimForwardSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_swimForwardSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimForwardSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_swimForwardSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimForwardSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_swimForwardSprintSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimForwardSprintSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_swimForwardSprintSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swimForwardSprintSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_swimForwardSprintSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swimForwardSprintSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_forwardSprintGhostSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardSprintGhostSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_forwardSprintGhostSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardSprintGhostSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_forwardSprintGhostSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardSprintGhostSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_mouseLookSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseLookSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_mouseLookSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseLookSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_mouseLookSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouseLookSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_stickLookSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickLookSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_stickLookSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickLookSpeed;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_stickLookSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickLookSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_upperLookLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperLookLimit;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_upperLookLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperLookLimit;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_upperLookLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperLookLimit = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_lowerLookLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerLookLimit;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_lowerLookLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerLookLimit;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_lowerLookLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowerLookLimit = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_sideLookLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideLookLimit;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_sideLookLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideLookLimit;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_sideLookLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sideLookLimit = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_jumpForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpForce;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_jumpForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpForce;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_jumpForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpForce = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_maxUpwardsVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUpwardsVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_maxUpwardsVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUpwardsVelocity;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_maxUpwardsVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxUpwardsVelocity = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_maxWindUpDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxWindUpDuration;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_maxWindUpDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxWindUpDuration;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_maxWindUpDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxWindUpDuration = value;
}
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings& GlobalNamespace::PlayerTunings::__cordl_internal_get_kickSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickSettings;
}
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings const& GlobalNamespace::PlayerTunings::__cordl_internal_get_kickSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickSettings;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_kickSettings(::GlobalNamespace::PlayerTunings_LaunchSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kickSettings = value;
}
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings& GlobalNamespace::PlayerTunings::__cordl_internal_get_throwSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSettings;
}
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings const& GlobalNamespace::PlayerTunings::__cordl_internal_get_throwSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSettings;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_throwSettings(::GlobalNamespace::PlayerTunings_LaunchSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSettings = value;
}
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings& GlobalNamespace::PlayerTunings::__cordl_internal_get_lowThrowSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowThrowSettings;
}
constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings const& GlobalNamespace::PlayerTunings::__cordl_internal_get_lowThrowSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowThrowSettings;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_lowThrowSettings(::GlobalNamespace::PlayerTunings_LaunchSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowThrowSettings = value;
}
constexpr bool& GlobalNamespace::PlayerTunings::__cordl_internal_get_limitHeldSwitchRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitHeldSwitchRotation;
}
constexpr bool const& GlobalNamespace::PlayerTunings::__cordl_internal_get_limitHeldSwitchRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitHeldSwitchRotation;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_limitHeldSwitchRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitHeldSwitchRotation = value;
}
constexpr float_t& GlobalNamespace::PlayerTunings::__cordl_internal_get_heldSwitchMaxRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldSwitchMaxRotation;
}
constexpr float_t const& GlobalNamespace::PlayerTunings::__cordl_internal_get_heldSwitchMaxRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldSwitchMaxRotation;
}
constexpr void GlobalNamespace::PlayerTunings::__cordl_internal_set_heldSwitchMaxRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldSwitchMaxRotation = value;
}
inline void GlobalNamespace::PlayerTunings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTunings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerTunings* GlobalNamespace::PlayerTunings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerTunings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTunings::PlayerTunings()   {
}
