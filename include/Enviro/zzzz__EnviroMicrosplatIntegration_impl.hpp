#pragma once
// IWYU pragma private; include "Enviro/EnviroMicrosplatIntegration.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Enviro/zzzz__EnviroMicrosplatIntegration_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroMicrosplatIntegration.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroMicrosplatIntegration::*)()>(&::Enviro::EnviroMicrosplatIntegration::Update)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803c25a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroMicrosplatIntegration*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroMicrosplatIntegration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroMicrosplatIntegration::*)()>(&::Enviro::EnviroMicrosplatIntegration::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c27d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroMicrosplatIntegration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateWetness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateWetness;
}
constexpr bool const& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateWetness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateWetness;
}
constexpr void Enviro::EnviroMicrosplatIntegration::__cordl_internal_set_UpdateWetness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateWetness = value;
}
constexpr float_t& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_minWetness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWetness;
}
constexpr float_t const& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_minWetness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWetness;
}
constexpr void Enviro::EnviroMicrosplatIntegration::__cordl_internal_set_minWetness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minWetness = value;
}
constexpr bool& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateRainRipples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateRainRipples;
}
constexpr bool const& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateRainRipples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateRainRipples;
}
constexpr void Enviro::EnviroMicrosplatIntegration::__cordl_internal_set_UpdateRainRipples(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateRainRipples = value;
}
constexpr bool& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdatePuddles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdatePuddles;
}
constexpr bool const& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdatePuddles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdatePuddles;
}
constexpr void Enviro::EnviroMicrosplatIntegration::__cordl_internal_set_UpdatePuddles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdatePuddles = value;
}
constexpr bool& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateStreams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateStreams;
}
constexpr bool const& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateStreams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateStreams;
}
constexpr void Enviro::EnviroMicrosplatIntegration::__cordl_internal_set_UpdateStreams(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateStreams = value;
}
constexpr bool& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateSnow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateSnow;
}
constexpr bool const& Enviro::EnviroMicrosplatIntegration::__cordl_internal_get_UpdateSnow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateSnow;
}
constexpr void Enviro::EnviroMicrosplatIntegration::__cordl_internal_set_UpdateSnow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateSnow = value;
}
inline void Enviro::EnviroMicrosplatIntegration::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroMicrosplatIntegration*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroMicrosplatIntegration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroMicrosplatIntegration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroMicrosplatIntegration* Enviro::EnviroMicrosplatIntegration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroMicrosplatIntegration*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroMicrosplatIntegration::EnviroMicrosplatIntegration()   {
}
