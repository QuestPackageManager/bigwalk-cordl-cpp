#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricCloudRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudRenderer::*)()>(&::Enviro::EnviroVolumetricCloudRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18061fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_raymarchMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raymarchMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_raymarchMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raymarchMat;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_raymarchMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raymarchMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_reprojectMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reprojectMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_reprojectMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reprojectMat;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_reprojectMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reprojectMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_depthMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_depthMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthMat;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_depthMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_blendAndLightingMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendAndLightingMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_blendAndLightingMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendAndLightingMat;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_blendAndLightingMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendAndLightingMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_shadowMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_shadowMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowMat;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_shadowMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowMat = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBuffer;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBuffer;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_fullBuffer(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullBuffer = value;
}
constexpr int32_t& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBufferIndex;
}
constexpr int32_t const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBufferIndex;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_fullBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullBufferIndex = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_undersampleBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undersampleBuffer;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_undersampleBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undersampleBuffer;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_undersampleBuffer(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___undersampleBuffer = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_downsampledDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampledDepth;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_downsampledDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampledDepth;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_downsampledDepth(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downsampledDepth = value;
}
constexpr ::UnityEngine::Matrix4x4& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_prevV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevV;
}
constexpr ::UnityEngine::Matrix4x4 const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_prevV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevV;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_prevV(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevV = value;
}
constexpr ::UnityEngine::Matrix4x4& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_prevVRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevVRight;
}
constexpr ::UnityEngine::Matrix4x4 const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_prevVRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevVRight;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_prevVRight(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevVRight = value;
}
constexpr int32_t& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr int32_t const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_frame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_firstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstFrame;
}
constexpr bool const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_firstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstFrame;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_firstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstFrame = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBufferHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBufferHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBufferHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBufferHandles;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_fullBufferHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullBufferHandles = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_undersampleBufferHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undersampleBufferHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_undersampleBufferHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undersampleBufferHandle;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_undersampleBufferHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___undersampleBufferHandle = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_downsampledDepthHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampledDepthHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_downsampledDepthHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampledDepthHandle;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_downsampledDepthHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downsampledDepthHandle = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBufferRTHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBufferRTHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_fullBufferRTHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBufferRTHandles;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_fullBufferRTHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullBufferRTHandles = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_undersampleRTBufferHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undersampleRTBufferHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_undersampleRTBufferHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undersampleRTBufferHandle;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_undersampleRTBufferHandle(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___undersampleRTBufferHandle = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_downsampledRTDepthHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampledRTDepthHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_get_downsampledRTDepthHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downsampledRTDepthHandle;
}
constexpr void Enviro::EnviroVolumetricCloudRenderer::__cordl_internal_set_downsampledRTDepthHandle(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downsampledRTDepthHandle = value;
}
inline void Enviro::EnviroVolumetricCloudRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroVolumetricCloudRenderer* Enviro::EnviroVolumetricCloudRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroVolumetricCloudRenderer*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroVolumetricCloudRenderer::EnviroVolumetricCloudRenderer()   {
}
