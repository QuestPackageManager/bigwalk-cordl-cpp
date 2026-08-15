#pragma once
// IWYU pragma private; include "GlobalNamespace/DreamerAnimationSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimationSound_def.hpp"
CORDL_MODULE_EXPORT(DreamerAnimationSound)
namespace GlobalNamespace {
class AudioAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class DreamerAnimationSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DreamerAnimationSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DreamerAnimationSound*, "", "DreamerAnimationSound");
// Dependencies AnimationSound
namespace GlobalNamespace {
// Is value type: false
// CS Name: DreamerAnimationSound
class CORDL_TYPE DreamerAnimationSound : public ::GlobalNamespace::AnimationSound {
public:
// Declarations
static inline ::GlobalNamespace::DreamerAnimationSound* New_ctor() ;

/// @brief Method PlayAnimationSound, addr 0x1803336f0, size 0x80, virtual true, abstract: false, final false
inline void PlayAnimationSound(::GlobalNamespace::AudioAsset*  audioAsset) ;

/// @brief Method .ctor, addr 0x180333770, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DreamerAnimationSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DreamerAnimationSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DreamerAnimationSound(DreamerAnimationSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DreamerAnimationSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DreamerAnimationSound(DreamerAnimationSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DreamerAnimationSound) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
