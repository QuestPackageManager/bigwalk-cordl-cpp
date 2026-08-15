#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/ServerClientState_3.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__ServerClientState_3_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__IVoiceEventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__PeerVoiceReceiver_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__IServerClientState_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__ServerClientState_3_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::setStaticF___9(::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*, "<>9", ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>(std::forward<::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*, "<>9", ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::setStaticF___9__2_0(::System::Func_1<::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ArrayW<uint8_t>>*, "<>9__2_0", ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>(std::forward<::System::Func_1<::ArrayW<uint8_t>>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Func_1<::ArrayW<uint8_t>>* Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<uint8_t>>*, "<>9__2_0", ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::ArrayW<uint8_t> Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::__ctor_b__2_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>(),
                        {"<.ctor>b__2_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*>());
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>::VoiceEventHandler_ServerClientState_3___c()   {
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*& Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* const& Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::__cordl_internal_set__parent(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*& Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::__cordl_internal_get__bytesPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPool;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* const& Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::__cordl_internal_get__bytesPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPool;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::__cordl_internal_set__bytesPool(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesPool = value;
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::_ctor(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::EnqueueStoppedSpeaking(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>*>(),
                        {"EnqueueStoppedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::EnqueueStartedSpeaking(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>*>(),
                        {"EnqueueStartedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::EnqueueVoiceData(::Dissonance::Networking::VoicePacket  voicePacket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>*>(),
                        {"EnqueueVoiceData", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voicePacket);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::ArrayW<uint8_t> Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::GetEventBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>*>(),
                        {"GetEventBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::New_ctor(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>*>(parent));
}
/// @brief Convert operator to "::Dissonance::Networking::Client::IVoiceEventQueue"
template<typename TServer,typename TClient,typename TPeer>
constexpr  Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::operator ::Dissonance::Networking::Client::IVoiceEventQueue*() noexcept {
return static_cast<::Dissonance::Networking::Client::IVoiceEventQueue*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Client::IVoiceEventQueue"
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::IVoiceEventQueue* Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::i___Dissonance__Networking__Client__IVoiceEventQueue() noexcept {
return static_cast<::Dissonance::Networking::Client::IVoiceEventQueue*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>::ServerClientState_3_VoiceEventHandler()   {
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::setStaticF___9(::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*, "<>9", ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>(std::forward<::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*, "<>9", ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::setStaticF___9__37_0(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*, "<>9__37_0", ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>(std::forward<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*, "<>9__37_0", ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::__ctor_b__37_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>(),
                        {"<.ctor>b__37_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*>());
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>::ServerClientState_3___c()   {
}
template<typename TServer,typename TClient,typename TPeer>
constexpr TServer& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr TServer const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__server(TServer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::ClientInfo_1<TPeer>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__Peer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Peer_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::ClientInfo_1<TPeer>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__Peer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Peer_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__Peer_k__BackingField(::Dissonance::Networking::ClientInfo_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Peer_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_OnStartedListeningToRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartedListeningToRoom;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_OnStartedListeningToRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartedListeningToRoom;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartedListeningToRoom = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_OnStoppedListeningToRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStoppedListeningToRoom;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_OnStoppedListeningToRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStoppedListeningToRoom;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStoppedListeningToRoom = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_StartedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_StartedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set_StartedSpeaking(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartedSpeaking = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_StoppedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoppedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_StoppedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoppedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set_StoppedSpeaking(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StoppedSpeaking = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_OnVoicePacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoicePacket;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get_OnVoicePacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoicePacket;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnVoicePacket = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__voiceReceiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceReceiver;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__voiceReceiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceReceiver;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__voiceReceiver(::Dissonance::Networking::Client::PeerVoiceReceiver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceReceiver = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__rooms(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__Rooms_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__Rooms_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__Rooms_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rooms_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__channels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__Channels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channels_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__Channels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channels_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__Channels_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Channels_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::DateTime& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__LastChannelUpdateUtc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastChannelUpdateUtc_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr ::System::DateTime const& Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_get__LastChannelUpdateUtc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastChannelUpdateUtc_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer>
constexpr void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::__cordl_internal_set__LastChannelUpdateUtc_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastChannelUpdateUtc_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>();
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::ClientInfo_1<TPeer>* Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::get_Peer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"get_Peer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ClientInfo_1<TPeer>*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::StringW Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline bool Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::add_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"add_OnStartedListeningToRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::remove_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"remove_OnStartedListeningToRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::add_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"add_OnStoppedListeningToRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::remove_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"remove_OnStoppedListeningToRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::add_StartedSpeaking(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"add_StartedSpeaking", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::remove_StartedSpeaking(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"remove_StartedSpeaking", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::add_StoppedSpeaking(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"add_StoppedSpeaking", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::remove_StoppedSpeaking(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"remove_StoppedSpeaking", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::add_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"add_OnVoicePacket", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::remove_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"remove_OnVoicePacket", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::get_Rooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"get_Rooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::System::DateTime Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::get_LastChannelUpdateUtc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"get_LastChannelUpdateUtc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::set_LastChannelUpdateUtc(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"set_LastChannelUpdateUtc", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::_ctor(TServer  server, ::Dissonance::Networking::ClientInfo_1<TPeer>*  peer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<TServer>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, server, peer);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::RemoveFromRoom(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"RemoveFromRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomName);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::InvokeOnEnteredRoom(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnEnteredRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::InvokeOnExitedRoom(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnExitedRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::UpdateChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"UpdateChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channels);
}
template<typename TServer,typename TClient,typename TPeer>
inline void Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::InvokeOnVoicePacket(::Dissonance::Networking::PacketReader  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(),
                        {"InvokeOnVoicePacket", {}, {::i2c::type_of<::Dissonance::Networking::PacketReader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TServer,typename TClient,typename TPeer>
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::New_ctor(TServer  server, ::Dissonance::Networking::ClientInfo_1<TPeer>*  peer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*>(server, peer));
}
/// @brief Convert operator to "::Dissonance::Networking::Server::Admin::IServerClientState"
template<typename TServer,typename TClient,typename TPeer>
constexpr  Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::operator ::Dissonance::Networking::Server::Admin::IServerClientState*() noexcept {
return static_cast<::Dissonance::Networking::Server::Admin::IServerClientState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Server::Admin::IServerClientState"
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::IServerClientState* Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::i___Dissonance__Networking__Server__Admin__IServerClientState() noexcept {
return static_cast<::Dissonance::Networking::Server::Admin::IServerClientState*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer>
constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>::ServerClientState_3()   {
}
