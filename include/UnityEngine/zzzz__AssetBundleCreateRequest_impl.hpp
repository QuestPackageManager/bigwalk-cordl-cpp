#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleCreateRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AssetBundleCreateRequest*)>(&::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::AssetBundleCreateRequest_BindingsMarshaller::ConvertToNative(::UnityEngine::AssetBundleCreateRequest*  assetBundleCreateRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, assetBundleCreateRequest);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller::AssetBundleCreateRequest_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest.get_assetBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::UnityEngine::AssetBundleCreateRequest::*)()>(&::UnityEngine::AssetBundleCreateRequest::get_assetBundle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182238250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleCreateRequest*>(),
                        {"get_assetBundle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetBundleCreateRequest.get_assetBundle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::AssetBundleCreateRequest::get_assetBundle_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182238240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleCreateRequest*>(),
                        {"get_assetBundle_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AssetBundle> UnityEngine::AssetBundleCreateRequest::get_assetBundle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleCreateRequest*>(),
                        {"get_assetBundle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AssetBundleCreateRequest::get_assetBundle_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AssetBundleCreateRequest*>(),
                        {"get_assetBundle_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetBundleCreateRequest::AssetBundleCreateRequest()   {
}
