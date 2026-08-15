#pragma once
// IWYU pragma private; include "Mirror/Authenticators/BasicAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicAuthenticator)
namespace Mirror::Authenticators {
struct BasicAuthenticator_AuthRequestMessage;
}
namespace Mirror::Authenticators {
struct BasicAuthenticator_AuthResponseMessage;
}
namespace Mirror::Authenticators {
class BasicAuthenticator__DelayedDisconnect_d__11;
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
namespace Mirror::Authenticators {
class BasicAuthenticator;
}
namespace Mirror::Authenticators {
class BasicAuthenticator__DelayedDisconnect_d__11;
}
namespace Mirror::Authenticators {
struct BasicAuthenticator_AuthRequestMessage;
}
namespace Mirror::Authenticators {
struct BasicAuthenticator_AuthResponseMessage;
}
// Write type traits
MARK_REF_T(::Mirror::Authenticators::BasicAuthenticator*);
MARK_REF_T(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*);
MARK_VAL_T(::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage);
MARK_VAL_T(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage);
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::BasicAuthenticator*, "Mirror.Authenticators", "BasicAuthenticator");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11*, "Mirror.Authenticators", "BasicAuthenticator/<DelayedDisconnect>d__11");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage, "Mirror.Authenticators", "BasicAuthenticator/AuthRequestMessage");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage, "Mirror.Authenticators", "BasicAuthenticator/AuthResponseMessage");
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage
struct CORDL_TYPE BasicAuthenticator_AuthRequestMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr BasicAuthenticator_AuthRequestMessage() ;

// Ctor Parameters [CppParam { name: "authUsername", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "authPassword", ty: "::StringW", modifiers: "", def_value: None }]
constexpr BasicAuthenticator_AuthRequestMessage(::StringW  authUsername, ::StringW  authPassword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field authUsername, offset: 0x0, size: 0x8, def value: None
 ::StringW  authUsername;

/// @brief Field authPassword, offset: 0x8, size: 0x8, def value: None
 ::StringW  authPassword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage, authUsername) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage, authPassword) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage
struct CORDL_TYPE BasicAuthenticator_AuthResponseMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr BasicAuthenticator_AuthResponseMessage() ;

// Ctor Parameters [CppParam { name: "code", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
constexpr BasicAuthenticator_AuthResponseMessage(uint8_t  code, ::StringW  message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field code, offset: 0x0, size: 0x1, def value: None
 uint8_t  code;

/// @brief Field message, offset: 0x8, size: 0x8, def value: None
 ::StringW  message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage, message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies System.Object
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.BasicAuthenticator/<DelayedDisconnect>d__11
class CORDL_TYPE BasicAuthenticator__DelayedDisconnect_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Authenticators::BasicAuthenticator>  __4__this;

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

/// @brief Method MoveNext, addr 0x181517960, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Authenticators::BasicAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Authenticators::BasicAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr float_t const& __cordl_internal_get_waitTime() const;

constexpr float_t& __cordl_internal_get_waitTime() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Authenticators::BasicAuthenticator>  value) ;

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
constexpr BasicAuthenticator__DelayedDisconnect_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicAuthenticator__DelayedDisconnect_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicAuthenticator__DelayedDisconnect_d__11(BasicAuthenticator__DelayedDisconnect_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicAuthenticator__DelayedDisconnect_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicAuthenticator__DelayedDisconnect_d__11(BasicAuthenticator__DelayedDisconnect_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21012};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field waitTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___waitTime;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::Authenticators::BasicAuthenticator>  _____4__this;

/// @brief Field conn, offset: 0x30, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11, ___waitTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11, ___conn) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies Mirror.NetworkAuthenticator
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.BasicAuthenticator
class CORDL_TYPE BasicAuthenticator : public ::Mirror::NetworkAuthenticator {
public:
// Declarations
using AuthRequestMessage = ::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage;

using AuthResponseMessage = ::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage;

using _DelayedDisconnect_d__11 = ::Mirror::Authenticators::BasicAuthenticator__DelayedDisconnect_d__11;

/// @brief Field connectionsPendingDisconnect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionsPendingDisconnect, put=__cordl_internal_set_connectionsPendingDisconnect)) ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  connectionsPendingDisconnect;

/// @brief Field password, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_password, put=__cordl_internal_set_password)) ::StringW  password;

/// @brief Field serverPassword, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverPassword, put=__cordl_internal_set_serverPassword)) ::StringW  serverPassword;

/// @brief Field serverUsername, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverUsername, put=__cordl_internal_set_serverUsername)) ::StringW  serverUsername;

/// @brief Field username, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_username, put=__cordl_internal_set_username)) ::StringW  username;

/// @brief Method DelayedDisconnect, addr 0x181513cf0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedDisconnect(::Mirror::NetworkConnectionToClient*  conn, float_t  waitTime) ;

static inline ::Mirror::Authenticators::BasicAuthenticator* New_ctor() ;

/// @brief Method OnAuthRequestMessage, addr 0x181513d60, size 0x1b0, virtual false, abstract: false, final false
inline void OnAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::BasicAuthenticator_AuthRequestMessage  msg) ;

/// @brief Method OnAuthResponseMessage, addr 0x181513f10, size 0x50, virtual false, abstract: false, final false
inline void OnAuthResponseMessage(::Mirror::Authenticators::BasicAuthenticator_AuthResponseMessage  msg) ;

/// @brief Method OnClientAuthenticate, addr 0x181513f60, size 0x60, virtual true, abstract: false, final false
inline void OnClientAuthenticate() ;

/// @brief Method OnServerAuthenticate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x181513fc0, size 0x50, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x181514010, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x181514060, size 0x10, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x181514070, size 0x10, virtual true, abstract: false, final false
inline void OnStopServer() ;

constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>* const& __cordl_internal_get_connectionsPendingDisconnect() const;

constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*& __cordl_internal_get_connectionsPendingDisconnect() ;

constexpr ::StringW const& __cordl_internal_get_password() const;

constexpr ::StringW& __cordl_internal_get_password() ;

constexpr ::StringW const& __cordl_internal_get_serverPassword() const;

constexpr ::StringW& __cordl_internal_get_serverPassword() ;

constexpr ::StringW const& __cordl_internal_get_serverUsername() const;

constexpr ::StringW& __cordl_internal_get_serverUsername() ;

constexpr ::StringW const& __cordl_internal_get_username() const;

constexpr ::StringW& __cordl_internal_get_username() ;

constexpr void __cordl_internal_set_connectionsPendingDisconnect(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  value) ;

constexpr void __cordl_internal_set_password(::StringW  value) ;

constexpr void __cordl_internal_set_serverPassword(::StringW  value) ;

constexpr void __cordl_internal_set_serverUsername(::StringW  value) ;

constexpr void __cordl_internal_set_username(::StringW  value) ;

/// @brief Method .ctor, addr 0x181514080, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicAuthenticator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicAuthenticator(BasicAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicAuthenticator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicAuthenticator(BasicAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21013};

/// @brief Field serverUsername, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___serverUsername;

/// @brief Field serverPassword, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___serverPassword;

/// @brief Field username, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___username;

/// @brief Field password, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___password;

/// @brief Field connectionsPendingDisconnect, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnection*>*  ___connectionsPendingDisconnect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator, ___serverUsername) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator, ___serverPassword) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator, ___username) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator, ___password) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::BasicAuthenticator, ___connectionsPendingDisconnect) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::BasicAuthenticator) == 0x58, "Size mismatch!");

} // namespace end def Mirror::Authenticators
