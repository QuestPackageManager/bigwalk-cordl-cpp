#pragma once
// IWYU pragma private; include "GlobalNamespace/FootstepSoundJobScheduler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FootstepSoundJobScheduler)
namespace GlobalNamespace {
class FootstepSound;
}
// Forward declare root types
namespace GlobalNamespace {
class FootstepSoundJobScheduler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FootstepSoundJobScheduler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepSoundJobScheduler*, "", "FootstepSoundJobScheduler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepSoundJobScheduler
class CORDL_TYPE FootstepSoundJobScheduler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field footstepSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_footstepSound, put=__cordl_internal_set_footstepSound)) ::UnityW<::GlobalNamespace::FootstepSound>  footstepSound;

static inline ::GlobalNamespace::FootstepSoundJobScheduler* New_ctor() ;

/// @brief Method Start, addr 0x1803d1990, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803d19c0, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::FootstepSound> const& __cordl_internal_get_footstepSound() const;

constexpr ::UnityW<::GlobalNamespace::FootstepSound>& __cordl_internal_get_footstepSound() ;

constexpr void __cordl_internal_set_footstepSound(::UnityW<::GlobalNamespace::FootstepSound>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepSoundJobScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepSoundJobScheduler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepSoundJobScheduler(FootstepSoundJobScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepSoundJobScheduler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepSoundJobScheduler(FootstepSoundJobScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4841};

/// @brief Field footstepSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FootstepSound>  ___footstepSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepSoundJobScheduler, ___footstepSound) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepSoundJobScheduler) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
