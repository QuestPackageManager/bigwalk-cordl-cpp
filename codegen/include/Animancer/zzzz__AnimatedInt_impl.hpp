#pragma once
// IWYU pragma private; include "Animancer/AnimatedInt.hpp"
#include "Animancer/zzzz__AnimatedProperty_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_impl.hpp"
#include "Animancer/zzzz__AnimatedInt_def.hpp"
#include "Animancer/zzzz__AnimatedInt_def.hpp"
#include "Animancer/zzzz__IAnimancerComponent_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
//  Writing Method size for method: ::Animancer::AnimatedInt_Job.ProcessRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedInt_Job::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::AnimatedInt_Job::ProcessRootMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt_Job>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedInt_Job.ProcessAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedInt_Job::*)(::UnityEngine::Animations::AnimationStream)>(&::Animancer::AnimatedInt_Job::ProcessAnimation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18030cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt_Job>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::AnimatedInt_Job::ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt_Job>(),
                        {"ProcessRootMotion", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Animancer::AnimatedInt_Job::ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt_Job>(),
                        {"ProcessAnimation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr  Animancer::AnimatedInt_Job::operator ::UnityEngine::Animations::IAnimationJob*()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* Animancer::AnimatedInt_Job::i___UnityEngine__Animations__IAnimationJob()  {
return static_cast<::UnityEngine::Animations::IAnimationJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "properties", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "values", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::AnimatedInt_Job::AnimatedInt_Job(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  properties, ::Unity::Collections::NativeArray_1<int32_t>  values) noexcept  {
this->properties = properties;
this->values = values;
}
// Ctor Parameters []
constexpr ::Animancer::AnimatedInt_Job::AnimatedInt_Job()   {
}
//  Writing Method size for method: ::Animancer::AnimatedInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedInt::*)(::Animancer::IAnimancerComponent*, int32_t, ::Unity::Collections::NativeArrayOptions)>(&::Animancer::AnimatedInt::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedInt::*)(::Animancer::IAnimancerComponent*, ::StringW)>(&::Animancer::AnimatedInt::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedInt::*)(::Animancer::IAnimancerComponent*, ::ArrayW<::StringW>)>(&::Animancer::AnimatedInt::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180303f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimatedInt.CreateJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimatedInt::*)()>(&::Animancer::AnimatedInt::CreateJob)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimatedInt*>(),
                    {::i2c::class_of<::Animancer::AnimatedInt*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Animancer::AnimatedInt::_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyCount, options);
}
inline void Animancer::AnimatedInt::_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyName);
}
inline void Animancer::AnimatedInt::_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedInt*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyNames);
}
inline void Animancer::AnimatedInt::CreateJob()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimatedInt*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimatedInt* Animancer::AnimatedInt::New_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedInt*>(animancer, propertyCount, options));
}
inline ::Animancer::AnimatedInt* Animancer::AnimatedInt::New_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedInt*>(animancer, propertyName));
}
inline ::Animancer::AnimatedInt* Animancer::AnimatedInt::New_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedInt*>(animancer, propertyNames));
}
// Ctor Parameters []
constexpr ::Animancer::AnimatedInt::AnimatedInt()   {
}
