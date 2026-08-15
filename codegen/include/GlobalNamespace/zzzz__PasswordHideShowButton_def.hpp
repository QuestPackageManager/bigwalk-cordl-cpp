#pragma once
// IWYU pragma private; include "GlobalNamespace/PasswordHideShowButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PasswordHideShowButton)
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class PasswordHideShowButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PasswordHideShowButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PasswordHideShowButton*, "", "PasswordHideShowButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PasswordHideShowButton
class CORDL_TYPE PasswordHideShowButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field buttonText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonText, put=__cordl_internal_set_buttonText)) ::UnityW<::TMPro::TMP_Text>  buttonText;

/// @brief Field characterWhenHidden, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_characterWhenHidden, put=__cordl_internal_set_characterWhenHidden)) ::StringW  characterWhenHidden;

/// @brief Field characterWhenNotHidden, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_characterWhenNotHidden, put=__cordl_internal_set_characterWhenNotHidden)) ::StringW  characterWhenNotHidden;

/// @brief Field passwordField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_passwordField, put=__cordl_internal_set_passwordField)) ::UnityW<::TMPro::TMP_InputField>  passwordField;

/// @brief Method HideShowPassword, addr 0x180427d80, size 0x80, virtual false, abstract: false, final false
inline void HideShowPassword() ;

static inline ::GlobalNamespace::PasswordHideShowButton* New_ctor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_buttonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_buttonText() ;

constexpr ::StringW const& __cordl_internal_get_characterWhenHidden() const;

constexpr ::StringW& __cordl_internal_get_characterWhenHidden() ;

constexpr ::StringW const& __cordl_internal_get_characterWhenNotHidden() const;

constexpr ::StringW& __cordl_internal_get_characterWhenNotHidden() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_passwordField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_passwordField() ;

constexpr void __cordl_internal_set_buttonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_characterWhenHidden(::StringW  value) ;

constexpr void __cordl_internal_set_characterWhenNotHidden(::StringW  value) ;

constexpr void __cordl_internal_set_passwordField(::UnityW<::TMPro::TMP_InputField>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PasswordHideShowButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PasswordHideShowButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PasswordHideShowButton(PasswordHideShowButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasswordHideShowButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasswordHideShowButton(PasswordHideShowButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5239};

/// @brief Field buttonText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___buttonText;

/// @brief Field passwordField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___passwordField;

/// @brief Field characterWhenHidden, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___characterWhenHidden;

/// @brief Field characterWhenNotHidden, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___characterWhenNotHidden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PasswordHideShowButton, ___buttonText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PasswordHideShowButton, ___passwordField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PasswordHideShowButton, ___characterWhenHidden) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PasswordHideShowButton, ___characterWhenNotHidden) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PasswordHideShowButton) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
