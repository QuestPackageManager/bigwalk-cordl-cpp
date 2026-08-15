#pragma once
// IWYU pragma private; include "GlobalNamespace/SpecialCorpseZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SpecialCorpseZone)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SpecialCorpseZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpecialCorpseZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpecialCorpseZone*, "", "SpecialCorpseZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpecialCorpseZone
class CORDL_TYPE SpecialCorpseZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Field spawnTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTransform, put=__cordl_internal_set_spawnTransform)) ::UnityW<::UnityEngine::Transform>  spawnTransform;

static inline ::GlobalNamespace::SpecialCorpseZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18039d310, size 0x270, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18039d580, size 0x240, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x18039d7c0, size 0x40, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExit, addr 0x18039d800, size 0x60, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnTransform() ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_spawnTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpecialCorpseZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpecialCorpseZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpecialCorpseZone(SpecialCorpseZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpecialCorpseZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpecialCorpseZone(SpecialCorpseZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5631};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field spawnTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpecialCorpseZone, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpecialCorpseZone, ___spawnTransform) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpecialCorpseZone) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
