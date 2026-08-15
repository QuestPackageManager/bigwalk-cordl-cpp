#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/ChatAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChatAuthenticator)
namespace Mirror::Examples::Chat {
struct ChatAuthenticator_AuthRequestMessage;
}
namespace Mirror::Examples::Chat {
struct ChatAuthenticator_AuthResponseMessage;
}
namespace Mirror::Examples::Chat {
class ChatAuthenticator__DelayedDisconnect_d__10;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
class NetworkMessage;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
// Forward declare root types
namespace Mirror::Examples::Chat {
class ChatAuthenticator;
}
namespace Mirror::Examples::Chat {
class ChatAuthenticator__DelayedDisconnect_d__10;
}
namespace Mirror::Examples::Chat {
struct ChatAuthenticator_AuthRequestMessage;
}
namespace Mirror::Examples::Chat {
struct ChatAuthenticator_AuthResponseMessage;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Chat::ChatAuthenticator*);
MARK_REF_T(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*);
MARK_VAL_T(::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage);
MARK_VAL_T(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatAuthenticator*, "Mirror.Examples.Chat", "ChatAuthenticator");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10*, "Mirror.Examples.Chat", "ChatAuthenticator/<DelayedDisconnect>d__10");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage, "Mirror.Examples.Chat", "ChatAuthenticator/AuthRequestMessage");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage, "Mirror.Examples.Chat", "ChatAuthenticator/AuthResponseMessage");
// Dependencies 
namespace Mirror::Examples::Chat {
// Is value type: true
// CS Name: Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage
struct CORDL_TYPE ChatAuthenticator_AuthRequestMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChatAuthenticator_AuthRequestMessage() ;

// Ctor Parameters [CppParam { name: "authUsername", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ChatAuthenticator_AuthRequestMessage(::StringW  authUsername) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field authUsername, offset: 0x0, size: 0x8, def value: None
 ::StringW  authUsername;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage, authUsername) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
// Dependencies 
namespace Mirror::Examples::Chat {
// Is value type: true
// CS Name: Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage
struct CORDL_TYPE ChatAuthenticator_AuthResponseMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChatAuthenticator_AuthResponseMessage() ;

// Ctor Parameters [CppParam { name: "code", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ChatAuthenticator_AuthResponseMessage(uint8_t  code, ::StringW  message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field code, offset: 0x0, size: 0x1, def value: None
 uint8_t  code;

/// @brief Field message, offset: 0x8, size: 0x8, def value: None
 ::StringW  message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage, message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
// Dependencies System.Object
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.ChatAuthenticator/<DelayedDisconnect>d__10
class CORDL_TYPE ChatAuthenticator__DelayedDisconnect_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::Chat::ChatAuthenticator>  __4__this;

/// @brief Field conn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Field waitTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitTime, put=__cordl_internal_set_waitTime)) float_t  waitTime;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181565380, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::Chat::ChatAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::Chat::ChatAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr float_t const& __cordl_internal_get_waitTime() const;

constexpr float_t& __cordl_internal_get_waitTime() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::Chat::ChatAuthenticator>  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value) ;

constexpr void __cordl_internal_set_waitTime(float_t  value) ;

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
constexpr ChatAuthenticator__DelayedDisconnect_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatAuthenticator__DelayedDisconnect_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatAuthenticator__DelayedDisconnect_d__10(ChatAuthenticator__DelayedDisconnect_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatAuthenticator__DelayedDisconnect_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatAuthenticator__DelayedDisconnect_d__10(ChatAuthenticator__DelayedDisconnect_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19331};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field waitTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___waitTime;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::Chat::ChatAuthenticator>  _____4__this;

/// @brief Field conn, offset: 0x30, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10, ___waitTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10, ___conn) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
// Dependencies Mirror.NetworkAuthenticator
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.ChatAuthenticator
class CORDL_TYPE ChatAuthenticator : public ::Mirror::NetworkAuthenticator {
public:
// Declarations
using AuthRequestMessage = ::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage;

using AuthResponseMessage = ::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage;

using _DelayedDisconnect_d__10 = ::Mirror::Examples::Chat::ChatAuthenticator__DelayedDisconnect_d__10;

/// @brief Field connectionsPendingDisconnect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionsPendingDisconnect, put=__cordl_internal_set_connectionsPendingDisconnect)) ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  connectionsPendingDisconnect;

/// @brief Field playerName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::StringW  playerName;

/// @brief Field playerNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerNames, put=setStaticF_playerNames)) ::System::Collections::Generic::HashSet_1<::StringW>*  playerNames;

/// @brief Method DelayedDisconnect, addr 0x181557cb0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedDisconnect(::Mirror::NetworkConnectionToClient*  conn, float_t  waitTime) ;

static inline ::Mirror::Examples::Chat::ChatAuthenticator* New_ctor() ;

/// @brief Method OnAuthRequestMessage, addr 0x181557d20, size 0x220, virtual false, abstract: false, final false
inline void OnAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Examples::Chat::ChatAuthenticator_AuthRequestMessage  msg) ;

/// @brief Method OnAuthResponseMessage, addr 0x181557f40, size 0x150, virtual false, abstract: false, final false
inline void OnAuthResponseMessage(::Mirror::Examples::Chat::ChatAuthenticator_AuthResponseMessage  msg) ;

/// @brief Method OnClientAuthenticate, addr 0x181558090, size 0x30, virtual true, abstract: false, final false
inline void OnClientAuthenticate() ;

/// @brief Method OnServerAuthenticate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x1815580c0, size 0x50, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x181558110, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x181558160, size 0x10, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x181558170, size 0x10, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method ResetStatics, addr 0x181558180, size 0x50, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method SetPlayername, addr 0x1815581d0, size 0xa0, virtual false, abstract: false, final false
inline void SetPlayername(::StringW  username) ;

constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>* const& __cordl_internal_get_connectionsPendingDisconnect() const;

constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*& __cordl_internal_get_connectionsPendingDisconnect() ;

constexpr ::StringW const& __cordl_internal_get_playerName() const;

constexpr ::StringW& __cordl_internal_get_playerName() ;

constexpr void __cordl_internal_set_connectionsPendingDisconnect(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  value) ;

constexpr void __cordl_internal_set_playerName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1815582d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_playerNames() ;

static inline void setStaticF_playerNames(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChatAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChatAuthenticator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChatAuthenticator(ChatAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChatAuthenticator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChatAuthenticator(ChatAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19332};

/// @brief Field connectionsPendingDisconnect, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  ___connectionsPendingDisconnect;

/// @brief Field playerName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___playerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator, ___connectionsPendingDisconnect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Chat::ChatAuthenticator, ___playerName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::ChatAuthenticator) == 0x40, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
