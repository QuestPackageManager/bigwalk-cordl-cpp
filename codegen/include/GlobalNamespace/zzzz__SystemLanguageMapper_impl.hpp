#pragma once
// IWYU pragma private; include "GlobalNamespace/SystemLanguageMapper.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SystemLanguageMapper_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SystemLanguageMapper.GetSystemLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocalizationLanguage (*)()>(&::GlobalNamespace::SystemLanguageMapper::GetSystemLanguage)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18039f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SystemLanguageMapper*>(),
                        {"GetSystemLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SystemLanguageMapper::setStaticF_fallbackLanguage(::GlobalNamespace::LocalizationLanguage  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LocalizationLanguage, "fallbackLanguage", ::GlobalNamespace::SystemLanguageMapper*>(std::forward<::GlobalNamespace::LocalizationLanguage>(value));
}
inline ::GlobalNamespace::LocalizationLanguage GlobalNamespace::SystemLanguageMapper::getStaticF_fallbackLanguage()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LocalizationLanguage, "fallbackLanguage", ::GlobalNamespace::SystemLanguageMapper*>();
}
inline ::GlobalNamespace::LocalizationLanguage GlobalNamespace::SystemLanguageMapper::GetSystemLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SystemLanguageMapper*>(),
                        {"GetSystemLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalizationLanguage>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SystemLanguageMapper::SystemLanguageMapper()   {
}
