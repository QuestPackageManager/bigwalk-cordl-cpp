#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCSingle.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCSingle_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSingle.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::AudioRTPCSingle::*)()>(&::GlobalNamespace::AudioRTPCSingle::get_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSingle.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCSingle::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCSingle::set_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSingle.get_RTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC* (::GlobalNamespace::AudioRTPCSingle::*)()>(&::GlobalNamespace::AudioRTPCSingle::get_RTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"get_RTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSingle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCSingle::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCSingle::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18048b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSingle.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPCSingle::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioRTPCSingle::GetValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18048b3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCSingle.ChangeRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCSingle::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::GlobalNamespace::AudioRTPC_YAxisType, ::UnityEngine::AnimationCurve*)>(&::GlobalNamespace::AudioRTPCSingle::ChangeRTPC)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18048b2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"ChangeRTPC", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPCSingle::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPCSingle::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void GlobalNamespace::AudioRTPCSingle::__cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr ::GlobalNamespace::AudioRTPC*& GlobalNamespace::AudioRTPCSingle::__cordl_internal_get__rtpc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtpc;
}
constexpr ::GlobalNamespace::AudioRTPC* const& GlobalNamespace::AudioRTPCSingle::__cordl_internal_get__rtpc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtpc;
}
constexpr void GlobalNamespace::AudioRTPCSingle::__cordl_internal_set__rtpc(::GlobalNamespace::AudioRTPC*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rtpc = value;
}
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::AudioRTPCSingle::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCSingle::set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioRTPC* GlobalNamespace::AudioRTPCSingle::get_RTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"get_RTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCSingle::_ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xType, yType);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPCSingle::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
inline void GlobalNamespace::AudioRTPCSingle::ChangeRTPC(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCSingle*>(),
                        {"ChangeRTPC", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xType, yType, curve);
}
inline ::GlobalNamespace::AudioRTPCSingle* GlobalNamespace::AudioRTPCSingle::New_ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCSingle*>(xType, yType));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr  GlobalNamespace::AudioRTPCSingle::operator ::GlobalNamespace::IAudioRTPCValue*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* GlobalNamespace::AudioRTPCSingle::i___GlobalNamespace__IAudioRTPCValue() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCSingle::AudioRTPCSingle()   {
}
