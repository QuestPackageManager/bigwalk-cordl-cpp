#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionContext.hpp"
#include "MA/Flora/zzzz__OccluderDepthPyramidConstants_impl.hpp"
#include "MA/Flora/zzzz__OccluderDerivedData_impl.hpp"
#include "MA/Flora/zzzz__OccluderMipBounds_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "MA/Flora/zzzz__OcclusionContext_def.hpp"
#include "MA/Flora/zzzz__OccluderDepthPyramidConstants_def.hpp"
#include "MA/Flora/zzzz__OccluderHandles_def.hpp"
#include "MA/Flora/zzzz__OccluderParameters_def.hpp"
#include "MA/Flora/zzzz__OcclusionContext_def.hpp"
#include "MA/Flora/zzzz__OcclusionDebugOutput_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
inline void MA::Flora::OcclusionContext_LocalNameID::setStaticF_SrcDepth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcDepth", ::MA::Flora::OcclusionContext_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::OcclusionContext_LocalNameID::getStaticF_SrcDepth()  {
return ::cordl_internals::getStaticField<int32_t, "SrcDepth", ::MA::Flora::OcclusionContext_LocalNameID*>();
}
inline void MA::Flora::OcclusionContext_LocalNameID::setStaticF_DstDepth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstDepth", ::MA::Flora::OcclusionContext_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::OcclusionContext_LocalNameID::getStaticF_DstDepth()  {
return ::cordl_internals::getStaticField<int32_t, "DstDepth", ::MA::Flora::OcclusionContext_LocalNameID*>();
}
inline void MA::Flora::OcclusionContext_LocalNameID::setStaticF_OccluderDepthPyramidConstants(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OccluderDepthPyramidConstants", ::MA::Flora::OcclusionContext_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::OcclusionContext_LocalNameID::getStaticF_OccluderDepthPyramidConstants()  {
return ::cordl_internals::getStaticField<int32_t, "OccluderDepthPyramidConstants", ::MA::Flora::OcclusionContext_LocalNameID*>();
}
inline void MA::Flora::OcclusionContext_LocalNameID::setStaticF_OverlayOpacity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OverlayOpacity", ::MA::Flora::OcclusionContext_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::OcclusionContext_LocalNameID::getStaticF_OverlayOpacity()  {
return ::cordl_internals::getStaticField<int32_t, "OverlayOpacity", ::MA::Flora::OcclusionContext_LocalNameID*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionContext_LocalNameID::OcclusionContext_LocalNameID()   {
}
//  Writing Method size for method: ::MA::Flora::OcclusionContext.get_SubviewCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::get_SubviewCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_SubviewCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.IsSubviewValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OcclusionContext::*)(int32_t)>(&::MA::Flora::OcclusionContext::IsSubviewValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814cff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"IsSubviewValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.get_DepthBufferSizeInOccluderPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::get_DepthBufferSizeInOccluderPixels)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814c2690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_DepthBufferSizeInOccluderPixels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.get_IsDebugValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::get_IsDebugValid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_IsDebugValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814cfae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.UpdateMipBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::UpdateMipBounds)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1814d0970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"UpdateMipBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.AllocateTexturesIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionContext::*)(bool)>(&::MA::Flora::OcclusionContext::AllocateTexturesIfNecessary)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1814cf2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"AllocateTexturesIfNecessary", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.SetupFarDepthPyramidConstants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderDepthPyramidConstants (::MA::Flora::OcclusionContext::*)(::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>)>(&::MA::Flora::OcclusionContext::SetupFarDepthPyramidConstants)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x1814d00e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"SetupFarDepthPyramidConstants", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.CreateDepthPyramid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionContext::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>, ::by_ref<::MA::Flora::OccluderHandles>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::UnityEngine::ComputeShader*, int32_t)>(&::MA::Flora::OcclusionContext::CreateDepthPyramid)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x1814cf520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"CreateDepthPyramid", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderHandles>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.NextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::NextFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814cff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"NextFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderHandles (::MA::Flora::OcclusionContext::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::MA::Flora::OcclusionContext::Import)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814cfdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"Import", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderHandles (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::Import)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814cfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"Import", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.PrepareOccluders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionContext::*)(::by_ref<::MA::Flora::OccluderParameters>)>(&::MA::Flora::OcclusionContext::PrepareOccluders)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814cffd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"PrepareOccluders", {}, {::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionContext.GetDebugOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OcclusionDebugOutput (::MA::Flora::OcclusionContext::*)()>(&::MA::Flora::OcclusionContext::GetDebugOutput)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1814cfbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"GetDebugOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::OcclusionContext::get_SubviewCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_SubviewCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::OcclusionContext::IsSubviewValid(int32_t  subviewIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"IsSubviewValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, subviewIndex);
}
inline ::UnityEngine::Vector2 MA::Flora::OcclusionContext::get_DepthBufferSizeInOccluderPixels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_DepthBufferSizeInOccluderPixels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline bool MA::Flora::OcclusionContext::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::OcclusionContext::get_IsDebugValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"get_IsDebugValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::OcclusionContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::OcclusionContext::UpdateMipBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"UpdateMipBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::OcclusionContext::AllocateTexturesIfNecessary(bool  debugOverlayEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"AllocateTexturesIfNecessary", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, debugOverlayEnabled);
}
inline ::MA::Flora::OccluderDepthPyramidConstants MA::Flora::OcclusionContext::SetupFarDepthPyramidConstants(::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdates, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  silhouettePlanes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"SetupFarDepthPyramidConstants", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderDepthPyramidConstants>(*this, ___internal_method, occluderSubviewUpdates, silhouettePlanes);
}
inline void MA::Flora::OcclusionContext::CreateDepthPyramid(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OccluderParameters>  occluderParams, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdates, ::by_ref<::MA::Flora::OccluderHandles>  occluderHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  silhouettePlanes, ::UnityEngine::ComputeShader*  occluderDepthPyramidCS, int32_t  occluderDepthDownscaleKernel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"CreateDepthPyramid", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderHandles>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, occluderParams, occluderSubviewUpdates, occluderHandles, silhouettePlanes, occluderDepthPyramidCS, occluderDepthDownscaleKernel);
}
inline void MA::Flora::OcclusionContext::NextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"NextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::OccluderHandles MA::Flora::OcclusionContext::Import(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"Import", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderHandles>(*this, ___internal_method, renderGraph);
}
inline ::MA::Flora::OccluderHandles MA::Flora::OcclusionContext::Import()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"Import", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderHandles>(*this, ___internal_method);
}
inline void MA::Flora::OcclusionContext::PrepareOccluders(::by_ref<::MA::Flora::OccluderParameters>  occluderParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"PrepareOccluders", {}, {::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, occluderParams);
}
inline ::MA::Flora::OcclusionDebugOutput MA::Flora::OcclusionContext::GetDebugOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionContext>(),
                        {"GetDebugOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OcclusionDebugOutput>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::OcclusionContext::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::OcclusionContext::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthBufferSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubviewData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDerivedData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubviewValidMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccluderMipBounds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::OccluderMipBounds>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccluderMipLayoutSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccluderDepthPyramidSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccluderDepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionDebugOverlaySize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionDebugOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DebugNeedsClear", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthPyramidConstantBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthPyramidConstantBufferData", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDepthPyramidConstants>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionContext::OcclusionContext(int32_t  Version, ::UnityEngine::Vector2Int  DepthBufferSize, ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDerivedData>  SubviewData, int32_t  SubviewValidMask, ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderMipBounds>  OccluderMipBounds, ::UnityEngine::Vector2Int  OccluderMipLayoutSize, ::UnityEngine::Vector2Int  OccluderDepthPyramidSize, ::UnityEngine::Rendering::RTHandle*  OccluderDepthPyramid, int32_t  OcclusionDebugOverlaySize, ::UnityEngine::GraphicsBuffer*  OcclusionDebugOverlay, bool  DebugNeedsClear, ::UnityEngine::GraphicsBuffer*  DepthPyramidConstantBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::OccluderDepthPyramidConstants>  DepthPyramidConstantBufferData) noexcept  {
this->Version = Version;
this->DepthBufferSize = DepthBufferSize;
this->SubviewData = SubviewData;
this->SubviewValidMask = SubviewValidMask;
this->OccluderMipBounds = OccluderMipBounds;
this->OccluderMipLayoutSize = OccluderMipLayoutSize;
this->OccluderDepthPyramidSize = OccluderDepthPyramidSize;
this->OccluderDepthPyramid = OccluderDepthPyramid;
this->OcclusionDebugOverlaySize = OcclusionDebugOverlaySize;
this->OcclusionDebugOverlay = OcclusionDebugOverlay;
this->DebugNeedsClear = DebugNeedsClear;
this->DepthPyramidConstantBuffer = DepthPyramidConstantBuffer;
this->DepthPyramidConstantBufferData = DepthPyramidConstantBufferData;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionContext::OcclusionContext()   {
}
