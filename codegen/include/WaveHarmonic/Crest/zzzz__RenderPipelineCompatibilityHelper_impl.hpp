#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderPipelineCompatibilityHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipelineCompatibilityHelper_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper.RTHandleNeedsReAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RTHandle*, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW, bool)>(&::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::RTHandleNeedsReAlloc)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x18256caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*>(),
                        {"RTHandleNeedsReAlloc", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper.ReAllocateIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(&::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::ReAllocateIfNeeded)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18256d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*>(),
                        {"ReAllocateIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper.ReAllocateIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Vector2, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(&::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::ReAllocateIfNeeded)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18256d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*>(),
                        {"ReAllocateIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::RTHandleNeedsReAlloc(::UnityEngine::Rendering::RTHandle*  handle, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name, bool  scaled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*>(),
                        {"RTHandleNeedsReAlloc", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name, scaled);
}
inline bool WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*>  handle, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*>(),
                        {"ReAllocateIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline bool WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*>  handle, ::UnityEngine::Vector2  scaleFactor, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper*>(),
                        {"ReAllocateIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, scaleFactor, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RenderPipelineCompatibilityHelper::RenderPipelineCompatibilityHelper()   {
}
