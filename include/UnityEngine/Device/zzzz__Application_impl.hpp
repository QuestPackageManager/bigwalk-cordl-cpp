#pragma once
// IWYU pragma private; include "UnityEngine/Device/Application.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Device/zzzz__Application_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Device::Application.get_systemLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SystemLanguage (*)()>(&::UnityEngine::Device::Application::get_systemLanguage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227c220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"get_systemLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::SystemLanguage UnityEngine::Device::Application::get_systemLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Device::Application*>(),
                        {"get_systemLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SystemLanguage>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Device::Application::Application()   {
}
