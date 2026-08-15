#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/BufferedSampleProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__BufferedSampleProvider_def.hpp"
#include "Dissonance/Datastructures/zzzz__TransferBuffer_1_def.hpp"
#include "NAudio/Wave/zzzz__ISampleProvider_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::BufferedSampleProvider::*)()>(&::Dissonance::Audio::Capture::BufferedSampleProvider::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f3990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::BufferedSampleProvider::*)()>(&::Dissonance::Audio::Capture::BufferedSampleProvider::get_Capacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f3970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::BufferedSampleProvider::*)()>(&::Dissonance::Audio::Capture::BufferedSampleProvider::get_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BufferedSampleProvider::*)(::NAudio::Wave::WaveFormat*, int32_t)>(&::Dissonance::Audio::Capture::BufferedSampleProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805f3910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::BufferedSampleProvider::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Dissonance::Audio::Capture::BufferedSampleProvider::Read)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805f3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::BufferedSampleProvider::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Capture::BufferedSampleProvider::Write)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805f38c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"Write", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BufferedSampleProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BufferedSampleProvider::*)()>(&::Dissonance::Audio::Capture::BufferedSampleProvider::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f38a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Capture::BufferedSampleProvider::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Capture::BufferedSampleProvider::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::Audio::Capture::BufferedSampleProvider::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>*& Dissonance::Audio::Capture::BufferedSampleProvider::__cordl_internal_get__samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>* const& Dissonance::Audio::Capture::BufferedSampleProvider::__cordl_internal_get__samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr void Dissonance::Audio::Capture::BufferedSampleProvider::__cordl_internal_set__samples(::Dissonance::Datastructures::TransferBuffer_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples = value;
}
inline int32_t Dissonance::Audio::Capture::BufferedSampleProvider::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Capture::BufferedSampleProvider::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::BufferedSampleProvider::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BufferedSampleProvider::_ctor(::NAudio::Wave::WaveFormat*  format, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, bufferSize);
}
inline int32_t Dissonance::Audio::Capture::BufferedSampleProvider::Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Dissonance::Audio::Capture::BufferedSampleProvider::Write(::System::ArraySegment_1<float_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"Write", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data);
}
inline void Dissonance::Audio::Capture::BufferedSampleProvider::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BufferedSampleProvider*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::BufferedSampleProvider* Dissonance::Audio::Capture::BufferedSampleProvider::New_ctor(::NAudio::Wave::WaveFormat*  format, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::BufferedSampleProvider*>(format, bufferSize));
}
/// @brief Convert operator to "::NAudio::Wave::ISampleProvider"
constexpr  Dissonance::Audio::Capture::BufferedSampleProvider::operator ::NAudio::Wave::ISampleProvider*() noexcept {
return static_cast<::NAudio::Wave::ISampleProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::NAudio::Wave::ISampleProvider"
constexpr ::NAudio::Wave::ISampleProvider* Dissonance::Audio::Capture::BufferedSampleProvider::i___NAudio__Wave__ISampleProvider() noexcept {
return static_cast<::NAudio::Wave::ISampleProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider::BufferedSampleProvider()   {
}
