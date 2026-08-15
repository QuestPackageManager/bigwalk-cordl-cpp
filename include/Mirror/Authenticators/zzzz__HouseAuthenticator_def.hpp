#pragma once
// IWYU pragma private; include "Mirror/Authenticators/HouseAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerCount_def.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseAuthenticator)
namespace Mirror::Authenticators {
struct HouseAuthenticator_AuthResponseMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_InitialialAuthRequestMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_PasswordResponseMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_WelcomeMessage;
}
namespace Mirror::Authenticators {
class HouseAuthenticator__DelayedDisconnect_d__14;
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
class HouseAuthenticator;
}
namespace Mirror::Authenticators {
class HouseAuthenticator__DelayedDisconnect_d__14;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_AuthResponseMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_InitialialAuthRequestMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_PasswordResponseMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_WelcomeMessage;
}
// Write type traits
MARK_REF_T(::Mirror::Authenticators::HouseAuthenticator*);
MARK_REF_T(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*);
MARK_VAL_T(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage);
MARK_VAL_T(::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage);
MARK_VAL_T(::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage);
MARK_VAL_T(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage);
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::HouseAuthenticator*, "Mirror.Authenticators", "HouseAuthenticator");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14*, "Mirror.Authenticators", "HouseAuthenticator/<DelayedDisconnect>d__14");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage, "Mirror.Authenticators", "HouseAuthenticator/AuthResponseMessage");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage, "Mirror.Authenticators", "HouseAuthenticator/InitialialAuthRequestMessage");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage, "Mirror.Authenticators", "HouseAuthenticator/PasswordResponseMessage");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage, "Mirror.Authenticators", "HouseAuthenticator/WelcomeMessage");
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage
struct CORDL_TYPE HouseAuthenticator_InitialialAuthRequestMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseAuthenticator_InitialialAuthRequestMessage() ;

// Ctor Parameters [CppParam { name: "playerIdentifier", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "versionNumber", ty: "::StringW", modifiers: "", def_value: None }]
constexpr HouseAuthenticator_InitialialAuthRequestMessage(::StringW  playerIdentifier, ::StringW  versionNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field playerIdentifier, offset: 0x0, size: 0x8, def value: None
 ::StringW  playerIdentifier;

/// @brief Field versionNumber, offset: 0x8, size: 0x8, def value: None
 ::StringW  versionNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage, playerIdentifier) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage, versionNumber) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage
struct CORDL_TYPE HouseAuthenticator_PasswordResponseMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseAuthenticator_PasswordResponseMessage() ;

// Ctor Parameters [CppParam { name: "authPassword", ty: "::StringW", modifiers: "", def_value: None }]
constexpr HouseAuthenticator_PasswordResponseMessage(::StringW  authPassword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field authPassword, offset: 0x0, size: 0x8, def value: None
 ::StringW  authPassword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage, authPassword) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage
struct CORDL_TYPE HouseAuthenticator_AuthResponseMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseAuthenticator_AuthResponseMessage() ;

// Ctor Parameters [CppParam { name: "code", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
constexpr HouseAuthenticator_AuthResponseMessage(uint8_t  code, ::StringW  message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5766};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field code, offset: 0x0, size: 0x1, def value: None
 uint8_t  code;

/// @brief Field message, offset: 0x8, size: 0x8, def value: None
 ::StringW  message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage, message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies PlayerCount
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.HouseAuthenticator/WelcomeMessage
struct CORDL_TYPE HouseAuthenticator_WelcomeMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseAuthenticator_WelcomeMessage() ;

// Ctor Parameters [CppParam { name: "playerCount", ty: "::GlobalNamespace::PlayerCount", modifiers: "", def_value: None }, CppParam { name: "skipAidsActive", ty: "bool", modifiers: "", def_value: None }]
constexpr HouseAuthenticator_WelcomeMessage(::GlobalNamespace::PlayerCount  playerCount, bool  skipAidsActive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5767};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field playerCount, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PlayerCount  playerCount;

/// @brief Field skipAidsActive, offset: 0x4, size: 0x1, def value: None
 bool  skipAidsActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage, playerCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage, skipAidsActive) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies System.Object
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.HouseAuthenticator/<DelayedDisconnect>d__14
class CORDL_TYPE HouseAuthenticator__DelayedDisconnect_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Authenticators::HouseAuthenticator>  __4__this;

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

/// @brief Method MoveNext, addr 0x1803d1530, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Authenticators::HouseAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Authenticators::HouseAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr float_t const& __cordl_internal_get_waitTime() const;

constexpr float_t& __cordl_internal_get_waitTime() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Authenticators::HouseAuthenticator>  value) ;

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
constexpr HouseAuthenticator__DelayedDisconnect_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseAuthenticator__DelayedDisconnect_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseAuthenticator__DelayedDisconnect_d__14(HouseAuthenticator__DelayedDisconnect_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseAuthenticator__DelayedDisconnect_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseAuthenticator__DelayedDisconnect_d__14(HouseAuthenticator__DelayedDisconnect_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5768};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field waitTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___waitTime;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::Authenticators::HouseAuthenticator>  _____4__this;

/// @brief Field conn, offset: 0x30, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14, ___waitTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14, ___conn) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies Mirror.NetworkAuthenticator
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.HouseAuthenticator
class CORDL_TYPE HouseAuthenticator : public ::Mirror::NetworkAuthenticator {
public:
// Declarations
using AuthResponseMessage = ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage;

using InitialialAuthRequestMessage = ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage;

using PasswordResponseMessage = ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage;

using WelcomeMessage = ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage;

using _DelayedDisconnect_d__14 = ::Mirror::Authenticators::HouseAuthenticator__DelayedDisconnect_d__14;

/// @brief Field logVerbose, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field password, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_password, put=__cordl_internal_set_password)) ::StringW  password;

/// @brief Field versionBypassString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_versionBypassString, put=setStaticF_versionBypassString)) ::StringW  versionBypassString;

/// @brief Method DelayedDisconnect, addr 0x1803c70e0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedDisconnect(::Mirror::NetworkConnectionToClient*  conn, float_t  waitTime) ;

/// @brief Method GetWelcomeMessage, addr 0x1803c7150, size 0x100, virtual false, abstract: false, final false
inline ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage GetWelcomeMessage() ;

static inline ::Mirror::Authenticators::HouseAuthenticator* New_ctor() ;

/// @brief Method OnAuthResponseMessage, addr 0x1803c74a0, size 0x20, virtual false, abstract: false, final false
inline void OnAuthResponseMessage(::Mirror::NetworkConnection*  conn, ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage  msg) ;

/// @brief Method OnAuthResponseMessage, addr 0x1803c7250, size 0x250, virtual false, abstract: false, final false
inline void OnAuthResponseMessage(::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage  msg) ;

/// @brief Method OnClientAuthenticate, addr 0x1803c74c0, size 0x140, virtual true, abstract: false, final false
inline void OnClientAuthenticate() ;

/// @brief Method OnInitialAuthRequestMessage, addr 0x1803c7600, size 0x370, virtual false, abstract: false, final false
inline void OnInitialAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage  msg) ;

/// @brief Method OnPasswordResponseMessage, addr 0x1803c7970, size 0x150, virtual false, abstract: false, final false
inline void OnPasswordResponseMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage  msg) ;

/// @brief Method OnServerAuthenticate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x1803c7ac0, size 0x90, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x1803c7b50, size 0x90, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1803c7be0, size 0x20, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x1803c7c00, size 0x20, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method OnWelcomeMessage, addr 0x1803c7c20, size 0xb0, virtual false, abstract: false, final false
inline void OnWelcomeMessage(::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage  msg) ;

/// @brief Method SendPassword, addr 0x1803c7cd0, size 0x70, virtual false, abstract: false, final false
static inline void SendPassword(::StringW  password) ;

/// @brief Method VersionsAreCompatible, addr 0x1803c7d40, size 0xb0, virtual false, abstract: false, final false
static inline bool VersionsAreCompatible(::StringW  versionA, ::StringW  versionB) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::StringW const& __cordl_internal_get_password() const;

constexpr ::StringW& __cordl_internal_get_password() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_password(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803c7e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_versionBypassString() ;

static inline void setStaticF_versionBypassString(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseAuthenticator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseAuthenticator(HouseAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseAuthenticator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseAuthenticator(HouseAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5769};

/// @brief Field password, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___password;

/// @brief Field logVerbose, offset: 0x38, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator, ___password) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::HouseAuthenticator, ___logVerbose) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::HouseAuthenticator) == 0x40, "Size mismatch!");

} // namespace end def Mirror::Authenticators
