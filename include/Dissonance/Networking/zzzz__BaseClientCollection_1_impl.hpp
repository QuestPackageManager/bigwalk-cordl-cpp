#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseClientCollection_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseClientCollection_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientIdCollection_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__IClientCollection_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/Networking/zzzz__RoomClientsCollection_1_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Log*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_Log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TPeer>
constexpr ::Dissonance::Log* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_Log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_Log(::Dissonance::Log*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Log = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::ClientIdCollection*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_PlayerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIds;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::ClientIdCollection* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_PlayerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIds;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_PlayerIds(::Dissonance::Networking::ClientIdCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerIds = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::RoomClientsCollection_1<TPeer>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_ClientsInRooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientsInRooms;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::RoomClientsCollection_1<TPeer>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_ClientsInRooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientsInRooms;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_ClientsInRooms(::Dissonance::Networking::RoomClientsCollection_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientsInRooms = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get__clientsByPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientsByPlayerId;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get__clientsByPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientsByPlayerId;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set__clientsByPlayerId(::System::Collections::Generic::Dictionary_2<uint16_t,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientsByPlayerId = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get__clientsByName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientsByName;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get__clientsByName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientsByName;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set__clientsByName(::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientsByName = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get__tmpRoomList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRoomList;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get__tmpRoomList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRoomList;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set__tmpRoomList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpRoomList = value;
}
template<typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientJoined;
}
template<typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientJoined;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_OnClientJoined(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientJoined = value;
}
template<typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientLeft;
}
template<typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientLeft;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_OnClientLeft(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientLeft = value;
}
template<typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientEnteredRoomEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientEnteredRoomEvent;
}
template<typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientEnteredRoomEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientEnteredRoomEvent;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_OnClientEnteredRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientEnteredRoomEvent = value;
}
template<typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientExitedRoomEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientExitedRoomEvent;
}
template<typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>* const& Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_get_OnClientExitedRoomEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientExitedRoomEvent;
}
template<typename TPeer>
constexpr void Dissonance::Networking::BaseClientCollection_1<TPeer>::__cordl_internal_set_OnClientExitedRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientExitedRoomEvent = value;
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::add_OnClientJoined(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"add_OnClientJoined", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::remove_OnClientJoined(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"remove_OnClientJoined", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::add_OnClientLeft(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"add_OnClientLeft", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::remove_OnClientLeft(::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"remove_OnClientLeft", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::add_OnClientEnteredRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"add_OnClientEnteredRoomEvent", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::remove_OnClientEnteredRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"remove_OnClientEnteredRoomEvent", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::add_OnClientExitedRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"add_OnClientExitedRoomEvent", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::remove_OnClientExitedRoomEvent(::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"remove_OnClientExitedRoomEvent", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::ClientInfo_1<TPeer>*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::OnAddedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::OnRemovedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline ::Dissonance::Networking::ClientInfo_1<TPeer>* Dissonance::Networking::BaseClientCollection_1<TPeer>::GetOrCreateClientInfo(uint16_t  id, ::StringW  name, ::Dissonance::CodecSettings  codecSettings, TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"GetOrCreateClientInfo", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ClientInfo_1<TPeer>*>(this, ___internal_method, id, name, codecSettings, connection);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::RemoveClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"RemoveClient", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline bool Dissonance::Networking::BaseClientCollection_1<TPeer>::TryGetClientInfoById(uint16_t  player, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"TryGetClientInfoById", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, info);
}
template<typename TPeer>
inline bool Dissonance::Networking::BaseClientCollection_1<TPeer>::TryGetClientInfoByName(::StringW  name, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"TryGetClientInfoByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, info);
}
template<typename TPeer>
inline bool Dissonance::Networking::BaseClientCollection_1<TPeer>::TryGetClientsInRoom(::StringW  room, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"TryGetClientsInRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, room, output);
}
template<typename TPeer>
inline bool Dissonance::Networking::BaseClientCollection_1<TPeer>::TryGetClientsInRoom(uint16_t  roomId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"TryGetClientsInRoom", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomId, output);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::GetClients(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"GetClients", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
template<typename TPeer>
inline bool Dissonance::Networking::BaseClientCollection_1<TPeer>::TryFindClientByConnection(TPeer  connection, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"TryFindClientByConnection", {}, {::i2c::type_of<TPeer>(), ::i2c::type_of<::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connection, info);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::ClearRooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"ClearRooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::OnClientEnteredRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  client, ::StringW  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, room);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::OnClientExitedRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  client, ::StringW  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, room);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::JoinRoom(::StringW  room, ::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, client);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::LeaveRoom(::StringW  room, ::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(),
                        {"LeaveRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, client);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::ProcessClientState(TPeer  source, ::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::BaseClientCollection_1<TPeer>::ProcessDeltaChannelState(::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TPeer>
inline ::Dissonance::Networking::BaseClientCollection_1<TPeer>* Dissonance::Networking::BaseClientCollection_1<TPeer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>());
}
/// @brief Convert operator to "::Dissonance::Networking::IClientCollection_1<TPeer>"
template<typename TPeer>
constexpr  Dissonance::Networking::BaseClientCollection_1<TPeer>::operator ::Dissonance::Networking::IClientCollection_1<TPeer>*() noexcept {
return static_cast<::Dissonance::Networking::IClientCollection_1<TPeer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::IClientCollection_1<TPeer>"
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<TPeer>* Dissonance::Networking::BaseClientCollection_1<TPeer>::i___Dissonance__Networking__IClientCollection_1_TPeer_() noexcept {
return static_cast<::Dissonance::Networking::IClientCollection_1<TPeer>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::BaseClientCollection_1<TPeer>::BaseClientCollection_1()   {
}
