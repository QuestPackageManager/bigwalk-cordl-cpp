#pragma once
// IWYU pragma private; include "EpicTransport/EosTransport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__RelayControl_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EosTransport)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace EpicTransport {
class Client;
}
namespace EpicTransport {
class Common;
}
namespace EpicTransport {
class EosTransport__ChangeRelayStatus_d__38;
}
namespace EpicTransport {
class EosTransport__FetchEpicAccountId_d__37;
}
namespace EpicTransport {
struct Packet;
}
namespace EpicTransport {
class Server;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace EpicTransport {
class EosTransport;
}
namespace EpicTransport {
class EosTransport__ChangeRelayStatus_d__38;
}
namespace EpicTransport {
class EosTransport__FetchEpicAccountId_d__37;
}
// Write type traits
MARK_REF_T(::EpicTransport::EosTransport*);
MARK_REF_T(::EpicTransport::EosTransport__ChangeRelayStatus_d__38*);
MARK_REF_T(::EpicTransport::EosTransport__FetchEpicAccountId_d__37*);
DEFINE_IL2CPP_CLASS(::EpicTransport::EosTransport*, "EpicTransport", "EosTransport");
DEFINE_IL2CPP_CLASS(::EpicTransport::EosTransport__ChangeRelayStatus_d__38*, "EpicTransport", "EosTransport/<ChangeRelayStatus>d__38");
DEFINE_IL2CPP_CLASS(::EpicTransport::EosTransport__FetchEpicAccountId_d__37*, "EpicTransport", "EosTransport/<FetchEpicAccountId>d__37");
// Dependencies System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.EosTransport/<ChangeRelayStatus>d__38
class CORDL_TYPE EosTransport__ChangeRelayStatus_d__38 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::EpicTransport::EosTransport>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18158d6f0, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::EpicTransport::EosTransport__ChangeRelayStatus_d__38* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::EpicTransport::EosTransport> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::EpicTransport::EosTransport>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::EpicTransport::EosTransport>  value) ;

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
constexpr EosTransport__ChangeRelayStatus_d__38() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EosTransport__ChangeRelayStatus_d__38", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EosTransport__ChangeRelayStatus_d__38(EosTransport__ChangeRelayStatus_d__38 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EosTransport__ChangeRelayStatus_d__38", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EosTransport__ChangeRelayStatus_d__38(EosTransport__ChangeRelayStatus_d__38 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19052};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::EpicTransport::EosTransport>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::EosTransport__ChangeRelayStatus_d__38, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport__ChangeRelayStatus_d__38, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport__ChangeRelayStatus_d__38, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::EosTransport__ChangeRelayStatus_d__38) == 0x28, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.EosTransport/<FetchEpicAccountId>d__37
class CORDL_TYPE EosTransport__FetchEpicAccountId_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::EpicTransport::EosTransport>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18158d9c0, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::EpicTransport::EosTransport__FetchEpicAccountId_d__37* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::EpicTransport::EosTransport> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::EpicTransport::EosTransport>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::EpicTransport::EosTransport>  value) ;

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
constexpr EosTransport__FetchEpicAccountId_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EosTransport__FetchEpicAccountId_d__37", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EosTransport__FetchEpicAccountId_d__37(EosTransport__FetchEpicAccountId_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EosTransport__FetchEpicAccountId_d__37", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EosTransport__FetchEpicAccountId_d__37(EosTransport__FetchEpicAccountId_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19053};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::EpicTransport::EosTransport>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::EosTransport__FetchEpicAccountId_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport__FetchEpicAccountId_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport__FetchEpicAccountId_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::EosTransport__FetchEpicAccountId_d__37) == 0x28, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Epic.OnlineServices.P2P.PacketReliability, Epic.OnlineServices.P2P.RelayControl, Mirror.Transport
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.EosTransport
class CORDL_TYPE EosTransport : public ::Mirror::Transport {
public:
// Declarations
using _ChangeRelayStatus_d__38 = ::EpicTransport::EosTransport__ChangeRelayStatus_d__38;

using _FetchEpicAccountId_d__37 = ::EpicTransport::EosTransport__FetchEpicAccountId_d__37;

/// @brief Field Channels, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_Channels, put=__cordl_internal_set_Channels)) ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  Channels;

/// @brief Field activeNode, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeNode, put=__cordl_internal_set_activeNode)) ::EpicTransport::Common*  activeNode;

/// @brief Field client, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::EpicTransport::Client*  client;

/// @brief Field ignoreCachedMessagesAtStartUpInSeconds, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_ignoreCachedMessagesAtStartUpInSeconds, put=__cordl_internal_set_ignoreCachedMessagesAtStartUpInSeconds)) float_t  ignoreCachedMessagesAtStartUpInSeconds;

/// @brief Field ignoreCachedMessagesTimer, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ignoreCachedMessagesTimer, put=__cordl_internal_set_ignoreCachedMessagesTimer)) float_t  ignoreCachedMessagesTimer;

/// @brief Field maxFragments, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFragments, put=__cordl_internal_set_maxFragments)) int32_t  maxFragments;

/// @brief Field packetId, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_packetId, put=__cordl_internal_set_packetId)) int32_t  packetId;

/// @brief Field productUserId, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_productUserId, put=__cordl_internal_set_productUserId)) ::Epic::OnlineServices::ProductUserId*  productUserId;

/// @brief Field relayControl, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_relayControl, put=__cordl_internal_set_relayControl)) ::Epic::OnlineServices::P2P::RelayControl  relayControl;

/// @brief Field server, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::EpicTransport::Server*  server;

/// @brief Field timeout, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) int32_t  timeout;

/// @brief Method Available, addr 0x181584e00, size 0x40, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x181584e40, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeRelayStatus, addr 0x181584ec0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ChangeRelayStatus() ;

/// @brief Method ClientActive, addr 0x181584f10, size 0x10, virtual false, abstract: false, final false
inline bool ClientActive() ;

/// @brief Method ClientConnect, addr 0x181584fd0, size 0x140, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x181584f20, size 0xb0, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x181585110, size 0x20, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x181585130, size 0x50, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x181585180, size 0x1e0, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x181585360, size 0x30, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method FetchEpicAccountId, addr 0x181585390, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FetchEpicAccountId() ;

/// @brief Method GetBatchThreshold, addr 0x1815853e0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetBatchThreshold(int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x1815853f0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

/// @brief Method GetMaxSinglePacketSize, addr 0x181585400, size 0x10, virtual false, abstract: false, final false
inline int32_t GetMaxSinglePacketSize(int32_t  channelId) ;

/// @brief Method GetPacketArray, addr 0x181585410, size 0x180, virtual false, abstract: false, final false
inline ::ArrayW<::EpicTransport::Packet> GetPacketArray(int32_t  channelId, ::System::ArraySegment_1<uint8_t>  segment) ;

static inline ::EpicTransport::EosTransport* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181585590, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RearmNetworkNotificationListeners, addr 0x1815855b0, size 0x80, virtual false, abstract: false, final false
inline void RearmNetworkNotificationListeners() ;

/// @brief Method ResetIgnoreMessagesAtStartUpTimer, addr 0x181585630, size 0x10, virtual false, abstract: false, final false
inline void ResetIgnoreMessagesAtStartUpTimer() ;

/// @brief Method Send, addr 0x181585640, size 0x270, virtual false, abstract: false, final false
inline void Send(int32_t  channelId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  connectionId) ;

/// @brief Method ServerActive, addr 0x1814f2dd0, size 0x10, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x1815858b0, size 0x20, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x1815858d0, size 0xa0, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x181585970, size 0x170, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0x181585ae0, size 0x70, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x181585b50, size 0x110, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x18062bab0, size 0x50, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x181585c60, size 0xb0, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x181585d10, size 0x100, virtual true, abstract: false, final false
inline void Shutdown() ;

constexpr ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability> const& __cordl_internal_get_Channels() const;

constexpr ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>& __cordl_internal_get_Channels() ;

constexpr ::EpicTransport::Common* const& __cordl_internal_get_activeNode() const;

constexpr ::EpicTransport::Common*& __cordl_internal_get_activeNode() ;

constexpr ::EpicTransport::Client* const& __cordl_internal_get_client() const;

constexpr ::EpicTransport::Client*& __cordl_internal_get_client() ;

constexpr float_t const& __cordl_internal_get_ignoreCachedMessagesAtStartUpInSeconds() const;

constexpr float_t& __cordl_internal_get_ignoreCachedMessagesAtStartUpInSeconds() ;

constexpr float_t const& __cordl_internal_get_ignoreCachedMessagesTimer() const;

constexpr float_t& __cordl_internal_get_ignoreCachedMessagesTimer() ;

constexpr int32_t const& __cordl_internal_get_maxFragments() const;

constexpr int32_t& __cordl_internal_get_maxFragments() ;

constexpr int32_t const& __cordl_internal_get_packetId() const;

constexpr int32_t& __cordl_internal_get_packetId() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_productUserId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_productUserId() ;

constexpr ::Epic::OnlineServices::P2P::RelayControl const& __cordl_internal_get_relayControl() const;

constexpr ::Epic::OnlineServices::P2P::RelayControl& __cordl_internal_get_relayControl() ;

constexpr ::EpicTransport::Server* const& __cordl_internal_get_server() const;

constexpr ::EpicTransport::Server*& __cordl_internal_get_server() ;

constexpr int32_t const& __cordl_internal_get_timeout() const;

constexpr int32_t& __cordl_internal_get_timeout() ;

constexpr void __cordl_internal_set_Channels(::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  value) ;

constexpr void __cordl_internal_set_activeNode(::EpicTransport::Common*  value) ;

constexpr void __cordl_internal_set_client(::EpicTransport::Client*  value) ;

constexpr void __cordl_internal_set_ignoreCachedMessagesAtStartUpInSeconds(float_t  value) ;

constexpr void __cordl_internal_set_ignoreCachedMessagesTimer(float_t  value) ;

constexpr void __cordl_internal_set_maxFragments(int32_t  value) ;

constexpr void __cordl_internal_set_packetId(int32_t  value) ;

constexpr void __cordl_internal_set_productUserId(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_relayControl(::Epic::OnlineServices::P2P::RelayControl  value) ;

constexpr void __cordl_internal_set_server(::EpicTransport::Server*  value) ;

constexpr void __cordl_internal_set_timeout(int32_t  value) ;

/// @brief Method .ctor, addr 0x181585e10, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EosTransport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EosTransport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EosTransport(EosTransport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EosTransport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EosTransport(EosTransport const& ) = delete;

/// @brief Field EPIC_SCHEME offset 0xffffffff size 0x8
static constexpr ::ConstString  EPIC_SCHEME{u"epic"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19054};

/// @brief Field client, offset: 0x70, size: 0x8, def value: None
 ::EpicTransport::Client*  ___client;

/// @brief Field server, offset: 0x78, size: 0x8, def value: None
 ::EpicTransport::Server*  ___server;

/// @brief Field activeNode, offset: 0x80, size: 0x8, def value: None
 ::EpicTransport::Common*  ___activeNode;

/// @brief Field Channels, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  ___Channels;

/// @brief Field timeout, offset: 0x90, size: 0x4, def value: None
 int32_t  ___timeout;

/// @brief Field maxFragments, offset: 0x94, size: 0x4, def value: None
 int32_t  ___maxFragments;

/// @brief Field ignoreCachedMessagesAtStartUpInSeconds, offset: 0x98, size: 0x4, def value: None
 float_t  ___ignoreCachedMessagesAtStartUpInSeconds;

/// @brief Field ignoreCachedMessagesTimer, offset: 0x9c, size: 0x4, def value: None
 float_t  ___ignoreCachedMessagesTimer;

/// @brief Field relayControl, offset: 0xa0, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::RelayControl  ___relayControl;

/// @brief Field productUserId, offset: 0xa8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___productUserId;

/// @brief Field packetId, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___packetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::EosTransport, ___client) == 0x70, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___server) == 0x78, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___activeNode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___Channels) == 0x88, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___timeout) == 0x90, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___maxFragments) == 0x94, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___ignoreCachedMessagesAtStartUpInSeconds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___ignoreCachedMessagesTimer) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___relayControl) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___productUserId) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EosTransport, ___packetId) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::EosTransport) == 0xb8, "Size mismatch!");

} // namespace end def EpicTransport
