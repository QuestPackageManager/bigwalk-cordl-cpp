#pragma once
// IWYU pragma private; include "GlobalNamespace/PitchDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PitchDetector)
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class IAudioGUI;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class PitchDetector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PitchDetector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PitchDetector*, "", "PitchDetector");
// Dependencies UnityEngine.FFTWindow, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PitchDetector
class CORDL_TYPE PitchDetector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Cue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cue, put=__cordl_internal_set_Cue)) ::UnityW<::GlobalNamespace::SoundCue>  Cue;

 __declspec(property(get=get_GUIDebugMode, put=set_GUIDebugMode)) bool  GUIDebugMode;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

 __declspec(property(get=get_MidiNote, put=set_MidiNote)) ::StringW  MidiNote;

 __declspec(property(get=get_SmoothedPitch, put=set_SmoothedPitch)) float_t  SmoothedPitch;

/// @brief Field WindowType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindowType, put=__cordl_internal_set_WindowType)) ::UnityEngine::FFTWindow  WindowType;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::PitchDetector>  _Instance_k__BackingField;

/// @brief Field <MidiNote>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__MidiNote_k__BackingField, put=__cordl_internal_set__MidiNote_k__BackingField)) ::StringW  _MidiNote_k__BackingField;

/// @brief Field <SmoothedPitch>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__SmoothedPitch_k__BackingField, put=__cordl_internal_set__SmoothedPitch_k__BackingField)) float_t  _SmoothedPitch_k__BackingField;

/// @brief Field _asc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__asc, put=__cordl_internal_set__asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  _asc;

/// @brief Field _cachedClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedClip, put=__cordl_internal_set__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Field _currentPuzzle1, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPuzzle1, put=__cordl_internal_set__currentPuzzle1)) int32_t  _currentPuzzle1;

/// @brief Field _currentPuzzle2, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPuzzle2, put=__cordl_internal_set__currentPuzzle2)) int32_t  _currentPuzzle2;

/// @brief Field _currentPuzzle3, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPuzzle3, put=__cordl_internal_set__currentPuzzle3)) int32_t  _currentPuzzle3;

/// @brief Field _guiDebugMode, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__guiDebugMode, put=__cordl_internal_set__guiDebugMode)) bool  _guiDebugMode;

/// @brief Field _noteNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__noteNames, put=setStaticF__noteNames)) ::ArrayW<::StringW>  _noteNames;

/// @brief Field _noteToPitchLookUp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__noteToPitchLookUp, put=setStaticF__noteToPitchLookUp)) ::ArrayW<::ArrayW<int32_t>>  _noteToPitchLookUp;

/// @brief Field _pitches, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pitches, put=setStaticF__pitches)) ::ArrayW<float_t>  _pitches;

/// @brief Field _puzzleMeter1, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__puzzleMeter1, put=__cordl_internal_set__puzzleMeter1)) float_t  _puzzleMeter1;

/// @brief Field _puzzleMeter2, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__puzzleMeter2, put=__cordl_internal_set__puzzleMeter2)) float_t  _puzzleMeter2;

/// @brief Field _puzzleMeter3, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__puzzleMeter3, put=__cordl_internal_set__puzzleMeter3)) float_t  _puzzleMeter3;

/// @brief Field _puzzlePitches1, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__puzzlePitches1, put=__cordl_internal_set__puzzlePitches1)) ::ArrayW<::ArrayW<float_t>>  _puzzlePitches1;

/// @brief Field _puzzlePitches2, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__puzzlePitches2, put=__cordl_internal_set__puzzlePitches2)) ::ArrayW<::ArrayW<float_t>>  _puzzlePitches2;

/// @brief Field _puzzlePitches3, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__puzzlePitches3, put=__cordl_internal_set__puzzlePitches3)) ::ArrayW<::ArrayW<float_t>>  _puzzlePitches3;

/// @brief Field _sampleRate, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Field _source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::UnityW<::UnityEngine::AudioSource>  _source;

/// @brief Field _spectrum, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__spectrum, put=__cordl_internal_set__spectrum)) ::ArrayW<float_t>  _spectrum;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method Awake, addr 0x1803db160, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangePuzzle, addr 0x1803db1c0, size 0x500, virtual false, abstract: false, final false
inline void ChangePuzzle() ;

/// @brief Method DrawGUI, addr 0x1803db6c0, size 0x4b0, virtual true, abstract: false, final true
inline void DrawGUI() ;

/// @brief Method GetMeterTarget, addr 0x1803dbb70, size 0xe0, virtual false, abstract: false, final false
inline float_t GetMeterTarget(::ArrayW<::ArrayW<float_t>>  pitches) ;

/// @brief Method GetNoteNameFromFrequency, addr 0x1803dbc50, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetNoteNameFromFrequency(float_t  frequency) ;

static inline ::GlobalNamespace::PitchDetector* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803dbcf0, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x180318fc0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803dbd30, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1803dbd90, size 0x1f0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchWindowType, addr 0x1803dbf80, size 0x120, virtual false, abstract: false, final false
inline void SwitchWindowType(::StringW  name) ;

/// @brief Method Update, addr 0x1803dc0f0, size 0x480, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <Start>g___clearRef|40_0, addr 0x1803dc0a0, size 0x50, virtual false, abstract: false, final false
static inline void _Start_g___clearRef_40_0(::GlobalNamespace::PitchDetector*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_Cue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_Cue() ;

constexpr ::UnityEngine::FFTWindow const& __cordl_internal_get_WindowType() const;

constexpr ::UnityEngine::FFTWindow& __cordl_internal_get_WindowType() ;

constexpr ::StringW const& __cordl_internal_get__MidiNote_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MidiNote_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SmoothedPitch_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SmoothedPitch_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__asc() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cachedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cachedClip() ;

constexpr int32_t const& __cordl_internal_get__currentPuzzle1() const;

constexpr int32_t& __cordl_internal_get__currentPuzzle1() ;

constexpr int32_t const& __cordl_internal_get__currentPuzzle2() const;

constexpr int32_t& __cordl_internal_get__currentPuzzle2() ;

constexpr int32_t const& __cordl_internal_get__currentPuzzle3() const;

constexpr int32_t& __cordl_internal_get__currentPuzzle3() ;

constexpr bool const& __cordl_internal_get__guiDebugMode() const;

constexpr bool& __cordl_internal_get__guiDebugMode() ;

constexpr float_t const& __cordl_internal_get__puzzleMeter1() const;

constexpr float_t& __cordl_internal_get__puzzleMeter1() ;

constexpr float_t const& __cordl_internal_get__puzzleMeter2() const;

constexpr float_t& __cordl_internal_get__puzzleMeter2() ;

constexpr float_t const& __cordl_internal_get__puzzleMeter3() const;

constexpr float_t& __cordl_internal_get__puzzleMeter3() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__puzzlePitches1() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__puzzlePitches1() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__puzzlePitches2() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__puzzlePitches2() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__puzzlePitches3() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__puzzlePitches3() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__source() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__spectrum() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__spectrum() ;

constexpr void __cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_WindowType(::UnityEngine::FFTWindow  value) ;

constexpr void __cordl_internal_set__MidiNote_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__SmoothedPitch_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__currentPuzzle1(int32_t  value) ;

constexpr void __cordl_internal_set__currentPuzzle2(int32_t  value) ;

constexpr void __cordl_internal_set__currentPuzzle3(int32_t  value) ;

constexpr void __cordl_internal_set__guiDebugMode(bool  value) ;

constexpr void __cordl_internal_set__puzzleMeter1(float_t  value) ;

constexpr void __cordl_internal_set__puzzleMeter2(float_t  value) ;

constexpr void __cordl_internal_set__puzzleMeter3(float_t  value) ;

constexpr void __cordl_internal_set__puzzlePitches1(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__puzzlePitches2(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__puzzlePitches3(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set__source(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__spectrum(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x1803dc9f0, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::PitchDetector> getStaticF__Instance_k__BackingField() ;

static inline ::ArrayW<::StringW> getStaticF__noteNames() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__noteToPitchLookUp() ;

static inline ::ArrayW<float_t> getStaticF__pitches() ;

/// @brief Method get_GUIDebugMode, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_GUIDebugMode() ;

/// @brief Method get_Identifier, addr 0x1803dcbf0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Method get_Instance, addr 0x1803dcc00, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PitchDetector> get_Instance() ;

/// @brief Method get_MidiNote, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_MidiNote() ;

/// @brief Method get_SmoothedPitch, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_SmoothedPitch() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::PitchDetector>  value) ;

static inline void setStaticF__noteNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF__noteToPitchLookUp(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF__pitches(::ArrayW<float_t>  value) ;

/// @brief Method set_GUIDebugMode, addr 0x1803dcc20, size 0x70, virtual false, abstract: false, final false
inline void set_GUIDebugMode(bool  value) ;

/// @brief Method set_Instance, addr 0x1803dcc90, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::PitchDetector*  value) ;

/// @brief Method set_MidiNote, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_MidiNote(::StringW  value) ;

/// @brief Method set_SmoothedPitch, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_SmoothedPitch(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PitchDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PitchDetector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PitchDetector(PitchDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PitchDetector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PitchDetector(PitchDetector const& ) = delete;

/// @brief Field RefFrequency offset 0xffffffff size 0x4
static constexpr float_t  RefFrequency{static_cast<float_t>(440.0f)};

/// @brief Field SmoothingFactor offset 0xffffffff size 0x4
static constexpr float_t  SmoothingFactor{static_cast<float_t>(0.05f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4863};

/// @brief Field Cue, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___Cue;

/// @brief Field WindowType, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::FFTWindow  ___WindowType;

/// @brief Field _asc, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____asc;

/// @brief Field _source, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____source;

/// @brief Field _cachedClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cachedClip;

/// @brief Field _spectrum, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ____spectrum;

/// @brief Field _sampleRate, offset: 0x50, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field <SmoothedPitch>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____SmoothedPitch_k__BackingField;

/// @brief Field <MidiNote>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____MidiNote_k__BackingField;

/// @brief Field _guiDebugMode, offset: 0x60, size: 0x1, def value: None
 bool  ____guiDebugMode;

/// @brief Field _currentPuzzle1, offset: 0x64, size: 0x4, def value: None
 int32_t  ____currentPuzzle1;

/// @brief Field _currentPuzzle2, offset: 0x68, size: 0x4, def value: None
 int32_t  ____currentPuzzle2;

/// @brief Field _currentPuzzle3, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____currentPuzzle3;

/// @brief Field _puzzleMeter1, offset: 0x70, size: 0x4, def value: None
 float_t  ____puzzleMeter1;

/// @brief Field _puzzleMeter2, offset: 0x74, size: 0x4, def value: None
 float_t  ____puzzleMeter2;

/// @brief Field _puzzleMeter3, offset: 0x78, size: 0x4, def value: None
 float_t  ____puzzleMeter3;

/// @brief Field _puzzlePitches1, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____puzzlePitches1;

/// @brief Field _puzzlePitches2, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____puzzlePitches2;

/// @brief Field _puzzlePitches3, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____puzzlePitches3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PitchDetector, ___Cue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ___WindowType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____asc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____source) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____cachedClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____spectrum) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____sampleRate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____SmoothedPitch_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____MidiNote_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____guiDebugMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____currentPuzzle1) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____currentPuzzle2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____currentPuzzle3) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____puzzleMeter1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____puzzleMeter2) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____puzzleMeter3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____puzzlePitches1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____puzzlePitches2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchDetector, ____puzzlePitches3) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PitchDetector) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
