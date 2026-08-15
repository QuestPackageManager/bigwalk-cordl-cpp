#pragma once
// IWYU pragma private; include "UnityEngine/AnimationState.hpp"
#include "UnityEngine/zzzz__TrackedReference_impl.hpp"
#include "UnityEngine/zzzz__AnimationState_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationState::*)()>(&::UnityEngine::AnimationState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimationState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AnimationState* UnityEngine::AnimationState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationState::AnimationState()   {
}
