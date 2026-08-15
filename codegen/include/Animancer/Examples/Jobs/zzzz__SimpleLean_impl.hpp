#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/SimpleLean.hpp"
#include "Animancer/zzzz__AnimancerJob_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/Jobs/zzzz__SimpleLean_def.hpp"
#include "Animancer/Examples/Jobs/zzzz__SimpleLean_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean_Job.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean_Job::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::SimpleLean_Job::ProcessRootMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean_Job>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean_Job.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean_Job::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::Examples::Jobs::SimpleLean_Job::ProcessAnimation)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1802fd660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean_Job>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Examples::Jobs::SimpleLean_Job::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean_Job>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::Examples::Jobs::SimpleLean_Job::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean_Job>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr  Animancer::Examples::Jobs::SimpleLean_Job::operator ::UnityEngine::Animations::IAnimationJob*()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* Animancer::Examples::Jobs::SimpleLean_Job::i___UnityEngine__Animations__IAnimationJob()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "bones", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "angle", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Examples::Jobs::SimpleLean_Job::SimpleLean_Job(::UnityEngine::Animations::TransformStreamHandle  root, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  bones, ::UnityEngine::Vector3  axis, ::Unity::Collections::NativeArray_1<float_t>  angle) noexcept  {
this->root = root;
this->bones = bones;
this->axis = axis;
this->angle = angle;
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::SimpleLean_Job::SimpleLean_Job()   {
}
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean::*)(::Animancer::AnimancerPlayable*, ::UnityEngine::Vector3, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>)>(&::Animancer::Examples::Jobs::SimpleLean::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180301610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.get_Axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::Examples::Jobs::SimpleLean::*)()>(&::Animancer::Examples::Jobs::SimpleLean::get_Axis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803017d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"get_Axis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.set_Axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean::*)(::UnityEngine::Vector3)>(&::Animancer::Examples::Jobs::SimpleLean::set_Axis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180301800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"set_Axis", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.get_Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Examples::Jobs::SimpleLean::*)()>(&::Animancer::Examples::Jobs::SimpleLean::get_Angle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803017c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"get_Angle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.set_Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean::*)(float_t)>(&::Animancer::Examples::Jobs::SimpleLean::set_Angle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803017f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"set_Angle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean::*)()>(&::Animancer::Examples::Jobs::SimpleLean::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803015d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean::*)()>(&::Animancer::Examples::Jobs::SimpleLean::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803015d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Jobs::SimpleLean.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Jobs::SimpleLean::*)()>(&::Animancer::Examples::Jobs::SimpleLean::Destroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180301590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                    {::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Animancer::Examples::Jobs::SimpleLean::_ctor(::Animancer::AnimancerPlayable*  animancer, ::UnityEngine::Vector3  axis, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  leanBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, axis, leanBones);
}
inline ::UnityEngine::Vector3 Animancer::Examples::Jobs::SimpleLean::get_Axis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"get_Axis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::SimpleLean::set_Axis(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"set_Axis", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Examples::Jobs::SimpleLean::get_Angle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"get_Angle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::SimpleLean::set_Angle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"set_Angle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::Jobs::SimpleLean::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::SimpleLean::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Jobs::SimpleLean::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Examples::Jobs::SimpleLean*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Jobs::SimpleLean* Animancer::Examples::Jobs::SimpleLean::New_ctor(::Animancer::AnimancerPlayable*  animancer, ::UnityEngine::Vector3  axis, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  leanBones)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Jobs::SimpleLean*>(animancer, axis, leanBones));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Animancer::Examples::Jobs::SimpleLean::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Animancer::Examples::Jobs::SimpleLean::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Jobs::SimpleLean::SimpleLean()   {
}
