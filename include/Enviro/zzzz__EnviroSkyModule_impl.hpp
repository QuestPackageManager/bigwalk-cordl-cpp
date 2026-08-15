#pragma once
// IWYU pragma private; include "Enviro/EnviroSkyModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroSkyModule_def.hpp"
#include "Enviro/zzzz__EnviroSky_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroSkyModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::Enable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                    {::i2c::class_of<::Enviro::EnviroSkyModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::Disable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                    {::i2c::class_of<::Enviro::EnviroSkyModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::UpdateModule)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18061c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                    {::i2c::class_of<::Enviro::EnviroSkyModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.SetupSkybox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::SetupSkybox)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18061c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"SetupSkybox", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.UpdateSkybox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)(::UnityEngine::Material*)>(&::Enviro::EnviroSkyModule::UpdateSkybox)> {
  constexpr static std::size_t size = 0xc50;
  constexpr static std::size_t addrs = 0x18061c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"UpdateSkybox", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.UpdateMoonPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::UpdateMoonPhase)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18061c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"UpdateMoonPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18061c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)(::Enviro::EnviroSkyModule*)>(&::Enviro::EnviroSkyModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061c1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroSkyModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroSkyModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroSkyModule::*)()>(&::Enviro::EnviroSkyModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroSky*& Enviro::EnviroSkyModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroSky* const& Enviro::EnviroSkyModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_Settings(::Enviro::EnviroSky*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroSkyModule>& Enviro::EnviroSkyModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroSkyModule> const& Enviro::EnviroSkyModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroSkyModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroSkyModule::__cordl_internal_get_showSkyControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyControls;
}
constexpr bool const& Enviro::EnviroSkyModule::__cordl_internal_get_showSkyControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyControls;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_showSkyControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSkyControls = value;
}
constexpr bool& Enviro::EnviroSkyModule::__cordl_internal_get_showSkySunControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkySunControls;
}
constexpr bool const& Enviro::EnviroSkyModule::__cordl_internal_get_showSkySunControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkySunControls;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_showSkySunControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSkySunControls = value;
}
constexpr bool& Enviro::EnviroSkyModule::__cordl_internal_get_showSkyMoonControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyMoonControls;
}
constexpr bool const& Enviro::EnviroSkyModule::__cordl_internal_get_showSkyMoonControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyMoonControls;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_showSkyMoonControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSkyMoonControls = value;
}
constexpr bool& Enviro::EnviroSkyModule::__cordl_internal_get_showSkyStarsControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyStarsControls;
}
constexpr bool const& Enviro::EnviroSkyModule::__cordl_internal_get_showSkyStarsControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyStarsControls;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_showSkyStarsControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSkyStarsControls = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroSkyModule::__cordl_internal_get_mySkyboxMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySkyboxMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroSkyModule::__cordl_internal_get_mySkyboxMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySkyboxMat;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_mySkyboxMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySkyboxMat = value;
}
constexpr float_t& Enviro::EnviroSkyModule::__cordl_internal_get_starsTwinkling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTwinkling;
}
constexpr float_t const& Enviro::EnviroSkyModule::__cordl_internal_get_starsTwinkling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starsTwinkling;
}
constexpr void Enviro::EnviroSkyModule::__cordl_internal_set_starsTwinkling(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starsTwinkling = value;
}
inline void Enviro::EnviroSkyModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroSkyModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroSkyModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroSkyModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::SetupSkybox()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"SetupSkybox", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::UpdateSkybox(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"UpdateSkybox", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline void Enviro::EnviroSkyModule::UpdateMoonPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"UpdateMoonPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroSkyModule::SaveModuleValues(::Enviro::EnviroSkyModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroSkyModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroSkyModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroSkyModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroSkyModule* Enviro::EnviroSkyModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroSkyModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroSkyModule::EnviroSkyModule()   {
}
