#pragma once
// IWYU pragma private; include "Enviro/EnviroFlatCloudsModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Enviro/zzzz__EnviroFlatCloudsModule_def.hpp"
#include "Enviro/zzzz__EnviroFlatClouds_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsModule::*)()>(&::Enviro::EnviroFlatCloudsModule::UpdateModule)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x18060df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsModule::*)()>(&::Enviro::EnviroFlatCloudsModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsModule.UpdateWind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsModule::*)()>(&::Enviro::EnviroFlatCloudsModule::UpdateWind)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x18060e480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"UpdateWind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsModule::*)()>(&::Enviro::EnviroFlatCloudsModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsModule::*)(::Enviro::EnviroFlatCloudsModule*)>(&::Enviro::EnviroFlatCloudsModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18060df20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroFlatCloudsModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFlatCloudsModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFlatCloudsModule::*)()>(&::Enviro::EnviroFlatCloudsModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroFlatClouds*& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::Enviro::EnviroFlatClouds* const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_settings(::Enviro::EnviroFlatClouds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule>& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule> const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroFlatCloudsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_showCirrusCloudsControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCirrusCloudsControls;
}
constexpr bool const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_showCirrusCloudsControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCirrusCloudsControls;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_showCirrusCloudsControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showCirrusCloudsControls = value;
}
constexpr bool& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_show2DCloudsControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show2DCloudsControls;
}
constexpr bool const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_show2DCloudsControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show2DCloudsControls;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_show2DCloudsControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___show2DCloudsControls = value;
}
constexpr ::UnityEngine::Vector2& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_cloudFlatBaseAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudFlatBaseAnim;
}
constexpr ::UnityEngine::Vector2 const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_cloudFlatBaseAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudFlatBaseAnim;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_cloudFlatBaseAnim(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudFlatBaseAnim = value;
}
constexpr ::UnityEngine::Vector2& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_cloudFlatDetailAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudFlatDetailAnim;
}
constexpr ::UnityEngine::Vector2 const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_cloudFlatDetailAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudFlatDetailAnim;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_cloudFlatDetailAnim(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudFlatDetailAnim = value;
}
constexpr ::UnityEngine::Vector2& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_cirrusAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusAnim;
}
constexpr ::UnityEngine::Vector2 const& Enviro::EnviroFlatCloudsModule::__cordl_internal_get_cirrusAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cirrusAnim;
}
constexpr void Enviro::EnviroFlatCloudsModule::__cordl_internal_set_cirrusAnim(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cirrusAnim = value;
}
inline void Enviro::EnviroFlatCloudsModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFlatCloudsModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFlatCloudsModule::UpdateWind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"UpdateWind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFlatCloudsModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFlatCloudsModule::SaveModuleValues(::Enviro::EnviroFlatCloudsModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroFlatCloudsModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroFlatCloudsModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFlatCloudsModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroFlatCloudsModule* Enviro::EnviroFlatCloudsModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroFlatCloudsModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFlatCloudsModule::EnviroFlatCloudsModule()   {
}
