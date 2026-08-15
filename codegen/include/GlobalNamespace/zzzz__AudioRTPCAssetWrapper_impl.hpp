#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCAssetWrapper.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCAssetWrapper_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAssetWrapper.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::AudioRTPCAssetWrapper::*)()>(&::GlobalNamespace::AudioRTPCAssetWrapper::get_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAssetWrapper.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAssetWrapper::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCAssetWrapper::set_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAssetWrapper.get_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRTPCAsset> (::GlobalNamespace::AudioRTPCAssetWrapper::*)()>(&::GlobalNamespace::AudioRTPCAssetWrapper::get_Asset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"get_Asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAssetWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAssetWrapper::*)(::GlobalNamespace::AudioRTPC_YAxisType, ::GlobalNamespace::AudioRTPCAsset*)>(&::GlobalNamespace::AudioRTPCAssetWrapper::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPCAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAssetWrapper.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPCAssetWrapper::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioRTPCAssetWrapper::GetValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048af40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCAssetWrapper.AssignAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCAssetWrapper::*)(::GlobalNamespace::AudioRTPCAsset*)>(&::GlobalNamespace::AudioRTPCAssetWrapper::AssignAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048aee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"AssignAsset", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCAsset*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPCAssetWrapper::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPCAssetWrapper::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void GlobalNamespace::AudioRTPCAssetWrapper::__cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCAsset>& GlobalNamespace::AudioRTPCAssetWrapper::__cordl_internal_get__asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCAsset> const& GlobalNamespace::AudioRTPCAssetWrapper::__cordl_internal_get__asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr void GlobalNamespace::AudioRTPCAssetWrapper::__cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioRTPCAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asset = value;
}
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::AudioRTPCAssetWrapper::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCAssetWrapper::set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioRTPCAsset> GlobalNamespace::AudioRTPCAssetWrapper::get_Asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"get_Asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRTPCAsset>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCAssetWrapper::_ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, ::GlobalNamespace::AudioRTPCAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPCAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, yType, asset);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPCAssetWrapper::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
inline void GlobalNamespace::AudioRTPCAssetWrapper::AssignAsset(::GlobalNamespace::AudioRTPCAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCAssetWrapper*>(),
                        {"AssignAsset", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline ::GlobalNamespace::AudioRTPCAssetWrapper* GlobalNamespace::AudioRTPCAssetWrapper::New_ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, ::GlobalNamespace::AudioRTPCAsset*  asset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCAssetWrapper*>(yType, asset));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr  GlobalNamespace::AudioRTPCAssetWrapper::operator ::GlobalNamespace::IAudioRTPCValue*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* GlobalNamespace::AudioRTPCAssetWrapper::i___GlobalNamespace__IAudioRTPCValue() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCAssetWrapper::AudioRTPCAssetWrapper()   {
}
