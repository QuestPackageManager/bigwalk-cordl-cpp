#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderSettings.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "MA/Flora/zzzz__FloraRenderSettings_def.hpp"
#include "MA/Flora/zzzz__FloraMinimumScreenSizeMode_def.hpp"
#include "MA/Flora/zzzz__FloraScreenSizeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedIntParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__EnumParameter_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraRenderSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderSettings::*)()>(&::MA::Flora::FloraRenderSettings::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814e7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderSettings::*)()>(&::MA::Flora::FloraRenderSettings::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1814e7550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::MinFloatParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_MaxRenderDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRenderDistance;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_MaxRenderDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRenderDistance;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_MaxRenderDistance(::UnityEngine::Rendering::MinFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRenderDistance = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_MaxShadowDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxShadowDistance;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_MaxShadowDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxShadowDistance;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_MaxShadowDistance(::UnityEngine::Rendering::MinFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxShadowDistance = value;
}
constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>*& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinScreenSizeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScreenSizeMode;
}
constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinScreenSizeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScreenSizeMode;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_MinScreenSizeMode(::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinScreenSizeMode = value;
}
constexpr ::MA::Flora::FloraScreenSizeParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinScreenSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScreenSize;
}
constexpr ::MA::Flora::FloraScreenSizeParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinScreenSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScreenSize;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_MinScreenSize(::MA::Flora::FloraScreenSizeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinScreenSize = value;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinShadowLOD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinShadowLOD;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinShadowLOD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinShadowLOD;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_MinShadowLOD(::UnityEngine::Rendering::ClampedIntParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinShadowLOD = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_RandomizeLODTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizeLODTransition;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_RandomizeLODTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizeLODTransition;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_RandomizeLODTransition(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RandomizeLODTransition = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_CrossFadeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrossFadeDuration;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_CrossFadeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrossFadeDuration;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_CrossFadeDuration(::UnityEngine::Rendering::ClampedFloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CrossFadeDuration = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinScreenSizeAffectsLODGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScreenSizeAffectsLODGroups;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& MA::Flora::FloraRenderSettings::__cordl_internal_get_MinScreenSizeAffectsLODGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinScreenSizeAffectsLODGroups;
}
constexpr void MA::Flora::FloraRenderSettings::__cordl_internal_set_MinScreenSizeAffectsLODGroups(::UnityEngine::Rendering::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinScreenSizeAffectsLODGroups = value;
}
inline void MA::Flora::FloraRenderSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraRenderSettings* MA::Flora::FloraRenderSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderSettings*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderSettings::FloraRenderSettings()   {
}
