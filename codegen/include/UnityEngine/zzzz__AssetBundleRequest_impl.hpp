#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ResourceRequest_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AssetBundleRequest*)>(&::UnityEngine::AssetBundleRequest_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::AssetBundleRequest_BindingsMarshaller::ConvertToNative(::UnityEngine::AssetBundleRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleRequest_BindingsMarshaller::AssetBundleRequest_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::get_asset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181723810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(),
                        {"get_asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_allAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::UnityEngine::AssetBundleRequest::*)()>(&::UnityEngine::AssetBundleRequest::get_allAssets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182238330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(),
                        {"get_allAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleRequest.get_allAssets_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::IntPtr)>(&::UnityEngine::AssetBundleRequest::get_allAssets_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182238320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(),
                        {"get_allAssets_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> UnityEngine::AssetBundleRequest::get_asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(),
                        {"get_asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AssetBundleRequest::get_allAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(),
                        {"get_allAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AssetBundleRequest::get_allAssets_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleRequest*>(),
                        {"get_allAssets_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleRequest::AssetBundleRequest()   {
}
