#pragma once
// IWYU pragma private; include "UnityEngine/CapsuleCollider2D.hpp"
#include "UnityEngine/zzzz__Collider2D_impl.hpp"
#include "UnityEngine/zzzz__CapsuleCollider2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::CapsuleCollider2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CapsuleCollider2D::*)()>(&::UnityEngine::CapsuleCollider2D::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CapsuleCollider2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::CapsuleCollider2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CapsuleCollider2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::CapsuleCollider2D* UnityEngine::CapsuleCollider2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CapsuleCollider2D*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::CapsuleCollider2D::CapsuleCollider2D()   {
}
