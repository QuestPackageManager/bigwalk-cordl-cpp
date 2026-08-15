#pragma once
// IWYU pragma private; include "Enviro/EnviroQualityModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroQualityModule_def.hpp"
#include "Enviro/zzzz__EnviroQualities_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroQualityModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::Enable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180615d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                    {::i2c::class_of<::Enviro::EnviroQualityModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::UpdateModule)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x180615f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                    {::i2c::class_of<::Enviro::EnviroQualityModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.CleanupQualityList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::CleanupQualityList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180615c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"CleanupQualityList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.CreateNewQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::CreateNewQuality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180615cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"CreateNewQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.RemoveQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)(::Enviro::EnviroQuality*)>(&::Enviro::EnviroQualityModule::RemoveQuality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180615ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"RemoveQuality", {}, {::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180615e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)(::Enviro::EnviroQualityModule*)>(&::Enviro::EnviroQualityModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180615f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroQualityModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityModule::*)()>(&::Enviro::EnviroQualityModule::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1806167b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroQualities*& Enviro::EnviroQualityModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroQualities* const& Enviro::EnviroQualityModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroQualityModule::__cordl_internal_set_Settings(::Enviro::EnviroQualities*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroQualityModule>& Enviro::EnviroQualityModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroQualityModule> const& Enviro::EnviroQualityModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroQualityModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroQualityModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroQualityModule::__cordl_internal_get_showQualityControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showQualityControls;
}
constexpr bool const& Enviro::EnviroQualityModule::__cordl_internal_get_showQualityControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showQualityControls;
}
constexpr void Enviro::EnviroQualityModule::__cordl_internal_set_showQualityControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showQualityControls = value;
}
inline void Enviro::EnviroQualityModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroQualityModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroQualityModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroQualityModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroQualityModule::CleanupQualityList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"CleanupQualityList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroQualityModule::CreateNewQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"CreateNewQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroQualityModule::RemoveQuality(::Enviro::EnviroQuality*  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"RemoveQuality", {}, {::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quality);
}
inline void Enviro::EnviroQualityModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroQualityModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroQualityModule::SaveModuleValues(::Enviro::EnviroQualityModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroQualityModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroQualityModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroQualityModule* Enviro::EnviroQualityModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroQualityModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroQualityModule::EnviroQualityModule()   {
}
