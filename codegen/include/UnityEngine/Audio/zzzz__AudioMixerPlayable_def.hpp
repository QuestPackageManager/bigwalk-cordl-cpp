#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioMixerPlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioMixerPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioMixerPlayable
struct CORDL_TYPE AudioMixerPlayable {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Equals, addr 0x18222f240, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Audio::AudioMixerPlayable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>* i___System__IEquatable_1___UnityEngine__Audio__AudioMixerPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioMixerPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AudioMixerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioMixerPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Audio
