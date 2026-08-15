#pragma once
// IWYU pragma private; include "Dissonance/Networking/ClientInfo_1.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__PeerVoiceReceiver_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__rooms(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
template<typename TPeer>
constexpr ::StringW& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__PlayerName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerName_k__BackingField;
}
template<typename TPeer>
constexpr ::StringW const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__PlayerName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerName_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__PlayerName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerName_k__BackingField = value;
}
template<typename TPeer>
constexpr uint16_t& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__PlayerId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerId_k__BackingField;
}
template<typename TPeer>
constexpr uint16_t const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__PlayerId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerId_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__PlayerId_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerId_k__BackingField = value;
}
template<typename TPeer>
constexpr ::Dissonance::CodecSettings& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__CodecSettings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecSettings_k__BackingField;
}
template<typename TPeer>
constexpr ::Dissonance::CodecSettings const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__CodecSettings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecSettings_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__CodecSettings_k__BackingField(::Dissonance::CodecSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CodecSettings_k__BackingField = value;
}
template<typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__Rooms_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
template<typename TPeer>
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__Rooms_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__Rooms_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rooms_k__BackingField = value;
}
template<typename TPeer>
constexpr TPeer& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__Connection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connection_k__BackingField;
}
template<typename TPeer>
constexpr TPeer const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__Connection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connection_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__Connection_k__BackingField(TPeer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Connection_k__BackingField = value;
}
template<typename TPeer>
constexpr bool& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__IsConnected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConnected_k__BackingField;
}
template<typename TPeer>
constexpr bool const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__IsConnected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConnected_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__IsConnected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsConnected_k__BackingField = value;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver*& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__VoiceReceiver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceReceiver_k__BackingField;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver* const& Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_get__VoiceReceiver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceReceiver_k__BackingField;
}
template<typename TPeer>
constexpr void Dissonance::Networking::ClientInfo_1<TPeer>::__cordl_internal_set__VoiceReceiver_k__BackingField(::Dissonance::Networking::Client::PeerVoiceReceiver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoiceReceiver_k__BackingField = value;
}
template<typename TPeer>
inline void Dissonance::Networking::ClientInfo_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::ClientInfo_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::ClientInfo_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::ClientInfo_1<TPeer>*>();
}
template<typename TPeer>
inline ::StringW Dissonance::Networking::ClientInfo_1<TPeer>::get_PlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_PlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TPeer>
inline uint16_t Dissonance::Networking::ClientInfo_1<TPeer>::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
template<typename TPeer>
inline ::Dissonance::CodecSettings Dissonance::Networking::ClientInfo_1<TPeer>::get_CodecSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_CodecSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(this, ___internal_method);
}
template<typename TPeer>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::Networking::ClientInfo_1<TPeer>::get_Rooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_Rooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
template<typename TPeer>
inline TPeer Dissonance::Networking::ClientInfo_1<TPeer>::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_Connection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TPeer>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::ClientInfo_1<TPeer>::set_Connection(TPeer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"set_Connection", {}, {::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline bool Dissonance::Networking::ClientInfo_1<TPeer>::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::ClientInfo_1<TPeer>::set_IsConnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"set_IsConnected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::PeerVoiceReceiver* Dissonance::Networking::ClientInfo_1<TPeer>::get_VoiceReceiver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"get_VoiceReceiver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::PeerVoiceReceiver*>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::ClientInfo_1<TPeer>::set_VoiceReceiver(::Dissonance::Networking::Client::PeerVoiceReceiver*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"set_VoiceReceiver", {}, {::i2c::type_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPeer>
inline void Dissonance::Networking::ClientInfo_1<TPeer>::_ctor(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings, TPeer  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>(), ::i2c::type_of<TPeer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, playerId, codecSettings, connection);
}
template<typename TPeer>
inline ::StringW Dissonance::Networking::ClientInfo_1<TPeer>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TPeer>
inline bool Dissonance::Networking::ClientInfo_1<TPeer>::Equals(::Dissonance::Networking::ClientInfo_1<TPeer>*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename TPeer>
inline bool Dissonance::Networking::ClientInfo_1<TPeer>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template<typename TPeer>
inline int32_t Dissonance::Networking::ClientInfo_1<TPeer>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TPeer>
inline bool Dissonance::Networking::ClientInfo_1<TPeer>::AddRoom(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"AddRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomName);
}
template<typename TPeer>
inline bool Dissonance::Networking::ClientInfo_1<TPeer>::RemoveRoom(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo_1<TPeer>*>(),
                        {"RemoveRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomName);
}
template<typename TPeer>
inline ::Dissonance::Networking::ClientInfo_1<TPeer>* Dissonance::Networking::ClientInfo_1<TPeer>::New_ctor(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings, TPeer  connection)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::ClientInfo_1<TPeer>*>(playerName, playerId, codecSettings, connection));
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>"
template<typename TPeer>
constexpr  Dissonance::Networking::ClientInfo_1<TPeer>::operator ::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*() noexcept {
return static_cast<::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>"
template<typename TPeer>
constexpr ::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* Dissonance::Networking::ClientInfo_1<TPeer>::i___System__IEquatable_1___Dissonance__Networking__ClientInfo_1_TPeer___() noexcept {
return static_cast<::System::IEquatable_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::ClientInfo_1<TPeer>::ClientInfo_1()   {
}
