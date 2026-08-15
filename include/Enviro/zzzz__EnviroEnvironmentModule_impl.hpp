#pragma once
// IWYU pragma private; include "Enviro/EnviroEnvironmentModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroEnvironmentModule_def.hpp"
#include "Enviro/zzzz__EnviroEnvironment_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::Enable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18060d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                    {::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::Disable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18060d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                    {::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.CreateWindZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::CreateWindZone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18060cfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"CreateWindZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::UpdateModule)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18060d3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                    {::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.UpdateSeason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::UpdateSeason)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18060d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateSeason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.ChangeSeason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)(::Enviro::EnviroEnvironment_Seasons)>(&::Enviro::EnviroEnvironmentModule::ChangeSeason)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18060cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"ChangeSeason", {}, {::i2c::type_of<::Enviro::EnviroEnvironment_Seasons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.UpdateTemperature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)(float_t)>(&::Enviro::EnviroEnvironmentModule::UpdateTemperature)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18060d750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateTemperature", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.UpdateWeatherState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::UpdateWeatherState)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18060d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateWeatherState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.UpdateWindZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::UpdateWindZone)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18060daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateWindZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060d2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)(::Enviro::EnviroEnvironmentModule*)>(&::Enviro::EnviroEnvironmentModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18060d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroEnvironmentModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroEnvironmentModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroEnvironmentModule::*)()>(&::Enviro::EnviroEnvironmentModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroEnvironment*& Enviro::EnviroEnvironmentModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroEnvironment* const& Enviro::EnviroEnvironmentModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroEnvironmentModule::__cordl_internal_set_Settings(::Enviro::EnviroEnvironment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroEnvironmentModule>& Enviro::EnviroEnvironmentModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroEnvironmentModule> const& Enviro::EnviroEnvironmentModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroEnvironmentModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroEnvironmentModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showSeasonControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSeasonControls;
}
constexpr bool const& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showSeasonControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSeasonControls;
}
constexpr void Enviro::EnviroEnvironmentModule::__cordl_internal_set_showSeasonControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSeasonControls = value;
}
constexpr bool& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showTemperatureControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTemperatureControls;
}
constexpr bool const& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showTemperatureControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTemperatureControls;
}
constexpr void Enviro::EnviroEnvironmentModule::__cordl_internal_set_showTemperatureControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showTemperatureControls = value;
}
constexpr bool& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showWeatherStateControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWeatherStateControls;
}
constexpr bool const& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showWeatherStateControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWeatherStateControls;
}
constexpr void Enviro::EnviroEnvironmentModule::__cordl_internal_set_showWeatherStateControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWeatherStateControls = value;
}
constexpr bool& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showWindControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWindControls;
}
constexpr bool const& Enviro::EnviroEnvironmentModule::__cordl_internal_get_showWindControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWindControls;
}
constexpr void Enviro::EnviroEnvironmentModule::__cordl_internal_set_showWindControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWindControls = value;
}
inline void Enviro::EnviroEnvironmentModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::CreateWindZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"CreateWindZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::UpdateSeason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateSeason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::ChangeSeason(::Enviro::EnviroEnvironment_Seasons  season)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"ChangeSeason", {}, {::i2c::type_of<::Enviro::EnviroEnvironment_Seasons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, season);
}
inline void Enviro::EnviroEnvironmentModule::UpdateTemperature(float_t  timeOfDay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateTemperature", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeOfDay);
}
inline void Enviro::EnviroEnvironmentModule::UpdateWeatherState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateWeatherState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::UpdateWindZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"UpdateWindZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroEnvironmentModule::SaveModuleValues(::Enviro::EnviroEnvironmentModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroEnvironmentModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroEnvironmentModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroEnvironmentModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroEnvironmentModule* Enviro::EnviroEnvironmentModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroEnvironmentModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroEnvironmentModule::EnviroEnvironmentModule()   {
}
