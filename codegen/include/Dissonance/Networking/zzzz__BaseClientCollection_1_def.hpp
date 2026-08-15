#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseClientCollection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseClientCollection_1)
namespace Dissonance::Networking {
class ClientIdCollection;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
template<typename TPeer>
class IClientCollection_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance::Networking {
template<typename T>
class RoomClientsCollection_1;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Dissonance::Networking {
template<typename TPeer>
class BaseClientCollection_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseClientCollection_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseClientCollection_1, "Dissonance.Networking", "BaseClientCollection`1");
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.BaseClientCollection`1<TPeer>
class CORDL_TYPE BaseClientCollection_1 : public ::System::Object {
public:
// Declarations
/// @brief Field ClientsInRooms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClientsInRooms, put=__cordl_internal_set_ClientsInRooms)) ::Dissonance::Networking::RoomClientsCollection_1<TPeer>*  ClientsInRooms;

/// @brief Field Log, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Log, put=__cordl_internal_set_Log)) ::Dissonance::Log*  Log;

/// @brief Field OnClientEnteredRoomEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientEnteredRoomEvent, put=__cordl_internal_set_OnClientEnteredRoomEvent)) ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  OnClientEnteredRoomEvent;

/// @brief Field OnClientExitedRoomEvent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientExitedRoomEvent, put=__cordl_internal_set_OnClientExitedRoomEvent)) ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  OnClientExitedRoomEvent;

/// @brief Field OnClientJoined, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientJoined, put=__cordl_internal_set_OnClientJoined)) ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  OnClientJoined;

/// @brief Field OnClientLeft, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientLeft, put=__cordl_internal_set_OnClientLeft)) ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  OnClientLeft;

/// @brief Field PlayerIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerIds, put=__cordl_internal_set_PlayerIds)) ::Dissonance::Networking::ClientIdCollection*  PlayerIds;

/// @brief Field _clientsByName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientsByName, put=__cordl_internal_set__clientsByName)) ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  _clientsByName;

/// @brief Field _clientsByPlayerId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientsByPlayerId, put=__cordl_internal_set__clientsByPlayerId)) ::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  _clientsByPlayerId;

/// @brief Field _tmpRoomList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpRoomList, put=__cordl_internal_set__tmpRoomList)) ::System::Collections::Generic::List_1<::StringW>*  _tmpRoomList;

/// @brief Convert operator to "::Dissonance::Networking::IClientCollection_1<TPeer>"
constexpr operator  ::Dissonance::Networking::IClientCollection_1<TPeer>*() noexcept;

/// @brief Method ClearRooms, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearRooms() ;

/// @brief Method GetClients, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetClients(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output) ;

/// @brief Method GetOrCreateClientInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::ClientInfo_1<TPeer>* GetOrCreateClientInfo(uint16_t  id, ::StringW  name, ::Dissonance::CodecSettings  codecSettings, TPeer  connection) ;

/// @brief Method JoinRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void JoinRoom(::StringW  room, ::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method LeaveRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LeaveRoom(::StringW  room, ::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

static inline ::Dissonance::Networking::BaseClientCollection_1<TPeer>* New_ctor() ;

/// @brief Method OnAddedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAddedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method OnClientEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnClientEnteredRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  client, ::StringW  room) ;

/// @brief Method OnClientExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnClientExitedRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  client, ::StringW  room) ;

/// @brief Method OnRemovedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRemovedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method ProcessClientState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessClientState(TPeer  source, ::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method ProcessDeltaChannelState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessDeltaChannelState(::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method RemoveClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method TryFindClientByConnection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryFindClientByConnection(TPeer  connection, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info) ;

/// @brief Method TryGetClientInfoById, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetClientInfoById(uint16_t  player, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info) ;

/// @brief Method TryGetClientInfoByName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetClientInfoByName(::StringW  name, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info) ;

/// @brief Method TryGetClientsInRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetClientsInRoom(::StringW  room, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output) ;

/// @brief Method TryGetClientsInRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetClientsInRoom(uint16_t  roomId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output) ;

constexpr ::Dissonance::Networking::RoomClientsCollection_1<TPeer>* const& __cordl_internal_get_ClientsInRooms() const;

constexpr ::Dissonance::Networking::RoomClientsCollection_1<TPeer>*& __cordl_internal_get_ClientsInRooms() ;

constexpr ::Dissonance::Log* const& __cordl_internal_get_Log() const;

constexpr ::Dissonance::Log*& __cordl_internal_get_Log() ;

constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>* const& __cordl_internal_get_OnClientEnteredRoomEvent() const;

constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*& __cordl_internal_get_OnClientEnteredRoomEvent() ;

constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>* const& __cordl_internal_get_OnClientExitedRoomEvent() const;

constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*& __cordl_internal_get_OnClientExitedRoomEvent() ;

constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& __cordl_internal_get_OnClientJoined() const;

constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& __cordl_internal_get_OnClientJoined() ;

constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& __cordl_internal_get_OnClientLeft() const;

constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& __cordl_internal_get_OnClientLeft() ;

constexpr ::Dissonance::Networking::ClientIdCollection* const& __cordl_internal_get_PlayerIds() const;

constexpr ::Dissonance::Networking::ClientIdCollection*& __cordl_internal_get_PlayerIds() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& __cordl_internal_get__clientsByName() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>*& __cordl_internal_get__clientsByName() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& __cordl_internal_get__clientsByPlayerId() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>*& __cordl_internal_get__clientsByPlayerId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__tmpRoomList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__tmpRoomList() ;

constexpr void __cordl_internal_set_ClientsInRooms(::Dissonance::Networking::RoomClientsCollection_1<TPeer>*  value) ;

constexpr void __cordl_internal_set_Log(::Dissonance::Log*  value) ;

constexpr void __cordl_internal_set_OnClientEnteredRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnClientExitedRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnClientJoined(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

constexpr void __cordl_internal_set_OnClientLeft(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

constexpr void __cordl_internal_set_PlayerIds(::Dissonance::Networking::ClientIdCollection*  value) ;

constexpr void __cordl_internal_set__clientsByName(::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

constexpr void __cordl_internal_set__clientsByPlayerId(::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

constexpr void __cordl_internal_set__tmpRoomList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnClientEnteredRoomEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnClientEnteredRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value) ;

/// @brief Method add_OnClientExitedRoomEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnClientExitedRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value) ;

/// @brief Method add_OnClientJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnClientJoined(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

/// @brief Method add_OnClientLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnClientLeft(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

/// @brief Convert to "::Dissonance::Networking::IClientCollection_1<TPeer>"
constexpr ::Dissonance::Networking::IClientCollection_1<TPeer>* i___Dissonance__Networking__IClientCollection_1_TPeer_() noexcept;

/// @brief Method remove_OnClientEnteredRoomEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnClientEnteredRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value) ;

/// @brief Method remove_OnClientExitedRoomEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnClientExitedRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value) ;

/// @brief Method remove_OnClientJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnClientJoined(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

/// @brief Method remove_OnClientLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnClientLeft(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseClientCollection_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseClientCollection_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseClientCollection_1(BaseClientCollection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseClientCollection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseClientCollection_1(BaseClientCollection_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16865};

/// @brief Field Log, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Log*  ___Log;

/// @brief Field PlayerIds, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::ClientIdCollection*  ___PlayerIds;

/// @brief Field ClientsInRooms, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::RoomClientsCollection_1<TPeer>*  ___ClientsInRooms;

/// @brief Field _clientsByPlayerId, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  ____clientsByPlayerId;

/// @brief Field _clientsByName, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  ____clientsByName;

/// @brief Field _tmpRoomList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____tmpRoomList;

/// @brief Field OnClientJoined, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  ___OnClientJoined;

/// @brief Field OnClientLeft, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  ___OnClientLeft;

/// @brief Field OnClientEnteredRoomEvent, offset: 0x50, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  ___OnClientEnteredRoomEvent;

/// @brief Field OnClientExitedRoomEvent, offset: 0x58, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  ___OnClientExitedRoomEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
