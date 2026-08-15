#pragma once
// IWYU pragma private; include "MA/Flora/FloraDensitySettings.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "MA/Flora/zzzz__FloraDensitySettings_def.hpp"
#include "MA/Flora/zzzz__FloraDensityMode_def.hpp"
#include "MA/Flora/zzzz__FloraScreenRangeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__EnumParameter_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__LayerMaskParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraDensitySettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDensitySettings::*)()>(&::MA::Flora::FloraDensitySettings::Awake)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814c5fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDensitySettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraDensitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDensitySettings::*)()>(&::MA::Flora::FloraDensitySettings::_ctor)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1814c61b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDensitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensityMode;
}
constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensityMode;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_GlobalDensityMode(::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalDensityMode = value;
}
constexpr ::UnityEngine::Rendering::LayerMaskParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensityMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensityMask;
}
constexpr ::UnityEngine::Rendering::LayerMaskParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensityMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensityMask;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_GlobalDensityMask(::UnityEngine::Rendering::LayerMaskParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalDensityMask = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensity;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensity;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_GlobalDensity(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalDensity = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensitySizeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensitySizeThreshold;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensitySizeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensitySizeThreshold;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_GlobalDensitySizeThreshold(::UnityEngine::Rendering::MinFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalDensitySizeThreshold = value;
}
constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityMode;
}
constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityMode;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityMode(::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityMode = value;
}
constexpr ::UnityEngine::Rendering::LayerMaskParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityMask;
}
constexpr ::UnityEngine::Rendering::LayerMaskParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityMask;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityMask(::UnityEngine::Rendering::LayerMaskParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityMask = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensity;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensity;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensity(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensity = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityFalloff;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityFalloff;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityFalloff(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityFalloff = value;
}
constexpr ::MA::Flora::FloraScreenRangeParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityScreenPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityScreenPercentage;
}
constexpr ::MA::Flora::FloraScreenRangeParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityScreenPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityScreenPercentage;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityScreenPercentage(::MA::Flora::FloraScreenRangeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityScreenPercentage = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensityEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensityEnabled;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_GlobalDensityEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalDensityEnabled;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_GlobalDensityEnabled(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalDensityEnabled = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityEnabled;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityEnabled;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityEnabled(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityEnabled = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityAffectsLODGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityAffectsLODGroups;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityAffectsLODGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityAffectsLODGroups;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityAffectsLODGroups(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityAffectsLODGroups = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityFalloffPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityFalloffPower;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& MA::Flora::FloraDensitySettings::__cordl_internal_get_RangeDensityFalloffPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeDensityFalloffPower;
}
constexpr void MA::Flora::FloraDensitySettings::__cordl_internal_set_RangeDensityFalloffPower(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeDensityFalloffPower = value;
}
inline void MA::Flora::FloraDensitySettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDensitySettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraDensitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDensitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraDensitySettings* MA::Flora::FloraDensitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraDensitySettings*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraDensitySettings::FloraDensitySettings()   {
}
