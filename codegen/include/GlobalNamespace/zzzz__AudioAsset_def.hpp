#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AudioAsset)
namespace GlobalNamespace {
class SoundCue;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioAsset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioAsset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioAsset*, "", "AudioAsset");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioAsset
class CORDL_TYPE AudioAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Method ContainsCue, addr 0x18046e3d0, size 0x390, virtual false, abstract: false, final false
inline bool ContainsCue(::GlobalNamespace::SoundCue*  cue) ;

/// @brief Method EqualsOrContainsCue, addr 0x18046e760, size 0x50, virtual false, abstract: false, final false
inline bool EqualsOrContainsCue(::GlobalNamespace::SoundCue*  cue) ;

static inline ::GlobalNamespace::AudioAsset* New_ctor() ;

/// @brief Method TryGetAllCues, addr 0x18046e7b0, size 0x560, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* TryGetAllCues() ;

/// @brief Method TryGetCue, addr 0x18046ed10, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundCue> TryGetCue() ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAsset(AudioAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAsset(AudioAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioAsset) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
