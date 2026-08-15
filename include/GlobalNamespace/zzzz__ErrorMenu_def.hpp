#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ErrorMenu)
namespace GlobalNamespace {
struct ErrorUtils_ErrorType;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ErrorMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ErrorMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ErrorMenu*, "", "ErrorMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ErrorMenu
class CORDL_TYPE ErrorMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field continueMenu, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueMenu, put=__cordl_internal_set_continueMenu)) ::UnityW<::UnityEngine::GameObject>  continueMenu;

/// @brief Field errorText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorText, put=__cordl_internal_set_errorText)) ::UnityW<::GlobalNamespace::LocalizedText>  errorText;

/// @brief Field errorTitle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorTitle, put=__cordl_internal_set_errorTitle)) ::UnityW<::GlobalNamespace::LocalizedText>  errorTitle;

/// @brief Method Continue, addr 0x180432240, size 0xd0, virtual false, abstract: false, final false
inline void Continue() ;

static inline ::GlobalNamespace::ErrorMenu* New_ctor() ;

/// @brief Method SetError, addr 0x180432360, size 0x60, virtual false, abstract: false, final false
inline void SetError(::GlobalNamespace::ErrorUtils_ErrorType  errorType) ;

/// @brief Method SetErrorFromLocalizationKeys, addr 0x180432310, size 0x50, virtual false, abstract: false, final false
inline void SetErrorFromLocalizationKeys(::StringW  errorTitleKey, ::StringW  errorMessageKey) ;

/// @brief Method SetReturnToMenu, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void SetReturnToMenu(::UnityEngine::GameObject*  menu) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_continueMenu() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_continueMenu() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_errorText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_errorText() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_errorTitle() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_errorTitle() ;

constexpr void __cordl_internal_set_continueMenu(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_errorText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_errorTitle(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorMenu(ErrorMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorMenu(ErrorMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5280};

/// @brief Field errorTitle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___errorTitle;

/// @brief Field errorText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___errorText;

/// @brief Field continueMenu, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___continueMenu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ErrorMenu, ___errorTitle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ErrorMenu, ___errorText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ErrorMenu, ___continueMenu) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ErrorMenu) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
