#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/ChatUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatUI)
namespace Mirror::Examples::Chat {
class ChatUI__AppendAndScroll_d__11;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Mirror::Examples::Chat {
class ChatUI;
}
namespace Mirror::Examples::Chat {
class ChatUI__AppendAndScroll_d__11;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Chat::ChatUI*);
MARK_REF_T(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatUI*, "Mirror.Examples.Chat", "ChatUI");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11*, "Mirror.Examples.Chat", "ChatUI/<AppendAndScroll>d__11");
// Dependencies System.Object
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.ChatUI/<AppendAndScroll>d__11
class CORDL_TYPE ChatUI__AppendAndScroll_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::Chat::ChatUI>  __4__this;

/// @brief Field message, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1815651c0, size 0x110, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Mirror::Examples::Chat::ChatUI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::Chat::ChatUI>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::Chat::ChatUI>  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatUI__AppendAndScroll_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatUI__AppendAndScroll_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatUI__AppendAndScroll_d__11(ChatUI__AppendAndScroll_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatUI__AppendAndScroll_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatUI__AppendAndScroll_d__11(ChatUI__AppendAndScroll_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19334};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::Chat::ChatUI>  _____4__this;

/// @brief Field message, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11, ___message) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.ChatUI
class CORDL_TYPE ChatUI : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using _AppendAndScroll_d__11 = ::Mirror::Examples::Chat::ChatUI__AppendAndScroll_d__11;

/// @brief Field chatHistory, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_chatHistory, put=__cordl_internal_set_chatHistory)) ::UnityW<::UnityEngine::UI::Text>  chatHistory;

/// @brief Field chatMessage, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_chatMessage, put=__cordl_internal_set_chatMessage)) ::UnityW<::UnityEngine::UI::InputField>  chatMessage;

/// @brief Field connNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_connNames, put=setStaticF_connNames)) ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::StringW>*  connNames;

/// @brief Field localPlayerName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localPlayerName, put=setStaticF_localPlayerName)) ::StringW  localPlayerName;

/// @brief Field scrollbar, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrollbar, put=__cordl_internal_set_scrollbar)) ::UnityW<::UnityEngine::UI::Scrollbar>  scrollbar;

/// @brief Field sendButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendButton, put=__cordl_internal_set_sendButton)) ::UnityW<::UnityEngine::UI::Button>  sendButton;

/// @brief Method AppendAndScroll, addr 0x181558530, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AppendAndScroll(::StringW  message) ;

/// @brief Method AppendMessage, addr 0x181558590, size 0x70, virtual false, abstract: false, final false
inline void AppendMessage(::StringW  message) ;

/// @brief Method CmdSend, addr 0x181558600, size 0xc0, virtual false, abstract: false, final false
inline void CmdSend(::StringW  message, ::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method ExitButtonOnClick, addr 0x1815586c0, size 0x50, virtual false, abstract: false, final false
inline void ExitButtonOnClick() ;

/// @brief Method InvokeUserCode_CmdSend__String__NetworkConnectionToClient, addr 0x181558710, size 0x110, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSend__String__NetworkConnectionToClient(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcReceive__String__String, addr 0x181558820, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcReceive__String__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Chat::ChatUI* New_ctor() ;

/// @brief Method OnEndEdit, addr 0x1815589b0, size 0x170, virtual false, abstract: false, final false
inline void OnEndEdit(::StringW  input) ;

/// @brief Method OnStartClient, addr 0x181558b20, size 0x40, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x181558b60, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method RpcReceive, addr 0x181558bb0, size 0xe0, virtual false, abstract: false, final false
inline void RpcReceive(::StringW  playerName, ::StringW  message) ;

/// @brief Method SendMessage, addr 0x181558c90, size 0x140, virtual false, abstract: false, final false
inline void SendMessage() ;

/// @brief Method ToggleButton, addr 0x181558dd0, size 0x40, virtual false, abstract: false, final false
inline void ToggleButton(::StringW  input) ;

/// @brief Method UserCode_CmdSend__String__NetworkConnectionToClient, addr 0x181558e10, size 0x1e0, virtual false, abstract: false, final false
inline void UserCode_CmdSend__String__NetworkConnectionToClient(::StringW  message, ::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method UserCode_RpcReceive__String__String, addr 0x181558ff0, size 0xd0, virtual false, abstract: false, final false
inline void UserCode_RpcReceive__String__String(::StringW  playerName, ::StringW  message) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_chatHistory() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_chatHistory() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_chatMessage() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_chatMessage() ;

constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& __cordl_internal_get_scrollbar() const;

constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& __cordl_internal_get_scrollbar() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_sendButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_sendButton() ;

constexpr void __cordl_internal_set_chatHistory(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_chatMessage(::UnityW<::UnityEngine::UI::InputField>  value) ;

constexpr void __cordl_internal_set_scrollbar(::UnityW<::UnityEngine::UI::Scrollbar>  value) ;

constexpr void __cordl_internal_set_sendButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::StringW>* getStaticF_connNames() ;

static inline ::StringW getStaticF_localPlayerName() ;

static inline void setStaticF_connNames(::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::StringW>*  value) ;

static inline void setStaticF_localPlayerName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatUI(ChatUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatUI(ChatUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19335};

/// @brief Field chatHistory, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___chatHistory;

/// @brief Field scrollbar, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Scrollbar>  ___scrollbar;

/// @brief Field chatMessage, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ___chatMessage;

/// @brief Field sendButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___sendButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::ChatUI, ___chatHistory) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatUI, ___scrollbar) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatUI, ___chatMessage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatUI, ___sendButton) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::ChatUI) == 0x88, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
