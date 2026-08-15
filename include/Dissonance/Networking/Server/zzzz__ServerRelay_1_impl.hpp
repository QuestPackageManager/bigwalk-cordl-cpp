#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/ServerRelay_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Server/zzzz__ServerRelay_1_def.hpp"
#include "Dissonance/Networking/Server/zzzz__IServer_1_def.hpp"
#include "Dissonance/Networking/zzzz__BaseClientCollection_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>*& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>* const& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_set__server(::Dissonance::Networking::Server::IServer_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::BaseClientCollection_1<TPeer>*& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__peers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::BaseClientCollection_1<TPeer>* const& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__peers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_set__peers(::Dissonance::Networking::BaseClientCollection_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peers = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<TPeer>*& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__tmpPeerBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpPeerBuffer;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<TPeer>* const& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__tmpPeerBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpPeerBuffer;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_set__tmpPeerBuffer(::System::Collections::Generic::List_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpPeerBuffer = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<uint16_t>*& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__tmpIdBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpIdBuffer;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<uint16_t>* const& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get__tmpIdBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpIdBuffer;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_set__tmpIdBuffer(::System::Collections::Generic::List_1<uint16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpIdBuffer = value;
}
template<typename TPeer>
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get_OnRelayingPacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRelayingPacket;
}
template<typename TPeer>
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>* const& Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_get_OnRelayingPacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRelayingPacket;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Server::ServerRelay_1<TPeer>::__cordl_internal_set_OnRelayingPacket(::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRelayingPacket = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Server::ServerRelay_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Server::ServerRelay_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Server::ServerRelay_1<TPeer>::add_OnRelayingPacket(::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>(),
                        {"add_OnRelayingPacket", {}, {::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::ServerRelay_1<TPeer>::remove_OnRelayingPacket(::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>(),
                        {"remove_OnRelayingPacket", {}, {::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::ServerRelay_1<TPeer>::_ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server, ::Dissonance::Networking::BaseClientCollection_1<TPeer>*  peers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>(), ::i2c::type_of<::Dissonance::Networking::BaseClientCollection_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, server, peers);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::ServerRelay_1<TPeer>::ProcessPacketRelay(::by_ref<::Dissonance::Networking::PacketReader>  reader, bool  reliable, TPeer  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>(),
                        {"ProcessPacketRelay", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<bool>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, reliable, source);
}
template<typename TPeer>
inline ::Dissonance::Networking::Server::ServerRelay_1<TPeer>* Dissonance::Networking::Server::ServerRelay_1<TPeer>::New_ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server, ::Dissonance::Networking::BaseClientCollection_1<TPeer>*  peers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::ServerRelay_1<TPeer>*>(server, peers));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Server::ServerRelay_1<TPeer>::ServerRelay_1()   {
}
