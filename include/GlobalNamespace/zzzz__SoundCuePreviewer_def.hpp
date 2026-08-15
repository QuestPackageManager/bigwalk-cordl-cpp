#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundCuePreviewer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SoundCuePreviewer)
namespace GlobalNamespace {
class SoundCue;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundCuePreviewer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundCuePreviewer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundCuePreviewer*, "", "SoundCuePreviewer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundCuePreviewer
class CORDL_TYPE SoundCuePreviewer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Cue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cue, put=__cordl_internal_set_Cue)) ::UnityW<::GlobalNamespace::SoundCue>  Cue;

static inline ::GlobalNamespace::SoundCuePreviewer* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_Cue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_Cue() ;

constexpr void __cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundCuePreviewer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundCuePreviewer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundCuePreviewer(SoundCuePreviewer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundCuePreviewer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundCuePreviewer(SoundCuePreviewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17642};

/// @brief Field Cue, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___Cue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundCuePreviewer, ___Cue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundCuePreviewer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
