#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ConnectionNegotiator_1.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__ConnectionNegotiator_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ConnectionState_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISendQueue_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISession_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sender;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sender = value;
}
template<typename TPeer>
constexpr ::StringW& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
template<typename TPeer>
constexpr ::StringW const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerName;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerName = value;
}
template<typename TPeer>
constexpr ::Dissonance::CodecSettings& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__codecSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettings;
}
template<typename TPeer>
constexpr ::Dissonance::CodecSettings const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__codecSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettings;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__codecSettings(::Dissonance::CodecSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codecSettings = value;
}
template<typename TPeer>
constexpr ::System::DateTime& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__lastHandshakeRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHandshakeRequest;
}
template<typename TPeer>
constexpr ::System::DateTime const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__lastHandshakeRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHandshakeRequest;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__lastHandshakeRequest(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHandshakeRequest = value;
}
template<typename TPeer>
constexpr bool& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__running()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____running;
}
template<typename TPeer>
constexpr bool const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__running() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____running;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__running(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____running = value;
}
template<typename TPeer>
constexpr int32_t& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__connectionStateValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionStateValue;
}
template<typename TPeer>
constexpr int32_t const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__connectionStateValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionStateValue;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__connectionStateValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionStateValue = value;
}
template<typename TPeer>
constexpr uint32_t& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
template<typename TPeer>
constexpr uint32_t const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__SessionId_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
template<typename TPeer>
constexpr ::System::Nullable_1<uint16_t>& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__LocalId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalId_k__BackingField;
}
template<typename TPeer>
constexpr ::System::Nullable_1<uint16_t> const& Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_get__LocalId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalId_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::__cordl_internal_set__LocalId_k__BackingField(::System::Nullable_1<uint16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalId_k__BackingField = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::setStaticF_HandshakeRequestInterval(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "HandshakeRequestInterval", ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(std::forward<::System::TimeSpan>(value));
}
template<typename TPeer>
inline ::System::TimeSpan Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::getStaticF_HandshakeRequestInterval()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "HandshakeRequestInterval", ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>();
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::ConnectionState Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::ConnectionState>(this, ___internal_method);
}
template<typename TPeer>
inline uint32_t Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::set_SessionId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"set_SessionId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline ::System::Nullable_1<uint16_t> Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::get_LocalId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"get_LocalId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::set_LocalId(::System::Nullable_1<uint16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"set_LocalId", {}, {::i2c::type_of<::System::Nullable_1<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline ::StringW Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::get_LocalName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"get_LocalName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, playerName, codecSettings);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::ReceiveHandshakeResponseHeader(::by_ref<::Dissonance::Networking::PacketReader>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"ReceiveHandshakeResponseHeader", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::Update(::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"Update", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::SendHandshake(::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(),
                        {"SendHandshake", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>* Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::StringW  playerName, ::Dissonance::CodecSettings  codecSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*>(sender, playerName, codecSettings));
}
/// @brief Convert operator to "::Dissonance::Networking::Client::ISession"
template<typename TPeer>
constexpr  Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::operator ::Dissonance::Networking::Client::ISession*() noexcept {
return static_cast<::Dissonance::Networking::Client::ISession*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Client::ISession"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISession* Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::i___Dissonance__Networking__Client__ISession() noexcept {
return static_cast<::Dissonance::Networking::Client::ISession*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>::ConnectionNegotiator_1()   {
}
