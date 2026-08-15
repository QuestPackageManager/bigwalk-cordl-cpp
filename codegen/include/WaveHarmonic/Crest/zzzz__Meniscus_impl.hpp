#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Meniscus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Meniscus_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Meniscus_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Meniscus_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::Meniscus*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Meniscus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)()>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)()>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Disable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)()>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer.ShouldExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::ShouldExecute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18258ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                        {"ShouldExecute", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::Meniscus_MeniscusRenderer::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::Meniscus_MeniscusRenderer::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::WaveHarmonic::Crest::Meniscus*& WaveHarmonic::Crest::Meniscus_MeniscusRenderer::__cordl_internal_get__Meniscus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Meniscus;
}
constexpr ::WaveHarmonic::Crest::Meniscus* const& WaveHarmonic::Crest::Meniscus_MeniscusRenderer::__cordl_internal_get__Meniscus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Meniscus;
}
constexpr void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::__cordl_internal_set__Meniscus(::WaveHarmonic::Crest::Meniscus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Meniscus = value;
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Meniscus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, meniscus);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Meniscus_MeniscusRenderer::ShouldExecute(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                        {"ShouldExecute", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
template<typename T>
inline void WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Execute(::UnityEngine::Camera*  camera, T  commands)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(),
                    {"Execute", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, commands);
}
inline ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* WaveHarmonic::Crest::Meniscus_MeniscusRenderer::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(water, meniscus));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer::Meniscus_MeniscusRenderer()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::Meniscus*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Meniscus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::*)()>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18258db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::__cordl_internal_get__Commands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Commands;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::__cordl_internal_get__Commands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Commands;
}
constexpr void WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::__cordl_internal_set__Commands(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Commands = value;
}
constexpr bool& WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::__cordl_internal_get__CommandsRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandsRegistered;
}
constexpr bool const& WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::__cordl_internal_get__CommandsRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandsRegistered;
}
constexpr void WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::__cordl_internal_set__CommandsRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommandsRegistered = value;
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Meniscus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, meniscus);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP* WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*>(water, meniscus));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP::Meniscus_MeniscusRendererBIRP()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::*)()>(&::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::__cordl_internal_get__CameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::__cordl_internal_get__CameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraData;
}
constexpr void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::__cordl_internal_set__CameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraData = value;
}
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*& WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* const& WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
inline void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData* WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::*)()>(&::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c._RecordRenderGraph_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::*)(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::_RecordRenderGraph_b__6_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825942d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(),
                        {"<RecordRenderGraph>b__6_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::setStaticF___9(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*, "<>9", ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(std::forward<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(value));
}
inline ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c* WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*, "<>9", ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>();
}
inline void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::setStaticF___9__6_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__6_0", ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__6_0", ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>();
}
inline void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::_RecordRenderGraph_b__6_0(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>(),
                        {"<RecordRenderGraph>b__6_0", {}, {::i2c::type_of<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c* WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::*)()>(&::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass.EnqueuePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::EnqueuePass)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18258d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18258d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*& WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* const& WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
constexpr bool& WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::__cordl_internal_get__RequiresOpaqueTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresOpaqueTexture;
}
constexpr bool const& WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::__cordl_internal_get__RequiresOpaqueTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresOpaqueTexture;
}
constexpr void WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::__cordl_internal_set__RequiresOpaqueTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresOpaqueTexture = value;
}
inline void WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::EnqueuePass(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, frame);
}
inline ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass* WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass::MeniscusRendererURP_Meniscus_MeniscusRenderPass()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::Meniscus*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18258dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Meniscus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18258dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*& WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::__cordl_internal_get__MaskRenderPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskRenderPass;
}
constexpr ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass* const& WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::__cordl_internal_get__MaskRenderPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaskRenderPass;
}
constexpr void WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::__cordl_internal_set__MaskRenderPass(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaskRenderPass = value;
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Meniscus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, meniscus);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP* WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*>(water, meniscus));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP::Meniscus_MeniscusRendererURP()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterCameraExclusion (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.set_CameraExclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(::WaveHarmonic::Crest::WaterCameraExclusion)>(&::WaveHarmonic::Crest::Meniscus::set_CameraExclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_Enabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(bool)>(&::WaveHarmonic::Crest::Meniscus::set_Enabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18258e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(int32_t)>(&::WaveHarmonic::Crest::Meniscus::set_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_Material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.set_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::Meniscus::set_Material)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18258e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_Renderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.set_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*)>(&::WaveHarmonic::Crest::Meniscus::set_Renderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Renderer", {}, {::i2c::type_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_RequiresOpaqueTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_RequiresOpaqueTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18258e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_RequiresOpaqueTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.get_ForceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::get_ForceRenderingOff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_ForceRenderingOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.set_ForceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(bool)>(&::WaveHarmonic::Crest::Meniscus::set_ForceRenderingOff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_ForceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::Enable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::Disable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258dee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::Destroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258dea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.OnActiveRenderPipelineTypeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::OnActiveRenderPipelineTypeChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18258e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"OnActiveRenderPipelineTypeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::Meniscus::Initialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18258df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Meniscus::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Meniscus::ShouldRender)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18258e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.GetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::GetEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"GetEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(bool, bool)>(&::WaveHarmonic::Crest::Meniscus::SetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18258e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus.SetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::WaveHarmonic::Crest::Meniscus::SetMaterial)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18258e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"SetMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Meniscus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Meniscus::*)()>(&::WaveHarmonic::Crest::Meniscus::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18258e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr bool const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled = value;
}
constexpr int32_t& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr int32_t const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__Layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Material = value;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__CameraExclusions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__CameraExclusions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraExclusions;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraExclusions = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Renderer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer_k__BackingField;
}
constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__Renderer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer_k__BackingField;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__Renderer_k__BackingField(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__ForceRenderingOff_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceRenderingOff_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::Meniscus::__cordl_internal_get__ForceRenderingOff_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceRenderingOff_k__BackingField;
}
constexpr void WaveHarmonic::Crest::Meniscus::__cordl_internal_set__ForceRenderingOff_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceRenderingOff_k__BackingField = value;
}
inline ::WaveHarmonic::Crest::WaterCameraExclusion WaveHarmonic::Crest::Meniscus::get_CameraExclusions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_CameraExclusions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterCameraExclusion>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_CameraExclusions", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterCameraExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::Meniscus::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::Meniscus::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::set_Layer(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::Meniscus::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* WaveHarmonic::Crest::Meniscus::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::set_Renderer(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_Renderer", {}, {::i2c::type_of<::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::Meniscus::get_RequiresOpaqueTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_RequiresOpaqueTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Meniscus::get_ForceRenderingOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"get_ForceRenderingOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::set_ForceRenderingOff(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"set_ForceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::Meniscus::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::OnActiveRenderPipelineTypeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"OnActiveRenderPipelineTypeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::Initialize(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline bool WaveHarmonic::Crest::Meniscus::ShouldRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::Meniscus::GetEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"GetEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Meniscus::SetEnabled(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::Meniscus::SetMaterial(::UnityEngine::Material*  previous, ::UnityEngine::Material*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {"SetMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::Meniscus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Meniscus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Meniscus* WaveHarmonic::Crest::Meniscus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Meniscus*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Meniscus::Meniscus()   {
}
