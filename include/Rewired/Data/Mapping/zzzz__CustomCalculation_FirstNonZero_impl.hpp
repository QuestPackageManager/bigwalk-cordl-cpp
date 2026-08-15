#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_FirstNonZero.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_FirstNonZero_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero.get_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper_DataType (::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::*)()>(&::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::get_ResultType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180908a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero.lNfYfSatehiNHlLXdExWeyBcUaDtA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::*)()>(&::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::lNfYfSatehiNHlLXdExWeyBcUaDtA)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818a2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero.KIGdNfaYuhVBaHSPevmQCvBJQeeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::*)()>(&::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::KIGdNfaYuhVBaHSPevmQCvBJQeeb)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818a2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(),
                        {"KIGdNfaYuhVBaHSPevmQCvBJQeeb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::*)()>(&::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType Rewired::Data::Mapping::CustomCalculation_FirstNonZero::get_ResultType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::CustomCalculation_FirstNonZero::lNfYfSatehiNHlLXdExWeyBcUaDtA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::CustomCalculation_FirstNonZero::KIGdNfaYuhVBaHSPevmQCvBJQeeb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(),
                        {"KIGdNfaYuhVBaHSPevmQCvBJQeeb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::CustomCalculation_FirstNonZero::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero* Rewired::Data::Mapping::CustomCalculation_FirstNonZero::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero::CustomCalculation_FirstNonZero()   {
}
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Data::Mapping::CustomCalculation_FirstNonZero::resultType{static_cast<int32_t>(0xa)};
