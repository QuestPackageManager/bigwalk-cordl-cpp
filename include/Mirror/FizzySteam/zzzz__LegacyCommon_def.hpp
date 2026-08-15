#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/LegacyCommon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EP2PSend_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyCommon)
namespace Mirror::FizzySteam {
class FizzySteamworks;
}
namespace Mirror::FizzySteam {
struct LegacyCommon_InternalMessages;
}
namespace Mirror::FizzySteam {
class LegacyCommon__DelayedClose_d__16;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct P2PSessionConnectFail_t;
}
namespace Steamworks {
struct P2PSessionRequest_t;
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
namespace Mirror::FizzySteam {
struct LegacyCommon_InternalMessages;
}
namespace Mirror::FizzySteam {
class LegacyCommon;
}
namespace Mirror::FizzySteam {
class LegacyCommon__DelayedClose_d__16;
}
// Write type traits
MARK_VAL_T(::Mirror::FizzySteam::LegacyCommon_InternalMessages);
MARK_REF_T(::Mirror::FizzySteam::LegacyCommon*);
MARK_REF_T(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*);
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyCommon_InternalMessages, "Mirror.FizzySteam", "LegacyCommon/InternalMessages");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyCommon*, "Mirror.FizzySteam", "LegacyCommon");
DEFINE_IL2CPP_CLASS(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16*, "Mirror.FizzySteam", "LegacyCommon/<DelayedClose>d__16");
// Dependencies 
namespace Mirror::FizzySteam {
// Is value type: true
// CS Name: Mirror.FizzySteam.LegacyCommon/InternalMessages
struct CORDL_TYPE LegacyCommon_InternalMessages {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __LegacyCommon_InternalMessages_Unwrapped
enum struct __LegacyCommon_InternalMessages_Unwrapped : uint8_t {
__E_CONNECT = static_cast<uint8_t>(0x0u),
__E_ACCEPT_CONNECT = static_cast<uint8_t>(0x1u),
__E_DISCONNECT = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LegacyCommon_InternalMessages_Unwrapped () const noexcept {
return static_cast<__LegacyCommon_InternalMessages_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LegacyCommon_InternalMessages() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LegacyCommon_InternalMessages(uint8_t  value__) noexcept;

/// @brief Field ACCEPT_CONNECT value: U8(1)
static ::Mirror::FizzySteam::LegacyCommon_InternalMessages const ACCEPT_CONNECT;

/// @brief Field CONNECT value: U8(0)
static ::Mirror::FizzySteam::LegacyCommon_InternalMessages const CONNECT;

/// @brief Field DISCONNECT value: U8(2)
static ::Mirror::FizzySteam::LegacyCommon_InternalMessages const DISCONNECT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon_InternalMessages, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyCommon_InternalMessages) == 0x1, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies Steamworks.CSteamID, System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.LegacyCommon/<DelayedClose>d__16
class CORDL_TYPE LegacyCommon__DelayedClose_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Mirror::FizzySteam::LegacyCommon*  __4__this;

/// @brief Field cSteamID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cSteamID, put=__cordl_internal_set_cSteamID)) ::Steamworks::CSteamID  cSteamID;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x180631050, size 0x70, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16* New_ctor(int32_t  __1__state) ;

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

constexpr ::Mirror::FizzySteam::LegacyCommon* const& __cordl_internal_get___4__this() const;

constexpr ::Mirror::FizzySteam::LegacyCommon*& __cordl_internal_get___4__this() ;

constexpr ::Steamworks::CSteamID const& __cordl_internal_get_cSteamID() const;

constexpr ::Steamworks::CSteamID& __cordl_internal_get_cSteamID() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Mirror::FizzySteam::LegacyCommon*  value) ;

constexpr void __cordl_internal_set_cSteamID(::Steamworks::CSteamID  value) ;

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
constexpr LegacyCommon__DelayedClose_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyCommon__DelayedClose_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyCommon__DelayedClose_d__16(LegacyCommon__DelayedClose_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyCommon__DelayedClose_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyCommon__DelayedClose_d__16(LegacyCommon__DelayedClose_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20898};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Mirror::FizzySteam::LegacyCommon*  _____4__this;

/// @brief Field cSteamID, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::CSteamID  ___cSteamID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16, ___cSteamID) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16) == 0x30, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
// Dependencies Steamworks.EP2PSend, System.Object
namespace Mirror::FizzySteam {
// Is value type: false
// CS Name: Mirror.FizzySteam.LegacyCommon
class CORDL_TYPE LegacyCommon : public ::System::Object {
public:
// Declarations
using InternalMessages = ::Mirror::FizzySteam::LegacyCommon_InternalMessages;

using _DelayedClose_d__16 = ::Mirror::FizzySteam::LegacyCommon__DelayedClose_d__16;

/// @brief Field callback_OnConnectFail, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback_OnConnectFail, put=__cordl_internal_set_callback_OnConnectFail)) ::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>*  callback_OnConnectFail;

/// @brief Field callback_OnNewConnection, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback_OnNewConnection, put=__cordl_internal_set_callback_OnNewConnection)) ::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>*  callback_OnNewConnection;

/// @brief Field channels, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) ::ArrayW<::Steamworks::EP2PSend>  channels;

 __declspec(property(get=get_internal_ch)) int32_t  internal_ch;

/// @brief Field transport, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  transport;

/// @brief Method CloseP2PSessionWithUser, addr 0x18062c780, size 0x10, virtual false, abstract: false, final false
inline void CloseP2PSessionWithUser(::Steamworks::CSteamID  clientSteamID) ;

/// @brief Method DelayedClose, addr 0x18062c790, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedClose(::Steamworks::CSteamID  cSteamID) ;

/// @brief Method Dispose, addr 0x18062c7f0, size 0x60, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Mirror::FizzySteam::LegacyCommon* New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport) ;

/// @brief Method OnConnectFail, addr 0x18062c850, size 0xa0, virtual false, abstract: false, final false
inline void OnConnectFail(::Steamworks::P2PSessionConnectFail_t  result) ;

/// @brief Method OnConnectionFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnConnectionFailed(::Steamworks::CSteamID  remoteId) ;

/// @brief Method OnNewConnection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnNewConnection(::Steamworks::P2PSessionRequest_t  result) ;

/// @brief Method OnReceiveData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnReceiveData(::ArrayW<uint8_t>  data, ::Steamworks::CSteamID  clientSteamID, int32_t  channel) ;

/// @brief Method OnReceiveInternalData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnReceiveInternalData(::Mirror::FizzySteam::LegacyCommon_InternalMessages  type, ::Steamworks::CSteamID  clientSteamID) ;

/// @brief Method Receive, addr 0x18062cb20, size 0xd0, virtual false, abstract: false, final false
inline bool Receive(::by_ref<::Steamworks::CSteamID>  clientSteamID, ::by_ref<::ArrayW<uint8_t>>  receiveBuffer, int32_t  channel) ;

/// @brief Method ReceiveData, addr 0x18062c8f0, size 0x230, virtual true, abstract: false, final true
inline void ReceiveData() ;

/// @brief Method Send, addr 0x18062cc70, size 0x60, virtual false, abstract: false, final false
inline void Send(::Steamworks::CSteamID  host, ::ArrayW<uint8_t>  msgBuffer, int32_t  channel) ;

/// @brief Method SendInternal, addr 0x18062cbf0, size 0x80, virtual false, abstract: false, final false
inline void SendInternal(::Steamworks::CSteamID  target, ::Mirror::FizzySteam::LegacyCommon_InternalMessages  type) ;

/// @brief Method WaitForClose, addr 0x18062ccd0, size 0xa0, virtual false, abstract: false, final false
inline void WaitForClose(::Steamworks::CSteamID  cSteamID) ;

constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>* const& __cordl_internal_get_callback_OnConnectFail() const;

constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>*& __cordl_internal_get_callback_OnConnectFail() ;

constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>* const& __cordl_internal_get_callback_OnNewConnection() const;

constexpr ::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>*& __cordl_internal_get_callback_OnNewConnection() ;

constexpr ::ArrayW<::Steamworks::EP2PSend> const& __cordl_internal_get_channels() const;

constexpr ::ArrayW<::Steamworks::EP2PSend>& __cordl_internal_get_channels() ;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_callback_OnConnectFail(::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>*  value) ;

constexpr void __cordl_internal_set_callback_OnNewConnection(::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>*  value) ;

constexpr void __cordl_internal_set_channels(::ArrayW<::Steamworks::EP2PSend>  value) ;

constexpr void __cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value) ;

/// @brief Method .ctor, addr 0x18062cd70, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Mirror::FizzySteam::FizzySteamworks*  transport) ;

/// @brief Method get_internal_ch, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_internal_ch() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyCommon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyCommon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyCommon(LegacyCommon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyCommon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyCommon(LegacyCommon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20899};

/// @brief Field channels, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Steamworks::EP2PSend>  ___channels;

/// @brief Field callback_OnNewConnection, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::P2PSessionRequest_t>*  ___callback_OnNewConnection;

/// @brief Field callback_OnConnectFail, offset: 0x20, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::P2PSessionConnectFail_t>*  ___callback_OnConnectFail;

/// @brief Field transport, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::FizzySteam::FizzySteamworks>  ___transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon, ___channels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon, ___callback_OnNewConnection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon, ___callback_OnConnectFail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::FizzySteam::LegacyCommon, ___transport) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::FizzySteam::LegacyCommon) == 0x30, "Size mismatch!");

} // namespace end def Mirror::FizzySteam
