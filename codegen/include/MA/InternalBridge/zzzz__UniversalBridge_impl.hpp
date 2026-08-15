#pragma once
// IWYU pragma private; include "MA/InternalBridge/UniversalBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__UniversalBridge_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::UniversalBridge.HasDepthPriming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(&::MA::InternalBridge::UniversalBridge::HasDepthPriming)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18254fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"HasDepthPriming", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UniversalBridge.GetActualRenderingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (*)(::UnityEngine::Rendering::Universal::UniversalRenderer*)>(&::MA::InternalBridge::UniversalBridge::GetActualRenderingPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18254fc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"GetActualRenderingPath", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UniversalBridge.GetXrCompatibleScreenWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::MA::InternalBridge::UniversalBridge::GetXrCompatibleScreenWidth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254fca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"GetXrCompatibleScreenWidth", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UniversalBridge.GetXrCompatibleScreenHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::MA::InternalBridge::UniversalBridge::GetXrCompatibleScreenHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"GetXrCompatibleScreenHeight", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::InternalBridge::UniversalBridge::HasDepthPriming(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"HasDepthPriming", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderer);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode MA::InternalBridge::UniversalBridge::GetActualRenderingPath(::UnityEngine::Rendering::Universal::UniversalRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"GetActualRenderingPath", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(nullptr, ___internal_method, renderer);
}
inline int32_t MA::InternalBridge::UniversalBridge::GetXrCompatibleScreenWidth(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"GetXrCompatibleScreenWidth", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cameraData);
}
inline int32_t MA::InternalBridge::UniversalBridge::GetXrCompatibleScreenHeight(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UniversalBridge*>(),
                        {"GetXrCompatibleScreenHeight", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cameraData);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UniversalBridge::UniversalBridge()   {
}
