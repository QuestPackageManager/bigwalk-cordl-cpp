#pragma once
// IWYU pragma private; include "UnityEngine/DynamicGI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__DynamicGI_def.hpp"
//  Writing Method size for method: ::UnityEngine::DynamicGI.UpdateEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::DynamicGI::UpdateEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182245300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DynamicGI*>(),
                        {"UpdateEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::DynamicGI::UpdateEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DynamicGI*>(),
                        {"UpdateEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::DynamicGI::DynamicGI()   {
}
