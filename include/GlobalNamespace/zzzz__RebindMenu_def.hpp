#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Rebinder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RebindMenu)
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class RebindAction;
}
namespace GlobalNamespace {
struct RebindMenu_WarningType;
}
namespace GlobalNamespace {
class RebindRow;
}
namespace GlobalNamespace {
class Rebinder;
}
namespace GlobalNamespace {
class SettingsMenu;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct RebindMenu_WarningType;
}
namespace GlobalNamespace {
class RebindMenu;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RebindMenu_WarningType);
MARK_REF_T(::GlobalNamespace::RebindMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindMenu_WarningType, "", "RebindMenu/WarningType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindMenu*, "", "RebindMenu");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RebindMenu/WarningType
struct CORDL_TYPE RebindMenu_WarningType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RebindMenu_WarningType_Unwrapped
enum struct __RebindMenu_WarningType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Invalid = static_cast<int32_t>(0x1),
__E_NoGamepad = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RebindMenu_WarningType_Unwrapped () const noexcept {
return static_cast<__RebindMenu_WarningType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RebindMenu_WarningType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RebindMenu_WarningType(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(1)
static ::GlobalNamespace::RebindMenu_WarningType const Invalid;

/// @brief Field NoGamepad value: I32(2)
static ::GlobalNamespace::RebindMenu_WarningType const NoGamepad;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RebindMenu_WarningType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RebindMenu_WarningType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RebindMenu_WarningType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Rebinder::LayoutType, Rebinder::RebindType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RebindMenu
class CORDL_TYPE RebindMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WarningType = ::GlobalNamespace::RebindMenu_WarningType;

 __declspec(property(get=get_IsLockedOpen)) bool  IsLockedOpen;

/// @brief Field actions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_actions, put=__cordl_internal_set_actions)) ::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>*  actions;

/// @brief Field backArea, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_backArea, put=__cordl_internal_set_backArea)) ::UnityW<::UnityEngine::Transform>  backArea;

/// @brief Field layoutType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_layoutType, put=__cordl_internal_set_layoutType)) ::GlobalNamespace::Rebinder_LayoutType  layoutType;

/// @brief Field needsToBeSaved, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_needsToBeSaved, put=__cordl_internal_set_needsToBeSaved)) bool  needsToBeSaved;

/// @brief Field rebindType, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_rebindType, put=__cordl_internal_set_rebindType)) ::GlobalNamespace::Rebinder_RebindType  rebindType;

/// @brief Field rebinder, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebinder, put=__cordl_internal_set_rebinder)) ::GlobalNamespace::Rebinder*  rebinder;

/// @brief Field resetButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetButton, put=__cordl_internal_set_resetButton)) ::UnityW<::UnityEngine::UI::Selectable>  resetButton;

/// @brief Field rowParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rowParent, put=__cordl_internal_set_rowParent)) ::UnityW<::UnityEngine::Transform>  rowParent;

/// @brief Field rowPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rowPrefab, put=__cordl_internal_set_rowPrefab)) ::UnityW<::UnityEngine::GameObject>  rowPrefab;

/// @brief Field settingsMenu, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsMenu, put=__cordl_internal_set_settingsMenu)) ::UnityW<::GlobalNamespace::SettingsMenu>  settingsMenu;

/// @brief Field warningArea, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningArea, put=__cordl_internal_set_warningArea)) ::UnityW<::UnityEngine::Transform>  warningArea;

/// @brief Field warningText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningText, put=__cordl_internal_set_warningText)) ::UnityW<::GlobalNamespace::LocalizedText>  warningText;

/// @brief Method ActionBack, addr 0x18043c140, size 0x40, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method AreBindingsValid, addr 0x18043c180, size 0x80, virtual false, abstract: false, final false
inline bool AreBindingsValid() ;

/// @brief Method CreateNewRow, addr 0x18043c200, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::RebindRow> CreateNewRow() ;

/// @brief Method Initialize, addr 0x18043c240, size 0x9d0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::RebindMenu* New_ctor() ;

/// @brief Method OnControlsChange, addr 0x18043cc10, size 0x20, virtual false, abstract: false, final false
inline void OnControlsChange() ;

/// @brief Method OnDisable, addr 0x18043cc30, size 0x2a0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18043ced0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecordChange, addr 0x18043cfc0, size 0x20, virtual false, abstract: false, final false
inline void RecordChange() ;

/// @brief Method RefreshAll, addr 0x18043cfe0, size 0x1b0, virtual false, abstract: false, final false
inline void RefreshAll() ;

/// @brief Method RefreshWarnings, addr 0x18043d190, size 0xe0, virtual false, abstract: false, final false
inline void RefreshWarnings() ;

/// @brief Method ResetToDefault, addr 0x18043d270, size 0x50, virtual false, abstract: false, final false
inline void ResetToDefault() ;

/// @brief Method Save, addr 0x18043d2c0, size 0x140, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method SetVerticalNavigation, addr 0x18043d400, size 0xc0, virtual false, abstract: false, final false
static inline void SetVerticalNavigation(::UnityEngine::UI::Selectable*  selectable, ::UnityEngine::UI::Selectable*  above, ::UnityEngine::UI::Selectable*  below) ;

/// @brief Method Start, addr 0x18043d4c0, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>* const& __cordl_internal_get_actions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>*& __cordl_internal_get_actions() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_backArea() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_backArea() ;

constexpr ::GlobalNamespace::Rebinder_LayoutType const& __cordl_internal_get_layoutType() const;

constexpr ::GlobalNamespace::Rebinder_LayoutType& __cordl_internal_get_layoutType() ;

constexpr bool const& __cordl_internal_get_needsToBeSaved() const;

constexpr bool& __cordl_internal_get_needsToBeSaved() ;

constexpr ::GlobalNamespace::Rebinder_RebindType const& __cordl_internal_get_rebindType() const;

constexpr ::GlobalNamespace::Rebinder_RebindType& __cordl_internal_get_rebindType() ;

constexpr ::GlobalNamespace::Rebinder* const& __cordl_internal_get_rebinder() const;

constexpr ::GlobalNamespace::Rebinder*& __cordl_internal_get_rebinder() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_resetButton() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_resetButton() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rowParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rowParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rowPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rowPrefab() ;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& __cordl_internal_get_settingsMenu() const;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& __cordl_internal_get_settingsMenu() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_warningArea() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_warningArea() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_warningText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_warningText() ;

constexpr void __cordl_internal_set_actions(::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>*  value) ;

constexpr void __cordl_internal_set_backArea(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_layoutType(::GlobalNamespace::Rebinder_LayoutType  value) ;

constexpr void __cordl_internal_set_needsToBeSaved(bool  value) ;

constexpr void __cordl_internal_set_rebindType(::GlobalNamespace::Rebinder_RebindType  value) ;

constexpr void __cordl_internal_set_rebinder(::GlobalNamespace::Rebinder*  value) ;

constexpr void __cordl_internal_set_resetButton(::UnityW<::UnityEngine::UI::Selectable>  value) ;

constexpr void __cordl_internal_set_rowParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rowPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value) ;

constexpr void __cordl_internal_set_warningArea(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_warningText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLockedOpen, addr 0x18043d4f0, size 0x30, virtual false, abstract: false, final false
inline bool get_IsLockedOpen() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RebindMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RebindMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RebindMenu(RebindMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RebindMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RebindMenu(RebindMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5319};

/// @brief Field rowPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rowPrefab;

/// @brief Field rowParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rowParent;

/// @brief Field resetButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___resetButton;

/// @brief Field actions, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>*  ___actions;

/// @brief Field needsToBeSaved, offset: 0x40, size: 0x1, def value: None
 bool  ___needsToBeSaved;

/// @brief Field rebindType, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::Rebinder_RebindType  ___rebindType;

/// @brief Field layoutType, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::Rebinder_LayoutType  ___layoutType;

/// @brief Field rebinder, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::Rebinder*  ___rebinder;

/// @brief Field settingsMenu, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsMenu>  ___settingsMenu;

/// @brief Field warningArea, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___warningArea;

/// @brief Field warningText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___warningText;

/// @brief Field backArea, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___backArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RebindMenu, ___rowPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___rowParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___resetButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___actions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___needsToBeSaved) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___rebindType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___layoutType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___rebinder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___settingsMenu) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___warningArea) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___warningText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RebindMenu, ___backArea) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RebindMenu) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
