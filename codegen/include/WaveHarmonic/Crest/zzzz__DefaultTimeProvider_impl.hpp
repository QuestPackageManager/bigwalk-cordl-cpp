#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DefaultTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultTimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DefaultTimeProvider.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DefaultTimeProvider::*)()>(&::WaveHarmonic::Crest::DefaultTimeProvider::get_Time)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18259f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DefaultTimeProvider*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DefaultTimeProvider.get_Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DefaultTimeProvider::*)()>(&::WaveHarmonic::Crest::DefaultTimeProvider::get_Delta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182127910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DefaultTimeProvider*>(),
                        {"get_Delta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DefaultTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DefaultTimeProvider::*)()>(&::WaveHarmonic::Crest::DefaultTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DefaultTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t WaveHarmonic::Crest::DefaultTimeProvider::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DefaultTimeProvider*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::DefaultTimeProvider::get_Delta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DefaultTimeProvider*>(),
                        {"get_Delta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DefaultTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DefaultTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DefaultTimeProvider* WaveHarmonic::Crest::DefaultTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DefaultTimeProvider*>());
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ITimeProvider"
constexpr  WaveHarmonic::Crest::DefaultTimeProvider::operator ::WaveHarmonic::Crest::ITimeProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ITimeProvider"
constexpr ::WaveHarmonic::Crest::ITimeProvider* WaveHarmonic::Crest::DefaultTimeProvider::i___WaveHarmonic__Crest__ITimeProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider::DefaultTimeProvider()   {
}
