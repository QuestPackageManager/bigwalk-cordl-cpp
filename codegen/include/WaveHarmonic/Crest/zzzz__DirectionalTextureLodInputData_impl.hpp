#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DirectionalTextureLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DirectionalTextureLodInputData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DirectionalTextureLodInputData.get_NegativeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DirectionalTextureLodInputData::*)()>(&::WaveHarmonic::Crest::DirectionalTextureLodInputData::get_NegativeValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>(),
                        {"get_NegativeValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DirectionalTextureLodInputData.set_NegativeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DirectionalTextureLodInputData::*)(bool)>(&::WaveHarmonic::Crest::DirectionalTextureLodInputData::set_NegativeValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180452bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>(),
                        {"set_NegativeValues", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DirectionalTextureLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DirectionalTextureLodInputData::*)()>(&::WaveHarmonic::Crest::DirectionalTextureLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825750a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::DirectionalTextureLodInputData::__cordl_internal_get__NegativeValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NegativeValues;
}
constexpr bool const& WaveHarmonic::Crest::DirectionalTextureLodInputData::__cordl_internal_get__NegativeValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NegativeValues;
}
constexpr void WaveHarmonic::Crest::DirectionalTextureLodInputData::__cordl_internal_set__NegativeValues(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NegativeValues = value;
}
inline bool WaveHarmonic::Crest::DirectionalTextureLodInputData::get_NegativeValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>(),
                        {"get_NegativeValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DirectionalTextureLodInputData::set_NegativeValues(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>(),
                        {"set_NegativeValues", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::DirectionalTextureLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DirectionalTextureLodInputData* WaveHarmonic::Crest::DirectionalTextureLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DirectionalTextureLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DirectionalTextureLodInputData::DirectionalTextureLodInputData()   {
}
