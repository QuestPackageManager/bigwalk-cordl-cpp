#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCConstant.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCConstant_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCConstant.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::AudioRTPCConstant::*)()>(&::GlobalNamespace::AudioRTPCConstant::get_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCConstant.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCConstant::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCConstant::set_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCConstant.get_ConstantValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRTPCConstant::*)()>(&::GlobalNamespace::AudioRTPCConstant::get_ConstantValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"get_ConstantValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCConstant._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCConstant::*)(::GlobalNamespace::AudioRTPC_YAxisType, float_t)>(&::GlobalNamespace::AudioRTPCConstant::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048b2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCConstant.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPCConstant::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioRTPCConstant::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCConstant.ChangeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCConstant::*)(float_t)>(&::GlobalNamespace::AudioRTPCConstant::ChangeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"ChangeValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPCConstant::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPCConstant::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void GlobalNamespace::AudioRTPCConstant::__cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr float_t& GlobalNamespace::AudioRTPCConstant::__cordl_internal_get__constantValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constantValue;
}
constexpr float_t const& GlobalNamespace::AudioRTPCConstant::__cordl_internal_get__constantValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constantValue;
}
constexpr void GlobalNamespace::AudioRTPCConstant::__cordl_internal_set__constantValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constantValue = value;
}
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::AudioRTPCConstant::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCConstant::set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"set_YAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioRTPCConstant::get_ConstantValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"get_ConstantValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCConstant::_ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, yType, val);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPCConstant::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
inline void GlobalNamespace::AudioRTPCConstant::ChangeValue(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCConstant*>(),
                        {"ChangeValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::GlobalNamespace::AudioRTPCConstant* GlobalNamespace::AudioRTPCConstant::New_ctor(::GlobalNamespace::AudioRTPC_YAxisType  yType, float_t  val)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCConstant*>(yType, val));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCValue"
constexpr  GlobalNamespace::AudioRTPCConstant::operator ::GlobalNamespace::IAudioRTPCValue*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCValue"
constexpr ::GlobalNamespace::IAudioRTPCValue* GlobalNamespace::AudioRTPCConstant::i___GlobalNamespace__IAudioRTPCValue() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCValue*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCConstant::AudioRTPCConstant()   {
}
