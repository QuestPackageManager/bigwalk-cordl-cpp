#pragma once
// IWYU pragma private; include "GlobalNamespace/VolatilityEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VolatilityEvaluator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VolatilityEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolatilityEvaluator::*)(float_t)>(&::GlobalNamespace::VolatilityEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180346f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolatilityEvaluator.UpdateVolatility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VolatilityEvaluator::*)(float_t)>(&::GlobalNamespace::VolatilityEvaluator::UpdateVolatility)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180346ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {"UpdateVolatility", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolatilityEvaluator.get_Volatility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VolatilityEvaluator::*)()>(&::GlobalNamespace::VolatilityEvaluator::get_Volatility)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180346fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {"get_Volatility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VolatilityEvaluator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VolatilityEvaluator::*)()>(&::GlobalNamespace::VolatilityEvaluator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alpha;
}
constexpr float_t const& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alpha;
}
constexpr void GlobalNamespace::VolatilityEvaluator::__cordl_internal_set_alpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alpha = value;
}
constexpr float_t& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_ema()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ema;
}
constexpr float_t const& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_ema() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ema;
}
constexpr void GlobalNamespace::VolatilityEvaluator::__cordl_internal_set_ema(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ema = value;
}
constexpr float_t& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_emaSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emaSq;
}
constexpr float_t const& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_emaSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emaSq;
}
constexpr void GlobalNamespace::VolatilityEvaluator::__cordl_internal_set_emaSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emaSq = value;
}
constexpr bool& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& GlobalNamespace::VolatilityEvaluator::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void GlobalNamespace::VolatilityEvaluator::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
inline void GlobalNamespace::VolatilityEvaluator::_ctor(float_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alpha);
}
inline float_t GlobalNamespace::VolatilityEvaluator::UpdateVolatility(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {"UpdateVolatility", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::VolatilityEvaluator::get_Volatility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {"get_Volatility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::VolatilityEvaluator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VolatilityEvaluator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VolatilityEvaluator* GlobalNamespace::VolatilityEvaluator::New_ctor(float_t  alpha)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VolatilityEvaluator*>(alpha));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VolatilityEvaluator::VolatilityEvaluator()   {
}
