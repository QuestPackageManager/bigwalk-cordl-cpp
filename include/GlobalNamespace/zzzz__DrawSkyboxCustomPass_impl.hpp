#pragma once
// IWYU pragma private; include "GlobalNamespace/DrawSkyboxCustomPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__DrawSkyboxCustomPass_def.hpp"
#include "GlobalNamespace/zzzz__DrawSkyboxCustomPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawSkyboxCustomPass_PassData::*)()>(&::GlobalNamespace::DrawSkyboxCustomPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_skyRendererListHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyRendererListHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_skyRendererListHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyRendererListHandle;
}
constexpr void GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_set_skyRendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyRendererListHandle = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_viewMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_viewMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewMatrix;
}
constexpr void GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___viewMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_projectionMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_get_projectionMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionMatrix;
}
constexpr void GlobalNamespace::DrawSkyboxCustomPass_PassData::__cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectionMatrix = value;
}
inline void GlobalNamespace::DrawSkyboxCustomPass_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DrawSkyboxCustomPass_PassData* GlobalNamespace::DrawSkyboxCustomPass_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawSkyboxCustomPass_PassData::DrawSkyboxCustomPass_PassData()   {
}
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawSkyboxCustomPass___c::*)()>(&::GlobalNamespace::DrawSkyboxCustomPass___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass___c._RecordRenderGraph_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawSkyboxCustomPass___c::*)(::GlobalNamespace::DrawSkyboxCustomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::DrawSkyboxCustomPass___c::_RecordRenderGraph_b__8_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803299e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass___c*>(),
                        {"<RecordRenderGraph>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DrawSkyboxCustomPass___c::setStaticF___9(::GlobalNamespace::DrawSkyboxCustomPass___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::DrawSkyboxCustomPass___c*, "<>9", ::GlobalNamespace::DrawSkyboxCustomPass___c*>(std::forward<::GlobalNamespace::DrawSkyboxCustomPass___c*>(value));
}
inline ::GlobalNamespace::DrawSkyboxCustomPass___c* GlobalNamespace::DrawSkyboxCustomPass___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::DrawSkyboxCustomPass___c*, "<>9", ::GlobalNamespace::DrawSkyboxCustomPass___c*>();
}
inline void GlobalNamespace::DrawSkyboxCustomPass___c::setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__8_0", ::GlobalNamespace::DrawSkyboxCustomPass___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* GlobalNamespace::DrawSkyboxCustomPass___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__8_0", ::GlobalNamespace::DrawSkyboxCustomPass___c*>();
}
inline void GlobalNamespace::DrawSkyboxCustomPass___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DrawSkyboxCustomPass___c::_RecordRenderGraph_b__8_0(::GlobalNamespace::DrawSkyboxCustomPass_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass___c*>(),
                        {"<RecordRenderGraph>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::DrawSkyboxCustomPass___c* GlobalNamespace::DrawSkyboxCustomPass___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrawSkyboxCustomPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawSkyboxCustomPass___c::DrawSkyboxCustomPass___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawSkyboxCustomPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*)>(&::GlobalNamespace::DrawSkyboxCustomPass::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180325510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.ExecutePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::GlobalNamespace::DrawSkyboxCustomPass_PassData*)>(&::GlobalNamespace::DrawSkyboxCustomPass::ExecutePass)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180324620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"ExecutePass", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawSkyboxCustomPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::DrawSkyboxCustomPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x180324b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                    {::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.GetDepthTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::GlobalNamespace::DrawSkyboxCustomPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::GlobalNamespace::DrawSkyboxCustomPass::GetDepthTarget)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180324740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"GetDepthTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.GetIntermediateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::GlobalNamespace::DrawSkyboxCustomPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::GlobalNamespace::DrawSkyboxCustomPass::GetIntermediateTarget)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803248b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"GetIntermediateTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.GetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::GlobalNamespace::DrawSkyboxCustomPass::GetCamera)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180324710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"GetCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.InitPassData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawSkyboxCustomPass::*)(::by_ref<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>, ::by_ref<::UnityEngine::Camera*>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>, ::by_ref<::UnityEngine::Material*>)>(&::GlobalNamespace::DrawSkyboxCustomPass::InitPassData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180324a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"InitPassData", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawSkyboxCustomPass.CreateSkyBoxRendererList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::GlobalNamespace::DrawSkyboxCustomPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Camera*)>(&::GlobalNamespace::DrawSkyboxCustomPass::CreateSkyBoxRendererList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803245e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"CreateSkyBoxRendererList", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& GlobalNamespace::DrawSkyboxCustomPass::__cordl_internal_get_colorTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& GlobalNamespace::DrawSkyboxCustomPass::__cordl_internal_get_colorTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr void GlobalNamespace::DrawSkyboxCustomPass::__cordl_internal_set_colorTargetHandle(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTargetHandle = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DrawSkyboxCustomPass::__cordl_internal_get_mirrorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DrawSkyboxCustomPass::__cordl_internal_get_mirrorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorMaterial;
}
constexpr void GlobalNamespace::DrawSkyboxCustomPass::__cordl_internal_set_mirrorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mirrorMaterial = value;
}
inline void GlobalNamespace::DrawSkyboxCustomPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt, ::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Material*  mirrorMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, colorTarget, mirrorMaterial);
}
inline void GlobalNamespace::DrawSkyboxCustomPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::GlobalNamespace::DrawSkyboxCustomPass_PassData*  passData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"ExecutePass", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData);
}
inline void GlobalNamespace::DrawSkyboxCustomPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle GlobalNamespace::DrawSkyboxCustomPass::GetDepthTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"GetDepthTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle GlobalNamespace::DrawSkyboxCustomPass::GetIntermediateTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"GetIntermediateTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::DrawSkyboxCustomPass::GetCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"GetCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DrawSkyboxCustomPass::InitPassData(::by_ref<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>  passData, ::by_ref<::UnityEngine::Camera*>  camera, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>  handle, ::by_ref<::UnityEngine::Material*>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"InitPassData", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData, camera, handle, material);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle GlobalNamespace::DrawSkyboxCustomPass::CreateSkyBoxRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawSkyboxCustomPass*>(),
                        {"CreateSkyBoxRendererList", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, renderGraph, camera);
}
inline ::GlobalNamespace::DrawSkyboxCustomPass* GlobalNamespace::DrawSkyboxCustomPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt, ::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Material*  mirrorMaterial)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DrawSkyboxCustomPass*>(evt, colorTarget, mirrorMaterial));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawSkyboxCustomPass::DrawSkyboxCustomPass()   {
}
