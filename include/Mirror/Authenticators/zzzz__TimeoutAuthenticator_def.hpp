#pragma once
// IWYU pragma private; include "Mirror/Authenticators/TimeoutAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeoutAuthenticator)
namespace Mirror::Authenticators {
class TimeoutAuthenticator__BeginAuthentication_d__9;
}
namespace Mirror {
class NetworkAuthenticator;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
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
class TimeoutAuthenticator;
}
namespace Mirror::Authenticators {
class TimeoutAuthenticator__BeginAuthentication_d__9;
}
// Write type traits
MARK_REF_T(::Mirror::Authenticators::TimeoutAuthenticator*);
MARK_REF_T(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9*);
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::TimeoutAuthenticator*, "Mirror.Authenticators", "TimeoutAuthenticator");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9*, "Mirror.Authenticators", "TimeoutAuthenticator/<BeginAuthentication>d__9");
// Dependencies System.Object
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.TimeoutAuthenticator/<BeginAuthentication>d__9
class CORDL_TYPE TimeoutAuthenticator__BeginAuthentication_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Authenticators::TimeoutAuthenticator>  __4__this;

/// @brief Field conn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnection*  conn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181517880, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Authenticators::TimeoutAuthenticator> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Authenticators::TimeoutAuthenticator>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnection* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnection*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Authenticators::TimeoutAuthenticator>  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::NetworkConnection*  value) ;

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
constexpr TimeoutAuthenticator__BeginAuthentication_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeoutAuthenticator__BeginAuthentication_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeoutAuthenticator__BeginAuthentication_d__9(TimeoutAuthenticator__BeginAuthentication_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutAuthenticator__BeginAuthentication_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeoutAuthenticator__BeginAuthentication_d__9(TimeoutAuthenticator__BeginAuthentication_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21017};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Authenticators::TimeoutAuthenticator>  _____4__this;

/// @brief Field conn, offset: 0x28, size: 0x8, def value: None
 ::Mirror::NetworkConnection*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9, ___conn) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies Mirror.NetworkAuthenticator
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.TimeoutAuthenticator
class CORDL_TYPE TimeoutAuthenticator : public ::Mirror::NetworkAuthenticator {
public:
// Declarations
using _BeginAuthentication_d__9 = ::Mirror::Authenticators::TimeoutAuthenticator__BeginAuthentication_d__9;

/// @brief Field authenticator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticator, put=__cordl_internal_set_authenticator)) ::UnityW<::Mirror::NetworkAuthenticator>  authenticator;

/// @brief Field timeout, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) float_t  timeout;

/// @brief Method Awake, addr 0x181517520, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginAuthentication, addr 0x1815175e0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* BeginAuthentication(::Mirror::NetworkConnection*  conn) ;

static inline ::Mirror::Authenticators::TimeoutAuthenticator* New_ctor() ;

/// @brief Method OnClientAuthenticate, addr 0x181517640, size 0xd0, virtual true, abstract: false, final false
inline void OnClientAuthenticate() ;

/// @brief Method OnServerAuthenticate, addr 0x181517710, size 0xa0, virtual true, abstract: false, final false
inline void OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x1815177b0, size 0x30, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x1815177e0, size 0x30, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1805d52a0, size 0x30, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x181517810, size 0x30, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method <Awake>b__2_0, addr 0x181517840, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__2_0(::Mirror::NetworkConnectionToClient*  connection) ;

constexpr ::UnityW<::Mirror::NetworkAuthenticator> const& __cordl_internal_get_authenticator() const;

constexpr ::UnityW<::Mirror::NetworkAuthenticator>& __cordl_internal_get_authenticator() ;

constexpr float_t const& __cordl_internal_get_timeout() const;

constexpr float_t& __cordl_internal_get_timeout() ;

constexpr void __cordl_internal_set_authenticator(::UnityW<::Mirror::NetworkAuthenticator>  value) ;

constexpr void __cordl_internal_set_timeout(float_t  value) ;

/// @brief Method .ctor, addr 0x181517870, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeoutAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeoutAuthenticator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeoutAuthenticator(TimeoutAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutAuthenticator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeoutAuthenticator(TimeoutAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21018};

/// @brief Field authenticator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkAuthenticator>  ___authenticator;

/// @brief Field timeout, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::TimeoutAuthenticator, ___authenticator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Authenticators::TimeoutAuthenticator, ___timeout) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::TimeoutAuthenticator) == 0x40, "Size mismatch!");

} // namespace end def Mirror::Authenticators
