#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineUniversal.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineUniversal_impl.hpp"
#include "MA/Flora/zzzz__FloraRenderPipeline_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineUniversal_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineCameraSettings_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineType_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineUniversal_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_InstancingPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::MA::Flora::FloraRenderPipelineUniversal_InstancingPass::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181500550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_InstancingPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraRenderPipelineUniversal_InstancingPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_InstancingPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPassEvent);
}
inline ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass* MA::Flora::FloraRenderPipelineUniversal_InstancingPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineUniversal_InstancingPass*>(renderPassEvent));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass::FloraRenderPipelineUniversal_InstancingPass()   {
}
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::*)()>(&::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f89f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1814f87e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass* MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass::FloraRenderPipelineUniversal_FloraVisibilityPass()   {
}
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::*)()>(&::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x1814f7ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass* MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass::FloraRenderPipelineUniversal_FloraOcclusionDepthPass()   {
}
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::*)()>(&::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814f7a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass* MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass()   {
}
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::*)()>(&::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814f7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass* MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass()   {
}
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal.get_PipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraRenderPipelineType (::MA::Flora::FloraRenderPipelineUniversal::*)()>(&::MA::Flora::FloraRenderPipelineUniversal::get_PipelineType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal::*)()>(&::MA::Flora::FloraRenderPipelineUniversal::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814f8390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal::*)()>(&::MA::Flora::FloraRenderPipelineUniversal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal.EnqueueCameraPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal::*)(::UnityEngine::Camera*, ::MA::Flora::FloraRenderPipelineCameraSettings)>(&::MA::Flora::FloraRenderPipelineUniversal::EnqueueCameraPasses)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814f8270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineUniversal.ApplyDebugDisplaySettingsHack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineUniversal::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(&::MA::Flora::FloraRenderPipelineUniversal::ApplyDebugDisplaySettingsHack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                        {"ApplyDebugDisplaySettingsHack", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_VisibilityPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibilityPass;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass* const& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_VisibilityPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibilityPass;
}
constexpr void MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_set_m_VisibilityPass(::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisibilityPass = value;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_OcclusionDepthPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionDepthPass;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass* const& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_OcclusionDepthPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionDepthPass;
}
constexpr void MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_set_m_OcclusionDepthPass(::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OcclusionDepthPass = value;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_DebugOccluderDepthOverlayPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOccluderDepthOverlayPass;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass* const& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_DebugOccluderDepthOverlayPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOccluderDepthOverlayPass;
}
constexpr void MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_set_m_DebugOccluderDepthOverlayPass(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugOccluderDepthOverlayPass = value;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_DebugOcclusionTestOverlayPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOcclusionTestOverlayPass;
}
constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass* const& MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_get_m_DebugOcclusionTestOverlayPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOcclusionTestOverlayPass;
}
constexpr void MA::Flora::FloraRenderPipelineUniversal::__cordl_internal_set_m_DebugOcclusionTestOverlayPass(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugOcclusionTestOverlayPass = value;
}
inline ::MA::Flora::FloraRenderPipelineType MA::Flora::FloraRenderPipelineUniversal::get_PipelineType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraRenderPipelineType>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineUniversal::EnqueueCameraPasses(::UnityEngine::Camera*  camera, ::MA::Flora::FloraRenderPipelineCameraSettings  cameraSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cameraSettings);
}
inline void MA::Flora::FloraRenderPipelineUniversal::ApplyDebugDisplaySettingsHack(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineUniversal*>(),
                        {"ApplyDebugDisplaySettingsHack", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline ::MA::Flora::FloraRenderPipelineUniversal* MA::Flora::FloraRenderPipelineUniversal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineUniversal*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineUniversal::FloraRenderPipelineUniversal()   {
}
