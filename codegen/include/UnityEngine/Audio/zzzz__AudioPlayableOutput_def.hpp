#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioPlayableOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioPlayableOutput)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioPlayableOutput);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
// Dependencies UnityEngine.Playables.PlayableOutputHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioPlayableOutput
struct CORDL_TYPE AudioPlayableOutput {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr operator  ::UnityEngine::Playables::IPlayableOutput*() ;

/// @brief Method Create, addr 0x182239f90, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name, ::UnityEngine::AudioSource*  target) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method InternalSetTarget, addr 0x18223a130, size 0x30, virtual false, abstract: false, final false
static inline void InternalSetTarget(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::UnityEngine::AudioSource*  target) ;

/// @brief Method InternalSetTarget_Injected, addr 0x18223a120, size 0x10, virtual false, abstract: false, final false
static inline void InternalSetTarget_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::System::IntPtr  target) ;

/// @brief Method SetTarget, addr 0x18223a130, size 0x30, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::AudioSource*  value) ;

/// @brief Method .ctor, addr 0x18223a160, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle  handle) ;

/// @brief Method get_Null, addr 0x18223a210, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioPlayableOutput get_Null() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioPlayableOutput() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableOutputHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioPlayableOutput) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Audio
