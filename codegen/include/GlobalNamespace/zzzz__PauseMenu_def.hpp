#pragma once
// IWYU pragma private; include "GlobalNamespace/PauseMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PauseMenu)
namespace Mirror {
class NetworkManager;
}
// Forward declare root types
namespace GlobalNamespace {
class PauseMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PauseMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PauseMenu*, "", "PauseMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseMenu
class CORDL_TYPE PauseMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_networkManager)) ::UnityW<::Mirror::NetworkManager>  networkManager;

/// @brief Method ActionDisconnect, addr 0x180438ef0, size 0xb0, virtual false, abstract: false, final false
inline void ActionDisconnect() ;

/// @brief Method ActionGoToSessionMenu, addr 0x180435490, size 0xb0, virtual false, abstract: false, final false
inline void ActionGoToSessionMenu() ;

/// @brief Method ActionGoToSettings, addr 0x180438fa0, size 0x70, virtual false, abstract: false, final false
inline void ActionGoToSettings() ;

/// @brief Method ActionResume, addr 0x180439010, size 0x10, virtual false, abstract: false, final false
inline void ActionResume() ;

static inline ::GlobalNamespace::PauseMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804374f0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_networkManager, addr 0x180379040, size 0x8a0, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkManager> get_networkManager() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PauseMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PauseMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PauseMenu(PauseMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PauseMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PauseMenu(PauseMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5269};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PauseMenu) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
