#pragma once
// IWYU pragma private; include "MA/Flora/TransformUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__TransformUtility_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::Flora::TransformUtility.TransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(&::MA::Flora::TransformUtility::TransformRotation)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814c28f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"TransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TransformUtility.InverseTransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(&::MA::Flora::TransformUtility::InverseTransformRotation)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814c2750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"InverseTransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TransformUtility.TransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::MA::Flora::TransformUtility::TransformScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181513310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"TransformScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TransformUtility.InverseTransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::MA::Flora::TransformUtility::InverseTransformScale)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181513220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"InverseTransformScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TransformUtility.InverseTransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Transform*, float_t)>(&::MA::Flora::TransformUtility::InverseTransformScale)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181513160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"InverseTransformScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion MA::Flora::TransformUtility::TransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"TransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, transform, rotation);
}
inline ::UnityEngine::Quaternion MA::Flora::TransformUtility::InverseTransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"InverseTransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, transform, rotation);
}
inline ::UnityEngine::Vector3 MA::Flora::TransformUtility::TransformScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"TransformScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transform, scale);
}
inline ::UnityEngine::Vector3 MA::Flora::TransformUtility::InverseTransformScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"InverseTransformScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transform, scale);
}
inline float_t MA::Flora::TransformUtility::InverseTransformScale(::UnityEngine::Transform*  transform, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TransformUtility*>(),
                        {"InverseTransformScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, transform, scale);
}
// Ctor Parameters []
constexpr ::MA::Flora::TransformUtility::TransformUtility()   {
}
