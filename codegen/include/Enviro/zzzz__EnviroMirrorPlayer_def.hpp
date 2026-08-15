#pragma once
// IWYU pragma private; include "Enviro/EnviroMirrorPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnviroMirrorPlayer)
// Forward declare root types
namespace Enviro {
class EnviroMirrorPlayer;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroMirrorPlayer*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroMirrorPlayer*, "Enviro", "EnviroMirrorPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroMirrorPlayer
class CORDL_TYPE EnviroMirrorPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Enviro::EnviroMirrorPlayer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroMirrorPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroMirrorPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroMirrorPlayer(EnviroMirrorPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroMirrorPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroMirrorPlayer(EnviroMirrorPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroMirrorPlayer) == 0x20, "Size mismatch!");

} // namespace end def Enviro
