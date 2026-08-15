#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotionToCharacterController.hpp"
#include "Animancer/zzzz__RedirectRootMotion_1_impl.hpp"
#include "Animancer/zzzz__RedirectRootMotionToCharacterController_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
//  Writing Method size for method: ::Animancer::RedirectRootMotionToCharacterController.OnAnimatorMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::RedirectRootMotionToCharacterController::*)()>(&::Animancer::RedirectRootMotionToCharacterController::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180313dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::RedirectRootMotionToCharacterController*>(),
                    {::i2c::class_of<::Animancer::RedirectRootMotionToCharacterController*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::RedirectRootMotionToCharacterController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::RedirectRootMotionToCharacterController::*)()>(&::Animancer::RedirectRootMotionToCharacterController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotionToCharacterController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::RedirectRootMotionToCharacterController::OnAnimatorMove()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::RedirectRootMotionToCharacterController*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::RedirectRootMotionToCharacterController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::RedirectRootMotionToCharacterController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::RedirectRootMotionToCharacterController* Animancer::RedirectRootMotionToCharacterController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::RedirectRootMotionToCharacterController*>());
}
// Ctor Parameters []
constexpr ::Animancer::RedirectRootMotionToCharacterController::RedirectRootMotionToCharacterController()   {
}
