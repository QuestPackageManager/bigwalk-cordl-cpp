#pragma once
// IWYU pragma private; include "Enviro/EnviroAudioModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroAudioModule_def.hpp"
#include "Enviro/zzzz__EnviroAudioClip_def.hpp"
#include "Enviro/zzzz__EnviroAudio_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroAudioModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::Enable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805fd350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                    {::i2c::class_of<::Enviro::EnviroAudioModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::Disable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805fd290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                    {::i2c::class_of<::Enviro::EnviroAudioModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::Cleanup)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805fc4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::UpdateModule)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805fd8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                    {::i2c::class_of<::Enviro::EnviroAudioModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.CreateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::CreateAudio)> {
  constexpr static std::size_t size = 0xd40;
  constexpr static std::size_t addrs = 0x1805fc550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"CreateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.PlayRandomThunderSFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::PlayRandomThunderSFX)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805fd400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"PlayRandomThunderSFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.UpdateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::UpdateAudio)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805fd580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"UpdateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.UpdateEnviroAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)(::Enviro::EnviroAudioClip*, float_t)>(&::Enviro::EnviroAudioModule::UpdateEnviroAudioClip)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1805fd6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"UpdateEnviroAudioClip", {}, {::i2c::type_of<::Enviro::EnviroAudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805fd390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)(::Enviro::EnviroAudioModule*)>(&::Enviro::EnviroAudioModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805fd530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroAudioModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroAudioModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudioModule::*)()>(&::Enviro::EnviroAudioModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroAudio*& Enviro::EnviroAudioModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroAudio* const& Enviro::EnviroAudioModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_Settings(::Enviro::EnviroAudio*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroAudioModule>& Enviro::EnviroAudioModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroAudioModule> const& Enviro::EnviroAudioModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroAudioModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr float_t& Enviro::EnviroAudioModule::__cordl_internal_get_ambientVolumeModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientVolumeModifier;
}
constexpr float_t const& Enviro::EnviroAudioModule::__cordl_internal_get_ambientVolumeModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientVolumeModifier;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_ambientVolumeModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientVolumeModifier = value;
}
constexpr float_t& Enviro::EnviroAudioModule::__cordl_internal_get_weatherVolumeModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherVolumeModifier;
}
constexpr float_t const& Enviro::EnviroAudioModule::__cordl_internal_get_weatherVolumeModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherVolumeModifier;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_weatherVolumeModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherVolumeModifier = value;
}
constexpr float_t& Enviro::EnviroAudioModule::__cordl_internal_get_thunderVolumeModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thunderVolumeModifier;
}
constexpr float_t const& Enviro::EnviroAudioModule::__cordl_internal_get_thunderVolumeModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thunderVolumeModifier;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_thunderVolumeModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thunderVolumeModifier = value;
}
constexpr bool& Enviro::EnviroAudioModule::__cordl_internal_get_showAmbientSetupControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAmbientSetupControls;
}
constexpr bool const& Enviro::EnviroAudioModule::__cordl_internal_get_showAmbientSetupControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAmbientSetupControls;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_showAmbientSetupControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAmbientSetupControls = value;
}
constexpr bool& Enviro::EnviroAudioModule::__cordl_internal_get_showWeatherSetupControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWeatherSetupControls;
}
constexpr bool const& Enviro::EnviroAudioModule::__cordl_internal_get_showWeatherSetupControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWeatherSetupControls;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_showWeatherSetupControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWeatherSetupControls = value;
}
constexpr bool& Enviro::EnviroAudioModule::__cordl_internal_get_showThunderSetupControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showThunderSetupControls;
}
constexpr bool const& Enviro::EnviroAudioModule::__cordl_internal_get_showThunderSetupControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showThunderSetupControls;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_showThunderSetupControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showThunderSetupControls = value;
}
constexpr bool& Enviro::EnviroAudioModule::__cordl_internal_get_showAudioControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAudioControls;
}
constexpr bool const& Enviro::EnviroAudioModule::__cordl_internal_get_showAudioControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAudioControls;
}
constexpr void Enviro::EnviroAudioModule::__cordl_internal_set_showAudioControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAudioControls = value;
}
inline void Enviro::EnviroAudioModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroAudioModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroAudioModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroAudioModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::CreateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"CreateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::PlayRandomThunderSFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"PlayRandomThunderSFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::UpdateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"UpdateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::UpdateEnviroAudioClip(::Enviro::EnviroAudioClip*  clip, float_t  masterVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"UpdateEnviroAudioClip", {}, {::i2c::type_of<::Enviro::EnviroAudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, masterVolume);
}
inline void Enviro::EnviroAudioModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroAudioModule::SaveModuleValues(::Enviro::EnviroAudioModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroAudioModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroAudioModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudioModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroAudioModule* Enviro::EnviroAudioModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroAudioModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAudioModule::EnviroAudioModule()   {
}
