#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleShadowsURP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleShadowsURP_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleShadowsURP_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP_PassData.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleShadowsURP_PassData::*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*)>(&::WaveHarmonic::Crest::SampleShadowsURP_PassData::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182578ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleShadowsURP_PassData::*)()>(&::WaveHarmonic::Crest::SampleShadowsURP_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_get_cameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_get_cameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr void WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_get_lightData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_get_lightData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightData;
}
constexpr void WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightData = value;
}
constexpr ::UnityEngine::Rendering::CullingResults& WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_get_cullResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullResults;
}
constexpr ::UnityEngine::Rendering::CullingResults const& WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_get_cullResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullResults;
}
constexpr void WaveHarmonic::Crest::SampleShadowsURP_PassData::__cordl_internal_set_cullResults(::UnityEngine::Rendering::CullingResults  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cullResults = value;
}
inline void WaveHarmonic::Crest::SampleShadowsURP_PassData::Init(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameData, builder);
}
inline void WaveHarmonic::Crest::SampleShadowsURP_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SampleShadowsURP_PassData* WaveHarmonic::Crest::SampleShadowsURP_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleShadowsURP_PassData::SampleShadowsURP_PassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleShadowsURP::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::SampleShadowsURP::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18257e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP.get_Created
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::SampleShadowsURP::get_Created)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18257e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"get_Created", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleShadowsURP::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::WaveHarmonic::Crest::SampleShadowsURP::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18257e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::SampleShadowsURP::Enable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18257df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP.EnqueuePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::SampleShadowsURP::EnqueuePass)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18257e050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleShadowsURP::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::WaveHarmonic::Crest::SampleShadowsURP_PassData*)>(&::WaveHarmonic::Crest::SampleShadowsURP::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18257e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleShadowsURP._RecordRenderGraph_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleShadowsURP::*)(::WaveHarmonic::Crest::SampleShadowsURP_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::WaveHarmonic::Crest::SampleShadowsURP::_RecordRenderGraph_b__2_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18257e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"<RecordRenderGraph>b__2_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::SampleShadowsURP_PassData*& WaveHarmonic::Crest::SampleShadowsURP::__cordl_internal_get__PassData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr ::WaveHarmonic::Crest::SampleShadowsURP_PassData* const& WaveHarmonic::Crest::SampleShadowsURP::__cordl_internal_get__PassData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr void WaveHarmonic::Crest::SampleShadowsURP::__cordl_internal_set__PassData(::WaveHarmonic::Crest::SampleShadowsURP_PassData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PassData = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::SampleShadowsURP::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::SampleShadowsURP::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::SampleShadowsURP::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
inline void WaveHarmonic::Crest::SampleShadowsURP::setStaticF_s_Instance(::WaveHarmonic::Crest::SampleShadowsURP*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::SampleShadowsURP*, "s_Instance", ::WaveHarmonic::Crest::SampleShadowsURP*>(std::forward<::WaveHarmonic::Crest::SampleShadowsURP*>(value));
}
inline ::WaveHarmonic::Crest::SampleShadowsURP* WaveHarmonic::Crest::SampleShadowsURP::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::SampleShadowsURP*, "s_Instance", ::WaveHarmonic::Crest::SampleShadowsURP*>();
}
inline void WaveHarmonic::Crest::SampleShadowsURP::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline bool WaveHarmonic::Crest::SampleShadowsURP::get_Created()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"get_Created", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::SampleShadowsURP::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPassEvent);
}
inline void WaveHarmonic::Crest::SampleShadowsURP::Enable(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, water);
}
inline void WaveHarmonic::Crest::SampleShadowsURP::EnqueuePass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::SampleShadowsURP::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::SampleShadowsURP_PassData*  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer, renderingData);
}
inline void WaveHarmonic::Crest::SampleShadowsURP::_RecordRenderGraph_b__2_0(::WaveHarmonic::Crest::SampleShadowsURP_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleShadowsURP*>(),
                        {"<RecordRenderGraph>b__2_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::SampleShadowsURP_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::SampleShadowsURP* WaveHarmonic::Crest::SampleShadowsURP::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SampleShadowsURP*>(renderPassEvent));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleShadowsURP::SampleShadowsURP()   {
}
