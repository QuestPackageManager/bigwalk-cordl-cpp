#pragma once
// IWYU pragma private; include "Enviro/EnviroLightingModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroLightingModule_def.hpp"
#include "Enviro/zzzz__EnviroLighting_def.hpp"
#include "UnityEngine/Rendering/zzzz__AmbientMode_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroLightingModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::Enable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180613f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                    {::i2c::class_of<::Enviro::EnviroLightingModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::Disable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180613f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                    {::i2c::class_of<::Enviro::EnviroLightingModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.ApplyLightingChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::ApplyLightingChanges)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180613e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"ApplyLightingChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::Setup)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x180614070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::Cleanup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180613e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::UpdateModule)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1806150f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                    {::i2c::class_of<::Enviro::EnviroLightingModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.UpdateDirectLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::UpdateDirectLighting)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x180614920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"UpdateDirectLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.UpdateAmbientLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)(bool)>(&::Enviro::EnviroLightingModule::UpdateAmbientLighting)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180614460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"UpdateAmbientLighting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.UpdateAmbient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)(::UnityEngine::Rendering::AmbientMode, float_t)>(&::Enviro::EnviroLightingModule::UpdateAmbient)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180614720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"UpdateAmbient", {}, {::i2c::type_of<::UnityEngine::Rendering::AmbientMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180613fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)(::Enviro::EnviroLightingModule*)>(&::Enviro::EnviroLightingModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180614020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroLightingModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroLightingModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroLightingModule::*)()>(&::Enviro::EnviroLightingModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroLighting*& Enviro::EnviroLightingModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroLighting* const& Enviro::EnviroLightingModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_Settings(::Enviro::EnviroLighting*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroLightingModule>& Enviro::EnviroLightingModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroLightingModule> const& Enviro::EnviroLightingModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroLightingModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr int32_t& Enviro::EnviroLightingModule::__cordl_internal_get_currentFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFrame;
}
constexpr int32_t const& Enviro::EnviroLightingModule::__cordl_internal_get_currentFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFrame;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_currentFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFrame = value;
}
constexpr float_t& Enviro::EnviroLightingModule::__cordl_internal_get_lastAmbientSkyboxUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAmbientSkyboxUpdate;
}
constexpr float_t const& Enviro::EnviroLightingModule::__cordl_internal_get_lastAmbientSkyboxUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAmbientSkyboxUpdate;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_lastAmbientSkyboxUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAmbientSkyboxUpdate = value;
}
constexpr bool& Enviro::EnviroLightingModule::__cordl_internal_get_showDirectLightingControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDirectLightingControls;
}
constexpr bool const& Enviro::EnviroLightingModule::__cordl_internal_get_showDirectLightingControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDirectLightingControls;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_showDirectLightingControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showDirectLightingControls = value;
}
constexpr bool& Enviro::EnviroLightingModule::__cordl_internal_get_showAmbientLightingControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAmbientLightingControls;
}
constexpr bool const& Enviro::EnviroLightingModule::__cordl_internal_get_showAmbientLightingControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAmbientLightingControls;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_showAmbientLightingControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAmbientLightingControls = value;
}
constexpr bool& Enviro::EnviroLightingModule::__cordl_internal_get_showReflectionControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showReflectionControls;
}
constexpr bool const& Enviro::EnviroLightingModule::__cordl_internal_get_showReflectionControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showReflectionControls;
}
constexpr void Enviro::EnviroLightingModule::__cordl_internal_set_showReflectionControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showReflectionControls = value;
}
inline void Enviro::EnviroLightingModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroLightingModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroLightingModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::ApplyLightingChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"ApplyLightingChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroLightingModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::UpdateDirectLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"UpdateDirectLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::UpdateAmbientLighting(bool  forced)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"UpdateAmbientLighting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forced);
}
inline void Enviro::EnviroLightingModule::UpdateAmbient(::UnityEngine::Rendering::AmbientMode  ambientMode, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"UpdateAmbient", {}, {::i2c::type_of<::UnityEngine::Rendering::AmbientMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ambientMode, intensity);
}
inline void Enviro::EnviroLightingModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroLightingModule::SaveModuleValues(::Enviro::EnviroLightingModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroLightingModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroLightingModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroLightingModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroLightingModule* Enviro::EnviroLightingModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroLightingModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroLightingModule::EnviroLightingModule()   {
}
