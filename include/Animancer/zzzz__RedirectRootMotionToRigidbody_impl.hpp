#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotionToRigidbody.hpp"
#include "Animancer/zzzz__RedirectRootMotion_1_impl.hpp"
#include "Animancer/zzzz__RedirectRootMotionToRigidbody_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Animancer::RedirectRootMotionToRigidbody.OnAnimatorMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::RedirectRootMotionToRigidbody::*)()>(&::Animancer::RedirectRootMotionToRigidbody::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180314040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::RedirectRootMotionToRigidbody*>(),
                    {::i2c::class_of<::Animancer::RedirectRootMotionToRigidbody*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::RedirectRootMotionToRigidbody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::RedirectRootMotionToRigidbody::*)()>(&::Animancer::RedirectRootMotionToRigidbody::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotionToRigidbody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::RedirectRootMotionToRigidbody::OnAnimatorMove()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::RedirectRootMotionToRigidbody*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::RedirectRootMotionToRigidbody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotionToRigidbody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::RedirectRootMotionToRigidbody* Animancer::RedirectRootMotionToRigidbody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::RedirectRootMotionToRigidbody*>());
}
// Ctor Parameters []
constexpr ::Animancer::RedirectRootMotionToRigidbody::RedirectRootMotionToRigidbody()   {
}
