#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioScatterPreviewer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioScatterPreviewer)
namespace GlobalNamespace {
class AudioScatterContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioScatterPreviewer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioScatterPreviewer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioScatterPreviewer*, "", "AudioScatterPreviewer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioScatterPreviewer
class CORDL_TYPE AudioScatterPreviewer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ScatterContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScatterContainer, put=__cordl_internal_set_ScatterContainer)) ::UnityW<::GlobalNamespace::AudioScatterContainer>  ScatterContainer;

static inline ::GlobalNamespace::AudioScatterPreviewer* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& __cordl_internal_get_ScatterContainer() const;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& __cordl_internal_get_ScatterContainer() ;

constexpr void __cordl_internal_set_ScatterContainer(::UnityW<::GlobalNamespace::AudioScatterContainer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioScatterPreviewer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioScatterPreviewer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioScatterPreviewer(AudioScatterPreviewer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioScatterPreviewer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioScatterPreviewer(AudioScatterPreviewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17571};

/// @brief Field ScatterContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ___ScatterContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioScatterPreviewer, ___ScatterContainer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioScatterPreviewer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
