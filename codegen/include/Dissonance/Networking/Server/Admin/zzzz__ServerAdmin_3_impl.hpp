#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/ServerAdmin_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__ServerAdmin_3_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__IServerAdmin_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__IServerClientState_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__ServerClientState_3_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename TServer,typename TClient,typename TPeer>
constexpr TServer& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr TServer const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set__server(TServer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__knownRoomNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____knownRoomNames;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__knownRoomNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____knownRoomNames;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set__knownRoomNames(::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____knownRoomNames = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get_ClientJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientJoined;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get_ClientJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientJoined;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientJoined = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get_ClientLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientLeft;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get_ClientLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientLeft;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientLeft = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get_VoicePacketSpoofed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePacketSpoofed;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get_VoicePacketSpoofed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePacketSpoofed;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoicePacketSpoofed = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set__clients(::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clients = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__Clients_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clients_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__Clients_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clients_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set__Clients_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clients_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__channelsTmp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelsTmp;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__channelsTmp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelsTmp;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set__channelsTmp(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelsTmp = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__EnableChannelMonitoring_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableChannelMonitoring_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool const& Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_get__EnableChannelMonitoring_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableChannelMonitoring_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::__cordl_internal_set__EnableChannelMonitoring_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableChannelMonitoring_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::add_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"add_ClientJoined", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::remove_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"remove_ClientJoined", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::add_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"add_ClientLeft", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::remove_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"remove_ClientLeft", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::add_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"add_VoicePacketSpoofed", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::remove_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"remove_VoicePacketSpoofed", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::get_Clients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"get_Clients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::get_EnableChannelMonitoring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"get_EnableChannelMonitoring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::set_EnableChannelMonitoring(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"set_EnableChannelMonitoring", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::_ctor(TServer  server)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<TServer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, server);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::FindPlayer(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"FindPlayer", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(this, ___internal_method, peer);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::FindPlayer(uint16_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"FindPlayer", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(this, ___internal_method, id);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::FindPlayer(TPeer  peer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"FindPlayer", {}, {::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(this, ___internal_method, peer);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::InvokeOnClientEnteredRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnClientEnteredRoom", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, name);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::InvokeOnClientExitedRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnClientExitedRoom", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, name);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::InvokeOnClientJoined(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnClientJoined", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::InvokeOnClientLeft(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnClientLeft", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::InvokeOnRelayingPacket(::System::ArraySegment_1<uint8_t>  payload, TPeer  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnRelayingPacket", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payload, source);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::ReadChannels(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  clientState, ::Dissonance::Networking::PacketReader  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"ReadChannels", {}, {::i2c::type_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(), ::i2c::type_of<::Dissonance::Networking::PacketReader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientState, reader);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::InvokeOnVoicePacketSpoof(::Dissonance::Networking::Server::Admin::IServerClientState*  spoofer, ::Dissonance::Networking::Server::Admin::IServerClientState*  spoofee)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnVoicePacketSpoof", {}, {::i2c::type_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), ::i2c::type_of<::Dissonance::Networking::Server::Admin::IServerClientState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spoofer, spoofee);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::New_ctor(TServer  server)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*>(server));
}
/// @brief Convert operator to "::Dissonance::Networking::Server::Admin::IServerAdmin"
template<typename TServer,typename TClient,typename TPeer>
constexpr  Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::operator ::Dissonance::Networking::Server::Admin::IServerAdmin*() noexcept {
return static_cast<::Dissonance::Networking::Server::Admin::IServerAdmin*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Server::Admin::IServerAdmin"
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::IServerAdmin* Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::i___Dissonance__Networking__Server__Admin__IServerAdmin() noexcept {
return static_cast<::Dissonance::Networking::Server::Admin::IServerAdmin*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>::ServerAdmin_3()   {
}
