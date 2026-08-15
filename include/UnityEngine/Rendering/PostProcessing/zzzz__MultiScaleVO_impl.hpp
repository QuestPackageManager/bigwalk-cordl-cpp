#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MultiScaleVO.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MultiScaleVO_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusion_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IAmbientOcclusionMethod_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MultiScaleVO_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::MultiScaleVO_MipLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::MultiScaleVO_MipLevel()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::Original{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::L1{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::L2{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::L3{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::L4{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::L5{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel::L6{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass::MultiScaleVO_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass::MultiScaleVO_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass  UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass::DepthCopy{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass  UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass::CompositionDeferred{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass  UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass::CompositionForward{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass  UnityEngine::Rendering::PostProcessing::MultiScaleVO_Pass::DebugOverlay{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x181fbb2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)()>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::GetCameraFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.SetResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessResources*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::SetResources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"SetResources", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel, ::UnityEngine::RenderTextureFormat, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::Alloc)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fb8530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"Alloc", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.AllocArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel, ::UnityEngine::RenderTextureFormat, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::AllocArray)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fb8420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"AllocArray", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fbae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.CalculateZBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::CalculateZBufferParams)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fb8670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CalculateZBufferParams", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.CalculateTanHalfFovHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::CalculateTanHalfFovHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fb8640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CalculateTanHalfFovHeight", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::GetSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fb9350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GetSize", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.GetSizeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::GetSizeArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fb9310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GetSizeArray", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.GenerateAOMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::GenerateAOMap)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x181fb8a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GenerateAOMap", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PushAllocCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, bool, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushAllocCommands)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x181fb9440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushAllocCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PushDownsampleCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>, bool)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushDownsampleCommands)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x181fb9c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushDownsampleCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PushRenderCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t, ::UnityEngine::Vector3, float_t, bool)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushRenderCommands)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x181fba520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushRenderCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PushUpsampleCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t, int32_t, ::System::Nullable_1<int32_t>, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Vector3, ::UnityEngine::Vector2, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushUpsampleCommands)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181fbaa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushUpsampleCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PushReleaseCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushReleaseCommands)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181fba350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushReleaseCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PreparePropertySheet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PreparePropertySheet)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fb9380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PreparePropertySheet", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.CheckAOTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::CheckAOTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fb8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CheckAOTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.PushDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushDebug)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fb9b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushDebug", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.RenderAfterOpaque
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::RenderAfterOpaque)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181fbaed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"RenderAfterOpaque", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.RenderAmbientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::RenderAmbientOnly)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fbb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"RenderAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.CompositeAmbientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::CompositeAmbientOnly)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181fb8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CompositeAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MultiScaleVO.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MultiScaleVO::*)()>(&::UnityEngine::Rendering::PostProcessing::MultiScaleVO::Release)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fbaea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_SampleThickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleThickness;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_SampleThickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleThickness;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_SampleThickness(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleThickness = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_InvThicknessTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InvThicknessTable;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_InvThicknessTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InvThicknessTable;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_InvThicknessTable(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InvThicknessTable = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_SampleWeightTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleWeightTable;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_SampleWeightTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleWeightTable;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_SampleWeightTable(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleWeightTable = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Widths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Widths;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Widths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Widths;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_Widths(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Widths = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Heights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Heights;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Heights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Heights;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_Heights(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Heights = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_ScaledWidths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaledWidths;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_ScaledWidths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaledWidths;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_ScaledWidths(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaledWidths = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_ScaledHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaledHeights;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_ScaledHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaledHeights;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_ScaledHeights(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaledHeights = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_Settings(::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet*& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_PropertySheet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheet;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet* const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_PropertySheet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheet;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_PropertySheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertySheet = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Resources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_Resources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resources = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_AmbientOnlyAO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AmbientOnlyAO;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_AmbientOnlyAO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AmbientOnlyAO;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_AmbientOnlyAO(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AmbientOnlyAO = value;
}
constexpr ::UnityEngine::RenderTextureFormat& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_R8Format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_R8Format;
}
constexpr ::UnityEngine::RenderTextureFormat const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_R8Format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_R8Format;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_R8Format(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_R8Format = value;
}
constexpr ::UnityEngine::RenderTextureFormat& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_R16Format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_R16Format;
}
constexpr ::UnityEngine::RenderTextureFormat const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_R16Format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_R16Format;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_R16Format(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_R16Format = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_float4Texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___float4Texture;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_float4Texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___float4Texture;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_float4Texture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___float4Texture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_MRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MRT;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_get_m_MRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MRT;
}
constexpr void UnityEngine::Rendering::PostProcessing::MultiScaleVO::__cordl_internal_set_m_MRT(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MRT = value;
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::_ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::MultiScaleVO::GetCameraFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::SetResources(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"SetResources", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::Alloc(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  id, ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  size, ::UnityEngine::RenderTextureFormat  format, bool  uav, bool  dynamicScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"Alloc", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, id, size, format, uav, dynamicScale);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::AllocArray(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  id, ::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  size, ::UnityEngine::RenderTextureFormat  format, bool  uav, bool  dynamicScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"AllocArray", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, id, size, format, uav, dynamicScale);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::Release(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, id);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::MultiScaleVO::CalculateZBufferParams(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CalculateZBufferParams", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, camera);
}
inline float_t UnityEngine::Rendering::PostProcessing::MultiScaleVO::CalculateTanHalfFovHeight(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CalculateTanHalfFovHeight", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, camera);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PostProcessing::MultiScaleVO::GetSize(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  mip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GetSize", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, mip);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::MultiScaleVO::GetSizeArray(::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel  mip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GetSizeArray", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO_MipLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, mip);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::GenerateAOMap(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>  depthMap, bool  invert, bool  isMSAA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"GenerateAOMap", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera, destination, depthMap, invert, isMSAA);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushAllocCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  isMSAA, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushAllocCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, isMSAA, camera);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushDownsampleCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>  depthMap, bool  isMSAA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushDownsampleCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera, depthMap, isMSAA);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushRenderCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  source, int32_t  destination, ::UnityEngine::Vector3  sourceSize, float_t  tanHalfFovH, bool  isMSAA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushRenderCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, sourceSize, tanHalfFovH, isMSAA);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushUpsampleCommands(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  lowResDepth, int32_t  interleavedAO, int32_t  highResDepth, ::System::Nullable_1<int32_t>  highResAO, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Vector3  lowResDepthSize, ::UnityEngine::Vector2  highResDepthSize, bool  isMSAA, bool  invert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushUpsampleCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lowResDepth, interleavedAO, highResDepth, highResAO, dest, lowResDepthSize, highResDepthSize, isMSAA, invert);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushReleaseCommands(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushReleaseCommands", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PreparePropertySheet(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PreparePropertySheet", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::CheckAOTexture(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CheckAOTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::PushDebug(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"PushDebug", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::RenderAfterOpaque(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"RenderAfterOpaque", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::RenderAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"RenderAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::CompositeAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"CompositeAmbientOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MultiScaleVO::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::MultiScaleVO* UnityEngine::Rendering::PostProcessing::MultiScaleVO::New_ctor(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::MultiScaleVO*>(settings));
}
/// @brief Convert operator to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr  UnityEngine::Rendering::PostProcessing::MultiScaleVO::operator ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*() noexcept {
return static_cast<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod"
constexpr ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* UnityEngine::Rendering::PostProcessing::MultiScaleVO::i___UnityEngine__Rendering__PostProcessing__IAmbientOcclusionMethod() noexcept {
return static_cast<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MultiScaleVO::MultiScaleVO()   {
}
