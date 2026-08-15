#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseServer_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseServer_3_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__IServerAdmin_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__ServerAdmin_3_def.hpp"
#include "Dissonance/Networking/Server/zzzz__BroadcastingClientCollection_1_def.hpp"
#include "Dissonance/Networking/Server/zzzz__IServer_1_def.hpp"
#include "Dissonance/Networking/Server/zzzz__ServerRelay_1_def.hpp"
#include "Dissonance/Networking/Server/zzzz__ServerState_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/Networking/zzzz__TrafficCounter_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Log*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get_Log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Log* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get_Log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set_Log(::Dissonance::Log*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Log = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__disconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disconnected;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__disconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disconnected;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__disconnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disconnected = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__error(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvHandshakeRequest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvHandshakeRequest_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvHandshakeRequest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvHandshakeRequest_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__RecvHandshakeRequest_k__BackingField(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecvHandshakeRequest_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvClientState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvClientState_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvClientState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvClientState_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__RecvClientState_k__BackingField(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecvClientState_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvPacketRelay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvPacketRelay_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvPacketRelay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvPacketRelay_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__RecvPacketRelay_k__BackingField(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecvPacketRelay_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvDeltaChannelState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvDeltaChannelState_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__RecvDeltaChannelState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecvDeltaChannelState_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__RecvDeltaChannelState_k__BackingField(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecvDeltaChannelState_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__SentTraffic_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SentTraffic_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__SentTraffic_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SentTraffic_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__SentTraffic_k__BackingField(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SentTraffic_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::ServerRelay_1<TPeer>*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__relay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relay;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::ServerRelay_1<TPeer>* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__relay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relay;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__relay(::Dissonance::Networking::Server::ServerRelay_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relay = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__clients(::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clients = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr uint32_t& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr uint32_t const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set__SessionId_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get_serverAdmin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverAdmin;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>* const& Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_get_serverAdmin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverAdmin;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::__cordl_internal_set_serverAdmin(::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverAdmin = value;
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_RecvHandshakeRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvHandshakeRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_RecvClientState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvClientState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_RecvPacketRelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvPacketRelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_RecvDeltaChannelState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvDeltaChannelState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_SentTraffic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_SentTraffic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline uint32_t Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::IServerAdmin* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::get_ServerAdmin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"get_ServerAdmin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::Admin::IServerAdmin*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::FatalError(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"FatalError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::ClientDisconnected(TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"ClientDisconnected", {}, {::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::ServerState Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::ServerState>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::RunUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"RunUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::SendReliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::SendUnreliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::SendUnreliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::SendReliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Dissonance_Networking_Server_IServer_TPeer__SendReliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Server.IServer<TPeer>.SendReliable", {}, {::i2c::type_of<TPeer>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Dissonance_Networking_Server_IServer_TPeer__SendUnreliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Server.IServer<TPeer>.SendUnreliable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<TPeer>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Dissonance_Networking_Server_IServer_TPeer__SendReliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Server.IServer<TPeer>.SendReliable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<TPeer>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::ReadMessages()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::NetworkReceivedPacket(TPeer  source, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"NetworkReceivedPacket", {}, {::i2c::type_of<TPeer>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, data);
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::CheckSessionId(::by_ref<::Dissonance::Networking::PacketReader>  reader, TPeer  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"CheckSessionId", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, source);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::AddClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::Dissonance_Networking_Server_IServer_TPeer__AddClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Server.IServer<TPeer>.AddClient", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>*>());
}
/// @brief Convert operator to "::Dissonance::Networking::Server::IServer_1<TPeer>"
template<typename TServer,typename TClient,typename TPeer>
constexpr  Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::operator ::Dissonance::Networking::Server::IServer_1<TPeer>*() noexcept {
return static_cast<::Dissonance::Networking::Server::IServer_1<TPeer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Server::IServer_1<TPeer>"
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>* Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::i___Dissonance__Networking__Server__IServer_1_TPeer_() noexcept {
return static_cast<::Dissonance::Networking::Server::IServer_1<TPeer>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>::BaseServer_3()   {
}
