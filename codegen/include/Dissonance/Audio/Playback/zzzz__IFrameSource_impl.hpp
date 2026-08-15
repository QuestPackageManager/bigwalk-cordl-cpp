#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IFrameSource.hpp"
#include "Dissonance/Audio/Playback/zzzz__IFrameSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::IFrameSource.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Audio::Playback::IFrameSource::*)()>(&::Dissonance::Audio::Playback::IFrameSource::get_FrameSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IFrameSource.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::IFrameSource::*)()>(&::Dissonance::Audio::Playback::IFrameSource::get_WaveFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IFrameSource.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IFrameSource::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::IFrameSource::Prepare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IFrameSource.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::IFrameSource::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::IFrameSource::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IFrameSource.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IFrameSource::*)()>(&::Dissonance::Audio::Playback::IFrameSource::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 4}
                ));
    return ___internal_method;
  }
};
inline uint32_t Dissonance::Audio::Playback::IFrameSource::get_FrameSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::IFrameSource::get_WaveFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IFrameSource::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Audio::Playback::IFrameSource::Read(::System::ArraySegment_1<float_t>  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Playback::IFrameSource::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IFrameSource*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
