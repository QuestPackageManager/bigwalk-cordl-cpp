#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/SlaveClientCollection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Networking/zzzz__BaseClientCollection_1_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SlaveClientCollection_1)
namespace Dissonance::Networking::Client {
class EventQueue;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ISendQueue_1;
}
namespace Dissonance::Networking::Client {
class ISession;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Rooms;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class SlaveClientCollection_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::SlaveClientCollection_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::SlaveClientCollection_1, "Dissonance.Networking.Client", "SlaveClientCollection`1");
// Dependencies Dissonance.CodecSettings, Dissonance.Networking.BaseClientCollection`1<TPeer>, System.Nullable`1<T>
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.SlaveClientCollection`1<TPeer>
class CORDL_TYPE SlaveClientCollection_1 : public ::Dissonance::Networking::BaseClientCollection_1<::System::Nullable_1<TPeer>> {
public:
// Declarations
/// @brief Field OnClientIntroducedP2P, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientIntroducedP2P, put=__cordl_internal_set_OnClientIntroducedP2P)) ::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  OnClientIntroducedP2P;

/// @brief Field _codecSettings, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__codecSettings, put=__cordl_internal_set__codecSettings)) ::Dissonance::CodecSettings  _codecSettings;

/// @brief Field _events, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Dissonance::Networking::Client::EventQueue*  _events;

/// @brief Field _localRooms, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__localRooms, put=__cordl_internal_set__localRooms)) ::Dissonance::Rooms*  _localRooms;

/// @brief Field _pendingIntroductions, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingIntroductions, put=__cordl_internal_set__pendingIntroductions)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>*  _pendingIntroductions;

/// @brief Field _playerName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerName, put=__cordl_internal_set__playerName)) ::StringW  _playerName;

/// @brief Field _sender, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sender, put=__cordl_internal_set__sender)) ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  _sender;

/// @brief Field _session, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__session, put=__cordl_internal_set__session)) ::Dissonance::Networking::Client::ISession*  _session;

/// @brief Method IntroduceP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void IntroduceP2P(uint16_t  id, TPeer  connection) ;

static inline ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>* New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  localRooms, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method OnAddedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAddedClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client) ;

/// @brief Method OnClientEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnClientEnteredRoom(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client, ::StringW  room) ;

/// @brief Method OnClientExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnClientExitedRoom(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client, ::StringW  room) ;

/// @brief Method OnRemovedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRemovedClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client) ;

/// @brief Method ProcessRemoveClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ProcessRemoveClient(::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method ReceiveHandshakeResponseBody, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReceiveHandshakeResponseBody(::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method SendClientState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendClientState() ;

/// @brief Method SendJoinRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendJoinRoom(::StringW  room) ;

/// @brief Method SendLeaveRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendLeaveRoom(::StringW  room) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method TryIntroduceP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryIntroduceP2P(uint16_t  id, TPeer  connection) ;

constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& __cordl_internal_get_OnClientIntroducedP2P() const;

constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& __cordl_internal_get_OnClientIntroducedP2P() ;

constexpr ::Dissonance::CodecSettings const& __cordl_internal_get__codecSettings() const;

constexpr ::Dissonance::CodecSettings& __cordl_internal_get__codecSettings() ;

constexpr ::Dissonance::Networking::Client::EventQueue* const& __cordl_internal_get__events() const;

constexpr ::Dissonance::Networking::Client::EventQueue*& __cordl_internal_get__events() ;

constexpr ::Dissonance::Rooms* const& __cordl_internal_get__localRooms() const;

constexpr ::Dissonance::Rooms*& __cordl_internal_get__localRooms() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>* const& __cordl_internal_get__pendingIntroductions() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>*& __cordl_internal_get__pendingIntroductions() ;

constexpr ::StringW const& __cordl_internal_get__playerName() const;

constexpr ::StringW& __cordl_internal_get__playerName() ;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& __cordl_internal_get__sender() const;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& __cordl_internal_get__sender() ;

constexpr ::Dissonance::Networking::Client::ISession* const& __cordl_internal_get__session() const;

constexpr ::Dissonance::Networking::Client::ISession*& __cordl_internal_get__session() ;

constexpr void __cordl_internal_set_OnClientIntroducedP2P(::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

constexpr void __cordl_internal_set__codecSettings(::Dissonance::CodecSettings  value) ;

constexpr void __cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value) ;

constexpr void __cordl_internal_set__localRooms(::Dissonance::Rooms*  value) ;

constexpr void __cordl_internal_set__pendingIntroductions(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>*  value) ;

constexpr void __cordl_internal_set__playerName(::StringW  value) ;

constexpr void __cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  localRooms, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method add_OnClientIntroducedP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnClientIntroducedP2P(::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

/// @brief Method remove_OnClientIntroducedP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnClientIntroducedP2P(::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlaveClientCollection_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlaveClientCollection_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SlaveClientCollection_1(SlaveClientCollection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlaveClientCollection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlaveClientCollection_1(SlaveClientCollection_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16921};

/// @brief Field _sender, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  ____sender;

/// @brief Field _session, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISession*  ____session;

/// @brief Field _events, offset: 0x70, size: 0x8, def value: None
 ::Dissonance::Networking::Client::EventQueue*  ____events;

/// @brief Field _localRooms, offset: 0x78, size: 0x8, def value: None
 ::Dissonance::Rooms*  ____localRooms;

/// @brief Field _playerName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____playerName;

/// @brief Field _codecSettings, offset: 0x88, size: 0xc, def value: None
 ::Dissonance::CodecSettings  ____codecSettings;

/// @brief Field OnClientIntroducedP2P, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  ___OnClientIntroducedP2P;

/// @brief Field _pendingIntroductions, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>*  ____pendingIntroductions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
