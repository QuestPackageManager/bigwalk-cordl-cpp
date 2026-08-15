#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SynchronizerSampleSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__DesyncCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SynchronizerSampleSource)
namespace Dissonance::Audio::Playback {
class IRateProvider;
}
namespace Dissonance::Audio::Playback {
class ISampleSource;
}
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
namespace Dissonance::Audio::Playback {
struct SyncState;
}
namespace Dissonance {
class Log;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class SynchronizerSampleSource;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::SynchronizerSampleSource*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SynchronizerSampleSource*, "Dissonance.Audio.Playback", "SynchronizerSampleSource");
// Dependencies Dissonance.Audio.Playback.DesyncCalculator, System.Object, System.TimeSpan
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.SynchronizerSampleSource
class CORDL_TYPE SynchronizerSampleSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Desync)) ::System::TimeSpan  Desync;

/// @brief Field DesyncFixBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DesyncFixBuffer, put=setStaticF_DesyncFixBuffer)) ::ArrayW<float_t>  DesyncFixBuffer;

 __declspec(property(get=get_IdealPlaybackPosition)) ::System::TimeSpan  IdealPlaybackPosition;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PlaybackPosition)) ::System::TimeSpan  PlaybackPosition;

 __declspec(property(get=get_PlaybackRate, put=set_PlaybackRate)) float_t  PlaybackRate;

 __declspec(property(get=get_State)) ::Dissonance::Audio::Playback::SyncState  State;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field <PlaybackRate>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlaybackRate_k__BackingField, put=__cordl_internal_set__PlaybackRate_k__BackingField)) float_t  _PlaybackRate_k__BackingField;

/// @brief Field _aheadWarningLastSent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__aheadWarningLastSent, put=__cordl_internal_set__aheadWarningLastSent)) ::System::TimeSpan  _aheadWarningLastSent;

/// @brief Field _desync, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__desync, put=__cordl_internal_set__desync)) ::Dissonance::Audio::Playback::DesyncCalculator  _desync;

/// @brief Field _enabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _resetDesyncTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetDesyncTime, put=__cordl_internal_set__resetDesyncTime)) ::System::TimeSpan  _resetDesyncTime;

/// @brief Field _timer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timer, put=__cordl_internal_set__timer)) ::System::Diagnostics::Stopwatch*  _timer;

/// @brief Field _totalSamplesRead, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalSamplesRead, put=__cordl_internal_set__totalSamplesRead)) int64_t  _totalSamplesRead;

/// @brief Field _upstream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__upstream, put=__cordl_internal_set__upstream)) ::Dissonance::Audio::Playback::ISampleSource*  _upstream;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IRateProvider"
constexpr operator  ::Dissonance::Audio::Playback::IRateProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr operator  ::Dissonance::Audio::Playback::ISampleSource*() noexcept;

/// @brief Method Enable, addr 0x1803d9d40, size 0x10, virtual false, abstract: false, final false
inline void Enable() ;

static inline ::Dissonance::Audio::Playback::SynchronizerSampleSource* New_ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream, ::System::TimeSpan  resetDesyncTime) ;

/// @brief Method Prepare, addr 0x1805ead80, size 0xf0, virtual true, abstract: false, final true
inline void Prepare(::Dissonance::Audio::Playback::SessionContext  context) ;

/// @brief Method Read, addr 0x1805eae70, size 0x2c0, virtual true, abstract: false, final true
inline bool Read(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method Reset, addr 0x1805eb130, size 0x50, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Skip, addr 0x1805eb180, size 0x340, virtual false, abstract: false, final false
inline bool Skip(int32_t  desyncMilliseconds, ::by_ref<int32_t>  deltaSamples, ::by_ref<int32_t>  deltaDesyncMilliseconds) ;

constexpr float_t const& __cordl_internal_get__PlaybackRate_k__BackingField() const;

constexpr float_t& __cordl_internal_get__PlaybackRate_k__BackingField() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__aheadWarningLastSent() const;

constexpr ::System::TimeSpan& __cordl_internal_get__aheadWarningLastSent() ;

constexpr ::Dissonance::Audio::Playback::DesyncCalculator const& __cordl_internal_get__desync() const;

constexpr ::Dissonance::Audio::Playback::DesyncCalculator& __cordl_internal_get__desync() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__resetDesyncTime() const;

constexpr ::System::TimeSpan& __cordl_internal_get__resetDesyncTime() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__timer() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__timer() ;

constexpr int64_t const& __cordl_internal_get__totalSamplesRead() const;

constexpr int64_t& __cordl_internal_get__totalSamplesRead() ;

constexpr ::Dissonance::Audio::Playback::ISampleSource* const& __cordl_internal_get__upstream() const;

constexpr ::Dissonance::Audio::Playback::ISampleSource*& __cordl_internal_get__upstream() ;

constexpr void __cordl_internal_set__PlaybackRate_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__aheadWarningLastSent(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__desync(::Dissonance::Audio::Playback::DesyncCalculator  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__resetDesyncTime(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__timer(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set__totalSamplesRead(int64_t  value) ;

constexpr void __cordl_internal_set__upstream(::Dissonance::Audio::Playback::ISampleSource*  value) ;

/// @brief Method .ctor, addr 0x1805eb550, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream, ::System::TimeSpan  resetDesyncTime) ;

static inline ::ArrayW<float_t> getStaticF_DesyncFixBuffer() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Desync, addr 0x1805eb5e0, size 0x10, virtual false, abstract: false, final false
inline ::System::TimeSpan get_Desync() ;

/// @brief Method get_IdealPlaybackPosition, addr 0x1805eb5f0, size 0x20, virtual false, abstract: false, final false
inline ::System::TimeSpan get_IdealPlaybackPosition() ;

/// @brief Method get_PlaybackPosition, addr 0x1805eb610, size 0x50, virtual false, abstract: false, final false
inline ::System::TimeSpan get_PlaybackPosition() ;

/// @brief Method get_PlaybackRate, addr 0x1802e2d80, size 0x10, virtual true, abstract: false, final true
inline float_t get_PlaybackRate() ;

/// @brief Method get_State, addr 0x1805eb660, size 0xd0, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::SyncState get_State() ;

/// @brief Method get_WaveFormat, addr 0x1805e9550, size 0x30, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IRateProvider"
constexpr ::Dissonance::Audio::Playback::IRateProvider* i___Dissonance__Audio__Playback__IRateProvider() noexcept;

/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* i___Dissonance__Audio__Playback__ISampleSource() noexcept;

static inline void setStaticF_DesyncFixBuffer(::ArrayW<float_t>  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_PlaybackRate, addr 0x180307250, size 0x10, virtual false, abstract: false, final false
inline void set_PlaybackRate(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynchronizerSampleSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynchronizerSampleSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchronizerSampleSource(SynchronizerSampleSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizerSampleSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchronizerSampleSource(SynchronizerSampleSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16990};

/// @brief Field _upstream, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::ISampleSource*  ____upstream;

/// @brief Field _resetDesyncTime, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  ____resetDesyncTime;

/// @brief Field _timer, offset: 0x20, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____timer;

/// @brief Field _enabled, offset: 0x28, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _aheadWarningLastSent, offset: 0x30, size: 0x8, def value: None
 ::System::TimeSpan  ____aheadWarningLastSent;

/// @brief Field _totalSamplesRead, offset: 0x38, size: 0x8, def value: None
 int64_t  ____totalSamplesRead;

/// @brief Field _desync, offset: 0x40, size: 0x4, def value: None
 ::Dissonance::Audio::Playback::DesyncCalculator  ____desync;

/// @brief Field <PlaybackRate>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____PlaybackRate_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____upstream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____resetDesyncTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____timer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____enabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____aheadWarningLastSent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____totalSamplesRead) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____desync) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SynchronizerSampleSource, ____PlaybackRate_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SynchronizerSampleSource) == 0x48, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
