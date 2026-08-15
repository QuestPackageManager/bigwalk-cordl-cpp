#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/UnderwaterEffectPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterEffectPass_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "WaveHarmonic/Crest/zzzz__UnderwaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)(::WaveHarmonic::Crest::UnderwaterRenderer*)>(&::WaveHarmonic::Crest::UnderwaterEffectPass::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a4e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::UnderwaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass.CopyColorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::UnderwaterEffectPass::CopyColorTexture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825a4980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"CopyColorTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass.SetRenderTargetToBackBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::UnderwaterEffectPass::SetRenderTargetToBackBuffers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"SetRenderTargetToBackBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::WaveHarmonic::Crest::UnderwaterEffectPass::Allocate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1825a4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"Allocate", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass.ReAllocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::WaveHarmonic::Crest::UnderwaterEffectPass::ReAllocate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a4d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"ReAllocate", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)()>(&::WaveHarmonic::Crest::UnderwaterEffectPass::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a4d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::UnderwaterEffectPass.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::UnderwaterEffectPass::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::UnderwaterEffectPass::Execute)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1825a49f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__Renderer(::WaveHarmonic::Crest::UnderwaterRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__ColorTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__ColorTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTexture;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__ColorTexture(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__ColorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__ColorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorTarget;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__ColorTarget(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__DepthTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__DepthTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthTarget;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__DepthTarget(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthTarget = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__CopyColorTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColorTexture;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__CopyColorTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyColorTexture;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__CopyColorTexture(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyColorTexture = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__SetRenderTargetToBackBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetRenderTargetToBackBuffers;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__SetRenderTargetToBackBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetRenderTargetToBackBuffers;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__SetRenderTargetToBackBuffers(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SetRenderTargetToBackBuffers = value;
}
constexpr bool& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__AllocatedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllocatedColor;
}
constexpr bool const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__AllocatedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllocatedColor;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__AllocatedColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllocatedColor = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__GraphicsFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GraphicsFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_get__GraphicsFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GraphicsFormat;
}
constexpr void WaveHarmonic::Crest::UnderwaterEffectPass::__cordl_internal_set__GraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GraphicsFormat = value;
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::_ctor(::WaveHarmonic::Crest::UnderwaterRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::UnderwaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::CopyColorTexture(::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"CopyColorTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::SetRenderTargetToBackBuffers(::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"SetRenderTargetToBackBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::Allocate(::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"Allocate", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::ReAllocate(::UnityEngine::RenderTextureDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"ReAllocate", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptor);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::UnderwaterEffectPass::Execute(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RTHandle*  color, ::UnityEngine::Rendering::RTHandle*  depth, ::UnityEngine::MaterialPropertyBlock*  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::UnderwaterEffectPass*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, buffer, color, depth, mpb);
}
inline ::WaveHarmonic::Crest::UnderwaterEffectPass* WaveHarmonic::Crest::UnderwaterEffectPass::New_ctor(::WaveHarmonic::Crest::UnderwaterRenderer*  renderer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::UnderwaterEffectPass*>(renderer));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::UnderwaterEffectPass::UnderwaterEffectPass()   {
}
