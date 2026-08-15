#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuScreenBack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MenuScreenBack)
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuScreenBack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuScreenBack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuScreenBack*, "", "MenuScreenBack");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuScreenBack
class CORDL_TYPE MenuScreenBack : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentInputField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentInputField, put=__cordl_internal_set__currentInputField)) ::UnityW<::TMPro::TMP_InputField>  _currentInputField;

/// @brief Field _currentSelected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSelected, put=__cordl_internal_set__currentSelected)) ::UnityW<::UnityEngine::GameObject>  _currentSelected;

/// @brief Field _inputFieldWasFocused, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__inputFieldWasFocused, put=__cordl_internal_set__inputFieldWasFocused)) bool  _inputFieldWasFocused;

/// @brief Field backAction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_backAction, put=__cordl_internal_set_backAction)) ::UnityEngine::Events::UnityEvent*  backAction;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field unselectedSubmitAction, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unselectedSubmitAction, put=__cordl_internal_set_unselectedSubmitAction)) ::UnityEngine::Events::UnityEvent*  unselectedSubmitAction;

static inline ::GlobalNamespace::MenuScreenBack* New_ctor() ;

/// @brief Method Update, addr 0x180425030, size 0x2e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__currentInputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__currentInputField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__currentSelected() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__currentSelected() ;

constexpr bool const& __cordl_internal_get__inputFieldWasFocused() const;

constexpr bool& __cordl_internal_get__inputFieldWasFocused() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_backAction() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_backAction() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_unselectedSubmitAction() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unselectedSubmitAction() ;

constexpr void __cordl_internal_set__currentInputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__currentSelected(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__inputFieldWasFocused(bool  value) ;

constexpr void __cordl_internal_set_backAction(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_unselectedSubmitAction(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuScreenBack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuScreenBack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuScreenBack(MenuScreenBack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuScreenBack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuScreenBack(MenuScreenBack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5233};

/// @brief Field backAction, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___backAction;

/// @brief Field unselectedSubmitAction, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___unselectedSubmitAction;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _currentSelected, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____currentSelected;

/// @brief Field _currentInputField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____currentInputField;

/// @brief Field _inputFieldWasFocused, offset: 0x48, size: 0x1, def value: None
 bool  ____inputFieldWasFocused;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuScreenBack, ___backAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenBack, ___unselectedSubmitAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenBack, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenBack, ____currentSelected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenBack, ____currentInputField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuScreenBack, ____inputFieldWasFocused) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuScreenBack) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
