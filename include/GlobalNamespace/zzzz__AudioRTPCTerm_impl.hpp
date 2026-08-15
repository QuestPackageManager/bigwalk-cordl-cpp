#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCTerm.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCTerm_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCAssetWrapper_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCTerm_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCValue_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType::AudioRTPCTerm_TermType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType::AudioRTPCTerm_TermType()   {
}
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::Constant{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::RTPC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::RTPCAsset{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::Multiply{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::Sum{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::Subtraction{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::Max{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::Min{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType  GlobalNamespace::AudioRTPCTerm_TermType::None{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm_TermType (::GlobalNamespace::AudioRTPCTerm::*)()>(&::GlobalNamespace::AudioRTPCTerm::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPC_YAxisType (::GlobalNamespace::AudioRTPCTerm::*)()>(&::GlobalNamespace::AudioRTPCTerm::get_YAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IAudioRTPCValue* (::GlobalNamespace::AudioRTPCTerm::*)()>(&::GlobalNamespace::AudioRTPCTerm::get_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCTerm::*)(::GlobalNamespace::AudioRTPCTerm_TermType, ::GlobalNamespace::AudioRTPC_YAxisType, float_t, ::GlobalNamespace::AudioRTPCAssetWrapper*)>(&::GlobalNamespace::AudioRTPCTerm::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18048c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioRTPCAssetWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPCTerm::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioRTPCTerm::GetValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18048c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.ChangeYAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCTerm::*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCTerm::ChangeYAxis)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18048bbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"ChangeYAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPCTerm::*)(::GlobalNamespace::AudioRTPCTerm_TermType)>(&::GlobalNamespace::AudioRTPCTerm::ChangeType)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18048ba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"ChangeType", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPCTerm.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (*)(::GlobalNamespace::AudioRTPCTerm*, ::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPCTerm::Clone)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x18048bdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"Clone", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType& GlobalNamespace::AudioRTPCTerm::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::GlobalNamespace::AudioRTPCTerm_TermType const& GlobalNamespace::AudioRTPCTerm::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void GlobalNamespace::AudioRTPCTerm::__cordl_internal_set__type(::GlobalNamespace::AudioRTPCTerm_TermType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPCTerm::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPCTerm::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void GlobalNamespace::AudioRTPCTerm::__cordl_internal_set__yAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr ::GlobalNamespace::IAudioRTPCValue*& GlobalNamespace::AudioRTPCTerm::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr ::GlobalNamespace::IAudioRTPCValue* const& GlobalNamespace::AudioRTPCTerm::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void GlobalNamespace::AudioRTPCTerm::__cordl_internal_set__value(::GlobalNamespace::IAudioRTPCValue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
inline ::GlobalNamespace::AudioRTPCTerm_TermType GlobalNamespace::AudioRTPCTerm::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm_TermType>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPC_YAxisType GlobalNamespace::AudioRTPCTerm::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPC_YAxisType>(this, ___internal_method);
}
inline ::GlobalNamespace::IAudioRTPCValue* GlobalNamespace::AudioRTPCTerm::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAudioRTPCValue*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRTPCTerm::_ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yAxisType, float_t  constantValue, ::GlobalNamespace::AudioRTPCAssetWrapper*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioRTPCAssetWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, termType, yAxisType, constantValue, asset);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPCTerm::GetValue(::GlobalNamespace::IAudioRTPCXProvider*  xProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, xProvider);
}
inline void GlobalNamespace::AudioRTPCTerm::ChangeYAxis(::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"ChangeYAxis", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, yType);
}
inline void GlobalNamespace::AudioRTPCTerm::ChangeType(::GlobalNamespace::AudioRTPCTerm_TermType  termType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"ChangeType", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm_TermType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, termType);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::AudioRTPCTerm::Clone(::GlobalNamespace::AudioRTPCTerm*  sourceTerm, ::GlobalNamespace::AudioRTPC_YAxisType  newYAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPCTerm*>(),
                        {"Clone", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCTerm*>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(nullptr, ___internal_method, sourceTerm, newYAxis);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::AudioRTPCTerm::New_ctor(::GlobalNamespace::AudioRTPCTerm_TermType  termType, ::GlobalNamespace::AudioRTPC_YAxisType  yAxisType, float_t  constantValue, ::GlobalNamespace::AudioRTPCAssetWrapper*  asset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPCTerm*>(termType, yAxisType, constantValue, asset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPCTerm::AudioRTPCTerm()   {
}
