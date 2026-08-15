#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/VoiceReceiver_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__VoiceReceiver_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISession_def.hpp"
#include "Dissonance/Networking/Client/zzzz__PeerVoiceReceiver_def.hpp"
#include "Dissonance/Networking/zzzz__IClientCollection_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession*& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession* const& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____session = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_set__clients(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clients = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue*& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue* const& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
template<typename TPeer>
constexpr ::Dissonance::Rooms*& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TPeer>
constexpr ::Dissonance::Rooms* const& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_set__rooms(::Dissonance::Rooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
template<typename TPeer>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__channelListPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelListPool;
}
template<typename TPeer>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__channelListPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelListPool;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_set__channelListPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelListPool = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>*& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__receivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivers;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>* const& Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_get__receivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivers;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::__cordl_internal_set__receivers(::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivers = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::setStaticF_ActiveTimeout(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "ActiveTimeout", ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(std::forward<::System::TimeSpan>(value));
}
template<typename TPeer>
inline ::System::TimeSpan Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::getStaticF_ActiveTimeout()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "ActiveTimeout", ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::setStaticF_InactiveTimeout(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "InactiveTimeout", ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(std::forward<::System::TimeSpan>(value));
}
template<typename TPeer>
inline ::System::TimeSpan Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::getStaticF_InactiveTimeout()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "InactiveTimeout", ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::_ctor(::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  clients, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  rooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::ISession*>(), ::i2c::type_of<::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*>(), ::i2c::type_of<::Dissonance::Networking::Client::EventQueue*>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session, clients, events, rooms, channelListPool);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::OnPlayerLeft(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::Update(::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(),
                        {"Update", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::CheckTimeouts(::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(),
                        {"CheckTimeouts", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::ReceiveVoiceData(::by_ref<::Dissonance::Networking::PacketReader>  reader, ::System::Nullable_1<::System::DateTime>  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(),
                        {"ReceiveVoiceData", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, utcNow);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>* Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::New_ctor(::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  clients, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  rooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*>(session, clients, events, rooms, channelListPool));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>::VoiceReceiver_1()   {
}
