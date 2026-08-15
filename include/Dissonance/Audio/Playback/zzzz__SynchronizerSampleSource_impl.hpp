#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SynchronizerSampleSource.hpp"
#include "Dissonance/Audio/Playback/zzzz__DesyncCalculator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SynchronizerSampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRateProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__ISampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SyncState_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.get_IdealPlaybackPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::get_IdealPlaybackPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805eb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_IdealPlaybackPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.get_PlaybackPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::get_PlaybackPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805eb610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_PlaybackPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.get_Desync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::get_Desync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805eb5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_Desync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::get_WaveFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e9550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.get_PlaybackRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::get_PlaybackRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_PlaybackRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.set_PlaybackRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)(float_t)>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::set_PlaybackRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"set_PlaybackRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::SyncState (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::get_State)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805eb660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)(::Dissonance::Audio::Playback::ISampleSource*, ::System::TimeSpan)>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805eb550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::ISampleSource*>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::Prepare)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805ead80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)()>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805eb130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::Read)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805eae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SynchronizerSampleSource.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SynchronizerSampleSource::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Dissonance::Audio::Playback::SynchronizerSampleSource::Skip)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1805eb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Skip", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::ISampleSource*& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__upstream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstream;
}
constexpr ::Dissonance::Audio::Playback::ISampleSource* const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__upstream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstream;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__upstream(::Dissonance::Audio::Playback::ISampleSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____upstream = value;
}
constexpr ::System::TimeSpan& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__resetDesyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetDesyncTime;
}
constexpr ::System::TimeSpan const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__resetDesyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetDesyncTime;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__resetDesyncTime(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetDesyncTime = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer;
}
constexpr ::System::Diagnostics::Stopwatch* const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__timer(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timer = value;
}
constexpr bool& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr ::System::TimeSpan& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__aheadWarningLastSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aheadWarningLastSent;
}
constexpr ::System::TimeSpan const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__aheadWarningLastSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aheadWarningLastSent;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__aheadWarningLastSent(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aheadWarningLastSent = value;
}
constexpr int64_t& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__totalSamplesRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSamplesRead;
}
constexpr int64_t const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__totalSamplesRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSamplesRead;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__totalSamplesRead(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalSamplesRead = value;
}
constexpr ::Dissonance::Audio::Playback::DesyncCalculator& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__desync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desync;
}
constexpr ::Dissonance::Audio::Playback::DesyncCalculator const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__desync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desync;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__desync(::Dissonance::Audio::Playback::DesyncCalculator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____desync = value;
}
constexpr float_t& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__PlaybackRate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackRate_k__BackingField;
}
constexpr float_t const& Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_get__PlaybackRate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackRate_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::SynchronizerSampleSource::__cordl_internal_set__PlaybackRate_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaybackRate_k__BackingField = value;
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SynchronizerSampleSource*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::SynchronizerSampleSource::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SynchronizerSampleSource*>();
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::setStaticF_DesyncFixBuffer(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "DesyncFixBuffer", ::Dissonance::Audio::Playback::SynchronizerSampleSource*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Dissonance::Audio::Playback::SynchronizerSampleSource::getStaticF_DesyncFixBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "DesyncFixBuffer", ::Dissonance::Audio::Playback::SynchronizerSampleSource*>();
}
inline ::System::TimeSpan Dissonance::Audio::Playback::SynchronizerSampleSource::get_IdealPlaybackPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_IdealPlaybackPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Playback::SynchronizerSampleSource::get_PlaybackPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_PlaybackPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Playback::SynchronizerSampleSource::get_Desync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_Desync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::SynchronizerSampleSource::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SynchronizerSampleSource::get_PlaybackRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_PlaybackRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::set_PlaybackRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"set_PlaybackRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Playback::SyncState Dissonance::Audio::Playback::SynchronizerSampleSource::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::SyncState>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::_ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream, ::System::TimeSpan  resetDesyncTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::ISampleSource*>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upstream, resetDesyncTime);
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SynchronizerSampleSource::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::SynchronizerSampleSource::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, samples);
}
inline bool Dissonance::Audio::Playback::SynchronizerSampleSource::Skip(int32_t  desyncMilliseconds, ::by_ref<int32_t>  deltaSamples, ::by_ref<int32_t>  deltaDesyncMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(),
                        {"Skip", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desyncMilliseconds, deltaSamples, deltaDesyncMilliseconds);
}
inline ::Dissonance::Audio::Playback::SynchronizerSampleSource* Dissonance::Audio::Playback::SynchronizerSampleSource::New_ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream, ::System::TimeSpan  resetDesyncTime)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::SynchronizerSampleSource*>(upstream, resetDesyncTime));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr  Dissonance::Audio::Playback::SynchronizerSampleSource::operator ::Dissonance::Audio::Playback::ISampleSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* Dissonance::Audio::Playback::SynchronizerSampleSource::i___Dissonance__Audio__Playback__ISampleSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRateProvider"
constexpr  Dissonance::Audio::Playback::SynchronizerSampleSource::operator ::Dissonance::Audio::Playback::IRateProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRateProvider"
constexpr ::Dissonance::Audio::Playback::IRateProvider* Dissonance::Audio::Playback::SynchronizerSampleSource::i___Dissonance__Audio__Playback__IRateProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SynchronizerSampleSource::SynchronizerSampleSource()   {
}
