#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextChatInput)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_SelectionCaret;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class TextChatInput;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextChatInput*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatInput*, "", "TextChatInput");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextChatInput
class CORDL_TYPE TextChatInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _stringAtMostRecentChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringAtMostRecentChange, put=__cordl_internal_set__stringAtMostRecentChange)) ::StringW  _stringAtMostRecentChange;

/// @brief Field caretComponent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_caretComponent, put=__cordl_internal_set_caretComponent)) ::UnityW<::TMPro::TMP_SelectionCaret>  caretComponent;

/// @brief Field cycleIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleIndex, put=__cordl_internal_set_cycleIndex)) int32_t  cycleIndex;

/// @brief Field inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::TMPro::TMP_InputField>  inputField;

 __declspec(property(get=get_inputIsOpen)) bool  inputIsOpen;

/// @brief Field logVerbose, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::UnityW<::TMPro::TMP_Text>  output;

/// @brief Field recentMessages, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_recentMessages, put=__cordl_internal_set_recentMessages)) ::System::Collections::Generic::List_1<::StringW>*  recentMessages;

/// @brief Field textChatVisuals, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_textChatVisuals, put=__cordl_internal_set_textChatVisuals)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  textChatVisuals;

/// @brief Method Awake, addr 0x1804405c0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseInput, addr 0x1804405f0, size 0xa0, virtual false, abstract: false, final false
inline void CloseInput() ;

/// @brief Method GetString, addr 0x180440690, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetString() ;

static inline ::GlobalNamespace::TextChatInput* New_ctor() ;

/// @brief Method OnChange, addr 0x1804406f0, size 0x90, virtual false, abstract: false, final false
inline void OnChange(::StringW  newString) ;

/// @brief Method OnEnable, addr 0x180440780, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OpenInput, addr 0x1804407f0, size 0x1e0, virtual false, abstract: false, final false
inline void OpenInput() ;

/// @brief Method RecordMessage, addr 0x1804409d0, size 0x90, virtual false, abstract: false, final false
inline void RecordMessage(::StringW  message) ;

/// @brief Method Update, addr 0x180440a60, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get__stringAtMostRecentChange() const;

constexpr ::StringW& __cordl_internal_get__stringAtMostRecentChange() ;

constexpr ::UnityW<::TMPro::TMP_SelectionCaret> const& __cordl_internal_get_caretComponent() const;

constexpr ::UnityW<::TMPro::TMP_SelectionCaret>& __cordl_internal_get_caretComponent() ;

constexpr int32_t const& __cordl_internal_get_cycleIndex() const;

constexpr int32_t& __cordl_internal_get_cycleIndex() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_inputField() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_output() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_output() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_recentMessages() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_recentMessages() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& __cordl_internal_get_textChatVisuals() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get_textChatVisuals() ;

constexpr void __cordl_internal_set__stringAtMostRecentChange(::StringW  value) ;

constexpr void __cordl_internal_set_caretComponent(::UnityW<::TMPro::TMP_SelectionCaret>  value) ;

constexpr void __cordl_internal_set_cycleIndex(int32_t  value) ;

constexpr void __cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_output(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_recentMessages(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_textChatVisuals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value) ;

/// @brief Method .ctor, addr 0x180440b50, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_inputIsOpen, addr 0x180440ba0, size 0x30, virtual false, abstract: false, final false
inline bool get_inputIsOpen() ;

/// @brief Method get_instance, addr 0x180440bd0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::TextChatInput> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextChatInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextChatInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextChatInput(TextChatInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextChatInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextChatInput(TextChatInput const& ) = delete;

/// @brief Field CHARLIMIT offset 0xffffffff size 0x4
static constexpr int32_t  CHARLIMIT{static_cast<int32_t>(0xc8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5256};

/// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___inputField;

/// @brief Field output, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___output;

/// @brief Field textChatVisuals, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  ___textChatVisuals;

/// @brief Field logVerbose, offset: 0x38, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field cycleIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___cycleIndex;

/// @brief Field recentMessages, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___recentMessages;

/// @brief Field caretComponent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_SelectionCaret>  ___caretComponent;

/// @brief Field _stringAtMostRecentChange, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____stringAtMostRecentChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatInput, ___inputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ___output) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ___textChatVisuals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ___logVerbose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ___cycleIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ___recentMessages) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ___caretComponent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatInput, ____stringAtMostRecentChange) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatInput) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
