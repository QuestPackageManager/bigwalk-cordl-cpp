#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioRTPCValue.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAudioRTPCValue.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::IAudioRTPCValue::*)()>(&::GlobalNamespace::IAudioRTPCValue::get_YAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(),
                    {::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioRTPCValue.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IAudioRTPCValue::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::IAudioRTPCValue::set_YAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(),
                    {::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioRTPCValue.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::IAudioRTPCValue::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::IAudioRTPCValue::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(),
                    {::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::IAudioRTPCValue::get_YAxis()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline void GlobalNamespace::IAudioRTPCValue::set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::IAudioRTPCValue::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IAudioRTPCValue*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
