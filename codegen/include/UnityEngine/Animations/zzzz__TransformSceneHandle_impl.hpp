#pragma once
// IWYU pragma private; include "UnityEngine/Animations/TransformSceneHandle.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.get_createdByNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)()>(&::UnityEngine::Animations::TransformSceneHandle::get_createdByNative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181458fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_createdByNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.get_hasTransformSceneHandleDefinitionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)()>(&::UnityEngine::Animations::TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822377c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_hasTransformSceneHandleDefinitionIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.CheckIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::UnityEngine::Animations::TransformSceneHandle::CheckIsValid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182237910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"CheckIsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animations::TransformSceneHandle::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::TransformSceneHandle::GetPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182237a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetPosition", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animations::TransformSceneHandle::*)(::UnityEngine::Animations::AnimationStream)>(&::UnityEngine::Animations::TransformSceneHandle::GetRotation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182237b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.HasValidTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::UnityEngine::Animations::TransformSceneHandle::HasValidTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182237c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"HasValidTransform", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetPositionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::UnityEngine::Animations::TransformSceneHandle::GetPositionInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822379f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetPositionInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetRotationInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Animations::TransformSceneHandle::*)(::by_ref<::UnityEngine::Animations::AnimationStream>)>(&::UnityEngine::Animations::TransformSceneHandle::GetRotationInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182237b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetRotationInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetPositionInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Animations::TransformSceneHandle>, ::by_ref<::UnityEngine::Animations::AnimationStream>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Animations::TransformSceneHandle::GetPositionInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822379e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetPositionInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::TransformSceneHandle.GetRotationInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Animations::TransformSceneHandle>, ::by_ref<::UnityEngine::Animations::AnimationStream>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Animations::TransformSceneHandle::GetRotationInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182237b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetRotationInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Animations::TransformSceneHandle::get_createdByNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_createdByNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"get_hasTransformSceneHandleDefinitionIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Animations::TransformSceneHandle::CheckIsValid(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"CheckIsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline ::UnityEngine::Vector3 UnityEngine::Animations::TransformSceneHandle::GetPosition(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetPosition", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, stream);
}
inline ::UnityEngine::Quaternion UnityEngine::Animations::TransformSceneHandle::GetRotation(::UnityEngine::Animations::AnimationStream  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, stream);
}
inline bool UnityEngine::Animations::TransformSceneHandle::HasValidTransform(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"HasValidTransform", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, stream);
}
inline ::UnityEngine::Vector3 UnityEngine::Animations::TransformSceneHandle::GetPositionInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetPositionInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, stream);
}
inline ::UnityEngine::Quaternion UnityEngine::Animations::TransformSceneHandle::GetRotationInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetRotationInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, stream);
}
inline void UnityEngine::Animations::TransformSceneHandle::GetPositionInternal_Injected(::by_ref<::UnityEngine::Animations::TransformSceneHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetPositionInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stream, ret);
}
inline void UnityEngine::Animations::TransformSceneHandle::GetRotationInternal_Injected(::by_ref<::UnityEngine::Animations::TransformSceneHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Quaternion>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::TransformSceneHandle>(),
                        {"GetRotationInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::AnimationStream>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stream, ret);
}
// Ctor Parameters [CppParam { name: "valid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformSceneHandleDefinitionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::TransformSceneHandle::TransformSceneHandle(uint32_t  valid, int32_t  transformSceneHandleDefinitionIndex) noexcept  {
this->valid = valid;
this->transformSceneHandleDefinitionIndex = transformSceneHandleDefinitionIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::TransformSceneHandle::TransformSceneHandle()   {
}
