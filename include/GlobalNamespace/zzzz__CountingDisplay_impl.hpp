#pragma once
// IWYU pragma private; include "GlobalNamespace/CountingDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountingDisplay_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountingDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingDisplay::*)()>(&::GlobalNamespace::CountingDisplay::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803fb390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingDisplay.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingDisplay::*)(int32_t)>(&::GlobalNamespace::CountingDisplay::SetValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803fb8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"SetValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingDisplay.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingDisplay::*)()>(&::GlobalNamespace::CountingDisplay::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1803fb4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingDisplay.SetNumerals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingDisplay::*)(float_t)>(&::GlobalNamespace::CountingDisplay::SetNumerals)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803fb760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"SetNumerals", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingDisplay.GetDrumAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CountingDisplay::*)(float_t)>(&::GlobalNamespace::CountingDisplay::GetDrumAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fb4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"GetDrumAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingDisplay::*)()>(&::GlobalNamespace::CountingDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CountingDisplay::__cordl_internal_get_drumOnes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumOnes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CountingDisplay::__cordl_internal_get_drumOnes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumOnes;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_drumOnes(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drumOnes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CountingDisplay::__cordl_internal_get_drumTens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumTens;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CountingDisplay::__cordl_internal_get_drumTens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drumTens;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_drumTens(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drumTens = value;
}
constexpr ::UnityW<::GlobalNamespace::CountingDisplay>& GlobalNamespace::CountingDisplay::__cordl_internal_get_parentDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CountingDisplay> const& GlobalNamespace::CountingDisplay::__cordl_internal_get_parentDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentDisplay;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_parentDisplay(::UnityW<::GlobalNamespace::CountingDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentDisplay = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::CountingDisplay::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::CountingDisplay::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::CountingDisplay::__cordl_internal_get_changeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::CountingDisplay::__cordl_internal_get_changeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeSound;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_changeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeSound = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CountingDisplay::__cordl_internal_get_audioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CountingDisplay::__cordl_internal_get_audioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioTransform = value;
}
constexpr bool& GlobalNamespace::CountingDisplay::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CountingDisplay::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::CountingDisplay::__cordl_internal_get_currentValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
constexpr float_t const& GlobalNamespace::CountingDisplay::__cordl_internal_get_currentValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_currentValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentValue = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::CountingDisplay::__cordl_internal_get_onValueChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onValueChange;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::CountingDisplay::__cordl_internal_get_onValueChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onValueChange;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_onValueChange(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onValueChange = value;
}
constexpr float_t& GlobalNamespace::CountingDisplay::__cordl_internal_get_timeAtLastChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastChange;
}
constexpr float_t const& GlobalNamespace::CountingDisplay::__cordl_internal_get_timeAtLastChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastChange;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_timeAtLastChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtLastChange = value;
}
constexpr float_t& GlobalNamespace::CountingDisplay::__cordl_internal_get_valueAtLastChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueAtLastChange;
}
constexpr float_t const& GlobalNamespace::CountingDisplay::__cordl_internal_get_valueAtLastChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueAtLastChange;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_valueAtLastChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueAtLastChange = value;
}
constexpr float_t& GlobalNamespace::CountingDisplay::__cordl_internal_get_displayedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedValue;
}
constexpr float_t const& GlobalNamespace::CountingDisplay::__cordl_internal_get_displayedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedValue;
}
constexpr void GlobalNamespace::CountingDisplay::__cordl_internal_set_displayedValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayedValue = value;
}
inline void GlobalNamespace::CountingDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingDisplay::SetValue(int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"SetValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::CountingDisplay::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingDisplay::SetNumerals(float_t  displayedNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"SetNumerals", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayedNumber);
}
inline float_t GlobalNamespace::CountingDisplay::GetDrumAngle(float_t  digit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {"GetDrumAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, digit);
}
inline void GlobalNamespace::CountingDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CountingDisplay* GlobalNamespace::CountingDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CountingDisplay*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::CountingDisplay::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::CountingDisplay::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountingDisplay::CountingDisplay()   {
}
