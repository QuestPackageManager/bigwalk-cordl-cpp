#pragma once
// IWYU pragma private; include "GlobalNamespace/EnviroModule.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnviroModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnviroModule::*)()>(&::GlobalNamespace::EnviroModule::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnviroModule*>(),
                    {::i2c::class_of<::GlobalNamespace::EnviroModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnviroModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnviroModule::*)()>(&::GlobalNamespace::EnviroModule::Disable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnviroModule*>(),
                    {::i2c::class_of<::GlobalNamespace::EnviroModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnviroModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnviroModule::*)()>(&::GlobalNamespace::EnviroModule::UpdateModule)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnviroModule*>(),
                    {::i2c::class_of<::GlobalNamespace::EnviroModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnviroModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnviroModule::*)()>(&::GlobalNamespace::EnviroModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnviroModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnviroModule::__cordl_internal_get_showModuleInspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showModuleInspector;
}
constexpr bool const& GlobalNamespace::EnviroModule::__cordl_internal_get_showModuleInspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showModuleInspector;
}
constexpr void GlobalNamespace::EnviroModule::__cordl_internal_set_showModuleInspector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showModuleInspector = value;
}
constexpr bool& GlobalNamespace::EnviroModule::__cordl_internal_get_showSaveLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSaveLoad;
}
constexpr bool const& GlobalNamespace::EnviroModule::__cordl_internal_get_showSaveLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSaveLoad;
}
constexpr void GlobalNamespace::EnviroModule::__cordl_internal_set_showSaveLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSaveLoad = value;
}
constexpr bool& GlobalNamespace::EnviroModule::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& GlobalNamespace::EnviroModule::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::EnviroModule::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
inline void GlobalNamespace::EnviroModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EnviroModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnviroModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EnviroModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnviroModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EnviroModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnviroModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnviroModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnviroModule* GlobalNamespace::EnviroModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnviroModule*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnviroModule::EnviroModule()   {
}
