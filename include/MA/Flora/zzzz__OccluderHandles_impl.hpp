#pragma once
// IWYU pragma private; include "MA/Flora/OccluderHandles.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "MA/Flora/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::MA::Flora::OccluderHandles.UseForOcclusionTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OccluderHandles::*)(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(&::MA::Flora::OccluderHandles::UseForOcclusionTest)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814cee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"UseForOcclusionTest", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles.UseForOccluderUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OccluderHandles::*)(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(&::MA::Flora::OccluderHandles::UseForOccluderUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814cedc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"UseForOccluderUpdate", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OccluderHandles::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::GraphicsBuffer*)>(&::MA::Flora::OccluderHandles::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814cef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OccluderHandles::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::GraphicsBuffer*)>(&::MA::Flora::OccluderHandles::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814ceee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles.GetDepthPyramid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::MA::Flora::OccluderHandles::*)()>(&::MA::Flora::OccluderHandles::GetDepthPyramid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814ced00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"GetDepthPyramid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles.GetDebugOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::MA::Flora::OccluderHandles::*)()>(&::MA::Flora::OccluderHandles::GetDebugOverlay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814cecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"GetDebugOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles.DisableDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OccluderHandles::*)()>(&::MA::Flora::OccluderHandles::DisableDebug)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814cec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"DisableDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OccluderHandles::*)()>(&::MA::Flora::OccluderHandles::IsValid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814ced70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderHandles.IsDebugValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OccluderHandles::*)()>(&::MA::Flora::OccluderHandles::IsDebugValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ced40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"IsDebugValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::OccluderHandles::UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"UseForOcclusionTest", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
inline void MA::Flora::OccluderHandles::UseForOccluderUpdate(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"UseForOccluderUpdate", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
inline void MA::Flora::OccluderHandles::_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Vector2Int  occluderDepthPyramidSize, ::UnityEngine::Rendering::RTHandle*  occluderDepthPyramid, ::UnityEngine::GraphicsBuffer*  occlusionDebugOverlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderGraph, occluderDepthPyramidSize, occluderDepthPyramid, occlusionDebugOverlay);
}
inline void MA::Flora::OccluderHandles::_ctor(::UnityEngine::Rendering::RTHandle*  depthPyramid, ::UnityEngine::GraphicsBuffer*  debugOverlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, depthPyramid, debugOverlay);
}
inline ::UnityEngine::Rendering::RTHandle* MA::Flora::OccluderHandles::GetDepthPyramid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"GetDepthPyramid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* MA::Flora::OccluderHandles::GetDebugOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"GetDebugOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline void MA::Flora::OccluderHandles::DisableDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"DisableDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::OccluderHandles::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::OccluderHandles::IsDebugValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderHandles>(),
                        {"IsDebugValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_DepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DebugOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ForRenderGraph", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthPyramidHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DebugOverlayHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OccluderHandles::OccluderHandles(::UnityEngine::Rendering::RTHandle*  m_DepthPyramid, ::UnityEngine::GraphicsBuffer*  m_DebugOverlay, bool  m_ForRenderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  m_DepthPyramidHandle, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  m_DebugOverlayHandle) noexcept  {
this->m_DepthPyramid = m_DepthPyramid;
this->m_DebugOverlay = m_DebugOverlay;
this->m_ForRenderGraph = m_ForRenderGraph;
this->m_DepthPyramidHandle = m_DepthPyramidHandle;
this->m_DebugOverlayHandle = m_DebugOverlayHandle;
}
// Ctor Parameters []
constexpr ::MA::Flora::OccluderHandles::OccluderHandles()   {
}
