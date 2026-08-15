#pragma once
// IWYU pragma private; include "MA/Flora/FloraTransformHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraTransformHelpers_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraTransformHelpers.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MA::Flora::FloraInstanceTransform>, ::UnityEngine::Transform*, ::UnityEngine::Space)>(&::MA::Flora::FloraTransformHelpers::CopyFrom)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814f3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTransformHelpers.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::MA::Flora::FloraInstanceTransform, ::UnityEngine::Space)>(&::MA::Flora::FloraTransformHelpers::CopyFrom)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814f39d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTransformHelpers.AsInstanceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::UnityEngine::Transform*, ::UnityEngine::Space)>(&::MA::Flora::FloraTransformHelpers::AsInstanceTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814f3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"AsInstanceTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTransformHelpers.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::UnityEngine::Transform*, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraTransformHelpers::Transform)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814f3df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTransformHelpers.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::UnityEngine::Transform*, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraTransformHelpers::InverseTransform)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814f3bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraTransformHelpers::CopyFrom(::by_ref<::MA::Flora::FloraInstanceTransform>  instanceTransform, ::UnityEngine::Transform*  transform, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::by_ref<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceTransform, transform, space);
}
inline void MA::Flora::FloraTransformHelpers::CopyFrom(::UnityEngine::Transform*  unityTransform, ::MA::Flora::FloraInstanceTransform  instanceTransform, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unityTransform, instanceTransform, space);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraTransformHelpers::AsInstanceTransform(::UnityEngine::Transform*  t, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"AsInstanceTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, t, space);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraTransformHelpers::Transform(::UnityEngine::Transform*  t, ::MA::Flora::FloraInstanceTransform  localInstanceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, t, localInstanceTransform);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraTransformHelpers::InverseTransform(::UnityEngine::Transform*  t, ::MA::Flora::FloraInstanceTransform  worldInstanceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTransformHelpers*>(),
                        {"InverseTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, t, worldInstanceTransform);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraTransformHelpers::FloraTransformHelpers()   {
}
