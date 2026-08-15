#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseClient_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseClient_3_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ClientStatus_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ConnectionNegotiator_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__IClient_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__PacketDelaySimulator_def.hpp"
#include "Dissonance/Networking/Client/zzzz__SendQueue_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__SlaveClientCollection_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__TextReceiver_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__TextSender_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__VoiceReceiver_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__VoiceSender_1_def.hpp"
#include "Dissonance/Networking/zzzz__BaseClient_3_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetworkState_def.hpp"
#include "Dissonance/Networking/zzzz__MessageTypes_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/Networking/zzzz__TrafficCounter_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::setStaticF___9(::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*, "<>9", ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(std::forward<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>* Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*, "<>9", ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::setStaticF___9__62_0(::System::Func_1<::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ArrayW<uint8_t>>*, "<>9__62_0", ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(std::forward<::System::Func_1<::ArrayW<uint8_t>>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Func_1<::ArrayW<uint8_t>>* Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::getStaticF___9__62_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<uint8_t>>*, "<>9__62_0", ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::setStaticF___9__62_1(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*, "<>9__62_1", ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(std::forward<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::getStaticF___9__62_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*, "<>9__62_1", ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::ArrayW<uint8_t> Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::__ctor_b__62_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(),
                        {"<.ctor>b__62_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::__ctor_b__62_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>(),
                        {"<.ctor>b__62_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>* Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*>());
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>::BaseClient_3___c()   {
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Log*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get_Log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Log* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get_Log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set_Log(::Dissonance::Log*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Log = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__disconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disconnected;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__disconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disconnected;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__disconnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disconnected = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr bool const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__error(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__peers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__peers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__peers(::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peers = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__serverNegotiator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverNegotiator;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__serverNegotiator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverNegotiator;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__serverNegotiator(::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverNegotiator = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::SendQueue_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__sendQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendQueue;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::SendQueue_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__sendQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendQueue;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__sendQueue(::Dissonance::Networking::Client::SendQueue_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendQueue = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::PacketDelaySimulator*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__lossSimulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lossSimulator;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::PacketDelaySimulator* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__lossSimulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lossSimulator;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__lossSimulator(::Dissonance::Networking::Client::PacketDelaySimulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lossSimulator = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__voiceReceiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceReceiver;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__voiceReceiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceReceiver;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__voiceReceiver(::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceReceiver = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceSender_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__voiceSender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceSender;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceSender_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__voiceSender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceSender;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__voiceSender(::Dissonance::Networking::Client::VoiceSender_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceSender = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::TextReceiver_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__textReceiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textReceiver;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::TextReceiver_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__textReceiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textReceiver;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__textReceiver(::Dissonance::Networking::Client::TextReceiver_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textReceiver = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::TextSender_1<TPeer>*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__textSender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textSender;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::TextSender_1<TPeer>* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__textSender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textSender;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__textSender(::Dissonance::Networking::Client::TextSender_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textSender = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvRemoveClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvRemoveClient;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvRemoveClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvRemoveClient;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvRemoveClient(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvRemoveClient = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvVoiceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvVoiceData;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvVoiceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvVoiceData;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvVoiceData(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvVoiceData = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvTextData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvTextData;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvTextData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvTextData;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvTextData(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvTextData = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvHandshakeResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvHandshakeResponse;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvHandshakeResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvHandshakeResponse;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvHandshakeResponse(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvHandshakeResponse = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvHandshakeP2P()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvHandshakeP2P;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvHandshakeP2P() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvHandshakeP2P;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvHandshakeP2P(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvHandshakeP2P = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvClientState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvClientState;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvClientState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvClientState;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvClientState(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvClientState = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvDeltaState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvDeltaState;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__recvDeltaState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recvDeltaState;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__recvDeltaState(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recvDeltaState = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter*& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__sentServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sentServer;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::TrafficCounter* const& Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_get__sentServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sentServer;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::__cordl_internal_set__sentServer(::Dissonance::Networking::TrafficCounter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sentServer = value;
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_PlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_PlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_TextMessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_TextMessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"add_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"remove_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvRemoveClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvRemoveClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvVoiceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvVoiceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvTextData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvTextData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvHandshakeResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvHandshakeResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvHandshakeP2P()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvHandshakeP2P", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvClientState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvClientState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_RecvDeltaState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_RecvDeltaState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::get_SentServerTraffic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"get_SentServerTraffic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TrafficCounter*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::_ctor(::Dissonance::Networking::ICommsNetworkState*  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::ICommsNetworkState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, network);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::FatalError(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"FatalError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Client::ClientStatus Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::ClientStatus>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::RunUpdate(::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"RunUpdate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, utcNow);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::SendVoiceData(::System::ArraySegment_1<uint8_t>  encodedAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"SendVoiceData", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedAudio);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::SendTextData(::StringW  data, ::Dissonance::ChannelType  type, ::StringW  recipient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"SendTextData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, type, recipient);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Nullable_1<uint16_t> Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::NetworkReceivedPacket(::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"NetworkReceivedPacket", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method, data);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Nullable_1<uint16_t> Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::ProcessReceivedPacket(::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"ProcessReceivedPacket", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method, data);
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::CheckSessionId(::by_ref<::Dissonance::Networking::PacketReader>  reader, ::Dissonance::Networking::MessageTypes  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"CheckSessionId", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<::Dissonance::Networking::MessageTypes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, type);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::ReadMessages()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::SendReliable(::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::SendUnreliable(::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::SendReliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinations, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::SendUnreliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinations, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::OnServerAssignedSessionId(uint32_t  session, uint16_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session, id);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::OnAddedClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::OnMetClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::ReceiveHandshakeP2P(uint16_t  id, TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"ReceiveHandshakeP2P", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, connection);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::ArrayW<uint8_t> Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::WriteHandshakeP2P(uint32_t  sessionId, uint16_t  clientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"WriteHandshakeP2P", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, sessionId, clientId);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Dissonance_Networking_Client_IClient_TPeer__SendReliable(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Client.IClient<TPeer>.SendReliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Dissonance_Networking_Client_IClient_TPeer__SendUnreliable(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Client.IClient<TPeer>.SendUnreliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Dissonance_Networking_Client_IClient_TPeer__SendReliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Client.IClient<TPeer>.SendReliableP2P", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinations, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::Dissonance_Networking_Client_IClient_TPeer__SendUnreliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(),
                        {"Dissonance.Networking.Client.IClient<TPeer>.SendUnreliableP2P", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinations, packet);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::New_ctor(::Dissonance::Networking::ICommsNetworkState*  network)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>*>(network));
}
/// @brief Convert operator to "::Dissonance::Networking::Client::IClient_1<TPeer>"
template<typename TServer,typename TClient,typename TPeer>
constexpr  Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::operator ::Dissonance::Networking::Client::IClient_1<TPeer>*() noexcept {
return static_cast<::Dissonance::Networking::Client::IClient_1<TPeer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Client::IClient_1<TPeer>"
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::IClient_1<TPeer>* Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::i___Dissonance__Networking__Client__IClient_1_TPeer_() noexcept {
return static_cast<::Dissonance::Networking::Client::IClient_1<TPeer>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>::BaseClient_3()   {
}
