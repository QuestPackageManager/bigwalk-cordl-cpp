#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/SlaveClientCollection_1.hpp"
#include "Dissonance/Networking/zzzz__BaseClientCollection_1_impl.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__SlaveClientCollection_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISendQueue_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISession_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sender = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession*& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession* const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____session = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue*& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue* const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
template<typename TPeer>
constexpr ::Dissonance::Rooms*& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__localRooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRooms;
}
template<typename TPeer>
constexpr ::Dissonance::Rooms* const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__localRooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRooms;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__localRooms(::Dissonance::Rooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localRooms = value;
}
template<typename TPeer>
constexpr ::StringW& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
template<typename TPeer>
constexpr ::StringW const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerName = value;
}
template<typename TPeer>
constexpr ::Dissonance::CodecSettings& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__codecSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettings;
}
template<typename TPeer>
constexpr ::Dissonance::CodecSettings const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__codecSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettings;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__codecSettings(::Dissonance::CodecSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codecSettings = value;
}
template<typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get_OnClientIntroducedP2P()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientIntroducedP2P;
}
template<typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get_OnClientIntroducedP2P() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientIntroducedP2P;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set_OnClientIntroducedP2P(::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientIntroducedP2P = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>*& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__pendingIntroductions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingIntroductions;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>* const& Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_get__pendingIntroductions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingIntroductions;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::__cordl_internal_set__pendingIntroductions(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,TPeer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingIntroductions = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::add_OnClientIntroducedP2P(::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"add_OnClientIntroducedP2P", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::remove_OnClientIntroducedP2P(::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"remove_OnClientIntroducedP2P", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  localRooms, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), ::i2c::type_of<::Dissonance::Networking::Client::ISession*>(), ::i2c::type_of<::Dissonance::Networking::Client::EventQueue*>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, session, events, localRooms, playerName, codecSettings);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::OnAddedClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::OnRemovedClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::OnClientEnteredRoom(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client, ::StringW  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, room);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::OnClientExitedRoom(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client, ::StringW  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, room);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::ProcessRemoveClient(::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"ProcessRemoveClient", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::ReceiveHandshakeResponseBody(::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"ReceiveHandshakeResponseBody", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::SendClientState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"SendClientState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::SendLeaveRoom(::StringW  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"SendLeaveRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::SendJoinRoom(::StringW  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"SendJoinRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::IntroduceP2P(uint16_t  id, TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"IntroduceP2P", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, connection);
}
template<typename TPeer>
inline bool Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::TryIntroduceP2P(uint16_t  id, TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(),
                        {"TryIntroduceP2P", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, connection);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>* Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  localRooms, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*>(sender, session, events, localRooms, playerName, codecSettings));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>::SlaveClientCollection_1()   {
}
