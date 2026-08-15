#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotionToTransform.hpp"
#include "Animancer/zzzz__RedirectRootMotion_1_impl.hpp"
#include "Animancer/zzzz__RedirectRootMotionToTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::RedirectRootMotionToTransform.OnAnimatorMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::RedirectRootMotionToTransform::*)()>(&::Animancer::RedirectRootMotionToTransform::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180314300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::RedirectRootMotionToTransform*>(),
                    {::i2c::class_of<::Animancer::RedirectRootMotionToTransform*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::RedirectRootMotionToTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::RedirectRootMotionToTransform::*)()>(&::Animancer::RedirectRootMotionToTransform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotionToTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::RedirectRootMotionToTransform::OnAnimatorMove()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::RedirectRootMotionToTransform*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::RedirectRootMotionToTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotionToTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::RedirectRootMotionToTransform* Animancer::RedirectRootMotionToTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::RedirectRootMotionToTransform*>());
}
// Ctor Parameters []
constexpr ::Animancer::RedirectRootMotionToTransform::RedirectRootMotionToTransform()   {
}
