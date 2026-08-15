#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/CapturePipelineManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__FrameSkipDetector_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CapturePipelineManager)
namespace Dissonance::Audio::Capture {
class EncoderPipeline;
}
namespace Dissonance::Audio::Capture {
class IAmplitudeProvider;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneCapture;
}
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Audio::Capture {
class IPreprocessingPipeline;
}
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance::Networking {
struct NetworkMode;
}
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace Dissonance {
class CodecSettingsLoader;
}
namespace Dissonance {
class ILossEstimator;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PacketLossMonitor;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class VoicePlayerState;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class CapturePipelineManager;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::CapturePipelineManager*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::CapturePipelineManager*, "Dissonance.Audio.Capture", "CapturePipelineManager");
// Dependencies Dissonance.FrameSkipDetector, System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.CapturePipelineManager
class CORDL_TYPE CapturePipelineManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Microphone)) ::Dissonance::Audio::Capture::IMicrophoneCapture*  Microphone;

 __declspec(property(get=get_MicrophoneName, put=set_MicrophoneName)) ::StringW  MicrophoneName;

 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

/// @brief Field _activationListeners, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__activationListeners, put=__cordl_internal_set__activationListeners)) ::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*  _activationListeners;

/// @brief Field _audioListeners, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioListeners, put=__cordl_internal_set__audioListeners)) ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  _audioListeners;

/// @brief Field _cannotStartMic, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__cannotStartMic, put=__cordl_internal_set__cannotStartMic)) bool  _cannotStartMic;

/// @brief Field _codecSettingsLoader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__codecSettingsLoader, put=__cordl_internal_set__codecSettingsLoader)) ::Dissonance::CodecSettingsLoader*  _codecSettingsLoader;

/// @brief Field _encoder, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Dissonance::Audio::Capture::EncoderPipeline*  _encoder;

/// @brief Field _encoderSubscribed, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get__encoderSubscribed, put=__cordl_internal_set__encoderSubscribed)) bool  _encoderSubscribed;

/// @brief Field _encounteredFatalException, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__encounteredFatalException, put=__cordl_internal_set__encounteredFatalException)) bool  _encounteredFatalException;

/// @brief Field _isMobilePlatform, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMobilePlatform, put=__cordl_internal_set__isMobilePlatform)) bool  _isMobilePlatform;

/// @brief Field _micName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__micName, put=__cordl_internal_set__micName)) ::StringW  _micName;

/// @brief Field _microphone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphone, put=__cordl_internal_set__microphone)) ::Dissonance::Audio::Capture::IMicrophoneCapture*  _microphone;

/// @brief Field _netModeRequiresPipeline, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__netModeRequiresPipeline, put=__cordl_internal_set__netModeRequiresPipeline)) bool  _netModeRequiresPipeline;

/// @brief Field _network, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__network, put=__cordl_internal_set__network)) ::Dissonance::Networking::ICommsNetwork*  _network;

/// @brief Field _pendingResetRequest, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__pendingResetRequest, put=__cordl_internal_set__pendingResetRequest)) bool  _pendingResetRequest;

/// @brief Field _playerChannels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerChannels, put=__cordl_internal_set__playerChannels)) ::Dissonance::PlayerChannels*  _playerChannels;

/// @brief Field _preprocessor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__preprocessor, put=__cordl_internal_set__preprocessor)) ::Dissonance::Audio::Capture::IPreprocessingPipeline*  _preprocessor;

/// @brief Field _receivingPacketLossMonitor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__receivingPacketLossMonitor, put=__cordl_internal_set__receivingPacketLossMonitor)) ::Dissonance::PacketLossMonitor*  _receivingPacketLossMonitor;

/// @brief Field _roomChannels, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomChannels, put=__cordl_internal_set__roomChannels)) ::Dissonance::RoomChannels*  _roomChannels;

/// @brief Field _skipDetector, offset 0x60, size 0x1c 
 __declspec(property(get=__cordl_internal_get__skipDetector, put=__cordl_internal_set__skipDetector)) ::Dissonance::FrameSkipDetector  _skipDetector;

/// @brief Field _startupDelay, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startupDelay, put=__cordl_internal_set__startupDelay)) int32_t  _startupDelay;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IAmplitudeProvider"
constexpr operator  ::Dissonance::Audio::Capture::IAmplitudeProvider*() noexcept;

/// @brief Convert operator to "::Dissonance::ILossEstimator"
constexpr operator  ::Dissonance::ILossEstimator*() noexcept;

/// @brief Method CreatePreprocessor, addr 0x1805f39b0, size 0x70, virtual true, abstract: false, final false
inline ::Dissonance::Audio::Capture::IPreprocessingPipeline* CreatePreprocessor(::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Destroy, addr 0x1805f3a20, size 0xa0, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method ForceReset, addr 0x1805f3ac0, size 0x70, virtual false, abstract: false, final false
inline void ForceReset() ;

/// @brief Method IsMobilePlatform, addr 0x1805f3b30, size 0x30, virtual false, abstract: false, final false
static inline bool IsMobilePlatform() ;

/// @brief Method Net_ModeChanged, addr 0x1805f3b60, size 0x20, virtual false, abstract: false, final false
inline void Net_ModeChanged(::Dissonance::Networking::NetworkMode  mode) ;

static inline ::Dissonance::Audio::Capture::CapturePipelineManager* New_ctor(::Dissonance::CodecSettingsLoader*  codecSettingsLoader, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players, int32_t  startupDelay) ;

/// @brief Method OnAudioDeviceChanged, addr 0x1805f3b80, size 0x10, virtual false, abstract: false, final false
inline void OnAudioDeviceChanged(bool  devicewaschanged) ;

/// @brief Method Pause, addr 0x1805f3b90, size 0x10, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method RestartTransmissionPipeline, addr 0x1805f3ba0, size 0x670, virtual false, abstract: false, final false
inline void RestartTransmissionPipeline(::StringW  reason) ;

/// @brief Method Resume, addr 0x1805f4210, size 0x30, virtual false, abstract: false, final false
inline void Resume(::StringW  reason) ;

/// @brief Method Start, addr 0x1805f4240, size 0x160, virtual false, abstract: false, final false
inline void Start(::Dissonance::Networking::ICommsNetwork*  network, ::Dissonance::Audio::Capture::IMicrophoneCapture*  microphone) ;

/// @brief Method StopTransmissionPipeline, addr 0x1805f43a0, size 0xf0, virtual false, abstract: false, final false
inline void StopTransmissionPipeline() ;

/// @brief Method Subscribe, addr 0x1805f4490, size 0xc0, virtual false, abstract: false, final false
inline void Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Subscribe, addr 0x1805f4550, size 0xc0, virtual false, abstract: false, final false
inline void Subscribe(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method Unsubscribe, addr 0x1805f4610, size 0x80, virtual false, abstract: false, final false
inline void Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Unsubscribe, addr 0x1805f4690, size 0x80, virtual false, abstract: false, final false
inline void Unsubscribe(::Dissonance::VAD::IVoiceActivationListener*  listener) ;

/// @brief Method Update, addr 0x1805f4710, size 0x3e0, virtual false, abstract: false, final false
inline void Update(bool  muted, float_t  deltaTime) ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>* const& __cordl_internal_get__activationListeners() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*& __cordl_internal_get__activationListeners() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>* const& __cordl_internal_get__audioListeners() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*& __cordl_internal_get__audioListeners() ;

constexpr bool const& __cordl_internal_get__cannotStartMic() const;

constexpr bool& __cordl_internal_get__cannotStartMic() ;

constexpr ::Dissonance::CodecSettingsLoader* const& __cordl_internal_get__codecSettingsLoader() const;

constexpr ::Dissonance::CodecSettingsLoader*& __cordl_internal_get__codecSettingsLoader() ;

constexpr ::Dissonance::Audio::Capture::EncoderPipeline* const& __cordl_internal_get__encoder() const;

constexpr ::Dissonance::Audio::Capture::EncoderPipeline*& __cordl_internal_get__encoder() ;

constexpr bool const& __cordl_internal_get__encoderSubscribed() const;

constexpr bool& __cordl_internal_get__encoderSubscribed() ;

constexpr bool const& __cordl_internal_get__encounteredFatalException() const;

constexpr bool& __cordl_internal_get__encounteredFatalException() ;

constexpr bool const& __cordl_internal_get__isMobilePlatform() const;

constexpr bool& __cordl_internal_get__isMobilePlatform() ;

constexpr ::StringW const& __cordl_internal_get__micName() const;

constexpr ::StringW& __cordl_internal_get__micName() ;

constexpr ::Dissonance::Audio::Capture::IMicrophoneCapture* const& __cordl_internal_get__microphone() const;

constexpr ::Dissonance::Audio::Capture::IMicrophoneCapture*& __cordl_internal_get__microphone() ;

constexpr bool const& __cordl_internal_get__netModeRequiresPipeline() const;

constexpr bool& __cordl_internal_get__netModeRequiresPipeline() ;

constexpr ::Dissonance::Networking::ICommsNetwork* const& __cordl_internal_get__network() const;

constexpr ::Dissonance::Networking::ICommsNetwork*& __cordl_internal_get__network() ;

constexpr bool const& __cordl_internal_get__pendingResetRequest() const;

constexpr bool& __cordl_internal_get__pendingResetRequest() ;

constexpr ::Dissonance::PlayerChannels* const& __cordl_internal_get__playerChannels() const;

constexpr ::Dissonance::PlayerChannels*& __cordl_internal_get__playerChannels() ;

constexpr ::Dissonance::Audio::Capture::IPreprocessingPipeline* const& __cordl_internal_get__preprocessor() const;

constexpr ::Dissonance::Audio::Capture::IPreprocessingPipeline*& __cordl_internal_get__preprocessor() ;

constexpr ::Dissonance::PacketLossMonitor* const& __cordl_internal_get__receivingPacketLossMonitor() const;

constexpr ::Dissonance::PacketLossMonitor*& __cordl_internal_get__receivingPacketLossMonitor() ;

constexpr ::Dissonance::RoomChannels* const& __cordl_internal_get__roomChannels() const;

constexpr ::Dissonance::RoomChannels*& __cordl_internal_get__roomChannels() ;

constexpr ::Dissonance::FrameSkipDetector const& __cordl_internal_get__skipDetector() const;

constexpr ::Dissonance::FrameSkipDetector& __cordl_internal_get__skipDetector() ;

constexpr int32_t const& __cordl_internal_get__startupDelay() const;

constexpr int32_t& __cordl_internal_get__startupDelay() ;

constexpr void __cordl_internal_set__activationListeners(::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*  value) ;

constexpr void __cordl_internal_set__audioListeners(::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  value) ;

constexpr void __cordl_internal_set__cannotStartMic(bool  value) ;

constexpr void __cordl_internal_set__codecSettingsLoader(::Dissonance::CodecSettingsLoader*  value) ;

constexpr void __cordl_internal_set__encoder(::Dissonance::Audio::Capture::EncoderPipeline*  value) ;

constexpr void __cordl_internal_set__encoderSubscribed(bool  value) ;

constexpr void __cordl_internal_set__encounteredFatalException(bool  value) ;

constexpr void __cordl_internal_set__isMobilePlatform(bool  value) ;

constexpr void __cordl_internal_set__micName(::StringW  value) ;

constexpr void __cordl_internal_set__microphone(::Dissonance::Audio::Capture::IMicrophoneCapture*  value) ;

constexpr void __cordl_internal_set__netModeRequiresPipeline(bool  value) ;

constexpr void __cordl_internal_set__network(::Dissonance::Networking::ICommsNetwork*  value) ;

constexpr void __cordl_internal_set__pendingResetRequest(bool  value) ;

constexpr void __cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value) ;

constexpr void __cordl_internal_set__preprocessor(::Dissonance::Audio::Capture::IPreprocessingPipeline*  value) ;

constexpr void __cordl_internal_set__receivingPacketLossMonitor(::Dissonance::PacketLossMonitor*  value) ;

constexpr void __cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value) ;

constexpr void __cordl_internal_set__skipDetector(::Dissonance::FrameSkipDetector  value) ;

constexpr void __cordl_internal_set__startupDelay(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805f4b40, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::CodecSettingsLoader*  codecSettingsLoader, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players, int32_t  startupDelay) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Amplitude, addr 0x1805f4d60, size 0x30, virtual true, abstract: false, final true
inline float_t get_Amplitude() ;

/// @brief Method get_Microphone, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Capture::IMicrophoneCapture* get_Microphone() ;

/// @brief Method get_MicrophoneName, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_MicrophoneName() ;

/// @brief Method get_PacketLoss, addr 0x1805f4d90, size 0x20, virtual true, abstract: false, final true
inline float_t get_PacketLoss() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IAmplitudeProvider"
constexpr ::Dissonance::Audio::Capture::IAmplitudeProvider* i___Dissonance__Audio__Capture__IAmplitudeProvider() noexcept;

/// @brief Convert to "::Dissonance::ILossEstimator"
constexpr ::Dissonance::ILossEstimator* i___Dissonance__ILossEstimator() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_MicrophoneName, addr 0x1805f4db0, size 0x100, virtual false, abstract: false, final false
inline void set_MicrophoneName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapturePipelineManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapturePipelineManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CapturePipelineManager(CapturePipelineManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapturePipelineManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapturePipelineManager(CapturePipelineManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17024};

/// @brief Field _isMobilePlatform, offset: 0x10, size: 0x1, def value: None
 bool  ____isMobilePlatform;

/// @brief Field _codecSettingsLoader, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::CodecSettingsLoader*  ____codecSettingsLoader;

/// @brief Field _roomChannels, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  ____roomChannels;

/// @brief Field _playerChannels, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  ____playerChannels;

/// @brief Field _receivingPacketLossMonitor, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::PacketLossMonitor*  ____receivingPacketLossMonitor;

/// @brief Field _network, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Networking::ICommsNetwork*  ____network;

/// @brief Field _microphone, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IMicrophoneCapture*  ____microphone;

/// @brief Field _preprocessor, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::IPreprocessingPipeline*  ____preprocessor;

/// @brief Field _encoder, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::Audio::Capture::EncoderPipeline*  ____encoder;

/// @brief Field _encounteredFatalException, offset: 0x58, size: 0x1, def value: None
 bool  ____encounteredFatalException;

/// @brief Field _netModeRequiresPipeline, offset: 0x59, size: 0x1, def value: None
 bool  ____netModeRequiresPipeline;

/// @brief Field _cannotStartMic, offset: 0x5a, size: 0x1, def value: None
 bool  ____cannotStartMic;

/// @brief Field _encoderSubscribed, offset: 0x5b, size: 0x1, def value: None
 bool  ____encoderSubscribed;

/// @brief Field _startupDelay, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____startupDelay;

/// @brief Field _skipDetector, offset: 0x60, size: 0x1c, def value: None
 ::Dissonance::FrameSkipDetector  ____skipDetector;

/// @brief Field _activationListeners, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*  ____activationListeners;

/// @brief Field _audioListeners, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  ____audioListeners;

/// @brief Field _micName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____micName;

/// @brief Field _pendingResetRequest, offset: 0x98, size: 0x1, def value: None
 bool  ____pendingResetRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____isMobilePlatform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____codecSettingsLoader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____roomChannels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____playerChannels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____receivingPacketLossMonitor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____network) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____microphone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____preprocessor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____encoder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____encounteredFatalException) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____netModeRequiresPipeline) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____cannotStartMic) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____encoderSubscribed) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____startupDelay) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____skipDetector) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____activationListeners) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____audioListeners) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____micName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::CapturePipelineManager, ____pendingResetRequest) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::CapturePipelineManager) == 0xa0, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
