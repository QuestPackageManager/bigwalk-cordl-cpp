#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleRendererFeatureOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleRendererFeatureOperation_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation.GetRendererData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> (::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::GetRendererData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803b4660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {"GetRendererData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation.GetFeatureByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature> (::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::*)(::StringW)>(&::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::GetFeatureByName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803b4570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {"GetFeatureByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation.ToggleFeatureEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::*)(::StringW)>(&::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::ToggleFeatureEnabled)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803b46b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {"ToggleFeatureEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::GetRendererData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {"GetRendererData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature> Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::GetFeatureByName(::StringW  featureName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {"GetFeatureByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>(this, ___internal_method, featureName);
}
inline bool Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::ToggleFeatureEnabled(::StringW  featureName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {"ToggleFeatureEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, featureName);
}
inline void Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation* Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation::ToggleRendererFeatureOperation()   {
}
