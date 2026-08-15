#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricFogLight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Enviro/zzzz__EnviroVolumetricFogLight_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.get_isOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::get_isOn)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180619f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"get_isOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.set_isOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)(bool)>(&::Enviro::EnviroVolumetricFogLight::set_isOn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"set_isOn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.get_light
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::get_light)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180619fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"get_light", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.set_light
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)(::UnityEngine::Light*)>(&::Enviro::EnviroVolumetricFogLight::set_light)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"set_light", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::OnEnable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180619cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180619ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.AddToLightManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::AddToLightManager)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180619a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"AddToLightManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.RemoveFromLightManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::RemoveFromLightManager)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180619e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"RemoveFromLightManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::Init)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180619b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricFogLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricFogLight::*)()>(&::Enviro::EnviroVolumetricFogLight::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180619f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void Enviro::EnviroVolumetricFogLight::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr float_t& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void Enviro::EnviroVolumetricFogLight::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr ::UnityW<::UnityEngine::Light>& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_myLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_myLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myLight;
}
constexpr void Enviro::EnviroVolumetricFogLight::__cordl_internal_set_myLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myLight = value;
}
constexpr bool& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void Enviro::EnviroVolumetricFogLight::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_cascadeShadowCB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cascadeShadowCB;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& Enviro::EnviroVolumetricFogLight::__cordl_internal_get_cascadeShadowCB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cascadeShadowCB;
}
constexpr void Enviro::EnviroVolumetricFogLight::__cordl_internal_set_cascadeShadowCB(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cascadeShadowCB = value;
}
inline bool Enviro::EnviroVolumetricFogLight::get_isOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"get_isOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::set_isOn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"set_isOn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Light> Enviro::EnviroVolumetricFogLight::get_light()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"get_light", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::set_light(::UnityEngine::Light*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"set_light", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroVolumetricFogLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::AddToLightManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"AddToLightManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::RemoveFromLightManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"RemoveFromLightManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricFogLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricFogLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroVolumetricFogLight* Enviro::EnviroVolumetricFogLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroVolumetricFogLight*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroVolumetricFogLight::EnviroVolumetricFogLight()   {
}
