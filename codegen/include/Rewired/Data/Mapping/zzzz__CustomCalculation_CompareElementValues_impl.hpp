#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_CompareElementValues.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_CompareElementValues_def.hpp"
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_CompareElementValues_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType::CustomCalculation_CompareElementValues_ComparisonType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType::CustomCalculation_CompareElementValues_ComparisonType()   {
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType::Min{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType::Max{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType::MinAbs{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType::MaxAbs{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues.get_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper_DataType (::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::*)()>(&::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::get_ResultType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180908a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues.OoCDbYOSuMFeCJEGYrLzEfNPOdCB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::*)()>(&::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::OoCDbYOSuMFeCJEGYrLzEfNPOdCB)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1818a2850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues.sAuCfwnpEzbTvpMSzaYTPRMaFpAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::*)()>(&::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::sAuCfwnpEzbTvpMSzaYTPRMaFpAA)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818a2a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(),
                        {"sAuCfwnpEzbTvpMSzaYTPRMaFpAA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::*)()>(&::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType& Rewired::Data::Mapping::CustomCalculation_CompareElementValues::__cordl_internal_get__comparisonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparisonType;
}
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType const& Rewired::Data::Mapping::CustomCalculation_CompareElementValues::__cordl_internal_get__comparisonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparisonType;
}
constexpr void Rewired::Data::Mapping::CustomCalculation_CompareElementValues::__cordl_internal_set__comparisonType(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparisonType = value;
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType Rewired::Data::Mapping::CustomCalculation_CompareElementValues::get_ResultType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::CustomCalculation_CompareElementValues::OoCDbYOSuMFeCJEGYrLzEfNPOdCB()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::CustomCalculation_CompareElementValues::sAuCfwnpEzbTvpMSzaYTPRMaFpAA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(),
                        {"sAuCfwnpEzbTvpMSzaYTPRMaFpAA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::CustomCalculation_CompareElementValues::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues* Rewired::Data::Mapping::CustomCalculation_CompareElementValues::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues::CustomCalculation_CompareElementValues()   {
}
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  Rewired::Data::Mapping::CustomCalculation_CompareElementValues::resultType{static_cast<int32_t>(0xa)};
