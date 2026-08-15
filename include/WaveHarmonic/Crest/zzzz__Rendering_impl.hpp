#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Rendering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Rendering_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Rendering_def.hpp"
inline void WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs::setStaticF_s_StereoInverseViewProjection(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_StereoInverseViewProjection", ::WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs::getStaticF_s_StereoInverseViewProjection()  {
return ::cordl_internals::getStaticField<int32_t, "s_StereoInverseViewProjection", ::WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs::setStaticF_s_InverseViewProjection(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InverseViewProjection", ::WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs::getStaticF_s_InverseViewProjection()  {
return ::cordl_internals::getStaticField<int32_t, "s_InverseViewProjection", ::WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_ShaderIDs::BIRP_Rendering_ShaderIDs()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride::BIRP_Rendering_FrameBufferFormatOverride(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride::BIRP_Rendering_FrameBufferFormatOverride()   {
}
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride  WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride  WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride::LDR{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride  WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride::HDR{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_UtilityPass::BIRP_Rendering_UtilityPass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_UtilityPass::BIRP_Rendering_UtilityPass()   {
}
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_UtilityPass  WaveHarmonic::Crest::BIRP_Rendering_UtilityPass::CopyDepth{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_UtilityPass  WaveHarmonic::Crest::BIRP_Rendering_UtilityPass::Copy{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::BIRP_Rendering_UtilityPass  WaveHarmonic::Crest::BIRP_Rendering_UtilityPass::MergeDepth{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.EnableXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Rendering_BIRP::EnableXR)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182563f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"EnableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.DisableXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Rendering_BIRP::DisableXR)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182563ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"DisableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.get_DisplayXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (*)()>(&::WaveHarmonic::Crest::Rendering_BIRP::get_DisplayXR)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182564b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_DisplayXR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.get_InverseViewProjectionMatrixXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (*)()>(&::WaveHarmonic::Crest::Rendering_BIRP::get_InverseViewProjectionMatrixXR)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182564bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_InverseViewProjectionMatrixXR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.set_InverseViewProjectionMatrixXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Matrix4x4>)>(&::WaveHarmonic::Crest::Rendering_BIRP::set_InverseViewProjectionMatrixXR)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182564e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"set_InverseViewProjectionMatrixXR", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.get_WhiteTextureXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (*)()>(&::WaveHarmonic::Crest::Rendering_BIRP::get_WhiteTextureXR)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182564cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_WhiteTextureXR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.SetMatricesXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Rendering_BIRP::SetMatricesXR)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x1825642c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"SetMatricesXR", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.GetWhiteTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Rendering_BIRP::GetWhiteTexture)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182564110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"GetWhiteTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.SetMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Rendering_BIRP::SetMatrices)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x182564860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"SetMatrices", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.GetCameraTargetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(::UnityEngine::Camera*, ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride)>(&::WaveHarmonic::Crest::Rendering_BIRP::GetCameraTargetDescriptor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182563fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"GetCameraTargetDescriptor", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_BIRP.get_UtilityMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::WaveHarmonic::Crest::Rendering_BIRP::get_UtilityMaterial)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182564c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_UtilityMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Rendering_BIRP::setStaticF_s_DisplayListXR(::System::Collections::Generic::List_1<Il2CppObject*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplayListXR", ::WaveHarmonic::Crest::Rendering_BIRP*>(std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* WaveHarmonic::Crest::Rendering_BIRP::getStaticF_s_DisplayListXR()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplayListXR", ::WaveHarmonic::Crest::Rendering_BIRP*>();
}
inline void WaveHarmonic::Crest::Rendering_BIRP::setStaticF__InverseViewProjectionMatrixXR_k__BackingField(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "<InverseViewProjectionMatrixXR>k__BackingField", ::WaveHarmonic::Crest::Rendering_BIRP*>(std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> WaveHarmonic::Crest::Rendering_BIRP::getStaticF__InverseViewProjectionMatrixXR_k__BackingField()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "<InverseViewProjectionMatrixXR>k__BackingField", ::WaveHarmonic::Crest::Rendering_BIRP*>();
}
inline void WaveHarmonic::Crest::Rendering_BIRP::setStaticF_s_WhiteTextureXR(::UnityW<::UnityEngine::Texture2DArray>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2DArray>, "s_WhiteTextureXR", ::WaveHarmonic::Crest::Rendering_BIRP*>(std::forward<::UnityW<::UnityEngine::Texture2DArray>>(value));
}
inline ::UnityW<::UnityEngine::Texture2DArray> WaveHarmonic::Crest::Rendering_BIRP::getStaticF_s_WhiteTextureXR()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2DArray>, "s_WhiteTextureXR", ::WaveHarmonic::Crest::Rendering_BIRP*>();
}
inline void WaveHarmonic::Crest::Rendering_BIRP::setStaticF_s_UtilityMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_UtilityMaterial", ::WaveHarmonic::Crest::Rendering_BIRP*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::Rendering_BIRP::getStaticF_s_UtilityMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_UtilityMaterial", ::WaveHarmonic::Crest::Rendering_BIRP*>();
}
inline void WaveHarmonic::Crest::Rendering_BIRP::EnableXR(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"EnableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commands, camera);
}
inline void WaveHarmonic::Crest::Rendering_BIRP::DisableXR(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"DisableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commands, camera);
}
inline Il2CppObject* WaveHarmonic::Crest::Rendering_BIRP::get_DisplayXR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_DisplayXR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> WaveHarmonic::Crest::Rendering_BIRP::get_InverseViewProjectionMatrixXR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_InverseViewProjectionMatrixXR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::Rendering_BIRP::set_InverseViewProjectionMatrixXR(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"set_InverseViewProjectionMatrixXR", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2DArray> WaveHarmonic::Crest::Rendering_BIRP::get_WhiteTextureXR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_WhiteTextureXR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::Rendering_BIRP::SetMatricesXR(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"SetMatricesXR", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline ::UnityW<::UnityEngine::Texture> WaveHarmonic::Crest::Rendering_BIRP::GetWhiteTexture(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"GetWhiteTexture", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Rendering_BIRP::SetMatrices(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"SetMatrices", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline ::UnityEngine::RenderTextureDescriptor WaveHarmonic::Crest::Rendering_BIRP::GetCameraTargetDescriptor(::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride  hdrOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"GetCameraTargetDescriptor", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::WaveHarmonic::Crest::BIRP_Rendering_FrameBufferFormatOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, camera, hdrOverride);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::Rendering_BIRP::get_UtilityMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_BIRP*>(),
                        {"get_UtilityMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Rendering_BIRP::Rendering_BIRP()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_URP.EnableXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::WaveHarmonic::Crest::Rendering_URP::EnableXR)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18256d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_URP*>(),
                        {"EnableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering_URP.DisableXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::WaveHarmonic::Crest::Rendering_URP::DisableXR)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18256d920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_URP*>(),
                        {"DisableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Rendering_URP::EnableXR(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Rendering::Universal::UniversalCameraData*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_URP*>(),
                        {"EnableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commands, camera);
}
inline void WaveHarmonic::Crest::Rendering_URP::DisableXR(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Rendering::Universal::UniversalCameraData*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering_URP*>(),
                        {"DisableXR", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commands, camera);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Rendering_URP::Rendering_URP()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.get_SinglePassKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GlobalKeyword (*)()>(&::WaveHarmonic::Crest::Rendering::get_SinglePassKeyword)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18256d620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_SinglePassKeyword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.get_EnabledXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Rendering::get_EnabledXR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fce6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_EnabledXR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.get_SinglePassXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Rendering::get_SinglePassXR)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_SinglePassXR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.get_MultiPassXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Rendering::get_MultiPassXR)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256d5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_MultiPassXR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.GetDefaultDepthStencilFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(&::WaveHarmonic::Crest::Rendering::GetDefaultDepthStencilFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182043cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthStencilFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.GetDefaultDepthOnlyFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(&::WaveHarmonic::Crest::Rendering::GetDefaultDepthOnlyFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182043cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthOnlyFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.GetDefaultDepthBufferBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DepthBits (*)()>(&::WaveHarmonic::Crest::Rendering::GetDefaultDepthBufferBits)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1809018a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthBufferBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.GetDefaultColorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(bool)>(&::WaveHarmonic::Crest::Rendering::GetDefaultColorFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultColorFormat", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.GetDefaultDepthFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(bool)>(&::WaveHarmonic::Crest::Rendering::GetDefaultDepthFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthFormat", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.get_IsRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Rendering::get_IsRenderGraph)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_IsRenderGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Rendering.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>)>(&::WaveHarmonic::Crest::Rendering::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Rendering::setStaticF_s_SinglePassInstancedKeyword(::UnityEngine::Rendering::GlobalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::GlobalKeyword, "s_SinglePassInstancedKeyword", ::WaveHarmonic::Crest::Rendering*>(std::forward<::UnityEngine::Rendering::GlobalKeyword>(value));
}
inline ::UnityEngine::Rendering::GlobalKeyword WaveHarmonic::Crest::Rendering::getStaticF_s_SinglePassInstancedKeyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GlobalKeyword, "s_SinglePassInstancedKeyword", ::WaveHarmonic::Crest::Rendering*>();
}
inline void WaveHarmonic::Crest::Rendering::setStaticF_s_SinglePassMultiViewKeyword(::UnityEngine::Rendering::GlobalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::GlobalKeyword, "s_SinglePassMultiViewKeyword", ::WaveHarmonic::Crest::Rendering*>(std::forward<::UnityEngine::Rendering::GlobalKeyword>(value));
}
inline ::UnityEngine::Rendering::GlobalKeyword WaveHarmonic::Crest::Rendering::getStaticF_s_SinglePassMultiViewKeyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GlobalKeyword, "s_SinglePassMultiViewKeyword", ::WaveHarmonic::Crest::Rendering*>();
}
inline ::UnityEngine::Rendering::GlobalKeyword WaveHarmonic::Crest::Rendering::get_SinglePassKeyword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_SinglePassKeyword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GlobalKeyword>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::Rendering::get_EnabledXR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_EnabledXR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::Rendering::get_SinglePassXR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_SinglePassXR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::Rendering::get_MultiPassXR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_MultiPassXR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Rendering::GetDefaultDepthStencilFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthStencilFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Rendering::GetDefaultDepthOnlyFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthOnlyFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::DepthBits WaveHarmonic::Crest::Rendering::GetDefaultDepthBufferBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthBufferBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DepthBits>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Rendering::GetDefaultColorFormat(bool  hdr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultColorFormat", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, hdr);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Rendering::GetDefaultDepthFormat(bool  stencil)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"GetDefaultDepthFormat", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, stencil);
}
inline bool WaveHarmonic::Crest::Rendering::get_IsRenderGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"get_IsRenderGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::Rendering::Destroy(::by_ref<::UnityEngine::Rendering::RTHandle*>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Rendering*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Rendering::Rendering()   {
}
