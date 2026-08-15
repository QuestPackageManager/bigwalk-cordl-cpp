#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CopyDepthBufferPassURP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderGraphHelper_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CopyDepthBufferPassURP_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CopyDepthBufferPassURP_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*)>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::Init)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1825a2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::*)()>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_get_cameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_get_cameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraData = value;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_get_colorTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_get_colorTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_set_colorTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTargetHandle = value;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_get_depthTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTargetHandle;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_get_depthTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTargetHandle;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::__cordl_internal_set_depthTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthTargetHandle = value;
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::Init(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameData, builder);
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData* WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData::CopyDepthBufferPassURP_PassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18259eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18259f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP.OnSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP::*)(::UnityEngine::Rendering::CommandBuffer*, ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*)>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP::OnSetup)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18259e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"OnSetup", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*)>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP::Execute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18259e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP::*)()>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18259ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthBufferPassURP._RecordRenderGraph_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthBufferPassURP::*)(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::WaveHarmonic::Crest::CopyDepthBufferPassURP::_RecordRenderGraph_b__2_0)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18259ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"<RecordRenderGraph>b__2_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__PassData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData* const& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__PassData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_set__PassData(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PassData = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__ColorBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorBuffer;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__ColorBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorBuffer;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_set__ColorBuffer(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorBuffer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__DepthBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthBuffer;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__DepthBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthBuffer;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_set__DepthBuffer(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthBuffer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__DepthBufferCopy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthBufferCopy;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_get__DepthBufferCopy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthBufferCopy;
}
constexpr void WaveHarmonic::Crest::CopyDepthBufferPassURP::__cordl_internal_set__DepthBufferCopy(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthBufferCopy = value;
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  event)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, event);
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP::OnSetup(::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"OnSetup", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer, data);
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CopyDepthBufferPassURP::_RecordRenderGraph_b__2_0(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(),
                        {"<RecordRenderGraph>b__2_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::CopyDepthBufferPassURP* WaveHarmonic::Crest::CopyDepthBufferPassURP::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  event)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CopyDepthBufferPassURP*>(event));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP::CopyDepthBufferPassURP()   {
}
