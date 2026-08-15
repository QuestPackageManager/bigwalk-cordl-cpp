#pragma once
// IWYU pragma private; include "Dissonance/PlayerCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__PlayerCollection_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IAmplitudeProvider_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/zzzz__ILossEstimator_def.hpp"
#include "Dissonance/zzzz__LocalVoicePlayerState_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::Dissonance::PlayerCollection.get_Readonly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* (::Dissonance::PlayerCollection::*)()>(&::Dissonance::PlayerCollection::get_Readonly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"get_Readonly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.get_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::LocalVoicePlayerState* (::Dissonance::PlayerCollection::*)()>(&::Dissonance::PlayerCollection::get_Local)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"get_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.set_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerCollection::*)(::Dissonance::LocalVoicePlayerState*)>(&::Dissonance::PlayerCollection::set_Local)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"set_Local", {}, {::i2c::type_of<::Dissonance::LocalVoicePlayerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerCollection::*)()>(&::Dissonance::PlayerCollection::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805cddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerCollection::*)(::StringW, ::Dissonance::Audio::Capture::IAmplitudeProvider*, ::Dissonance::Rooms*, ::Dissonance::RoomChannels*, ::Dissonance::PlayerChannels*, ::Dissonance::ILossEstimator*, ::Dissonance::Networking::ICommsNetwork*)>(&::Dissonance::PlayerCollection::Start)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805cdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Start", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::ILossEstimator*>(), ::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerCollection::*)(::Dissonance::VoicePlayerState*)>(&::Dissonance::PlayerCollection::Add)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805cd8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Add", {}, {::i2c::type_of<::Dissonance::VoicePlayerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::VoicePlayerState* (::Dissonance::PlayerCollection::*)(::StringW)>(&::Dissonance::PlayerCollection::Remove)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805cda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.TryGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PlayerCollection::*)(::StringW, ::by_ref<::Dissonance::VoicePlayerState*>)>(&::Dissonance::PlayerCollection::TryGet)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cdcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"TryGet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Dissonance::VoicePlayerState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerCollection.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerCollection::*)()>(&::Dissonance::PlayerCollection::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cdcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>*& Dissonance::PlayerCollection::__cordl_internal_get__playersLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>* const& Dissonance::PlayerCollection::__cordl_internal_get__playersLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersLookup;
}
constexpr void Dissonance::PlayerCollection::__cordl_internal_set__playersLookup(::System::Collections::Generic::Dictionary_2<::StringW,::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playersLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>*& Dissonance::PlayerCollection::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>* const& Dissonance::PlayerCollection::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Dissonance::PlayerCollection::__cordl_internal_set__players(::System::Collections::Generic::List_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*& Dissonance::PlayerCollection::__cordl_internal_get__playersReadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersReadOnly;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* const& Dissonance::PlayerCollection::__cordl_internal_get__playersReadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersReadOnly;
}
constexpr void Dissonance::PlayerCollection::__cordl_internal_set__playersReadOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playersReadOnly = value;
}
constexpr ::Dissonance::LocalVoicePlayerState*& Dissonance::PlayerCollection::__cordl_internal_get__Local_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Local_k__BackingField;
}
constexpr ::Dissonance::LocalVoicePlayerState* const& Dissonance::PlayerCollection::__cordl_internal_get__Local_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Local_k__BackingField;
}
constexpr void Dissonance::PlayerCollection::__cordl_internal_set__Local_k__BackingField(::Dissonance::LocalVoicePlayerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Local_k__BackingField = value;
}
inline void Dissonance::PlayerCollection::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::PlayerCollection*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::PlayerCollection::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::PlayerCollection*>();
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* Dissonance::PlayerCollection::get_Readonly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"get_Readonly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*>(this, ___internal_method);
}
inline ::Dissonance::LocalVoicePlayerState* Dissonance::PlayerCollection::get_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"get_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::LocalVoicePlayerState*>(this, ___internal_method);
}
inline void Dissonance::PlayerCollection::set_Local(::Dissonance::LocalVoicePlayerState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"set_Local", {}, {::i2c::type_of<::Dissonance::LocalVoicePlayerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::PlayerCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::PlayerCollection::Start(::StringW  name, ::Dissonance::Audio::Capture::IAmplitudeProvider*  micAmplitude, ::Dissonance::Rooms*  rooms, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::ILossEstimator*  loss, ::Dissonance::Networking::ICommsNetwork*  net)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Start", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::ILossEstimator*>(), ::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, micAmplitude, rooms, roomChannels, playerChannels, loss, net);
}
inline void Dissonance::PlayerCollection::Add(::Dissonance::VoicePlayerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Add", {}, {::i2c::type_of<::Dissonance::VoicePlayerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Dissonance::VoicePlayerState* Dissonance::PlayerCollection::Remove(::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::VoicePlayerState*>(this, ___internal_method, playerId);
}
inline bool Dissonance::PlayerCollection::TryGet(::StringW  playerId, ::by_ref<::Dissonance::VoicePlayerState*>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"TryGet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Dissonance::VoicePlayerState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, state);
}
inline void Dissonance::PlayerCollection::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerCollection*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::PlayerCollection* Dissonance::PlayerCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::PlayerCollection*>());
}
// Ctor Parameters []
constexpr ::Dissonance::PlayerCollection::PlayerCollection()   {
}
