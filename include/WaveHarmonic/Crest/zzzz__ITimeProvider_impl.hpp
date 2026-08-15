#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ITimeProvider.hpp"
#include "WaveHarmonic/Crest/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ITimeProvider.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ITimeProvider::*)()>(&::WaveHarmonic::Crest::ITimeProvider::get_Time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ITimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ITimeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ITimeProvider.get_Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ITimeProvider::*)()>(&::WaveHarmonic::Crest::ITimeProvider::get_Delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ITimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ITimeProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline float_t WaveHarmonic::Crest::ITimeProvider::get_Time()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ITimeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ITimeProvider::get_Delta()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ITimeProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
