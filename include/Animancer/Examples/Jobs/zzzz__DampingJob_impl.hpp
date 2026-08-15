#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/DampingJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/Jobs/zzzz__DampingJob_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Jobs::DampingJob.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::DampingJob::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::DampingJob::ProcessRootMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::DampingJob.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::DampingJob::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::DampingJob::ProcessAnimation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f94d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::DampingJob.ComputeDampedPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::DampingJob::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::DampingJob::ComputeDampedPositions)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x1802f87c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ComputeDampedPositions", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::DampingJob.ComputeJointLocalRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::DampingJob::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::DampingJob::ComputeJointLocalRotations)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x1802f8e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ComputeJointLocalRotations", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Examples::Jobs::DampingJob::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::Examples::Jobs::DampingJob::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::Examples::Jobs::DampingJob::ComputeDampedPositions(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ComputeDampedPositions", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::Examples::Jobs::DampingJob::ComputeJointLocalRotations(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::DampingJob>(),
                        {"ComputeJointLocalRotations", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr  Animancer::Examples::Jobs::DampingJob::operator ::UnityEngine::Animations::IAnimationJob*()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* Animancer::Examples::Jobs::DampingJob::i___UnityEngine__Animations__IAnimationJob()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rootHandle", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "jointHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPositions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "velocities", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Examples::Jobs::DampingJob::DampingJob(::UnityEngine::Animations::TransformStreamHandle  rootHandle, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  jointHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  localPositions, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  localRotations, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  velocities) noexcept  {
this->rootHandle = rootHandle;
this->jointHandles = jointHandles;
this->localPositions = localPositions;
this->localRotations = localRotations;
this->positions = positions;
this->velocities = velocities;
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::DampingJob::DampingJob()   {
}
