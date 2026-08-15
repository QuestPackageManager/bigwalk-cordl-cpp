#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::AudioMixer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioMixer
class CORDL_TYPE AudioMixer : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

static inline ::UnityEngine::Audio::AudioMixer* New_ctor() ;

/// @brief Method SetFloat, addr 0x182239cd0, size 0x140, virtual false, abstract: false, final false
inline bool SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat_Injected, addr 0x182239cc0, size 0x10, virtual false, abstract: false, final false
static inline bool SetFloat_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_outputAudioMixerGroup, addr 0x182239e20, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup() ;

/// @brief Method get_outputAudioMixerGroup_Injected, addr 0x182239e10, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixer(AudioMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixer(AudioMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioMixer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
