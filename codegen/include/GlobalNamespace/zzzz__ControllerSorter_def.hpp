#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerSorter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerSorter)
namespace Rewired {
class ControllerAssignmentChangedEventArgs;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllerSorter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ControllerSorter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerSorter*, "", "ControllerSorter");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerSorter
class CORDL_TYPE ControllerSorter : public ::System::Object {
public:
// Declarations
/// @brief Field activeController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeController, put=__cordl_internal_set_activeController)) ::Rewired::Controller*  activeController;

/// @brief Field activeJoystick, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeJoystick, put=__cordl_internal_set_activeJoystick)) ::Rewired::Controller*  activeJoystick;

/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onChange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action*  onChange;

/// @brief Field player, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::Rewired::Player*  player;

/// @brief Method ActiveRefresh, addr 0x18041e860, size 0x3a0, virtual false, abstract: false, final false
inline void ActiveRefresh() ;

/// @brief Method ControllerExistsIsMineAndIsConnected, addr 0x18041ec00, size 0x50, virtual false, abstract: false, final false
inline bool ControllerExistsIsMineAndIsConnected(::Rewired::Controller*  controller) ;

/// @brief Method ControllerIsMouseOrKeyboard, addr 0x18041ec50, size 0x40, virtual false, abstract: false, final false
static inline bool ControllerIsMouseOrKeyboard(::Rewired::Controller*  controller) ;

/// @brief Method Initialize, addr 0x18041ec90, size 0x170, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::ControllerSorter* New_ctor() ;

/// @brief Method OnChange, addr 0x18041ee00, size 0x30, virtual false, abstract: false, final false
inline void OnChange() ;

/// @brief Method OnControllerAdded, addr 0x18041ee30, size 0x60, virtual false, abstract: false, final false
inline void OnControllerAdded(::Rewired::ControllerAssignmentChangedEventArgs*  args) ;

/// @brief Method OnControllerRemoved, addr 0x18041ee90, size 0x10, virtual false, abstract: false, final false
inline void OnControllerRemoved(::Rewired::ControllerAssignmentChangedEventArgs*  args) ;

/// @brief Method SetActiveController, addr 0x18041eea0, size 0x180, virtual false, abstract: false, final false
inline void SetActiveController(::Rewired::Controller*  controller) ;

/// @brief Method TakeNoteOfControllerUsed, addr 0x18041f020, size 0xa0, virtual false, abstract: false, final false
inline void TakeNoteOfControllerUsed(::Rewired::Controller*  controller) ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_activeController() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_activeController() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_activeJoystick() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_activeJoystick() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action*& __cordl_internal_get_onChange() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_player() const;

constexpr ::Rewired::Player*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set_activeController(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_activeJoystick(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_player(::Rewired::Player*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activeControllerIsJoystick, addr 0x18041f0c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_activeControllerIsJoystick() ;

/// @brief Method get_activeControllerIsKeyboard, addr 0x18041f100, size 0x80, virtual false, abstract: false, final false
static inline bool get_activeControllerIsKeyboard() ;

/// @brief Method get_activeControllerIsMouse, addr 0x18041f180, size 0x90, virtual false, abstract: false, final false
static inline bool get_activeControllerIsMouse() ;

/// @brief Method get_instance, addr 0x18041f210, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ControllerSorter* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerSorter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerSorter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerSorter(ControllerSorter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerSorter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerSorter(ControllerSorter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5156};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field player, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Player*  ___player;

/// @brief Field activeController, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Controller*  ___activeController;

/// @brief Field activeJoystick, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Controller*  ___activeJoystick;

/// @brief Field onChange, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerSorter, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerSorter, ___player) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerSorter, ___activeController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerSorter, ___activeJoystick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerSorter, ___onChange) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerSorter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
