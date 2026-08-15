#pragma once
// IWYU pragma private; include "GlobalNamespace/Crosshair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Crosshair_def.hpp"
#include "GlobalNamespace/zzzz__Crosshair_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Crosshair_CrosshairMode::Crosshair_CrosshairMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Crosshair_CrosshairMode::Crosshair_CrosshairMode()   {
}
constexpr ::GlobalNamespace::Crosshair_CrosshairMode  GlobalNamespace::Crosshair_CrosshairMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Crosshair_CrosshairMode  GlobalNamespace::Crosshair_CrosshairMode::Holding{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Crosshair_CrosshairMode  GlobalNamespace::Crosshair_CrosshairMode::Windup{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::Crosshair.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Crosshair* (*)()>(&::GlobalNamespace::Crosshair::get_instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180420a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crosshair.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crosshair::*)()>(&::GlobalNamespace::Crosshair::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180420360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crosshair.OnSettingsChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::Crosshair::OnSettingsChange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180420360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"OnSettingsChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crosshair.SetCrosshairMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Crosshair_CrosshairMode, float_t)>(&::GlobalNamespace::Crosshair::SetCrosshairMode)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x180420480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"SetCrosshairMode", {}, {::i2c::type_of<::GlobalNamespace::Crosshair_CrosshairMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crosshair.GetCrosshairTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::Crosshair::*)(::GlobalNamespace::Crosshair_CrosshairMode)>(&::GlobalNamespace::Crosshair::GetCrosshairTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180420340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"GetCrosshairTransform", {}, {::i2c::type_of<::GlobalNamespace::Crosshair_CrosshairMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crosshair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crosshair::*)()>(&::GlobalNamespace::Crosshair::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairNormal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairNormal;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_crosshairNormal(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crosshairNormal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairHolding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairHolding;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairHolding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairHolding;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_crosshairHolding(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crosshairHolding = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairWindup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairWindup;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairWindup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairWindup;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_crosshairWindup(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crosshairWindup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Crosshair::__cordl_internal_get_wings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wings;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Crosshair::__cordl_internal_get_wings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wings;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_wings(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wings = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Crosshair::__cordl_internal_get_hideTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Crosshair::__cordl_internal_get_hideTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideTransform;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_hideTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideTransform = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::Crosshair::__cordl_internal_get_windupCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windupCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::Crosshair::__cordl_internal_get_windupCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windupCurve;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_windupCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windupCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::Crosshair::__cordl_internal_get_boilCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boilCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::Crosshair::__cordl_internal_get_boilCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boilCurve;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_boilCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boilCurve = value;
}
constexpr float_t& GlobalNamespace::Crosshair::__cordl_internal_get_boilFequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boilFequency;
}
constexpr float_t const& GlobalNamespace::Crosshair::__cordl_internal_get_boilFequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boilFequency;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_boilFequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boilFequency = value;
}
constexpr bool& GlobalNamespace::Crosshair::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::Crosshair::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::Crosshair_CrosshairMode& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairMode;
}
constexpr ::GlobalNamespace::Crosshair_CrosshairMode const& GlobalNamespace::Crosshair::__cordl_internal_get_crosshairMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairMode;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_crosshairMode(::GlobalNamespace::Crosshair_CrosshairMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crosshairMode = value;
}
constexpr float_t& GlobalNamespace::Crosshair::__cordl_internal_get_windupPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windupPower;
}
constexpr float_t const& GlobalNamespace::Crosshair::__cordl_internal_get_windupPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windupPower;
}
constexpr void GlobalNamespace::Crosshair::__cordl_internal_set_windupPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windupPower = value;
}
inline ::GlobalNamespace::Crosshair* GlobalNamespace::Crosshair::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Crosshair*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Crosshair::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Crosshair::OnSettingsChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"OnSettingsChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Crosshair::SetCrosshairMode(::GlobalNamespace::Crosshair_CrosshairMode  crosshairMode, float_t  windupPower)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"SetCrosshairMode", {}, {::i2c::type_of<::GlobalNamespace::Crosshair_CrosshairMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, crosshairMode, windupPower);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Crosshair::GetCrosshairTransform(::GlobalNamespace::Crosshair_CrosshairMode  crosshairMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {"GetCrosshairTransform", {}, {::i2c::type_of<::GlobalNamespace::Crosshair_CrosshairMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, crosshairMode);
}
inline void GlobalNamespace::Crosshair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crosshair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Crosshair* GlobalNamespace::Crosshair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Crosshair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Crosshair::Crosshair()   {
}
