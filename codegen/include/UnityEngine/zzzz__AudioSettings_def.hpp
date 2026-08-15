#pragma once
// IWYU pragma private; include "UnityEngine/AudioSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSettings)
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AudioConfiguration;
}
namespace UnityEngine {
class AudioSettings_AudioConfigurationChangeHandler;
}
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine {
class AudioSettings;
}
namespace UnityEngine {
class AudioSettings_AudioConfigurationChangeHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioSettings*);
MARK_REF_T(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioSettings*, "UnityEngine", "AudioSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSettings/AudioConfigurationChangeHandler
class CORDL_TYPE AudioSettings_AudioConfigurationChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(bool  deviceWasChanged) ;

static inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2aa0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSettings_AudioConfigurationChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSettings_AudioConfigurationChangeHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSettings_AudioConfigurationChangeHandler(AudioSettings_AudioConfigurationChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSettings_AudioConfigurationChangeHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSettings_AudioConfigurationChangeHandler(AudioSettings_AudioConfigurationChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSettings
class CORDL_TYPE AudioSettings : public ::System::Object {
public:
// Declarations
using AudioConfigurationChangeHandler = ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler;

/// @brief Field OnAudioConfigurationChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAudioConfigurationChanged, put=setStaticF_OnAudioConfigurationChanged)) ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  OnAudioConfigurationChanged;

/// @brief Field OnAudioSystemShuttingDown, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAudioSystemShuttingDown, put=setStaticF_OnAudioSystemShuttingDown)) ::System::Action*  OnAudioSystemShuttingDown;

/// @brief Field OnAudioSystemStartedUp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAudioSystemStartedUp, put=setStaticF_OnAudioSystemStartedUp)) ::System::Action*  OnAudioSystemStartedUp;

/// @brief Method GetConfiguration, addr 0x18223a7c0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioConfiguration GetConfiguration() ;

/// @brief Method GetConfiguration_Injected, addr 0x18223a7b0, size 0x10, virtual false, abstract: false, final false
static inline void GetConfiguration_Injected(::by_ref<::UnityEngine::AudioConfiguration>  ret) ;

/// @brief Method GetDSPBufferSize, addr 0x18223a7f0, size 0x10, virtual false, abstract: false, final false
static inline void GetDSPBufferSize(::by_ref<int32_t>  bufferLength, ::by_ref<int32_t>  numBuffers) ;

/// @brief Method GetSampleRate, addr 0x18223a800, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetSampleRate() ;

/// @brief Method GetSpeakerMode, addr 0x18223a810, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioSpeakerMode GetSpeakerMode() ;

/// @brief Method InvokeOnAudioConfigurationChanged, addr 0x18223a820, size 0x30, virtual false, abstract: false, final false
static inline void InvokeOnAudioConfigurationChanged(bool  deviceWasChanged) ;

/// @brief Method InvokeOnAudioSystemShuttingDown, addr 0x18223a850, size 0x30, virtual false, abstract: false, final false
static inline void InvokeOnAudioSystemShuttingDown() ;

/// @brief Method InvokeOnAudioSystemStartedUp, addr 0x18223a880, size 0x30, virtual false, abstract: false, final false
static inline void InvokeOnAudioSystemStartedUp() ;

/// @brief Method Reset, addr 0x18223a8b0, size 0x30, virtual false, abstract: false, final false
static inline bool Reset(::UnityEngine::AudioConfiguration  config) ;

/// @brief Method SetConfiguration, addr 0x18223a8f0, size 0x20, virtual false, abstract: false, final false
static inline bool SetConfiguration(::UnityEngine::AudioConfiguration  config) ;

/// @brief Method SetConfiguration_Injected, addr 0x18223a8e0, size 0x10, virtual false, abstract: false, final false
static inline bool SetConfiguration_Injected(::by_ref<::UnityEngine::AudioConfiguration>  config) ;

/// @brief Method add_OnAudioConfigurationChanged, addr 0x18223a910, size 0x90, virtual false, abstract: false, final false
static inline void add_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  value) ;

static inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* getStaticF_OnAudioConfigurationChanged() ;

static inline ::System::Action* getStaticF_OnAudioSystemShuttingDown() ;

static inline ::System::Action* getStaticF_OnAudioSystemStartedUp() ;

/// @brief Method get_dspTime, addr 0x18223a9a0, size 0x10, virtual false, abstract: false, final false
static inline double_t get_dspTime() ;

/// @brief Method get_outputSampleRate, addr 0x18223a800, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_outputSampleRate() ;

/// @brief Method get_speakerMode, addr 0x18223a810, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioSpeakerMode get_speakerMode() ;

/// @brief Method remove_OnAudioConfigurationChanged, addr 0x18223a9b0, size 0x90, virtual false, abstract: false, final false
static inline void remove_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  value) ;

static inline void setStaticF_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  value) ;

static inline void setStaticF_OnAudioSystemShuttingDown(::System::Action*  value) ;

static inline void setStaticF_OnAudioSystemStartedUp(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSettings(AudioSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSettings(AudioSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioSettings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
