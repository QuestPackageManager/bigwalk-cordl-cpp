#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsCatagory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsRow_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SettingsCatagory)
namespace GlobalNamespace {
class SettingsRow;
}
namespace UnityEngine::UI {
class Selectable;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsCatagory;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingsCatagory*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsCatagory*, "", "SettingsCatagory");
// Dependencies SettingsRow, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsCatagory
class CORDL_TYPE SettingsCatagory : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field catagoryButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_catagoryButton, put=__cordl_internal_set_catagoryButton)) ::UnityW<::UnityEngine::UI::Selectable>  catagoryButton;

 __declspec(property(get=get_firstRow)) ::UnityW<::GlobalNamespace::SettingsRow>  firstRow;

/// @brief Field rows, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rows, put=__cordl_internal_set_rows)) ::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>>  rows;

static inline ::GlobalNamespace::SettingsCatagory* New_ctor() ;

/// @brief Method Start, addr 0x18043d880, size 0x180, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_catagoryButton() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_catagoryButton() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>> const& __cordl_internal_get_rows() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>>& __cordl_internal_get_rows() ;

constexpr void __cordl_internal_set_catagoryButton(::UnityW<::UnityEngine::UI::Selectable>  value) ;

constexpr void __cordl_internal_set_rows(::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_firstRow, addr 0x18043da00, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SettingsRow> get_firstRow() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsCatagory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsCatagory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsCatagory(SettingsCatagory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsCatagory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsCatagory(SettingsCatagory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5309};

/// @brief Field catagoryButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___catagoryButton;

/// @brief Field rows, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>>  ___rows;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsCatagory, ___catagoryButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsCatagory, ___rows) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsCatagory) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
