#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaskRendererURP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRendererURP_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRendererURP_def.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::*)()>(&::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::__cordl_internal_get__CameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::__cordl_internal_get__CameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraData;
}
constexpr void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::__cordl_internal_set__CameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraData = value;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer*& WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer* const& WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::MaskRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
inline void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData* WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData::MaskRenderPass_MaskRendererURP_PassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::*)()>(&::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c._RecordRenderGraph_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::*)(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::_RecordRenderGraph_b__5_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825a3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(),
                        {"<RecordRenderGraph>b__5_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::setStaticF___9(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*, "<>9", ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(std::forward<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(value));
}
inline ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c* WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*, "<>9", ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>();
}
inline void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__5_0", ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__5_0", ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>();
}
inline void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::_RecordRenderGraph_b__5_0(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>(),
                        {"<RecordRenderGraph>b__5_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c* WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c::MaskRenderPass_MaskRendererURP___c()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::*)()>(&::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a1a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass.EnqueuePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::EnqueuePass)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825a1720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1825a1780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::MaskRenderer*& WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer* const& WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::MaskRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
inline void WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::EnqueuePass(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass* WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass::MaskRendererURP_MaskRenderPass()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererURP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererURP::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::MaskRendererURP::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825a1dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererURP.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererURP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRendererURP::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825a1d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererURP.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererURP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRendererURP::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*& WaveHarmonic::Crest::MaskRendererURP::__cordl_internal_get__MaskRenderPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskRenderPass;
}
constexpr ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass* const& WaveHarmonic::Crest::MaskRendererURP::__cordl_internal_get__MaskRenderPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskRenderPass;
}
constexpr void WaveHarmonic::Crest::MaskRendererURP::__cordl_internal_set__MaskRenderPass(::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaskRenderPass = value;
}
inline void WaveHarmonic::Crest::MaskRendererURP::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::MaskRendererURP::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MaskRendererURP::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererURP*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::WaveHarmonic::Crest::MaskRendererURP* WaveHarmonic::Crest::MaskRendererURP::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaskRendererURP*>(water));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRendererURP::MaskRendererURP()   {
}
