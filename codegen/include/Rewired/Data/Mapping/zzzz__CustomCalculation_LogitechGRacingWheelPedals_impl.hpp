#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_LogitechGRacingWheelPedals.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_LogitechGRacingWheelPedals_def.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_LogitechGRacingWheelPedals_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode::CustomCalculation_LogitechGRacingWheelPedals_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode::CustomCalculation_LogitechGRacingWheelPedals_Mode()   {
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode  Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode::SharedAxis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode  Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode::SeparateAxes{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals.get_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper_DataType (::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::*)()>(&::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::get_ResultType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180908a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals.UbcthHBRylGxkqhwywcbrqctFGdG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::*)()>(&::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::UbcthHBRylGxkqhwywcbrqctFGdG)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818a2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals.huxHicgLHgrJeZLTAHAvataqanuO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::*)()>(&::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::huxHicgLHgrJeZLTAHAvataqanuO)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1818a2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                        {"huxHicgLHgrJeZLTAHAvataqanuO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals.fybOBVhzmetqcvhaTyvweQkjFtko
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::*)(float_t, float_t)>(&::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::fybOBVhzmetqcvhaTyvweQkjFtko)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818a2e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                        {"fybOBVhzmetqcvhaTyvweQkjFtko", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::*)()>(&::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode& Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::__cordl_internal_get_PoWfeIjJhHwMZlYneTgaLxIlskyDA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoWfeIjJhHwMZlYneTgaLxIlskyDA;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode const& Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::__cordl_internal_get_PoWfeIjJhHwMZlYneTgaLxIlskyDA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoWfeIjJhHwMZlYneTgaLxIlskyDA;
}
constexpr void Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::__cordl_internal_set_PoWfeIjJhHwMZlYneTgaLxIlskyDA(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoWfeIjJhHwMZlYneTgaLxIlskyDA = value;
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::get_ResultType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::UbcthHBRylGxkqhwywcbrqctFGdG()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::huxHicgLHgrJeZLTAHAvataqanuO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                        {"huxHicgLHgrJeZLTAHAvataqanuO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::fybOBVhzmetqcvhaTyvweQkjFtko(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                        {"fybOBVhzmetqcvhaTyvweQkjFtko", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals* Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::CustomCalculation_LogitechGRacingWheelPedals()   {
}
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals::resultType{static_cast<int32_t>(0xa)};
