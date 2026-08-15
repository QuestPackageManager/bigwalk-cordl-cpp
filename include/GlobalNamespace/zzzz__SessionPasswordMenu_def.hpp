#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionPasswordMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SessionPasswordMenu)
namespace TMPro {
class TMP_InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class SessionPasswordMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SessionPasswordMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SessionPasswordMenu*, "", "SessionPasswordMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SessionPasswordMenu
class CORDL_TYPE SessionPasswordMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::TMPro::TMP_InputField>  inputField;

/// @brief Method ActionCancel, addr 0x18043d7b0, size 0x10, virtual false, abstract: false, final false
inline void ActionCancel() ;

/// @brief Method ActionConfirm, addr 0x18043d7c0, size 0x50, virtual false, abstract: false, final false
inline void ActionConfirm() ;

/// @brief Method GoToSessionMenu, addr 0x180435490, size 0xb0, virtual false, abstract: false, final false
inline void GoToSessionMenu() ;

static inline ::GlobalNamespace::SessionPasswordMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804374f0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18043d810, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_inputField() ;

constexpr void __cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionPasswordMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionPasswordMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionPasswordMenu(SessionPasswordMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionPasswordMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionPasswordMenu(SessionPasswordMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5273};

/// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___inputField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SessionPasswordMenu, ___inputField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SessionPasswordMenu) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
