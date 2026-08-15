#pragma once
// IWYU pragma private; include "GlobalNamespace/HostMenuConfirm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HostMenuConfirm)
namespace GlobalNamespace {
class IMenuSelectionRefresher;
}
namespace GlobalNamespace {
class SaveData;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HostMenuConfirm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HostMenuConfirm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenuConfirm*, "", "HostMenuConfirm");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HostMenuConfirm
class CORDL_TYPE HostMenuConfirm : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ContinueButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContinueButton, put=__cordl_internal_set_ContinueButton)) ::UnityW<::UnityEngine::UI::Button>  ContinueButton;

/// @brief Field deleteButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_deleteButton, put=__cordl_internal_set_deleteButton)) ::UnityW<::UnityEngine::Transform>  deleteButton;

/// @brief Field gameNameField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameNameField, put=__cordl_internal_set_gameNameField)) ::UnityW<::TMPro::TMP_InputField>  gameNameField;

/// @brief Field passwordField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_passwordField, put=__cordl_internal_set_passwordField)) ::UnityW<::TMPro::TMP_InputField>  passwordField;

/// @brief Field saveData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveData, put=__cordl_internal_set_saveData)) ::GlobalNamespace::SaveData*  saveData;

/// @brief Field timeLabel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeLabel, put=__cordl_internal_set_timeLabel)) ::UnityW<::TMPro::TMP_Text>  timeLabel;

/// @brief Convert operator to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr operator  ::GlobalNamespace::IMenuSelectionRefresher*() noexcept;

/// @brief Method ActionDelete, addr 0x180432e80, size 0x70, virtual false, abstract: false, final false
inline void ActionDelete() ;

/// @brief Method ActionStart, addr 0x180432ef0, size 0x260, virtual false, abstract: false, final false
inline void ActionStart() ;

/// @brief Method Back, addr 0x180433150, size 0x70, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method GoToHostMenuDeleteConfirm, addr 0x180432e80, size 0x70, virtual false, abstract: false, final false
inline void GoToHostMenuDeleteConfirm() ;

/// @brief Method GoToHostMenuSelect, addr 0x180433150, size 0x70, virtual false, abstract: false, final false
inline void GoToHostMenuSelect() ;

/// @brief Method GoToLoadingMenu, addr 0x180431440, size 0x70, virtual false, abstract: false, final false
inline void GoToLoadingMenu() ;

/// @brief Method GoToPlayerCountMenu, addr 0x1804331c0, size 0xd0, virtual false, abstract: false, final false
inline void GoToPlayerCountMenu() ;

static inline ::GlobalNamespace::HostMenuConfirm* New_ctor() ;

/// @brief Method OnEnable, addr 0x180433290, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x180433330, size 0x1b0, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RefreshForNewSlot, addr 0x1804332a0, size 0x90, virtual false, abstract: false, final false
inline void RefreshForNewSlot() ;

/// @brief Method RefreshMenuSelection, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void RefreshMenuSelection() ;

/// @brief Method Update, addr 0x1804334e0, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_ContinueButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_ContinueButton() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_deleteButton() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_deleteButton() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_gameNameField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_gameNameField() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_passwordField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_passwordField() ;

constexpr ::GlobalNamespace::SaveData* const& __cordl_internal_get_saveData() const;

constexpr ::GlobalNamespace::SaveData*& __cordl_internal_get_saveData() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_timeLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_timeLabel() ;

constexpr void __cordl_internal_set_ContinueButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_deleteButton(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gameNameField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_passwordField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_saveData(::GlobalNamespace::SaveData*  value) ;

constexpr void __cordl_internal_set_timeLabel(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr ::GlobalNamespace::IMenuSelectionRefresher* i___GlobalNamespace__IMenuSelectionRefresher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMenuConfirm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMenuConfirm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMenuConfirm(HostMenuConfirm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMenuConfirm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMenuConfirm(HostMenuConfirm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5284};

/// @brief Field gameNameField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___gameNameField;

/// @brief Field passwordField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___passwordField;

/// @brief Field timeLabel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___timeLabel;

/// @brief Field ContinueButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___ContinueButton;

/// @brief Field deleteButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___deleteButton;

/// @brief Field saveData, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::SaveData*  ___saveData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HostMenuConfirm, ___gameNameField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuConfirm, ___passwordField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuConfirm, ___timeLabel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuConfirm, ___ContinueButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuConfirm, ___deleteButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuConfirm, ___saveData) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HostMenuConfirm) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
