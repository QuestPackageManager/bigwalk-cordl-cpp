#pragma once
// IWYU pragma private; include "GlobalNamespace/SignTextInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SignTextInput)
namespace GlobalNamespace {
class MultiPlatformInputField;
}
namespace TMPro {
class TMP_SelectionCaret;
}
// Forward declare root types
namespace GlobalNamespace {
class SignTextInput;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SignTextInput*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SignTextInput*, "", "SignTextInput");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SignTextInput
class CORDL_TYPE SignTextInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _stringAtLastChange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringAtLastChange, put=__cordl_internal_set__stringAtLastChange)) ::StringW  _stringAtLastChange;

/// @brief Field caretComponent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_caretComponent, put=__cordl_internal_set_caretComponent)) ::UnityW<::TMPro::TMP_SelectionCaret>  caretComponent;

/// @brief Field inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::GlobalNamespace::MultiPlatformInputField>  inputField;

/// @brief Field logVerbose, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method ClearPageUpPageDown, addr 0x18043fa80, size 0xf0, virtual false, abstract: false, final false
inline void ClearPageUpPageDown() ;

/// @brief Method GetSignInputAndSetInactive, addr 0x18043fb70, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW GetSignInputAndSetInactive() ;

/// @brief Method IsSignInputActive, addr 0x18043fd20, size 0x60, virtual false, abstract: false, final false
static inline bool IsSignInputActive() ;

static inline ::GlobalNamespace::SignTextInput* New_ctor() ;

/// @brief Method OnChange, addr 0x18043fd80, size 0xe0, virtual false, abstract: false, final false
inline void OnChange(::StringW  newString) ;

/// @brief Method SetSignInputActive, addr 0x18043fe60, size 0x270, virtual false, abstract: false, final false
static inline void SetSignInputActive(::StringW  existingText) ;

constexpr ::StringW const& __cordl_internal_get__stringAtLastChange() const;

constexpr ::StringW& __cordl_internal_get__stringAtLastChange() ;

constexpr ::UnityW<::TMPro::TMP_SelectionCaret> const& __cordl_internal_get_caretComponent() const;

constexpr ::UnityW<::TMPro::TMP_SelectionCaret>& __cordl_internal_get_caretComponent() ;

constexpr ::UnityW<::GlobalNamespace::MultiPlatformInputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::GlobalNamespace::MultiPlatformInputField>& __cordl_internal_get_inputField() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set__stringAtLastChange(::StringW  value) ;

constexpr void __cordl_internal_set_caretComponent(::UnityW<::TMPro::TMP_SelectionCaret>  value) ;

constexpr void __cordl_internal_set_inputField(::UnityW<::GlobalNamespace::MultiPlatformInputField>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x1804400d0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SignTextInput> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignTextInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignTextInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignTextInput(SignTextInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignTextInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignTextInput(SignTextInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5253};

/// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MultiPlatformInputField>  ___inputField;

/// @brief Field logVerbose, offset: 0x28, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field caretComponent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_SelectionCaret>  ___caretComponent;

/// @brief Field _stringAtLastChange, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____stringAtLastChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SignTextInput, ___inputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SignTextInput, ___logVerbose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SignTextInput, ___caretComponent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SignTextInput, ____stringAtLastChange) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SignTextInput) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
