#pragma once
// IWYU pragma private; include "Enviro/EnviroHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroHelper_def.hpp"
#include "Enviro/zzzz__EnviroConfiguration_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroHelper.PingPong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Enviro::EnviroHelper::PingPong)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ff4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"PingPong", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.PingPong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Enviro::EnviroHelper::PingPong)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ff520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"PingPong", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.Remap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::Enviro::EnviroHelper::Remap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ff5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"Remap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.DestroyExtended
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::Enviro::EnviroHelper::DestroyExtended)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805feb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"DestroyExtended", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.CanRenderOnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::Enviro::EnviroHelper::CanRenderOnCamera)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805fe900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"CanRenderOnCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetDirectionalLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (*)()>(&::Enviro::EnviroHelper::GetDirectionalLight)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805feb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetDirectionalLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.CreateBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ComputeBuffer*>, int32_t, int32_t)>(&::Enviro::EnviroHelper::CreateBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805feaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"CreateBuffer", {}, {::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.ReleaseComputeBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ComputeBuffer*>)>(&::Enviro::EnviroHelper::ReleaseComputeBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ff5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"ReleaseComputeBuffer", {}, {::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetProjectionExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Camera*)>(&::Enviro::EnviroHelper::GetProjectionExtents)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805ff1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetProjectionExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Camera*, float_t, float_t)>(&::Enviro::EnviroHelper::GetProjectionExtents)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805fed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetProjectionExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Camera*, ::UnityEngine::Camera_StereoscopicEye)>(&::Enviro::EnviroHelper::GetProjectionExtents)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805fee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetProjectionExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Camera*, ::UnityEngine::Camera_StereoscopicEye, float_t, float_t)>(&::Enviro::EnviroHelper::GetProjectionExtents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1805feec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetQualityForCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Enviro::EnviroQuality> (*)(::UnityEngine::Camera*)>(&::Enviro::EnviroHelper::GetQualityForCamera)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805ff2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetQualityForCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.ResetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::Enviro::EnviroHelper::ResetMatrix)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805ff5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"ResetMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetDefaultPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnviroModule> (*)(::StringW)>(&::Enviro::EnviroHelper::GetDefaultPreset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetDefaultPreset", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroHelper.GetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Enviro::EnviroConfiguration> (*)(::StringW)>(&::Enviro::EnviroHelper::GetConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetConfig", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Enviro::EnviroHelper::setStaticF_assetPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "assetPath", ::Enviro::EnviroHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Enviro::EnviroHelper::getStaticF_assetPath()  {
return ::cordl_internals::getStaticField<::StringW, "assetPath", ::Enviro::EnviroHelper*>();
}
inline ::UnityEngine::Vector3 Enviro::EnviroHelper::PingPong(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"PingPong", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Enviro::EnviroHelper::PingPong(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"PingPong", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, value);
}
inline float_t Enviro::EnviroHelper::Remap(float_t  value, float_t  from1, float_t  to1, float_t  from2, float_t  to2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"Remap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, from1, to1, from2, to2);
}
inline void Enviro::EnviroHelper::DestroyExtended(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"DestroyExtended", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool Enviro::EnviroHelper::CanRenderOnCamera(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"CanRenderOnCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cam);
}
inline ::UnityW<::UnityEngine::Light> Enviro::EnviroHelper::GetDirectionalLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetDirectionalLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(nullptr, ___internal_method);
}
inline void Enviro::EnviroHelper::CreateBuffer(::by_ref<::UnityEngine::ComputeBuffer*>  buffer, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"CreateBuffer", {}, {::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, count, stride);
}
inline void Enviro::EnviroHelper::ReleaseComputeBuffer(::by_ref<::UnityEngine::ComputeBuffer*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"ReleaseComputeBuffer", {}, {::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline ::UnityEngine::Vector4 Enviro::EnviroHelper::GetProjectionExtents(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, camera);
}
inline ::UnityEngine::Vector4 Enviro::EnviroHelper::GetProjectionExtents(::UnityEngine::Camera*  camera, float_t  texelOffsetX, float_t  texelOffsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, camera, texelOffsetX, texelOffsetY);
}
inline ::UnityEngine::Vector4 Enviro::EnviroHelper::GetProjectionExtents(::UnityEngine::Camera*  camera, ::UnityEngine::Camera_StereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, camera, eye);
}
inline ::UnityEngine::Vector4 Enviro::EnviroHelper::GetProjectionExtents(::UnityEngine::Camera*  camera, ::UnityEngine::Camera_StereoscopicEye  eye, float_t  texelOffsetX, float_t  texelOffsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetProjectionExtents", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera_StereoscopicEye>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, camera, eye, texelOffsetX, texelOffsetY);
}
inline ::UnityW<::Enviro::EnviroQuality> Enviro::EnviroHelper::GetQualityForCamera(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetQualityForCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Enviro::EnviroQuality>>(nullptr, ___internal_method, cam);
}
inline bool Enviro::EnviroHelper::ResetMatrix(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"ResetMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cam);
}
inline ::UnityW<::GlobalNamespace::EnviroModule> Enviro::EnviroHelper::GetDefaultPreset(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetDefaultPreset", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnviroModule>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::Enviro::EnviroConfiguration> Enviro::EnviroHelper::GetConfig(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroHelper*>(),
                        {"GetConfig", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Enviro::EnviroConfiguration>>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::Enviro::EnviroHelper::EnviroHelper()   {
}
