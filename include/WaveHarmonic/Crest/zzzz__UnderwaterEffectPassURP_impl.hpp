#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/UnderwaterEffectPassURP.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterEffectPassURP_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CopyDepthBufferPassURP_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderGraphHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterEffectPass_def.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPassURP::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1825a4510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPassURP::*)()>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a47f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::UnderwaterRenderer*)>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::Enable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1825a3f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::UnderwaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::Disable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825a3ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP.EnqueuePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPassURP::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::EnqueuePass)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1825a4080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP.OnSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPassURP::*)(::UnityEngine::Rendering::CommandBuffer*, ::WaveHarmonic::Crest::RenderGraphHelper_PassData*)>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::OnSetup)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1825a4310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"OnSetup", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPassURP::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::WaveHarmonic::Crest::RenderGraphHelper_PassData*)>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::Execute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1825a4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPassURP._RecordRenderGraph_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPassURP::*)(::WaveHarmonic::Crest::RenderGraphHelper_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::WaveHarmonic::Crest::UnderwaterEffectPassURP::_RecordRenderGraph_b__1_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825a46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"<RecordRenderGraph>b__1_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData*& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__PassData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData* const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__PassData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PassData;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__PassData(::WaveHarmonic::Crest::RenderGraphHelper_PassData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PassData = value;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::UnderwaterRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
constexpr ::WaveHarmonic::Crest::UnderwaterEffectPass*& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__UnderwaterEffectPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterEffectPass;
}
constexpr ::WaveHarmonic::Crest::UnderwaterEffectPass* const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__UnderwaterEffectPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderwaterEffectPass;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__UnderwaterEffectPass(::WaveHarmonic::Crest::UnderwaterEffectPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnderwaterEffectPass = value;
}
constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP*& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__CopyDepthBufferPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthBufferPass;
}
constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP* const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__CopyDepthBufferPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyDepthBufferPass;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__CopyDepthBufferPass(::WaveHarmonic::Crest::CopyDepthBufferPassURP*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyDepthBufferPass = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__ColorBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorBuffer;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__ColorBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorBuffer;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__ColorBuffer(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorBuffer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__DepthBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthBuffer;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__DepthBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthBuffer;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__DepthBuffer(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthBuffer = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__ErrorMissingColorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorMissingColorTarget;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_get__ErrorMissingColorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorMissingColorTarget;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPassURP::__cordl_internal_set__ErrorMissingColorTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorMissingColorTarget = value;
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::setStaticF_s_Instance(::WaveHarmonic::Crest::UnderwaterEffectPassURP*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::UnderwaterEffectPassURP*, "s_Instance", ::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(std::forward<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(value));
}
inline ::WaveHarmonic::Crest::UnderwaterEffectPassURP* WaveHarmonic::Crest::UnderwaterEffectPassURP::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::UnderwaterEffectPassURP*, "s_Instance", ::WaveHarmonic::Crest::UnderwaterEffectPassURP*>();
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::Enable(::WaveHarmonic::Crest::UnderwaterRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"Enable", {}, {::i2c::type_of<::WaveHarmonic::Crest::UnderwaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderer);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::EnqueuePass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::OnSetup(::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"OnSetup", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer, data);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPassURP::_RecordRenderGraph_b__1_0(::WaveHarmonic::Crest::RenderGraphHelper_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>(),
                        {"<RecordRenderGraph>b__1_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::UnderwaterEffectPassURP* WaveHarmonic::Crest::UnderwaterEffectPassURP::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::UnderwaterEffectPassURP*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterEffectPassURP::UnderwaterEffectPassURP()   {
}
