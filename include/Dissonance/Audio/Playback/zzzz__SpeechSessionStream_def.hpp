#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SpeechSessionStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeechSessionStream)
namespace Dissonance::Audio::Playback {
class DecoderPipeline;
}
namespace Dissonance::Audio::Playback {
struct FrameFormat;
}
namespace Dissonance::Audio::Playback {
class IJitterEstimator;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Audio::Playback {
struct SpeechSession;
}
namespace Dissonance::Datastructures {
class WindowDeviationCalculator;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class SpeechSessionStream;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::SpeechSessionStream*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SpeechSessionStream*, "Dissonance.Audio.Playback", "SpeechSessionStream");
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.SpeechSessionStream
class CORDL_TYPE SpeechSessionStream : public ::System::Object {
public:
// Declarations
 __declspec(property(get=Dissonance_Audio_Playback_IJitterEstimator_get_Confidence)) float_t  Dissonance_Audio_Playback_IJitterEstimator_Confidence;

 __declspec(property(get=Dissonance_Audio_Playback_IJitterEstimator_get_Jitter)) float_t  Dissonance_Audio_Playback_IJitterEstimator_Jitter;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PlayerName, put=set_PlayerName)) ::StringW  PlayerName;

/// @brief Field _active, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) ::Dissonance::Audio::Playback::DecoderPipeline*  _active;

/// @brief Field _arrivalJitterMeter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrivalJitterMeter, put=__cordl_internal_set__arrivalJitterMeter)) ::Dissonance::Datastructures::WindowDeviationCalculator*  _arrivalJitterMeter;

/// @brief Field _awaitingActivation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__awaitingActivation, put=__cordl_internal_set__awaitingActivation)) ::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>*  _awaitingActivation;

/// @brief Field _currentId, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentId, put=__cordl_internal_set__currentId)) uint32_t  _currentId;

/// @brief Field _metricArrivalDelay, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__metricArrivalDelay, put=__cordl_internal_set__metricArrivalDelay)) ::StringW  _metricArrivalDelay;

/// @brief Field _outputRate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputRate, put=__cordl_internal_set__outputRate)) ::System::Nullable_1<int32_t>  _outputRate;

/// @brief Field _playerName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerName, put=__cordl_internal_set__playerName)) ::StringW  _playerName;

/// @brief Field _queueHeadFirstDequeueAttempt, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__queueHeadFirstDequeueAttempt, put=__cordl_internal_set__queueHeadFirstDequeueAttempt)) ::System::Nullable_1<::System::DateTime>  _queueHeadFirstDequeueAttempt;

/// @brief Field _volumeProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeProvider, put=__cordl_internal_set__volumeProvider)) ::Dissonance::Audio::Playback::IVolumeProvider*  _volumeProvider;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IJitterEstimator"
constexpr operator  ::Dissonance::Audio::Playback::IJitterEstimator*() noexcept;

/// @brief Method Dissonance.Audio.Playback.IJitterEstimator.get_Confidence, addr 0x1805e9580, size 0x50, virtual true, abstract: false, final true
inline float_t Dissonance_Audio_Playback_IJitterEstimator_get_Confidence() ;

/// @brief Method Dissonance.Audio.Playback.IJitterEstimator.get_Jitter, addr 0x1805e95d0, size 0x20, virtual true, abstract: false, final true
inline float_t Dissonance_Audio_Playback_IJitterEstimator_get_Jitter() ;

/// @brief Method ForceReset, addr 0x1805e95f0, size 0xf0, virtual false, abstract: false, final false
inline void ForceReset() ;

static inline ::Dissonance::Audio::Playback::SpeechSessionStream* New_ctor(::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider) ;

/// @brief Method ReceiveFrame, addr 0x1805e96e0, size 0x1d0, virtual false, abstract: false, final false
inline void ReceiveFrame(::Dissonance::Networking::VoicePacket  packet, ::System::Nullable_1<::System::DateTime>  now) ;

/// @brief Method SetFixedOutputRate, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void SetFixedOutputRate(::System::Nullable_1<int32_t>  rate) ;

/// @brief Method StartSession, addr 0x1805e98b0, size 0x340, virtual false, abstract: false, final false
inline void StartSession(::Dissonance::Audio::Playback::FrameFormat  format, ::System::Nullable_1<::System::DateTime>  now, ::Dissonance::Audio::Playback::IJitterEstimator*  jitter) ;

/// @brief Method StopSession, addr 0x1805e9bf0, size 0xa0, virtual false, abstract: false, final false
inline void StopSession(bool  logNoSessionError) ;

/// @brief Method TryDequeueSession, addr 0x1805e9c90, size 0x1e0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> TryDequeueSession(::System::Nullable_1<::System::DateTime>  now) ;

constexpr ::Dissonance::Audio::Playback::DecoderPipeline* const& __cordl_internal_get__active() const;

constexpr ::Dissonance::Audio::Playback::DecoderPipeline*& __cordl_internal_get__active() ;

constexpr ::Dissonance::Datastructures::WindowDeviationCalculator* const& __cordl_internal_get__arrivalJitterMeter() const;

constexpr ::Dissonance::Datastructures::WindowDeviationCalculator*& __cordl_internal_get__arrivalJitterMeter() ;

constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>* const& __cordl_internal_get__awaitingActivation() const;

constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>*& __cordl_internal_get__awaitingActivation() ;

constexpr uint32_t const& __cordl_internal_get__currentId() const;

constexpr uint32_t& __cordl_internal_get__currentId() ;

constexpr ::StringW const& __cordl_internal_get__metricArrivalDelay() const;

constexpr ::StringW& __cordl_internal_get__metricArrivalDelay() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__outputRate() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__outputRate() ;

constexpr ::StringW const& __cordl_internal_get__playerName() const;

constexpr ::StringW& __cordl_internal_get__playerName() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__queueHeadFirstDequeueAttempt() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__queueHeadFirstDequeueAttempt() ;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& __cordl_internal_get__volumeProvider() const;

constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& __cordl_internal_get__volumeProvider() ;

constexpr void __cordl_internal_set__active(::Dissonance::Audio::Playback::DecoderPipeline*  value) ;

constexpr void __cordl_internal_set__arrivalJitterMeter(::Dissonance::Datastructures::WindowDeviationCalculator*  value) ;

constexpr void __cordl_internal_set__awaitingActivation(::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>*  value) ;

constexpr void __cordl_internal_set__currentId(uint32_t  value) ;

constexpr void __cordl_internal_set__metricArrivalDelay(::StringW  value) ;

constexpr void __cordl_internal_set__outputRate(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__playerName(::StringW  value) ;

constexpr void __cordl_internal_set__queueHeadFirstDequeueAttempt(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set__volumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value) ;

/// @brief Method .ctor, addr 0x1805e9ec0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_PlayerName, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PlayerName() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IJitterEstimator"
constexpr ::Dissonance::Audio::Playback::IJitterEstimator* i___Dissonance__Audio__Playback__IJitterEstimator() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_PlayerName, addr 0x1805e9f60, size 0x80, virtual false, abstract: false, final false
inline void set_PlayerName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeechSessionStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeechSessionStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeechSessionStream(SpeechSessionStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeechSessionStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeechSessionStream(SpeechSessionStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16989};

/// @brief Field _metricArrivalDelay, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____metricArrivalDelay;

/// @brief Field _awaitingActivation, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Dissonance::Audio::Playback::SpeechSession>*  ____awaitingActivation;

/// @brief Field _volumeProvider, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::IVolumeProvider*  ____volumeProvider;

/// @brief Field _outputRate, offset: 0x28, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ____outputRate;

/// @brief Field _queueHeadFirstDequeueAttempt, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ____queueHeadFirstDequeueAttempt;

/// @brief Field _active, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::Playback::DecoderPipeline*  ____active;

/// @brief Field _currentId, offset: 0x48, size: 0x4, def value: None
 uint32_t  ____currentId;

/// @brief Field _playerName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____playerName;

/// @brief Field _arrivalJitterMeter, offset: 0x58, size: 0x8, def value: None
 ::Dissonance::Datastructures::WindowDeviationCalculator*  ____arrivalJitterMeter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____metricArrivalDelay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____awaitingActivation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____volumeProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____outputRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____queueHeadFirstDequeueAttempt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____active) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____currentId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____playerName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SpeechSessionStream, ____arrivalJitterMeter) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SpeechSessionStream) == 0x60, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
