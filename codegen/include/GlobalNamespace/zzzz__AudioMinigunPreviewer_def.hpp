#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMinigunPreviewer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioMinigunPreviewer)
namespace GlobalNamespace {
class AudioMinigunContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMinigunPreviewer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioMinigunPreviewer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioMinigunPreviewer*, "", "AudioMinigunPreviewer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioMinigunPreviewer
class CORDL_TYPE AudioMinigunPreviewer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MinigunContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinigunContainer, put=__cordl_internal_set_MinigunContainer)) ::UnityW<::GlobalNamespace::AudioMinigunContainer>  MinigunContainer;

static inline ::GlobalNamespace::AudioMinigunPreviewer* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioMinigunContainer> const& __cordl_internal_get_MinigunContainer() const;

constexpr ::UnityW<::GlobalNamespace::AudioMinigunContainer>& __cordl_internal_get_MinigunContainer() ;

constexpr void __cordl_internal_set_MinigunContainer(::UnityW<::GlobalNamespace::AudioMinigunContainer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMinigunPreviewer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMinigunPreviewer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMinigunPreviewer(AudioMinigunPreviewer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMinigunPreviewer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMinigunPreviewer(AudioMinigunPreviewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17530};

/// @brief Field MinigunContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMinigunContainer>  ___MinigunContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioMinigunPreviewer, ___MinigunContainer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioMinigunPreviewer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
