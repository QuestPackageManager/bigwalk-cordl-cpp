#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTween.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTween_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTween.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTween::*)()>(&::GlobalNamespace::PeckEffectTween::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180450770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTween.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTween::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckEffectTween::OnPeck)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804508f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTween.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTween::*)()>(&::GlobalNamespace::PeckEffectTween::OccasionalUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180450820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTween.UpdateTween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTween::*)(float_t)>(&::GlobalNamespace::PeckEffectTween::UpdateTween)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180450a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"UpdateTween", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTween._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTween::*)()>(&::GlobalNamespace::PeckEffectTween::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckEffectTween::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTween::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr bool& GlobalNamespace::PeckEffectTween::__cordl_internal_get_useCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomCurve;
}
constexpr bool const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_useCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomCurve;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_useCustomCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PeckEffectTween::__cordl_internal_get_animationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_animationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationCurve;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_animationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationCurve = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectTween::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::PeckEffectTween::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTween::__cordl_internal_get_timeAtPeck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtPeck;
}
constexpr float_t const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_timeAtPeck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtPeck;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_timeAtPeck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtPeck = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::PeckEffectTween::__cordl_internal_get_OnTween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTween;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::PeckEffectTween::__cordl_internal_get_OnTween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTween;
}
constexpr void GlobalNamespace::PeckEffectTween::__cordl_internal_set_OnTween(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTween = value;
}
inline void GlobalNamespace::PeckEffectTween::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTween::OnPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  trackedPeckState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, trackedPeckState);
}
inline void GlobalNamespace::PeckEffectTween::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTween::UpdateTween(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {"UpdateTween", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::PeckEffectTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTween*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectTween* GlobalNamespace::PeckEffectTween::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectTween*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::PeckEffectTween::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::PeckEffectTween::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectTween::PeckEffectTween()   {
}
