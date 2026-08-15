#pragma once
// IWYU pragma private; include "UnityEngine/ImageEffectOpaque.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ImageEffectOpaque_def.hpp"
//  Writing Method size for method: ::UnityEngine::ImageEffectOpaque._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ImageEffectOpaque::*)()>(&::UnityEngine::ImageEffectOpaque::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageEffectOpaque*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ImageEffectOpaque::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ImageEffectOpaque*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ImageEffectOpaque* UnityEngine::ImageEffectOpaque::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ImageEffectOpaque*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ImageEffectOpaque::ImageEffectOpaque()   {
}
