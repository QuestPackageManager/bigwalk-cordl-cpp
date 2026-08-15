#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/TimeProvider.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__TimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ITimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::TimeProvider.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::TimeProvider::*)()>(&::WaveHarmonic::Crest::TimeProvider::get_Time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::TimeProvider.get_Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::TimeProvider::*)()>(&::WaveHarmonic::Crest::TimeProvider::get_Delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::TimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::TimeProvider::*)()>(&::WaveHarmonic::Crest::TimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t WaveHarmonic::Crest::TimeProvider::get_Time()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::TimeProvider::get_Delta()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::TimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::TimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::TimeProvider* WaveHarmonic::Crest::TimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::TimeProvider*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ITimeProvider"
constexpr  WaveHarmonic::Crest::TimeProvider::operator ::WaveHarmonic::Crest::ITimeProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ITimeProvider"
constexpr ::WaveHarmonic::Crest::ITimeProvider* WaveHarmonic::Crest::TimeProvider::i___WaveHarmonic__Crest__ITimeProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::TimeProvider::TimeProvider()   {
}
