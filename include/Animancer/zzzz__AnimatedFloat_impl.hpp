#pragma once
// IWYU pragma private; include "Animancer/AnimatedFloat.hpp"
#include "Animancer/zzzz__AnimatedProperty_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_impl.hpp"
#include "Animancer/zzzz__AnimatedFloat_def.hpp"
#include "Animancer/zzzz__AnimatedFloat_def.hpp"
#include "Animancer/zzzz__IAnimancerComponent_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
//  Writing Method size for method: ::Animancer::AnimatedFloat_Job.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedFloat_Job::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::AnimatedFloat_Job::ProcessRootMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat_Job>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedFloat_Job.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedFloat_Job::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::AnimatedFloat_Job::ProcessAnimation)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18030cf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat_Job>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::AnimatedFloat_Job::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat_Job>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::AnimatedFloat_Job::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat_Job>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr  Animancer::AnimatedFloat_Job::operator ::UnityEngine::Animations::IAnimationJob*()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* Animancer::AnimatedFloat_Job::i___UnityEngine__Animations__IAnimationJob()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "properties", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "values", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::AnimatedFloat_Job::AnimatedFloat_Job(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  properties, ::Unity::Collections::NativeArray_1<float_t>  values) noexcept  {
this->properties = properties;
this->values = values;
}
// Ctor Parameters []
constexpr ::Animancer::AnimatedFloat_Job::AnimatedFloat_Job()   {
}
//  Writing Method size for method: ::Animancer::AnimatedFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedFloat::*)(::Animancer::IAnimancerComponent*, int32_t, ::Unity::Collections::NativeArrayOptions)>(&::Animancer::AnimatedFloat::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedFloat::*)(::Animancer::IAnimancerComponent*, ::StringW)>(&::Animancer::AnimatedFloat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedFloat::*)(::Animancer::IAnimancerComponent*, ::ArrayW<::StringW>)>(&::Animancer::AnimatedFloat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedFloat.CreateJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedFloat::*)()>(&::Animancer::AnimatedFloat::CreateJob)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                    {::i2c::class_of<::Animancer::AnimatedFloat*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Animancer::AnimatedFloat::_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyCount, options);
}
inline void Animancer::AnimatedFloat::_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyName);
}
inline void Animancer::AnimatedFloat::_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyNames);
}
inline void Animancer::AnimatedFloat::CreateJob()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimatedFloat*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimatedFloat* Animancer::AnimatedFloat::New_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedFloat*>(animancer, propertyCount, options));
}
inline ::Animancer::AnimatedFloat* Animancer::AnimatedFloat::New_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedFloat*>(animancer, propertyName));
}
inline ::Animancer::AnimatedFloat* Animancer::AnimatedFloat::New_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedFloat*>(animancer, propertyNames));
}
// Ctor Parameters []
constexpr ::Animancer::AnimatedFloat::AnimatedFloat()   {
}
