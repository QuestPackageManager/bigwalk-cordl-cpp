#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SamplePlaybackComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_def.hpp"
#include "GlobalNamespace/zzzz__VoiceCompressor_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SamplePlaybackComponent)
namespace Dissonance::Audio::Playback {
struct SpeechSession;
}
namespace Dissonance::Audio {
class AudioFileWriter;
}
namespace Dissonance {
class Log;
}
namespace GlobalNamespace {
class IAudioFilter;
}
namespace GlobalNamespace {
class IVoiceDataProvider;
}
namespace GlobalNamespace {
struct VoiceCompressor;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class SamplePlaybackComponent;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::SamplePlaybackComponent*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SamplePlaybackComponent*, "Dissonance.Audio.Playback", "SamplePlaybackComponent");
// Dependencies Dissonance.Audio.Playback.SessionContext, Dissonance.Audio.Playback.SpeechSession, System.Nullable`1<T>, UnityEngine.MonoBehaviour, VoiceCompressor
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.SamplePlaybackComponent
class CORDL_TYPE SamplePlaybackComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ARV)) float_t  ARV;

 __declspec(property(get=get_AmplitudeOnlyMode, put=set_AmplitudeOnlyMode)) bool  AmplitudeOnlyMode;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_CachedVoiceData, put=set_CachedVoiceData)) ::ArrayW<float_t>  CachedVoiceData;

 __declspec(property(get=get_CachedVoiceWriteHead, put=set_CachedVoiceWriteHead)) int32_t  CachedVoiceWriteHead;

 __declspec(property(get=get_CompressorReduction)) float_t  CompressorReduction;

 __declspec(property(get=get_HasActiveSession)) bool  HasActiveSession;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field MakeupGain, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_MakeupGain, put=__cordl_internal_set_MakeupGain)) float_t  MakeupGain;

/// @brief Field OnWriteHeadJump, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWriteHeadJump, put=__cordl_internal_set_OnWriteHeadJump)) ::System::Action*  OnWriteHeadJump;

 __declspec(property(get=get_OutputARV)) float_t  OutputARV;

 __declspec(property(get=get_PreClipPeak)) float_t  PreClipPeak;

 __declspec(property(get=get_RecommendedVoiceReadHead)) int32_t  RecommendedVoiceReadHead;

 __declspec(property(get=get_Session, put=set_Session)) ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  Session;

/// @brief Field <AmplitudeOnlyMode>k__BackingField, offset 0xda, size 0x1 
 __declspec(property(get=__cordl_internal_get__AmplitudeOnlyMode_k__BackingField, put=__cordl_internal_set__AmplitudeOnlyMode_k__BackingField)) bool  _AmplitudeOnlyMode_k__BackingField;

/// @brief Field <CachedVoiceData>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedVoiceData_k__BackingField, put=__cordl_internal_set__CachedVoiceData_k__BackingField)) ::ArrayW<float_t>  _CachedVoiceData_k__BackingField;

/// @brief Field <CachedVoiceWriteHead>k__BackingField, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CachedVoiceWriteHead_k__BackingField, put=__cordl_internal_set__CachedVoiceWriteHead_k__BackingField)) int32_t  _CachedVoiceWriteHead_k__BackingField;

/// @brief Field <Session>k__BackingField, offset 0x48, size 0x40 
 __declspec(property(get=__cordl_internal_get__Session_k__BackingField, put=__cordl_internal_set__Session_k__BackingField)) ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  _Session_k__BackingField;

/// @brief Field _arv, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__arv, put=__cordl_internal_set__arv)) float_t  _arv;

/// @brief Field _bypass, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _compressor, offset 0xa0, size 0x20 
 __declspec(property(get=__cordl_internal_get__compressor, put=__cordl_internal_set__compressor)) ::GlobalNamespace::VoiceCompressor  _compressor;

/// @brief Field _compressorReduction, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__compressorReduction, put=__cordl_internal_set__compressorReduction)) float_t  _compressorReduction;

/// @brief Field _currentGain, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentGain, put=__cordl_internal_set__currentGain)) float_t  _currentGain;

/// @brief Field _diagnosticOutput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__diagnosticOutput, put=__cordl_internal_set__diagnosticOutput)) ::Dissonance::Audio::AudioFileWriter*  _diagnosticOutput;

/// @brief Field _internalBypass, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _lastPlayedSessionContext, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastPlayedSessionContext, put=__cordl_internal_set__lastPlayedSessionContext)) ::Dissonance::Audio::Playback::SessionContext  _lastPlayedSessionContext;

/// @brief Field _outputArv, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputArv, put=__cordl_internal_set__outputArv)) float_t  _outputArv;

/// @brief Field _preClipPeak, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__preClipPeak, put=__cordl_internal_set__preClipPeak)) float_t  _preClipPeak;

/// @brief Field _sessionLock, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionLock, put=__cordl_internal_set__sessionLock)) ::System::Threading::ReaderWriterLockSlim*  _sessionLock;

/// @brief Field _temp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__temp, put=__cordl_internal_set__temp)) ::ArrayW<float_t>  _temp;

/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr operator  ::GlobalNamespace::IAudioFilter*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVoiceDataProvider"
constexpr operator  ::GlobalNamespace::IVoiceDataProvider*() noexcept;

/// @brief Method ApplyReset, addr 0x1805e7a10, size 0x50, virtual false, abstract: false, final false
inline void ApplyReset() ;

/// @brief Method Filter, addr 0x1805e7a60, size 0x400, virtual false, abstract: false, final false
static inline bool Filter(::Dissonance::Audio::Playback::SpeechSession  session, ::ArrayW<float_t>  output, int32_t  channels, ::ArrayW<float_t>  temp, ::Dissonance::Audio::AudioFileWriter*  diagnosticOutput, ::ArrayW<float_t>  raw, int32_t  rawWritePos, bool  bypass, float_t  targetGain, ::by_ref<float_t>  currentGain, ::by_ref<::GlobalNamespace::VoiceCompressor>  compressor, ::by_ref<float_t>  arv, ::by_ref<float_t>  outputArv, ::by_ref<float_t>  preClipPeak, ::by_ref<float_t>  reduction) ;

/// @brief Method InitializeRawBuffer, addr 0x1805e7e60, size 0xc0, virtual false, abstract: false, final false
inline void InitializeRawBuffer(bool  deviceWasChanged) ;

static inline ::Dissonance::Audio::Playback::SamplePlaybackComponent* New_ctor() ;

/// @brief Method OnDisable, addr 0x1805e7f20, size 0xb0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1805e7fd0, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x1805e8120, size 0x330, virtual false, abstract: false, final false
inline void Play(::Dissonance::Audio::Playback::SpeechSession  session) ;

/// @brief Method ProcessSamples, addr 0x1805e8450, size 0x8f0, virtual true, abstract: false, final true
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method SoftClip, addr 0x1805e8d40, size 0x50, virtual false, abstract: false, final false
static inline float_t SoftClip(float_t  sample, float_t  magnitude) ;

/// @brief Method Start, addr 0x1805e8d90, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UpdateVariables(float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get_MakeupGain() const;

constexpr float_t& __cordl_internal_get_MakeupGain() ;

constexpr ::System::Action* const& __cordl_internal_get_OnWriteHeadJump() const;

constexpr ::System::Action*& __cordl_internal_get_OnWriteHeadJump() ;

constexpr bool const& __cordl_internal_get__AmplitudeOnlyMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__AmplitudeOnlyMode_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__CachedVoiceData_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__CachedVoiceData_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CachedVoiceWriteHead_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CachedVoiceWriteHead_k__BackingField() ;

constexpr ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> const& __cordl_internal_get__Session_k__BackingField() const;

constexpr ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>& __cordl_internal_get__Session_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__arv() const;

constexpr float_t& __cordl_internal_get__arv() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr ::GlobalNamespace::VoiceCompressor const& __cordl_internal_get__compressor() const;

constexpr ::GlobalNamespace::VoiceCompressor& __cordl_internal_get__compressor() ;

constexpr float_t const& __cordl_internal_get__compressorReduction() const;

constexpr float_t& __cordl_internal_get__compressorReduction() ;

constexpr float_t const& __cordl_internal_get__currentGain() const;

constexpr float_t& __cordl_internal_get__currentGain() ;

constexpr ::Dissonance::Audio::AudioFileWriter* const& __cordl_internal_get__diagnosticOutput() const;

constexpr ::Dissonance::Audio::AudioFileWriter*& __cordl_internal_get__diagnosticOutput() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr ::Dissonance::Audio::Playback::SessionContext const& __cordl_internal_get__lastPlayedSessionContext() const;

constexpr ::Dissonance::Audio::Playback::SessionContext& __cordl_internal_get__lastPlayedSessionContext() ;

constexpr float_t const& __cordl_internal_get__outputArv() const;

constexpr float_t& __cordl_internal_get__outputArv() ;

constexpr float_t const& __cordl_internal_get__preClipPeak() const;

constexpr float_t& __cordl_internal_get__preClipPeak() ;

constexpr ::System::Threading::ReaderWriterLockSlim* const& __cordl_internal_get__sessionLock() const;

constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__sessionLock() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__temp() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__temp() ;

constexpr void __cordl_internal_set_MakeupGain(float_t  value) ;

constexpr void __cordl_internal_set_OnWriteHeadJump(::System::Action*  value) ;

constexpr void __cordl_internal_set__AmplitudeOnlyMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CachedVoiceData_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__CachedVoiceWriteHead_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Session_k__BackingField(::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  value) ;

constexpr void __cordl_internal_set__arv(float_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__compressor(::GlobalNamespace::VoiceCompressor  value) ;

constexpr void __cordl_internal_set__compressorReduction(float_t  value) ;

constexpr void __cordl_internal_set__currentGain(float_t  value) ;

constexpr void __cordl_internal_set__diagnosticOutput(::Dissonance::Audio::AudioFileWriter*  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__lastPlayedSessionContext(::Dissonance::Audio::Playback::SessionContext  value) ;

constexpr void __cordl_internal_set__outputArv(float_t  value) ;

constexpr void __cordl_internal_set__preClipPeak(float_t  value) ;

constexpr void __cordl_internal_set__sessionLock(::System::Threading::ReaderWriterLockSlim*  value) ;

constexpr void __cordl_internal_set__temp(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x1805e8e20, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnWriteHeadJump, addr 0x1805e8e90, size 0x90, virtual true, abstract: false, final true
inline void add_OnWriteHeadJump(::System::Action*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_ARV, addr 0x1805e8f20, size 0x10, virtual false, abstract: false, final false
inline float_t get_ARV() ;

/// @brief Method get_AmplitudeOnlyMode, addr 0x1805e8f30, size 0x10, virtual false, abstract: false, final false
inline bool get_AmplitudeOnlyMode() ;

/// @brief Method get_Bypass, addr 0x1805e8f40, size 0x10, virtual true, abstract: false, final true
inline bool get_Bypass() ;

/// @brief Method get_CachedVoiceData, addr 0x1802edc30, size 0x10, virtual true, abstract: false, final true
inline ::ArrayW<float_t> get_CachedVoiceData() ;

/// @brief Method get_CachedVoiceWriteHead, addr 0x1805e8f50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_CachedVoiceWriteHead() ;

/// @brief Method get_CompressorReduction, addr 0x1805e8f60, size 0x10, virtual false, abstract: false, final false
inline float_t get_CompressorReduction() ;

/// @brief Method get_HasActiveSession, addr 0x1805e8f70, size 0x10, virtual false, abstract: false, final false
inline bool get_HasActiveSession() ;

/// @brief Method get_InternalBypass, addr 0x1805e8f80, size 0x10, virtual true, abstract: false, final true
inline bool get_InternalBypass() ;

/// @brief Method get_OutputARV, addr 0x1805e8f90, size 0x10, virtual false, abstract: false, final false
inline float_t get_OutputARV() ;

/// @brief Method get_PreClipPeak, addr 0x1805e8fa0, size 0x10, virtual false, abstract: false, final false
inline float_t get_PreClipPeak() ;

/// @brief Method get_RecommendedVoiceReadHead, addr 0x1805e8fb0, size 0x30, virtual true, abstract: false, final true
inline int32_t get_RecommendedVoiceReadHead() ;

/// @brief Method get_Session, addr 0x1805e8fe0, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> get_Session() ;

/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* i___GlobalNamespace__IAudioFilter() noexcept;

/// @brief Convert to "::GlobalNamespace::IVoiceDataProvider"
constexpr ::GlobalNamespace::IVoiceDataProvider* i___GlobalNamespace__IVoiceDataProvider() noexcept;

/// @brief Method remove_OnWriteHeadJump, addr 0x1805e9010, size 0x90, virtual true, abstract: false, final true
inline void remove_OnWriteHeadJump(::System::Action*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_AmplitudeOnlyMode, addr 0x1805e90a0, size 0x10, virtual false, abstract: false, final false
inline void set_AmplitudeOnlyMode(bool  value) ;

/// @brief Method set_Bypass, addr 0x1805e90b0, size 0x10, virtual true, abstract: false, final true
inline void set_Bypass(bool  value) ;

/// @brief Method set_CachedVoiceData, addr 0x1803d3a10, size 0x20, virtual false, abstract: false, final false
inline void set_CachedVoiceData(::ArrayW<float_t>  value) ;

/// @brief Method set_CachedVoiceWriteHead, addr 0x1805e90c0, size 0x10, virtual false, abstract: false, final false
inline void set_CachedVoiceWriteHead(int32_t  value) ;

/// @brief Method set_InternalBypass, addr 0x1805e90d0, size 0x10, virtual true, abstract: false, final true
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_Session, addr 0x1805e90e0, size 0x30, virtual false, abstract: false, final false
inline void set_Session(::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SamplePlaybackComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SamplePlaybackComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SamplePlaybackComponent(SamplePlaybackComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SamplePlaybackComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SamplePlaybackComponent(SamplePlaybackComponent const& ) = delete;

/// @brief Field SoftClipCeiling offset 0xffffffff size 0x4
static constexpr float_t  SoftClipCeiling{static_cast<float_t>(0.95f)};

/// @brief Field SoftClipHeadroom offset 0xffffffff size 0x4
static constexpr float_t  SoftClipHeadroom{static_cast<float_t>(0.099999964f)};

/// @brief Field SoftClipKnee offset 0xffffffff size 0x4
static constexpr float_t  SoftClipKnee{static_cast<float_t>(0.85f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16984};

/// @brief Field _temp, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____temp;

/// @brief Field _diagnosticOutput, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Audio::AudioFileWriter*  ____diagnosticOutput;

/// @brief Field _lastPlayedSessionContext, offset: 0x30, size: 0x10, def value: None
 ::Dissonance::Audio::Playback::SessionContext  ____lastPlayedSessionContext;

/// @brief Field _sessionLock, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::ReaderWriterLockSlim*  ____sessionLock;

/// @brief Field <Session>k__BackingField, offset: 0x48, size: 0x40, def value: None
 ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  ____Session_k__BackingField;

/// @brief Field _arv, offset: 0x88, size: 0x4, def value: None
 float_t  ____arv;

/// @brief Field _preClipPeak, offset: 0x8c, size: 0x4, def value: None
 float_t  ____preClipPeak;

/// @brief Field _outputArv, offset: 0x90, size: 0x4, def value: None
 float_t  ____outputArv;

/// @brief Field _compressorReduction, offset: 0x94, size: 0x4, def value: None
 float_t  ____compressorReduction;

/// @brief Field MakeupGain, offset: 0x98, size: 0x4, def value: None
 float_t  ___MakeupGain;

/// @brief Field _currentGain, offset: 0x9c, size: 0x4, def value: None
 float_t  ____currentGain;

/// @brief Field _compressor, offset: 0xa0, size: 0x20, def value: None
 ::GlobalNamespace::VoiceCompressor  ____compressor;

/// @brief Field <CachedVoiceData>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____CachedVoiceData_k__BackingField;

/// @brief Field <CachedVoiceWriteHead>k__BackingField, offset: 0xc8, size: 0x4, def value: None
 int32_t  ____CachedVoiceWriteHead_k__BackingField;

/// @brief Field OnWriteHeadJump, offset: 0xd0, size: 0x8, def value: None
 ::System::Action*  ___OnWriteHeadJump;

/// @brief Field _internalBypass, offset: 0xd8, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0xd9, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field <AmplitudeOnlyMode>k__BackingField, offset: 0xda, size: 0x1, def value: None
 bool  ____AmplitudeOnlyMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____temp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____diagnosticOutput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____lastPlayedSessionContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____sessionLock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____Session_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____arv) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____preClipPeak) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____outputArv) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____compressorReduction) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ___MakeupGain) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____currentGain) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____compressor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____CachedVoiceData_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____CachedVoiceWriteHead_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ___OnWriteHeadJump) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____internalBypass) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____bypass) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SamplePlaybackComponent, ____AmplitudeOnlyMode_k__BackingField) == 0xda, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SamplePlaybackComponent) == 0xe0, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
