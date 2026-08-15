#pragma once
// IWYU pragma private; include "GlobalNamespace/PasswordMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PasswordMenu)
namespace TMPro {
class TMP_InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class PasswordMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PasswordMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PasswordMenu*, "", "PasswordMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PasswordMenu
class CORDL_TYPE PasswordMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field passwordField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_passwordField, put=__cordl_internal_set_passwordField)) ::UnityW<::TMPro::TMP_InputField>  passwordField;

/// @brief Method Cancel, addr 0x180438d20, size 0xb0, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method GoToConnectingMenu, addr 0x180438dd0, size 0x70, virtual false, abstract: false, final false
inline void GoToConnectingMenu() ;

/// @brief Method GoToJoinMenu, addr 0x1804313d0, size 0x70, virtual false, abstract: false, final false
inline void GoToJoinMenu() ;

static inline ::GlobalNamespace::PasswordMenu* New_ctor() ;

/// @brief Method SubmitPassword, addr 0x180438e40, size 0xb0, virtual false, abstract: false, final false
inline void SubmitPassword() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_passwordField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_passwordField() ;

constexpr void __cordl_internal_set_passwordField(::UnityW<::TMPro::TMP_InputField>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PasswordMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PasswordMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PasswordMenu(PasswordMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasswordMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasswordMenu(PasswordMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5302};

/// @brief Field passwordField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___passwordField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PasswordMenu, ___passwordField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PasswordMenu) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
