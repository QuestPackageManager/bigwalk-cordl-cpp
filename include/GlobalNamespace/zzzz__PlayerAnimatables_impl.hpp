#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAnimatables.hpp"
#include "GlobalNamespace/zzzz__BeakPostureMask_impl.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAnimatables_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerAnimatables._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAnimatables::*)()>(&::GlobalNamespace::PlayerAnimatables::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18035da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAnimatables*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_raisedBlockness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raisedBlockness;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_raisedBlockness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raisedBlockness;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_raisedBlockness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raisedBlockness = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_grapserToHeadBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grapserToHeadBone;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_grapserToHeadBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grapserToHeadBone;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_grapserToHeadBone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grapserToHeadBone = value;
}
constexpr ::GlobalNamespace::BeakPosture& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_beakPostureAdditive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureAdditive;
}
constexpr ::GlobalNamespace::BeakPosture const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_beakPostureAdditive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureAdditive;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_beakPostureAdditive(::GlobalNamespace::BeakPosture  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beakPostureAdditive = value;
}
constexpr ::GlobalNamespace::BeakPosture& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_beakPostureOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureOverride;
}
constexpr ::GlobalNamespace::BeakPosture const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_beakPostureOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureOverride;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_beakPostureOverride(::GlobalNamespace::BeakPosture  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beakPostureOverride = value;
}
constexpr ::GlobalNamespace::BeakPostureMask& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_beakPostureOverridesMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureOverridesMask;
}
constexpr ::GlobalNamespace::BeakPostureMask const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_beakPostureOverridesMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureOverridesMask;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_beakPostureOverridesMask(::GlobalNamespace::BeakPostureMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beakPostureOverridesMask = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_eyeOffsetLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOffsetLeft;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_eyeOffsetLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOffsetLeft;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_eyeOffsetLeft(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeOffsetLeft = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_eyeOffsetRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOffsetRight;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_eyeOffsetRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOffsetRight;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_eyeOffsetRight(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeOffsetRight = value;
}
constexpr bool& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_overrideDefaultEyeMood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDefaultEyeMood;
}
constexpr bool const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_overrideDefaultEyeMood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDefaultEyeMood;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_overrideDefaultEyeMood(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideDefaultEyeMood = value;
}
constexpr ::GlobalNamespace::PlayerEyeMood& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_eyeMood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeMood;
}
constexpr ::GlobalNamespace::PlayerEyeMood const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_eyeMood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeMood;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_eyeMood(::GlobalNamespace::PlayerEyeMood  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeMood = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_fovChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fovChange;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_fovChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fovChange;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_fovChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fovChange = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceHandLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceHandLeft;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceHandLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceHandLeft;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_screenSpaceHandLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpaceHandLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceHandRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceHandRight;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceHandRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceHandRight;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_screenSpaceHandRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpaceHandRight = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceElbowLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceElbowLeft;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceElbowLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceElbowLeft;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_screenSpaceElbowLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpaceElbowLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceElbowRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceElbowRight;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_screenSpaceElbowRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceElbowRight;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_screenSpaceElbowRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpaceElbowRight = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaUpperLimitLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaUpperLimitLocal;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaUpperLimitLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaUpperLimitLocal;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_ssaUpperLimitLocal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ssaUpperLimitLocal = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaLowerLimitLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaLowerLimitLocal;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaLowerLimitLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaLowerLimitLocal;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_ssaLowerLimitLocal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ssaLowerLimitLocal = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaUpperLimitRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaUpperLimitRemote;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaUpperLimitRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaUpperLimitRemote;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_ssaUpperLimitRemote(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ssaUpperLimitRemote = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaLowerLimitRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaLowerLimitRemote;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_ssaLowerLimitRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssaLowerLimitRemote;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_ssaLowerLimitRemote(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ssaLowerLimitRemote = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetHandLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetHandLeft;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetHandLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetHandLeft;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_bobOffsetHandLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobOffsetHandLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetHandRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetHandRight;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetHandRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetHandRight;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_bobOffsetHandRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobOffsetHandRight = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetElbowLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetElbowLeft;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetElbowLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetElbowLeft;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_bobOffsetElbowLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobOffsetElbowLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetElbowRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetElbowRight;
}
constexpr float_t const& GlobalNamespace::PlayerAnimatables::__cordl_internal_get_bobOffsetElbowRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetElbowRight;
}
constexpr void GlobalNamespace::PlayerAnimatables::__cordl_internal_set_bobOffsetElbowRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobOffsetElbowRight = value;
}
inline void GlobalNamespace::PlayerAnimatables::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAnimatables*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAnimatables* GlobalNamespace::PlayerAnimatables::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAnimatables*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAnimatables::PlayerAnimatables()   {
}
