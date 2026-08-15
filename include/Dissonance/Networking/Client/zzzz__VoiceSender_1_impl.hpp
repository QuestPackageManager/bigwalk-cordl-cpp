#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/VoiceSender_1.hpp"
#include "Dissonance/zzzz__ChannelType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__VoiceSender_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISendQueue_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISession_def.hpp"
#include "Dissonance/Networking/Client/zzzz__OpenChannel_def.hpp"
#include "Dissonance/Networking/Client/zzzz__VoiceSender_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__IClientCollection_1_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>::_ctor(bool  open, ::Dissonance::ChannelType  type, ::Dissonance::ChannelProperties*  properties, uint16_t  recipientId, ::StringW  recipientName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::Dissonance::ChannelProperties*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, open, type, properties, recipientId, recipientName);
}
// Ctor Parameters [CppParam { name: "Open", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::Dissonance::ChannelType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Properties", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RecipientId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RecipientName", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>::VoiceSender_1_ChannelDelta(bool  Open, ::Dissonance::ChannelType  Type, ::Dissonance::ChannelProperties*  Properties, uint16_t  RecipientId, ::StringW  RecipientName) noexcept  {
this->Open = Open;
this->Type = Type;
this->Properties = Properties;
this->RecipientId = RecipientId;
this->RecipientName = RecipientName;
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>::VoiceSender_1_ChannelDelta()   {
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sender = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____session = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__peers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__peers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__peers(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peers = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
template<typename TPeer>
constexpr ::Dissonance::PlayerChannels*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__playerChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
template<typename TPeer>
constexpr ::Dissonance::PlayerChannels* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__playerChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerChannels = value;
}
template<typename TPeer>
constexpr ::Dissonance::RoomChannels*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__roomChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
template<typename TPeer>
constexpr ::Dissonance::RoomChannels* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__roomChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomChannels = value;
}
template<typename TPeer>
constexpr uint8_t& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__channelSessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelSessionId;
}
template<typename TPeer>
constexpr uint8_t const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__channelSessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelSessionId;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__channelSessionId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelSessionId = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__openChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openChannels;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__openChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openChannels;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__openChannels(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openChannels = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__deltas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltas;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__deltas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltas;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__deltas(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltas = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__pendingPlayerChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingPlayerChannels;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__pendingPlayerChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingPlayerChannels;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__pendingPlayerChannels(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingPlayerChannels = value;
}
template<typename TPeer>
constexpr uint16_t& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__sequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sequenceNumber;
}
template<typename TPeer>
constexpr uint16_t const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__sequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sequenceNumber;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__sequenceNumber(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sequenceNumber = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__tmpDestsSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDestsSet;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__tmpDestsSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDestsSet;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__tmpDestsSet(::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpDestsSet = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__tmpDestsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDestsList;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__tmpDestsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDestsList;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__tmpDestsList(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpDestsList = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__tmpRoomClientsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRoomClientsList;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__tmpRoomClientsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRoomClientsList;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__tmpRoomClientsList(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpRoomClientsList = value;
}
template<typename TPeer>
constexpr bool& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__hadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hadId;
}
template<typename TPeer>
constexpr bool const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__hadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hadId;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__hadId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hadId = value;
}
template<typename TPeer>
constexpr int32_t& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__noIdSendCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noIdSendCount;
}
template<typename TPeer>
constexpr int32_t const& Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_get__noIdSendCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noIdSendCount;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::VoiceSender_1<TPeer>::__cordl_internal_set__noIdSendCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noIdSendCount = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Client::VoiceSender_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), ::i2c::type_of<::Dissonance::Networking::Client::ISession*>(), ::i2c::type_of<::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*>(), ::i2c::type_of<::Dissonance::Networking::Client::EventQueue*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::RoomChannels*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, session, peers, events, playerChannels, roomChannels);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::OnPlayerJoined(::StringW  name, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, codecSettings);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::OnPlayerLeft(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::OpenPlayerChannel(::StringW  player, ::Dissonance::ChannelProperties*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"OpenPlayerChannel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, config);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::ClosePlayerChannel(::StringW  player, ::Dissonance::ChannelProperties*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"ClosePlayerChannel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, config);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::OpenRoomChannel(::Dissonance::RoomName  room, ::Dissonance::ChannelProperties*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"OpenRoomChannel", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, config);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::CloseRoomChannel(::Dissonance::RoomName  room, ::Dissonance::ChannelProperties*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"CloseRoomChannel", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, config);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::OpenChannel(::Dissonance::ChannelType  type, ::Dissonance::ChannelProperties*  config, uint16_t  recipient, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"OpenChannel", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::Dissonance::ChannelProperties*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, config, recipient, name);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::CloseChannel(::Dissonance::ChannelType  type, ::Dissonance::ChannelProperties*  properties, uint16_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"CloseChannel", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::Dissonance::ChannelProperties*>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, properties, id);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::ClearClosedChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"ClearClosedChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::Send(::System::ArraySegment_1<uint8_t>  encodedAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedAudio);
}
template<typename TPeer>
inline ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* Dissonance::Networking::Client::VoiceSender_1<TPeer>::GetVoiceDestinations(::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*  openChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"GetVoiceDestinations", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(this, ___internal_method, openChannels);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::ApplyChannelDeltas(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  openChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"ApplyChannelDeltas", {}, {::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openChannels);
}
template<typename TPeer>
inline bool Dissonance::Networking::Client::VoiceSender_1<TPeer>::AreAllChannelsClosing(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  openChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"AreAllChannelsClosing", {}, {::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, openChannels);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::VoiceSender_1<TPeer>::ApplyChannelDelta(::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>  d, ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  openChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(),
                        {"ApplyChannelDelta", {}, {::i2c::type_of<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>(), ::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, openChannels);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::VoiceSender_1<TPeer>* Dissonance::Networking::Client::VoiceSender_1<TPeer>::New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::VoiceSender_1<TPeer>*>(sender, session, peers, events, playerChannels, roomChannels));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::VoiceSender_1<TPeer>::VoiceSender_1()   {
}
