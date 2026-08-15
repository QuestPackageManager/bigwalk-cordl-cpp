#pragma once
// IWYU pragma private; include "UnityEngine/GridLayout.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__GridLayout_def.hpp"
//  Writing Method size for method: ::UnityEngine::GridLayout.DoNothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GridLayout::*)()>(&::UnityEngine::GridLayout::DoNothing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GridLayout*>(),
                        {"DoNothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::GridLayout::DoNothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GridLayout*>(),
                        {"DoNothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::GridLayout::GridLayout()   {
}
