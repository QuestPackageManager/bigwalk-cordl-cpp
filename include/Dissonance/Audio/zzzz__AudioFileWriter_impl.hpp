#pragma once
// IWYU pragma private; include "Dissonance/Audio/AudioFileWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/zzzz__AudioFileWriter_def.hpp"
#include "Dissonance/Threading/zzzz__LockedValue_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFileWriter_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::AudioFileWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioFileWriter::*)(::StringW, ::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::AudioFileWriter::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805d7b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioFileWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioFileWriter::*)()>(&::Dissonance::Audio::AudioFileWriter::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805d7860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioFileWriter.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioFileWriter::*)()>(&::Dissonance::Audio::AudioFileWriter::Flush)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805d7940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioFileWriter.WriteSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioFileWriter::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::AudioFileWriter::WriteSamples)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805d7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {"WriteSamples", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>*& Dissonance::Audio::AudioFileWriter::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>* const& Dissonance::Audio::AudioFileWriter::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void Dissonance::Audio::AudioFileWriter::__cordl_internal_set__lock(::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
constexpr bool& Dissonance::Audio::AudioFileWriter::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr bool const& Dissonance::Audio::AudioFileWriter::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr void Dissonance::Audio::AudioFileWriter::__cordl_internal_set__error(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
inline void Dissonance::Audio::AudioFileWriter::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::AudioFileWriter*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::AudioFileWriter::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::AudioFileWriter*>();
}
inline void Dissonance::Audio::AudioFileWriter::_ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename, format);
}
inline void Dissonance::Audio::AudioFileWriter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::AudioFileWriter::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::AudioFileWriter::WriteSamples(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioFileWriter*>(),
                        {"WriteSamples", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline ::Dissonance::Audio::AudioFileWriter* Dissonance::Audio::AudioFileWriter::New_ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::AudioFileWriter*>(filename, format));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::AudioFileWriter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::AudioFileWriter::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::AudioFileWriter::AudioFileWriter()   {
}
