#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/BroadcastingClientCollection_1.hpp"
#include "Dissonance/Networking/zzzz__BaseClientCollection_1_impl.hpp"
#include "Dissonance/Networking/Server/zzzz__BroadcastingClientCollection_1_def.hpp"
#include "Dissonance/Networking/Server/zzzz__IServer_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>*& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>* const& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_set__server(::Dissonance::Networking::Server::IServer_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server = value;
}
template<typename TPeer>
constexpr ::ArrayW<uint8_t>& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpSendBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSendBuffer;
}
template<typename TPeer>
constexpr ::ArrayW<uint8_t> const& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpSendBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSendBuffer;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_set__tmpSendBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSendBuffer = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<TPeer>*& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpConnectionBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpConnectionBuffer;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<TPeer>* const& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpConnectionBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpConnectionBuffer;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_set__tmpConnectionBuffer(::System::Collections::Generic::List_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpConnectionBuffer = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpClientBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpClientBuffer;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpClientBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpClientBuffer;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_set__tmpClientBuffer(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpClientBuffer = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpClientBufferHandshake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpClientBufferHandshake;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_get__tmpClientBufferHandshake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpClientBufferHandshake;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::__cordl_internal_set__tmpClientBufferHandshake(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpClientBufferHandshake = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::_ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, server);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::OnRemovedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::OnAddedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::ProcessHandshakeRequest(TPeer  source, ::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(),
                        {"ProcessHandshakeRequest", {}, {::i2c::type_of<TPeer>(), ::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::SendFakeClientState(TPeer  destination, ::Dissonance::Networking::ClientInfo_1<TPeer>*  clientInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(),
                        {"SendFakeClientState", {}, {::i2c::type_of<TPeer>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, clientInfo);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::ProcessClientState(TPeer  source, ::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::ProcessDeltaChannelState(::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::Broadcast(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(),
                        {"Broadcast", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::RemoveClient(TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(),
                        {"RemoveClient", {}, {::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
template<typename TPeer>
inline ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>* Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::New_ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*>(server));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>::BroadcastingClientCollection_1()   {
}
