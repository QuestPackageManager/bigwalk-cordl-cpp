#pragma once
// IWYU pragma private; include "Dissonance/Demo/ChatInputController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChatInputController)
namespace Dissonance::Demo {
class ChatInputController___c;
}
namespace Dissonance::Demo {
class ChatLogController;
}
namespace Dissonance {
class DissonanceComms;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace Dissonance::Demo {
class ChatInputController;
}
namespace Dissonance::Demo {
class ChatInputController___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::ChatInputController*);
MARK_REF_T(::Dissonance::Demo::ChatInputController___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::ChatInputController*, "Dissonance.Demo", "ChatInputController");
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::ChatInputController___c*, "Dissonance.Demo", "ChatInputController/<>c");
// Dependencies System.Object
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.ChatInputController/<>c
class CORDL_TYPE ChatInputController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Demo::ChatInputController___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>*  __9__7_0;

static inline ::Dissonance::Demo::ChatInputController___c* New_ctor() ;

/// @brief Method <Start>b__7_0, addr 0x1805d2410, size 0x40, virtual false, abstract: false, final false
inline bool _Start_b__7_0(::UnityEngine::UI::InputField*  a) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Demo::ChatInputController___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::Dissonance::Demo::ChatInputController___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatInputController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatInputController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatInputController___c(ChatInputController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatInputController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatInputController___c(ChatInputController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Demo::ChatInputController___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Demo
// Dependencies UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.ChatInputController
class CORDL_TYPE ChatInputController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Dissonance::Demo::ChatInputController___c;

/// @brief Field Comms, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Comms, put=__cordl_internal_set_Comms)) ::UnityW<::Dissonance::DissonanceComms>  Comms;

/// @brief Field Team1Channel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Team1Channel, put=__cordl_internal_set_Team1Channel)) ::StringW  Team1Channel;

/// @brief Field Team2Channel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Team2Channel, put=__cordl_internal_set_Team2Channel)) ::StringW  Team2Channel;

/// @brief Field _input, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::UnityW<::UnityEngine::UI::InputField>  _input;

/// @brief Field _isInputtingText, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInputtingText, put=__cordl_internal_set__isInputtingText)) bool  _isInputtingText;

/// @brief Field _log, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__log, put=__cordl_internal_set__log)) ::UnityW<::Dissonance::Demo::ChatLogController>  _log;

/// @brief Field _targetChannel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetChannel, put=__cordl_internal_set__targetChannel)) ::StringW  _targetChannel;

static inline ::Dissonance::Demo::ChatInputController* New_ctor() ;

/// @brief Method OnInputEndEdit, addr 0x1805c55f0, size 0x1c0, virtual false, abstract: false, final false
inline void OnInputEndEdit(::StringW  message) ;

/// @brief Method ShowTextInput, addr 0x1805c57b0, size 0x80, virtual false, abstract: false, final false
inline void ShowTextInput(::StringW  channel) ;

/// @brief Method Start, addr 0x1805c5830, size 0x1b0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1805c59e0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Dissonance::DissonanceComms> const& __cordl_internal_get_Comms() const;

constexpr ::UnityW<::Dissonance::DissonanceComms>& __cordl_internal_get_Comms() ;

constexpr ::StringW const& __cordl_internal_get_Team1Channel() const;

constexpr ::StringW& __cordl_internal_get_Team1Channel() ;

constexpr ::StringW const& __cordl_internal_get_Team2Channel() const;

constexpr ::StringW& __cordl_internal_get_Team2Channel() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get__input() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get__input() ;

constexpr bool const& __cordl_internal_get__isInputtingText() const;

constexpr bool& __cordl_internal_get__isInputtingText() ;

constexpr ::UnityW<::Dissonance::Demo::ChatLogController> const& __cordl_internal_get__log() const;

constexpr ::UnityW<::Dissonance::Demo::ChatLogController>& __cordl_internal_get__log() ;

constexpr ::StringW const& __cordl_internal_get__targetChannel() const;

constexpr ::StringW& __cordl_internal_get__targetChannel() ;

constexpr void __cordl_internal_set_Comms(::UnityW<::Dissonance::DissonanceComms>  value) ;

constexpr void __cordl_internal_set_Team1Channel(::StringW  value) ;

constexpr void __cordl_internal_set_Team2Channel(::StringW  value) ;

constexpr void __cordl_internal_set__input(::UnityW<::UnityEngine::UI::InputField>  value) ;

constexpr void __cordl_internal_set__isInputtingText(bool  value) ;

constexpr void __cordl_internal_set__log(::UnityW<::Dissonance::Demo::ChatLogController>  value) ;

constexpr void __cordl_internal_set__targetChannel(::StringW  value) ;

/// @brief Method .ctor, addr 0x1805c5a60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatInputController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatInputController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatInputController(ChatInputController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatInputController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatInputController(ChatInputController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16844};

/// @brief Field _isInputtingText, offset: 0x20, size: 0x1, def value: None
 bool  ____isInputtingText;

/// @brief Field _targetChannel, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____targetChannel;

/// @brief Field Comms, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Dissonance::DissonanceComms>  ___Comms;

/// @brief Field Team1Channel, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Team1Channel;

/// @brief Field Team2Channel, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Team2Channel;

/// @brief Field _input, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ____input;

/// @brief Field _log, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Dissonance::Demo::ChatLogController>  ____log;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::ChatInputController, ____isInputtingText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatInputController, ____targetChannel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatInputController, ___Comms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatInputController, ___Team1Channel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatInputController, ___Team2Channel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatInputController, ____input) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::ChatInputController, ____log) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::ChatInputController) == 0x58, "Size mismatch!");

} // namespace end def Dissonance::Demo
