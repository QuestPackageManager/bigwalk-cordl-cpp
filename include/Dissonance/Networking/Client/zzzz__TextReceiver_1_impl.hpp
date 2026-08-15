#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/TextReceiver_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__TextReceiver_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Networking/zzzz__IClientCollection_1_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__IRooms_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue*& Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::EventQueue* const& Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
template<typename TPeer>
constexpr ::Dissonance::IRooms*& Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TPeer>
constexpr ::Dissonance::IRooms* const& Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_set__rooms(::Dissonance::IRooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_get__peers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_get__peers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextReceiver_1<TPeer>::__cordl_internal_set__peers(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peers = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::TextReceiver_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::TextReceiver_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Client::TextReceiver_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::TextReceiver_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::TextReceiver_1<TPeer>::_ctor(::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::IRooms*  rooms, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::TextReceiver_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue*>(), ::i2c::type_of<::Dissonance::IRooms*>(), ::i2c::type_of<::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events, rooms, peers);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::TextReceiver_1<TPeer>::ProcessTextMessage(::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::TextReceiver_1<TPeer>*>(),
                        {"ProcessTextMessage", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TPeer>
inline ::StringW Dissonance::Networking::Client::TextReceiver_1<TPeer>::GetTxtMessageRecipient(::Dissonance::ChannelType  txtRecipientType, uint16_t  txtRecipient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::TextReceiver_1<TPeer>*>(),
                        {"GetTxtMessageRecipient", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, txtRecipientType, txtRecipient);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::TextReceiver_1<TPeer>* Dissonance::Networking::Client::TextReceiver_1<TPeer>::New_ctor(::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::IRooms*  rooms, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::TextReceiver_1<TPeer>*>(events, rooms, peers));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::TextReceiver_1<TPeer>::TextReceiver_1()   {
}
