#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectsModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroEffectsModule_def.hpp"
#include "Enviro/zzzz__EnviroEffects_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::Enable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18060cb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroEffectsModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::Disable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18060ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroEffectsModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::Cleanup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18060c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::UpdateModule)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroEffectsModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.CreateEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::CreateEffects)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x18060c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"CreateEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.GetEmissionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Enviro::EnviroEffectsModule::*)(::UnityEngine::ParticleSystem*)>(&::Enviro::EnviroEffectsModule::GetEmissionRate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060cb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"GetEmissionRate", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.SetEmissionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)(::UnityEngine::ParticleSystem*, float_t)>(&::Enviro::EnviroEffectsModule::SetEmissionRate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18060cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"SetEmissionRate", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.UpdateEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::UpdateEffects)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18060cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"UpdateEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)(::Enviro::EnviroEffectsModule*)>(&::Enviro::EnviroEffectsModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18060cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroEffectsModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEffectsModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEffectsModule::*)()>(&::Enviro::EnviroEffectsModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroEffects*& Enviro::EnviroEffectsModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroEffects* const& Enviro::EnviroEffectsModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroEffectsModule::__cordl_internal_set_Settings(::Enviro::EnviroEffects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroEffectsModule>& Enviro::EnviroEffectsModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroEffectsModule> const& Enviro::EnviroEffectsModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroEffectsModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroEffectsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroEffectsModule::__cordl_internal_get_showSetupControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSetupControls;
}
constexpr bool const& Enviro::EnviroEffectsModule::__cordl_internal_get_showSetupControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSetupControls;
}
constexpr void Enviro::EnviroEffectsModule::__cordl_internal_set_showSetupControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSetupControls = value;
}
constexpr bool& Enviro::EnviroEffectsModule::__cordl_internal_get_showEmissionControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEmissionControls;
}
constexpr bool const& Enviro::EnviroEffectsModule::__cordl_internal_get_showEmissionControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEmissionControls;
}
constexpr void Enviro::EnviroEffectsModule::__cordl_internal_set_showEmissionControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEmissionControls = value;
}
inline void Enviro::EnviroEffectsModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroEffectsModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroEffectsModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroEffectsModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::CreateEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"CreateEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Enviro::EnviroEffectsModule::GetEmissionRate(::UnityEngine::ParticleSystem*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"GetEmissionRate", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, system);
}
inline void Enviro::EnviroEffectsModule::SetEmissionRate(::UnityEngine::ParticleSystem*  sys, float_t  emissionRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"SetEmissionRate", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sys, emissionRate);
}
inline void Enviro::EnviroEffectsModule::UpdateEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"UpdateEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEffectsModule::SaveModuleValues(::Enviro::EnviroEffectsModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroEffectsModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroEffectsModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEffectsModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEffectsModule* Enviro::EnviroEffectsModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEffectsModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEffectsModule::EnviroEffectsModule()   {
}
