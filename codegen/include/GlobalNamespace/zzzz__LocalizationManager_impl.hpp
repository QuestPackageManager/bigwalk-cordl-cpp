#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationManager.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocalizationManager* (*)()>(&::GlobalNamespace::LocalizationManager::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804026a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationManager.SetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::LocalizationManager::SetLanguage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180402630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationManager*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationManager::*)()>(&::GlobalNamespace::LocalizationManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LocalizationLanguage& GlobalNamespace::LocalizationManager::__cordl_internal_get_currentLanguage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLanguage;
}
constexpr ::GlobalNamespace::LocalizationLanguage const& GlobalNamespace::LocalizationManager::__cordl_internal_get_currentLanguage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLanguage;
}
constexpr void GlobalNamespace::LocalizationManager::__cordl_internal_set_currentLanguage(::GlobalNamespace::LocalizationLanguage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLanguage = value;
}
inline ::GlobalNamespace::LocalizationManager* GlobalNamespace::LocalizationManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalizationManager*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalizationManager::SetLanguage(::GlobalNamespace::LocalizationLanguage  newLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationManager*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newLanguage);
}
inline void GlobalNamespace::LocalizationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizationManager* GlobalNamespace::LocalizationManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizationManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationManager::LocalizationManager()   {
}
