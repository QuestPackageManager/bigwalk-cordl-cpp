#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionCloseZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SessionCloseZone)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
// Forward declare root types
namespace GlobalNamespace {
class SessionCloseZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SessionCloseZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SessionCloseZone*, "", "SessionCloseZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SessionCloseZone
class CORDL_TYPE SessionCloseZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

static inline ::GlobalNamespace::SessionCloseZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x180398ab0, size 0x270, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180398d20, size 0x260, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x180398f80, size 0x60, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExit, addr 0x180398fe0, size 0x60, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionCloseZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionCloseZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionCloseZone(SessionCloseZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionCloseZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionCloseZone(SessionCloseZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5629};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SessionCloseZone, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SessionCloseZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
