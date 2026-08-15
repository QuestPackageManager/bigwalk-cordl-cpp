#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMouseInputModuleAssignation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerMouseInputModuleAssignation)
namespace Rewired::Components {
class PlayerMouse;
}
namespace Rewired::Integration::UnityUI {
class RewiredStandaloneInputModule;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerMouseInputModuleAssignation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerMouseInputModuleAssignation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerMouseInputModuleAssignation*, "", "PlayerMouseInputModuleAssignation");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerMouseInputModuleAssignation
class CORDL_TYPE PlayerMouseInputModuleAssignation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerMouse, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerMouse, put=__cordl_internal_set_playerMouse)) ::UnityW<::Rewired::Components::PlayerMouse>  playerMouse;

/// @brief Field rewiredStandaloneInputModule, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rewiredStandaloneInputModule, put=__cordl_internal_set_rewiredStandaloneInputModule)) ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  rewiredStandaloneInputModule;

static inline ::GlobalNamespace::PlayerMouseInputModuleAssignation* New_ctor() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMousestatusChange, addr 0x18037ff00, size 0x60, virtual false, abstract: false, final false
inline void OnMousestatusChange(bool  activate) ;

/// @brief Method RefreshAssignation, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void RefreshAssignation() ;

constexpr ::UnityW<::Rewired::Components::PlayerMouse> const& __cordl_internal_get_playerMouse() const;

constexpr ::UnityW<::Rewired::Components::PlayerMouse>& __cordl_internal_get_playerMouse() ;

constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule> const& __cordl_internal_get_rewiredStandaloneInputModule() const;

constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>& __cordl_internal_get_rewiredStandaloneInputModule() ;

constexpr void __cordl_internal_set_playerMouse(::UnityW<::Rewired::Components::PlayerMouse>  value) ;

constexpr void __cordl_internal_set_rewiredStandaloneInputModule(::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouseInputModuleAssignation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouseInputModuleAssignation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouseInputModuleAssignation(PlayerMouseInputModuleAssignation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouseInputModuleAssignation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouseInputModuleAssignation(PlayerMouseInputModuleAssignation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5550};

/// @brief Field playerMouse, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Rewired::Components::PlayerMouse>  ___playerMouse;

/// @brief Field rewiredStandaloneInputModule, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  ___rewiredStandaloneInputModule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerMouseInputModuleAssignation, ___playerMouse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMouseInputModuleAssignation, ___rewiredStandaloneInputModule) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerMouseInputModuleAssignation) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
