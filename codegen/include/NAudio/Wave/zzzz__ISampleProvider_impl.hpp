#pragma once
// IWYU pragma private; include "NAudio/Wave/ISampleProvider.hpp"
#include "NAudio/Wave/zzzz__ISampleProvider_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
//  Writing Method size for method: ::NAudio::Wave::ISampleProvider.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::NAudio::Wave::ISampleProvider::*)()>(&::NAudio::Wave::ISampleProvider::get_WaveFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::ISampleProvider*>(),
                    {::i2c::class_of<::NAudio::Wave::ISampleProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::ISampleProvider.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::NAudio::Wave::ISampleProvider::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::NAudio::Wave::ISampleProvider::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::ISampleProvider*>(),
                    {::i2c::class_of<::NAudio::Wave::ISampleProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::NAudio::Wave::WaveFormat* NAudio::Wave::ISampleProvider::get_WaveFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::ISampleProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline int32_t NAudio::Wave::ISampleProvider::Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::ISampleProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
