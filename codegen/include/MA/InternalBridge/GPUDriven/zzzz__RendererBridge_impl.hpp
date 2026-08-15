#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/RendererBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__RendererBridge_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::RendererBridge.SetAllowGPUDrivenRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Renderer*, bool)>(&::MA::InternalBridge::GPUDriven::RendererBridge::SetAllowGPUDrivenRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::RendererBridge*>(),
                        {"SetAllowGPUDrivenRendering", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::RendererBridge.HasSmallMeshCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Renderer*)>(&::MA::InternalBridge::GPUDriven::RendererBridge::HasSmallMeshCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::RendererBridge*>(),
                        {"HasSmallMeshCulling", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::RendererBridge.SetSmallMeshCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Renderer*, bool)>(&::MA::InternalBridge::GPUDriven::RendererBridge::SetSmallMeshCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::RendererBridge*>(),
                        {"SetSmallMeshCulling", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::GPUDriven::RendererBridge::SetAllowGPUDrivenRendering(::UnityEngine::Renderer*  renderer, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::RendererBridge*>(),
                        {"SetAllowGPUDrivenRendering", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderer, value);
}
inline bool MA::InternalBridge::GPUDriven::RendererBridge::HasSmallMeshCulling(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::RendererBridge*>(),
                        {"HasSmallMeshCulling", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderer);
}
inline void MA::InternalBridge::GPUDriven::RendererBridge::SetSmallMeshCulling(::UnityEngine::Renderer*  renderer, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::RendererBridge*>(),
                        {"SetSmallMeshCulling", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderer, value);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::RendererBridge::RendererBridge()   {
}
