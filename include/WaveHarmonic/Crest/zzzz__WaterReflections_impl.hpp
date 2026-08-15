#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterReflections.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflectionSide_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflections_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Skybox_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__QualitySettingsOverride_def.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflectionSide_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflections_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::*)()>(&::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_get__Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_get__Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_set__Source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_get__Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_get__Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_set__Target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Target = value;
}
constexpr int32_t& WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_get__Slice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Slice;
}
constexpr int32_t const& WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_get__Slice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Slice;
}
constexpr void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::__cordl_internal_set__Slice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Slice = value;
}
inline void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData* WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData::CopyDepthRenderPass_WaterReflections_CopyPassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::*)()>(&::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c._RecordRenderGraph_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::*)(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::_RecordRenderGraph_b__5_0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1825a3c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(),
                        {"<RecordRenderGraph>b__5_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::setStaticF___9(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*, "<>9", ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(std::forward<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(value));
}
inline ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c* WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*, "<>9", ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>();
}
inline void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__5_0", ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__5_0", ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>();
}
inline void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::_RecordRenderGraph_b__5_0(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>(),
                        {"<RecordRenderGraph>b__5_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c* WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c::CopyDepthRenderPass_WaterReflections___c()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::*)(::WaveHarmonic::Crest::WaterReflections*)>(&::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18259f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflections*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::*)()>(&::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18259f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18259f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::WaterReflections*& WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::WaterReflections* const& WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::WaterReflections*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::__cordl_internal_get__Wrapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wrapper;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::__cordl_internal_get__Wrapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wrapper;
}
constexpr void WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::__cordl_internal_set__Wrapper(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Wrapper = value;
}
inline void WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::_ctor(::WaveHarmonic::Crest::WaterReflections*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflections*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass* WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::New_ctor(::WaveHarmonic::Crest::WaterReflections*  renderer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*>(renderer));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass::WaterReflections_CopyDepthRenderPass()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections_DebugFields::*)()>(&::WaveHarmonic::Crest::WaterReflections_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_get__ShowHiddenObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowHiddenObjects;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_get__ShowHiddenObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowHiddenObjects;
}
constexpr void WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_set__ShowHiddenObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowHiddenObjects = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_get__DisableRecursiveRendering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableRecursiveRendering;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_get__DisableRecursiveRendering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableRecursiveRendering;
}
constexpr void WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_set__DisableRecursiveRendering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableRecursiveRendering = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_get__ForceCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceCompatibility;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_get__ForceCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceCompatibility;
}
constexpr void WaveHarmonic::Crest::WaterReflections_DebugFields::__cordl_internal_set__ForceCompatibility(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceCompatibility = value;
}
inline void WaveHarmonic::Crest::WaterReflections_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterReflections_DebugFields* WaveHarmonic::Crest::WaterReflections_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterReflections_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterReflections_DebugFields::WaterReflections_DebugFields()   {
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_ReflectionColorTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ReflectionColorTexture", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_ReflectionColorTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_ReflectionColorTexture", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_ReflectionDepthTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ReflectionDepthTexture", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_ReflectionDepthTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_ReflectionDepthTexture", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_ReflectionPositionNormal(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ReflectionPositionNormal", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_ReflectionPositionNormal()  {
return ::cordl_internals::getStaticField<int32_t, "s_ReflectionPositionNormal", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_ReflectionMatrixIVP(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ReflectionMatrixIVP", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_ReflectionMatrixIVP()  {
return ::cordl_internals::getStaticField<int32_t, "s_ReflectionMatrixIVP", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_ReflectionMatrixV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ReflectionMatrixV", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_ReflectionMatrixV()  {
return ::cordl_internals::getStaticField<int32_t, "s_ReflectionMatrixV", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_Crest_ReflectionOverscan(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Crest_ReflectionOverscan", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_Crest_ReflectionOverscan()  {
return ::cordl_internals::getStaticField<int32_t, "s_Crest_ReflectionOverscan", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::WaterReflections_ShaderIDs::setStaticF_s_PlanarReflectionsApplySmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PlanarReflectionsApplySmoothness", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WaterReflections_ShaderIDs::getStaticF_s_PlanarReflectionsApplySmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "s_PlanarReflectionsApplySmoothness", ::WaveHarmonic::Crest::WaterReflections_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterReflections_ShaderIDs::WaterReflections_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_AllowMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_AllowMSAA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_AllowMSAA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_AllowMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_AllowMSAA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_AllowMSAA", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_ClipPlaneOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_ClipPlaneOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ClipPlaneOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_ClipPlaneOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(float_t)>(&::WaveHarmonic::Crest::WaterReflections::set_ClipPlaneOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_ClipPlaneOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_DisableOcclusionCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_DisableOcclusionCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DisableOcclusionCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_DisableOcclusionCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_DisableOcclusionCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_DisableOcclusionCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_DisablePixelLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_DisablePixelLights)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DisablePixelLights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_DisablePixelLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_DisablePixelLights)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_DisablePixelLights", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_DisableShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_DisableShadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DisableShadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_DisableShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_DisableShadows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_DisableShadows", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_Enabled)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18259ced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_FarClipPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_FarClipPlane)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_FarClipPlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_FarClipPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(float_t)>(&::WaveHarmonic::Crest::WaterReflections::set_FarClipPlane)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_FarClipPlane", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_HDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_HDR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180489af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_HDR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_HDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_HDR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_HDR", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Layers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Layers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::LayerMask)>(&::WaveHarmonic::Crest::WaterReflections::set_Layers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Layers", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_ReflectionSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterReflectionSide (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_ReflectionSide)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ReflectionSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_ReflectionSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::WaveHarmonic::Crest::WaterReflectionSide)>(&::WaveHarmonic::Crest::WaterReflections::set_ReflectionSide)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_ReflectionSide", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_NonObliqueNearSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_NonObliqueNearSurface)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_NonObliqueNearSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_NonObliqueNearSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_NonObliqueNearSurface)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_NonObliqueNearSurface", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_NonObliqueNearSurfaceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_NonObliqueNearSurfaceThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_NonObliqueNearSurfaceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_NonObliqueNearSurfaceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(float_t)>(&::WaveHarmonic::Crest::WaterReflections::set_NonObliqueNearSurfaceThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_NonObliqueNearSurfaceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Overscan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Overscan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Overscan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Overscan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(float_t)>(&::WaveHarmonic::Crest::WaterReflections::set_Overscan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Overscan", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_QualitySettingsOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::QualitySettingsOverride* (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_QualitySettingsOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_QualitySettingsOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_QualitySettingsOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::WaveHarmonic::Crest::QualitySettingsOverride*)>(&::WaveHarmonic::Crest::WaterReflections::set_QualitySettingsOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_QualitySettingsOverride", {}, {::i2c::type_of<::WaveHarmonic::Crest::QualitySettingsOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_RendererIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_RendererIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RendererIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_RendererIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(int32_t)>(&::WaveHarmonic::Crest::WaterReflections::set_RendererIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259d080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_RendererIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_RenderOnlySingleCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_RenderOnlySingleCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182152290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RenderOnlySingleCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_RenderOnlySingleCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_RenderOnlySingleCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821522c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_RenderOnlySingleCamera", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Resolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Resolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(int32_t)>(&::WaveHarmonic::Crest::WaterReflections::set_Resolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Sky
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Sky)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Sky", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Sky
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_Sky)> {
  constexpr static std::size_t size = 0x2090;
  constexpr static std::size_t addrs = 0x180c29b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Sky", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Stencil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Stencil)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Stencil", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Stencil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_Stencil)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Stencil", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_UseObliqueMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_UseObliqueMatrix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_UseObliqueMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_UseObliqueMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool)>(&::WaveHarmonic::Crest::WaterReflections::set_UseObliqueMatrix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_UseObliqueMatrix", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.CaptureTargetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterReflections::CaptureTargetDepth)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182599960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CaptureTargetDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_ColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_ColorTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ColorTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_DepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_DepthTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DepthTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_ReflectionCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_ReflectionCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ReflectionCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_SkipAbove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_SkipAbove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18259cdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_SkipAbove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_SkipBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_SkipBelow)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18259ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_SkipBelow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_RefreshPerFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_RefreshPerFrames)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259cdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RefreshPerFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_SupportsRecursiveRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_SupportsRecursiveRendering)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18259ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_SupportsRecursiveRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_OnCameraAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::UnityEngine::Camera>>* (*)()>(&::WaveHarmonic::Crest::WaterReflections::get_OnCameraAdded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_OnCameraAdded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_OnCameraAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Camera>>*)>(&::WaveHarmonic::Crest::WaterReflections::set_OnCameraAdded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18259d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_OnCameraAdded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_RequireTemporaryTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_RequireTemporaryTargets)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18259cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RequireTemporaryTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18259b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18259b040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18259aff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterReflections::ShouldRender)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18259c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterReflections::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18259aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.OnEndReflectionCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterReflections::OnEndReflectionCameraRendering)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18259b180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnEndReflectionCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterReflections::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18259b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::LateUpdate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18259ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Rendering::ScriptableRenderContext)>(&::WaveHarmonic::Crest::WaterReflections::LateUpdate)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18259a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"LateUpdate", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Rendering::ScriptableRenderContext)>(&::WaveHarmonic::Crest::WaterReflections::Render)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x18259c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.RenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::UnityEngine::Vector3, bool, int32_t)>(&::WaveHarmonic::Crest::WaterReflections::RenderCamera)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x18259b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.CopyTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, int32_t)>(&::WaveHarmonic::Crest::WaterReflections::CopyTargets)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18259a240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CopyTargets", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.ForceDistanceCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(float_t)>(&::WaveHarmonic::Crest::WaterReflections::ForceDistanceCulling)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18259a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"ForceDistanceCulling", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.UpdateCameraModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::UpdateCameraModes)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x18259c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"UpdateCameraModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.RecreateDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::WaterReflections::RecreateDepth)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18259b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"RecreateDepth", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.CreateWaterObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterReflections::CreateWaterObjects)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x18259a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CreateWaterObjects", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.CameraSpacePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::WaveHarmonic::Crest::WaterReflections::CameraSpacePlane)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x182599630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CameraSpacePlane", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.CalculateReflectionMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::WaterReflections::CalculateReflectionMatrix)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182599510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CalculateReflectionMatrix", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.ComputeHorizonPositionAndNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Camera*, float_t, float_t, bool)>(&::WaveHarmonic::Crest::WaterReflections::ComputeHorizonPositionAndNormal)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x182599a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"ComputeHorizonPositionAndNormal", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.CheckSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterReflections::CheckSurfaceMaterial)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182599a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CheckSurfaceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterReflections::SetEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18259c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.SetReflectionSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::WaveHarmonic::Crest::WaterReflectionSide, ::WaveHarmonic::Crest::WaterReflectionSide)>(&::WaveHarmonic::Crest::WaterReflections::SetReflectionSide)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetReflectionSide", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.SetDisableShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterReflections::SetDisableShadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259c610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetDisableShadows", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.SetRendererIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::WaterReflections::SetRendererIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetRendererIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterReflectionSide (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::get_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections.set_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)(::WaveHarmonic::Crest::WaterReflectionSide)>(&::WaveHarmonic::Crest::WaterReflections::set_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Mode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterReflections._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterReflections::*)()>(&::WaveHarmonic::Crest::WaterReflections::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18259cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CopyTargetsRenderPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyTargetsRenderPass;
}
constexpr ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass* const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CopyTargetsRenderPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyTargetsRenderPass;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CopyTargetsRenderPass(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyTargetsRenderPass = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled = value;
}
constexpr ::WaveHarmonic::Crest::WaterReflectionSide& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr ::WaveHarmonic::Crest::WaterReflectionSide const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Mode(::WaveHarmonic::Crest::WaterReflectionSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mode = value;
}
constexpr ::UnityEngine::LayerMask& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers;
}
constexpr ::UnityEngine::LayerMask const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layers = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Overscan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Overscan;
}
constexpr float_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Overscan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Overscan;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Overscan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Overscan = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Sky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sky;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Sky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sky;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Sky(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sky = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DisablePixelLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisablePixelLights;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DisablePixelLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisablePixelLights;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__DisablePixelLights(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisablePixelLights = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DisableShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableShadows;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DisableShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableShadows;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__DisableShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableShadows = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__HDR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HDR;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__HDR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HDR;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__HDR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HDR = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Stencil()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stencil;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Stencil() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stencil;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Stencil(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Stencil = value;
}
constexpr ::WaveHarmonic::Crest::QualitySettingsOverride*& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__QualitySettingsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QualitySettingsOverride;
}
constexpr ::WaveHarmonic::Crest::QualitySettingsOverride* const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__QualitySettingsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QualitySettingsOverride;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__QualitySettingsOverride(::WaveHarmonic::Crest::QualitySettingsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QualitySettingsOverride = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ClipPlaneOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPlaneOffset;
}
constexpr float_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ClipPlaneOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipPlaneOffset;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ClipPlaneOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipPlaneOffset = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__FarClipPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FarClipPlane;
}
constexpr float_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__FarClipPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FarClipPlane;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__FarClipPlane(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FarClipPlane = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DisableOcclusionCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableOcclusionCulling;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DisableOcclusionCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableOcclusionCulling;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__DisableOcclusionCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableOcclusionCulling = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__RefreshPerFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshPerFrames;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__RefreshPerFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshPerFrames;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__RefreshPerFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RefreshPerFrames = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__FrameRefreshOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameRefreshOffset;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__FrameRefreshOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameRefreshOffset;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__FrameRefreshOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrameRefreshOffset = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__UseObliqueMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseObliqueMatrix;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__UseObliqueMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseObliqueMatrix;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__UseObliqueMatrix(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseObliqueMatrix = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__NonObliqueNearSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NonObliqueNearSurface;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__NonObliqueNearSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NonObliqueNearSurface;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__NonObliqueNearSurface(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NonObliqueNearSurface = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__NonObliqueNearSurfaceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NonObliqueNearSurfaceThreshold;
}
constexpr float_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__NonObliqueNearSurfaceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NonObliqueNearSurfaceThreshold;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__NonObliqueNearSurfaceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NonObliqueNearSurfaceThreshold = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__RenderOnlySingleCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderOnlySingleCamera;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__RenderOnlySingleCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderOnlySingleCamera;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__RenderOnlySingleCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderOnlySingleCamera = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__RendererIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RendererIndex;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__RendererIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RendererIndex;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__RendererIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RendererIndex = value;
}
constexpr ::WaveHarmonic::Crest::WaterReflections_DebugFields*& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::WaterReflections_DebugFields* const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Debug(::WaveHarmonic::Crest::WaterReflections_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__UnderWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderWater;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__UnderWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnderWater;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__UnderWater(::WaveHarmonic::Crest::UnderwaterRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnderWater = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ApplySmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplySmoothness;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ApplySmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplySmoothness;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ApplySmoothness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplySmoothness = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ColorTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ColorTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTexture;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ColorTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorTexture = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DepthTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__DepthTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTexture;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__DepthTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ReflectionPositionNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectionPositionNormal;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ReflectionPositionNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectionPositionNormal;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ReflectionPositionNormal(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReflectionPositionNormal = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ReflectionMatrixIVP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectionMatrixIVP;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ReflectionMatrixIVP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectionMatrixIVP;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ReflectionMatrixIVP(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReflectionMatrixIVP = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ReflectionMatrixV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectionMatrixV;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ReflectionMatrixV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectionMatrixV;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ReflectionMatrixV(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReflectionMatrixV = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ActiveSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveSlice;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__ActiveSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveSlice;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__ActiveSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveSlice = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraViewpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraViewpoint;
}
constexpr ::UnityW<::UnityEngine::Camera> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraViewpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraViewpoint;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CameraViewpoint(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraViewpoint = value;
}
constexpr ::UnityW<::UnityEngine::Skybox>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraViewpointSkybox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraViewpointSkybox;
}
constexpr ::UnityW<::UnityEngine::Skybox> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraViewpointSkybox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraViewpointSkybox;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CameraViewpointSkybox(::UnityW<::UnityEngine::Skybox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraViewpointSkybox = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraReflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraReflections;
}
constexpr ::UnityW<::UnityEngine::Camera> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraReflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraReflections;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CameraReflections(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraReflections = value;
}
constexpr ::UnityW<::UnityEngine::Skybox>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraReflectionsSkybox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraReflectionsSkybox;
}
constexpr ::UnityW<::UnityEngine::Skybox> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraReflectionsSkybox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraReflectionsSkybox;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CameraReflectionsSkybox(::UnityW<::UnityEngine::Skybox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraReflectionsSkybox = value;
}
constexpr int64_t& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__LastRefreshOnFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastRefreshOnFrame;
}
constexpr int64_t const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__LastRefreshOnFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastRefreshOnFrame;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__LastRefreshOnFrame(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastRefreshOnFrame = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CullDistances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CullDistances;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CullDistances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CullDistances;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CullDistances(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CullDistances = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraDepthTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraDepthTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__CameraDepthTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraDepthTexture;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__CameraDepthTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraDepthTexture = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__UpdateCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateCamera;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__UpdateCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateCamera;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__UpdateCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateCamera = value;
}
constexpr bool& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__AllowMSAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowMSAA;
}
constexpr bool const& WaveHarmonic::Crest::WaterReflections::__cordl_internal_get__AllowMSAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowMSAA;
}
constexpr void WaveHarmonic::Crest::WaterReflections::__cordl_internal_set__AllowMSAA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowMSAA = value;
}
inline void WaveHarmonic::Crest::WaterReflections::setStaticF__OnCameraAdded_k__BackingField(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "<OnCameraAdded>k__BackingField", ::WaveHarmonic::Crest::WaterReflections*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* WaveHarmonic::Crest::WaterReflections::getStaticF__OnCameraAdded_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Camera>>*, "<OnCameraAdded>k__BackingField", ::WaveHarmonic::Crest::WaterReflections*>();
}
inline bool WaveHarmonic::Crest::WaterReflections::get_AllowMSAA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_AllowMSAA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_AllowMSAA(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_AllowMSAA", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterReflections::get_ClipPlaneOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ClipPlaneOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_ClipPlaneOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_ClipPlaneOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_DisableOcclusionCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DisableOcclusionCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_DisableOcclusionCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_DisableOcclusionCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_DisablePixelLights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DisablePixelLights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_DisablePixelLights(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_DisablePixelLights", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_DisableShadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DisableShadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_DisableShadows(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_DisableShadows", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterReflections::get_FarClipPlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_FarClipPlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_FarClipPlane(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_FarClipPlane", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_HDR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_HDR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_HDR(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_HDR", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask WaveHarmonic::Crest::WaterReflections::get_Layers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Layers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Layers(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Layers", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterReflectionSide WaveHarmonic::Crest::WaterReflections::get_ReflectionSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ReflectionSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterReflectionSide>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_ReflectionSide(::WaveHarmonic::Crest::WaterReflectionSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_ReflectionSide", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_NonObliqueNearSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_NonObliqueNearSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_NonObliqueNearSurface(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_NonObliqueNearSurface", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterReflections::get_NonObliqueNearSurfaceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_NonObliqueNearSurfaceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_NonObliqueNearSurfaceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_NonObliqueNearSurfaceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::WaterReflections::get_Overscan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Overscan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Overscan(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Overscan", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::QualitySettingsOverride* WaveHarmonic::Crest::WaterReflections::get_QualitySettingsOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_QualitySettingsOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::QualitySettingsOverride*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_QualitySettingsOverride(::WaveHarmonic::Crest::QualitySettingsOverride*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_QualitySettingsOverride", {}, {::i2c::type_of<::WaveHarmonic::Crest::QualitySettingsOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterReflections::get_RendererIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RendererIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_RendererIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_RendererIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_RenderOnlySingleCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RenderOnlySingleCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_RenderOnlySingleCamera(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_RenderOnlySingleCamera", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WaterReflections::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Resolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Resolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_Sky()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Sky", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Sky(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Sky", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_Stencil()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Stencil", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Stencil(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Stencil", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_UseObliqueMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_UseObliqueMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_UseObliqueMatrix(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_UseObliqueMatrix", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterReflections::CaptureTargetDepth(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CaptureTargetDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::WaterReflections::get_ColorTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ColorTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::WaterReflections::get_DepthTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_DepthTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> WaveHarmonic::Crest::WaterReflections::get_ReflectionCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_ReflectionCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_SkipAbove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_SkipAbove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_SkipBelow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_SkipBelow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterReflections::get_RefreshPerFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RefreshPerFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_SupportsRecursiveRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_SupportsRecursiveRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* WaveHarmonic::Crest::WaterReflections::get_OnCameraAdded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_OnCameraAdded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_OnCameraAdded(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_OnCameraAdded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterReflections::get_RequireTemporaryTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_RequireTemporaryTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterReflections::ShouldRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterReflections::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::WaterReflections::OnEndReflectionCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnEndReflectionCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterReflections::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::WaterReflections::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::LateUpdate(::UnityEngine::Rendering::ScriptableRenderContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"LateUpdate", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void WaveHarmonic::Crest::WaterReflections::Render(::UnityEngine::Rendering::ScriptableRenderContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void WaveHarmonic::Crest::WaterReflections::RenderCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  planeNormal, bool  nonObliqueNearSurface, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera, planeNormal, nonObliqueNearSurface, slice);
}
inline void WaveHarmonic::Crest::WaterReflections::CopyTargets(::UnityEngine::Texture*  color, ::UnityEngine::Texture*  depth, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CopyTargets", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, depth, slice);
}
inline void WaveHarmonic::Crest::WaterReflections::ForceDistanceCulling(float_t  farClipPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"ForceDistanceCulling", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, farClipPlane);
}
inline void WaveHarmonic::Crest::WaterReflections::UpdateCameraModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"UpdateCameraModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::RecreateDepth(::UnityEngine::Texture*  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"RecreateDepth", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth);
}
inline void WaveHarmonic::Crest::WaterReflections::CreateWaterObjects(::UnityEngine::Camera*  currentCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CreateWaterObjects", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentCamera);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::WaterReflections::CameraSpacePlane(::UnityEngine::Camera*  cam, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal, float_t  sideSign)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CameraSpacePlane", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, cam, pos, normal, sideSign);
}
inline void WaveHarmonic::Crest::WaterReflections::CalculateReflectionMatrix(::by_ref<::UnityEngine::Matrix4x4>  reflectionMat, ::UnityEngine::Vector4  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CalculateReflectionMatrix", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reflectionMat, plane);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::WaterReflections::ComputeHorizonPositionAndNormal(::UnityEngine::Camera*  camera, float_t  positionY, float_t  offset, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"ComputeHorizonPositionAndNormal", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, camera, positionY, offset, flipped);
}
inline void WaveHarmonic::Crest::WaterReflections::CheckSurfaceMaterial(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"CheckSurfaceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void WaveHarmonic::Crest::WaterReflections::SetEnabled(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterReflections::SetReflectionSide(::WaveHarmonic::Crest::WaterReflectionSide  previous, ::WaveHarmonic::Crest::WaterReflectionSide  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetReflectionSide", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterReflections::SetDisableShadows(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetDisableShadows", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterReflections::SetRendererIndex(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"SetRendererIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::WaterReflectionSide WaveHarmonic::Crest::WaterReflections::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterReflectionSide>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterReflections::set_Mode(::WaveHarmonic::Crest::WaterReflectionSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {"set_Mode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterReflectionSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterReflections::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterReflections*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterReflections* WaveHarmonic::Crest::WaterReflections::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterReflections*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterReflections::WaterReflections()   {
}
