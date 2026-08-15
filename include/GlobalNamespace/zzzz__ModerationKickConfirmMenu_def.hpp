#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationKickConfirmMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModerationKickConfirmMenu)
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ModerationKickConfirmMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModerationKickConfirmMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationKickConfirmMenu*, "", "ModerationKickConfirmMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModerationKickConfirmMenu
class CORDL_TYPE ModerationKickConfirmMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field candidatePlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_candidatePlayer, put=__cordl_internal_set_candidatePlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  candidatePlayer;

/// @brief Field encounteredGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_encounteredGroup, put=__cordl_internal_set_encounteredGroup)) ::UnityW<::UnityEngine::Transform>  encounteredGroup;

/// @brief Field playerNameText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameText, put=__cordl_internal_set_playerNameText)) ::UnityW<::GlobalNamespace::LocalizedText>  playerNameText;

/// @brief Field unencounteredGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unencounteredGroup, put=__cordl_internal_set_unencounteredGroup)) ::UnityW<::UnityEngine::Transform>  unencounteredGroup;

/// @brief Method ActionBack, addr 0x180437000, size 0x70, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method ActionKick, addr 0x180437120, size 0x1f0, virtual false, abstract: false, final false
inline void ActionKick() ;

/// @brief Method GoBack, addr 0x180437000, size 0x70, virtual false, abstract: false, final false
inline void GoBack() ;

static inline ::GlobalNamespace::ModerationKickConfirmMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x180437310, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x180437370, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_candidatePlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_candidatePlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_encounteredGroup() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_encounteredGroup() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_playerNameText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_playerNameText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_unencounteredGroup() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_unencounteredGroup() ;

constexpr void __cordl_internal_set_candidatePlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModerationKickConfirmMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModerationKickConfirmMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModerationKickConfirmMenu(ModerationKickConfirmMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModerationKickConfirmMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModerationKickConfirmMenu(ModerationKickConfirmMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5261};

/// @brief Field candidatePlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___candidatePlayer;

/// @brief Field playerNameText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___playerNameText;

/// @brief Field encounteredGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___encounteredGroup;

/// @brief Field unencounteredGroup, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___unencounteredGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationKickConfirmMenu, ___candidatePlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationKickConfirmMenu, ___playerNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationKickConfirmMenu, ___encounteredGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationKickConfirmMenu, ___unencounteredGroup) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationKickConfirmMenu) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
