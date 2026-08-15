#pragma once
// IWYU pragma private; include "UnityEngine/Animations/IAnimationJob.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::IAnimationJob.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::IAnimationJob::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::IAnimationJob::ProcessAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::IAnimationJob*>(),
                    {::i2c::class_of<::UnityEngine::Animations::IAnimationJob*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::IAnimationJob.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::IAnimationJob::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::IAnimationJob::ProcessRootMotion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::IAnimationJob*>(),
                    {::i2c::class_of<::UnityEngine::Animations::IAnimationJob*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::IAnimationJob::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::IAnimationJob*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void UnityEngine::Animations::IAnimationJob::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::IAnimationJob*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
