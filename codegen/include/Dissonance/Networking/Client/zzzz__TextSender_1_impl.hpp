#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/TextSender_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__TextSender_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISendQueue_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISession_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__IClientCollection_1_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession*& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__session()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession* const& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__session() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____session;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____session = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sender = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__peers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__peers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peers;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_set__peers(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peers = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__tmpDests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDests;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__tmpDests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDests;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_set__tmpDests(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpDests = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__tmpClients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpClients;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_get__tmpClients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpClients;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::TextSender_1<TPeer>::__cordl_internal_set__tmpClients(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpClients = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::TextSender_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::TextSender_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Client::TextSender_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::TextSender_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::TextSender_1<TPeer>::_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::TextSender_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), ::i2c::type_of<::Dissonance::Networking::Client::ISession*>(), ::i2c::type_of<::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, session, peers);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::TextSender_1<TPeer>::Send(::StringW  data, ::Dissonance::ChannelType  type, ::StringW  recipient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::TextSender_1<TPeer>*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, type, recipient);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::TextSender_1<TPeer>* Dissonance::Networking::Client::TextSender_1<TPeer>::New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::TextSender_1<TPeer>*>(sender, session, peers));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::TextSender_1<TPeer>::TextSender_1()   {
}
