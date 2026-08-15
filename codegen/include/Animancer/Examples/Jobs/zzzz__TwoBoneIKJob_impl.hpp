#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/TwoBoneIKJob.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_impl.hpp"
#include "Animancer/Examples/Jobs/zzzz__TwoBoneIKJob_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIKJob.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::TwoBoneIKJob::*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Animancer::Examples::Jobs::TwoBoneIKJob::Setup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180302820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIKJob.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::TwoBoneIKJob::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::TwoBoneIKJob::ProcessRootMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIKJob.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::TwoBoneIKJob::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::TwoBoneIKJob::ProcessAnimation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180302740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIKJob.TriangleAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Animancer::Examples::Jobs::TwoBoneIKJob::TriangleAngle)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180303150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"TriangleAngle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::TwoBoneIKJob.Solve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animations::AnimationStream, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Animations::TransformSceneHandle)>(&::Animancer::Examples::Jobs::TwoBoneIKJob::Solve)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x1803028e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"Solve", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::UnityEngine::Animations::TransformStreamHandle>(), ::i2c::type_of<::UnityEngine::Animations::TransformStreamHandle>(), ::i2c::type_of<::UnityEngine::Animations::TransformStreamHandle>(), ::i2c::type_of<::UnityEngine::Animations::TransformSceneHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Examples::Jobs::TwoBoneIKJob::Setup(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  topX, ::UnityEngine::Transform*  midX, ::UnityEngine::Transform*  lowX, ::UnityEngine::Transform*  effectorX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, animator, topX, midX, lowX, effectorX);
}
inline void Animancer::Examples::Jobs::TwoBoneIKJob::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::Examples::Jobs::TwoBoneIKJob::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline float_t Animancer::Examples::Jobs::TwoBoneIKJob::TriangleAngle(float_t  aLen, ::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"TriangleAngle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, aLen, v1, v2);
}
inline void Animancer::Examples::Jobs::TwoBoneIKJob::Solve(::UnityEngine::Animations::AnimationStream  stream, ::UnityEngine::Animations::TransformStreamHandle  topHandle, ::UnityEngine::Animations::TransformStreamHandle  midHandle, ::UnityEngine::Animations::TransformStreamHandle  lowHandle, ::UnityEngine::Animations::TransformSceneHandle  effectorHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::TwoBoneIKJob>(),
                        {"Solve", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>(), ::i2c::type_of<::UnityEngine::Animations::TransformStreamHandle>(), ::i2c::type_of<::UnityEngine::Animations::TransformStreamHandle>(), ::i2c::type_of<::UnityEngine::Animations::TransformStreamHandle>(), ::i2c::type_of<::UnityEngine::Animations::TransformSceneHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, topHandle, midHandle, lowHandle, effectorHandle);
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr  Animancer::Examples::Jobs::TwoBoneIKJob::operator ::UnityEngine::Animations::IAnimationJob*()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* Animancer::Examples::Jobs::TwoBoneIKJob::i___UnityEngine__Animations__IAnimationJob()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "effector", ty: "::UnityEngine::Animations::TransformSceneHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "top", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "mid", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "low", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Examples::Jobs::TwoBoneIKJob::TwoBoneIKJob(::UnityEngine::Animations::TransformSceneHandle  effector, ::UnityEngine::Animations::TransformStreamHandle  top, ::UnityEngine::Animations::TransformStreamHandle  mid, ::UnityEngine::Animations::TransformStreamHandle  low) noexcept  {
this->effector = effector;
this->top = top;
this->mid = mid;
this->low = low;
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::TwoBoneIKJob::TwoBoneIKJob()   {
}
