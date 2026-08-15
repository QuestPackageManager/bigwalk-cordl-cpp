#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/LoginUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoginUI)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Mirror::Examples::Chat {
class LoginUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Chat::LoginUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::LoginUI*, "Mirror.Examples.Chat", "LoginUI");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.LoginUI
class CORDL_TYPE LoginUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clientButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientButton, put=__cordl_internal_set_clientButton)) ::UnityW<::UnityEngine::UI::Button>  clientButton;

/// @brief Field errorText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorText, put=__cordl_internal_set_errorText)) ::UnityW<::UnityEngine::UI::Text>  errorText;

/// @brief Field hostButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostButton, put=__cordl_internal_set_hostButton)) ::UnityW<::UnityEngine::UI::Button>  hostButton;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Mirror::Examples::Chat::LoginUI>  instance;

/// @brief Field usernameInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_usernameInput, put=__cordl_internal_set_usernameInput)) ::UnityW<::UnityEngine::UI::InputField>  usernameInput;

/// @brief Method Awake, addr 0x18155a3a0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::Examples::Chat::LoginUI* New_ctor() ;

/// @brief Method ToggleButtons, addr 0x18155a3d0, size 0x70, virtual false, abstract: false, final false
inline void ToggleButtons(::StringW  username) ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_clientButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_clientButton() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_errorText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_errorText() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_hostButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_hostButton() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_usernameInput() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_usernameInput() ;

constexpr void __cordl_internal_set_clientButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_errorText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_hostButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_usernameInput(::UnityW<::UnityEngine::UI::InputField>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::Chat::LoginUI> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::Mirror::Examples::Chat::LoginUI>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUI(LoginUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUI(LoginUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19336};

/// @brief Field usernameInput, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ___usernameInput;

/// @brief Field hostButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___hostButton;

/// @brief Field clientButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___clientButton;

/// @brief Field errorText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___errorText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::LoginUI, ___usernameInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::LoginUI, ___hostButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::LoginUI, ___clientButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::LoginUI, ___errorText) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::LoginUI) == 0x40, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
