#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_Accelerometer.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_Accelerometer_def.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_Accelerometer_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType::CustomCalculation_Accelerometer_CalculationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType::CustomCalculation_Accelerometer_CalculationType()   {
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType::Pitch{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType::Roll{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType::CustomCalculation_Accelerometer_OutputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType::CustomCalculation_Accelerometer_OutputType()   {
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType::Axis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType::Angle{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType::CustomCalculation_Accelerometer_InputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType::CustomCalculation_Accelerometer_InputType()   {
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType::Acceleration{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType::UserAcceleration{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType::Gravity{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_Accelerometer.get_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper_DataType (::Rewired::Data::Mapping::CustomCalculation_Accelerometer::*)()>(&::Rewired::Data::Mapping::CustomCalculation_Accelerometer::get_ResultType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180908a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_Accelerometer.vBbbehJMcrjNEfmjWFrvcPdfUuTvB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::CustomCalculation_Accelerometer::*)()>(&::Rewired::Data::Mapping::CustomCalculation_Accelerometer::vBbbehJMcrjNEfmjWFrvcPdfUuTvB)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1818a2620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_Accelerometer.OLgitSwKqElsCyiWrtkWpdBDELieA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::CustomCalculation_Accelerometer::*)()>(&::Rewired::Data::Mapping::CustomCalculation_Accelerometer::OLgitSwKqElsCyiWrtkWpdBDELieA)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1818a2240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {"OLgitSwKqElsCyiWrtkWpdBDELieA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_Accelerometer.kClVjCXqShcNihdeKQfxTAFiEauO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::CustomCalculation_Accelerometer::*)()>(&::Rewired::Data::Mapping::CustomCalculation_Accelerometer::kClVjCXqShcNihdeKQfxTAFiEauO)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818a2470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {"kClVjCXqShcNihdeKQfxTAFiEauO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_Accelerometer.TaGjAgLpPVdpgtDtSGgCBaPwYOxu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::CustomCalculation_Accelerometer::*)(float_t)>(&::Rewired::Data::Mapping::CustomCalculation_Accelerometer::TaGjAgLpPVdpgtDtSGgCBaPwYOxu)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818a2420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {"TaGjAgLpPVdpgtDtSGgCBaPwYOxu", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_Accelerometer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::CustomCalculation_Accelerometer::*)()>(&::Rewired::Data::Mapping::CustomCalculation_Accelerometer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType& Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_get__calculationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calculationType;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType const& Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_get__calculationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calculationType;
}
constexpr void Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_set__calculationType(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calculationType = value;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType& Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_get__inputType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputType;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType const& Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_get__inputType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputType;
}
constexpr void Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_set__inputType(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputType = value;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType& Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_get__outputType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputType;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType const& Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_get__outputType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputType;
}
constexpr void Rewired::Data::Mapping::CustomCalculation_Accelerometer::__cordl_internal_set__outputType(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputType = value;
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType Rewired::Data::Mapping::CustomCalculation_Accelerometer::get_ResultType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::CustomCalculation_Accelerometer::vBbbehJMcrjNEfmjWFrvcPdfUuTvB()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::CustomCalculation_Accelerometer::OLgitSwKqElsCyiWrtkWpdBDELieA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {"OLgitSwKqElsCyiWrtkWpdBDELieA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::CustomCalculation_Accelerometer::kClVjCXqShcNihdeKQfxTAFiEauO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {"kClVjCXqShcNihdeKQfxTAFiEauO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::CustomCalculation_Accelerometer::TaGjAgLpPVdpgtDtSGgCBaPwYOxu(float_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {"TaGjAgLpPVdpgtDtSGgCBaPwYOxu", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::Mapping::CustomCalculation_Accelerometer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::CustomCalculation_Accelerometer* Rewired::Data::Mapping::CustomCalculation_Accelerometer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::CustomCalculation_Accelerometer*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer::CustomCalculation_Accelerometer()   {
}
