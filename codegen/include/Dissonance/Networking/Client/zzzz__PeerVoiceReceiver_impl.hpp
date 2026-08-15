#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/PeerVoiceReceiver.hpp"
#include "Dissonance/zzzz__ChannelPriority_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__PeerVoiceReceiver_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__IVoiceEventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__PeerVoiceReceiver_def.hpp"
#include "Dissonance/Networking/zzzz__ChannelBitField_def.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__IRooms_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::*)(bool, float_t, ::Dissonance::ChannelPriority)>(&::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805da200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata.CombineWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata (::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::*)(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata)>(&::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::CombineWith)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805da180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>(),
                        {"CombineWith", {}, {::i2c::type_of<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::_ctor(bool  isPositional, float_t  amplitudeMultiplier, ::Dissonance::ChannelPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isPositional, amplitudeMultiplier, priority);
}
inline ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::CombineWith(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>(),
                        {"CombineWith", {}, {::i2c::type_of<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "IsPositional", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AmplitudeMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Priority", ty: "::Dissonance::ChannelPriority", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::PeerVoiceReceiver_ChannelsMetadata(bool  IsPositional, float_t  AmplitudeMultiplier, ::Dissonance::ChannelPriority  Priority) noexcept  {
this->IsPositional = IsPositional;
this->AmplitudeMultiplier = AmplitudeMultiplier;
this->Priority = Priority;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata::PeerVoiceReceiver_ChannelsMetadata()   {
}
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::Client::PeerVoiceReceiver::*)()>(&::Dissonance::Networking::Client::PeerVoiceReceiver::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.get_Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::PeerVoiceReceiver::*)()>(&::Dissonance::Networking::Client::PeerVoiceReceiver::get_Open)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"get_Open", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.set_Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(bool)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::set_Open)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"set_Open", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.get_ReceiveAllVoicePackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::PeerVoiceReceiver::*)()>(&::Dissonance::Networking::Client::PeerVoiceReceiver::get_ReceiveAllVoicePackets)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"get_ReceiveAllVoicePackets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.set_ReceiveAllVoicePackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(bool)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::set_ReceiveAllVoicePackets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180452bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"set_ReceiveAllVoicePackets", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(::StringW, uint16_t, ::StringW, ::Dissonance::Networking::Client::IVoiceEventQueue*, ::Dissonance::IRooms*, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e7030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), ::i2c::type_of<::Dissonance::IRooms*>(), ::i2c::type_of<::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.CheckTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::CheckTimeout)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"CheckTimeout", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.StopSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)()>(&::Dissonance::Networking::Client::PeerVoiceReceiver::StopSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e6d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"StopSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.StartSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(uint16_t, uint16_t, ::System::DateTime)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::StartSpeaking)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805e6c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"StartSpeaking", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.ReceivePacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(::by_ref<::Dissonance::Networking::PacketReader>, ::System::DateTime)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::ReceivePacket)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1805e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"ReceivePacket", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.ReadChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(::by_ref<::Dissonance::Networking::PacketReader>, uint16_t, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>, ::System::Collections::Generic::ICollection_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::ReadChannels)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1805e6290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"ReadChannels", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::Dissonance::RemoteChannel>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.HasChannelSessionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(int32_t, int32_t)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::HasChannelSessionChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"HasChannelSessionChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.IsChannelToLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::RemoteChannel> (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(::Dissonance::Networking::ChannelBitField, uint16_t)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::IsChannelToLocalPlayer)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1805e6040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"IsChannelToLocalPlayer", {}, {::i2c::type_of<::Dissonance::Networking::ChannelBitField>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.RemoveChannelsExcept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::RemoveChannelsExcept)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805e6b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"RemoveChannelsExcept", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.UpdateSpeakerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(bool, bool, uint16_t, uint16_t, ::System::DateTime)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::UpdateSpeakerState)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805e6e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"UpdateSpeakerState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.UpdateSequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::PeerVoiceReceiver::*)(uint16_t, ::System::DateTime)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::UpdateSequenceNumber)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805e6dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"UpdateSequenceNumber", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PeerVoiceReceiver.IsPacketFromPreviousSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t, uint16_t, bool)>(&::Dissonance::Networking::Client::PeerVoiceReceiver::IsPacketFromPreviousSession)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e6250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"IsPacketFromPreviousSession", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::Dissonance::Networking::Client::IVoiceEventQueue*& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::Dissonance::Networking::Client::IVoiceEventQueue* const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__events(::Dissonance::Networking::Client::IVoiceEventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::Dissonance::IRooms*& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localListeningRooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localListeningRooms;
}
constexpr ::Dissonance::IRooms* const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localListeningRooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localListeningRooms;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__localListeningRooms(::Dissonance::IRooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localListeningRooms = value;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__channelListPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelListPool;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__channelListPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelListPool;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__channelListPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelListPool = value;
}
constexpr uint16_t& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localId;
}
constexpr uint16_t const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localId;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__localId(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localId = value;
}
constexpr ::StringW& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localName;
}
constexpr ::StringW const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localName;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__localName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localName = value;
}
constexpr ::System::DateTime& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__lastReceiptTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceiptTime;
}
constexpr ::System::DateTime const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__lastReceiptTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceiptTime;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__lastReceiptTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastReceiptTime = value;
}
constexpr uint16_t& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__remoteSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteSequenceNumber;
}
constexpr uint16_t const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__remoteSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteSequenceNumber;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__remoteSequenceNumber(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteSequenceNumber = value;
}
constexpr uint32_t& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSequenceNumber;
}
constexpr uint32_t const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__localSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSequenceNumber;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__localSequenceNumber(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localSequenceNumber = value;
}
constexpr bool& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__Open_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Open_k__BackingField;
}
constexpr bool const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__Open_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Open_k__BackingField;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__Open_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Open_k__BackingField = value;
}
constexpr bool& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__receivedInitialPacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedInitialPacket;
}
constexpr bool const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__receivedInitialPacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedInitialPacket;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__receivedInitialPacket(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedInitialPacket = value;
}
constexpr uint16_t& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__currentChannelSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChannelSession;
}
constexpr uint16_t const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__currentChannelSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChannelSession;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__currentChannelSession(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentChannelSession = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__expectedPerChannelSessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expectedPerChannelSessions;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__expectedPerChannelSessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expectedPerChannelSessions;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__expectedPerChannelSessions(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____expectedPerChannelSessions = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__tmpCompositeIdBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpCompositeIdBuffer;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__tmpCompositeIdBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpCompositeIdBuffer;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__tmpCompositeIdBuffer(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpCompositeIdBuffer = value;
}
constexpr bool& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__ReceiveAllVoicePackets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReceiveAllVoicePackets_k__BackingField;
}
constexpr bool const& Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_get__ReceiveAllVoicePackets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReceiveAllVoicePackets_k__BackingField;
}
constexpr void Dissonance::Networking::Client::PeerVoiceReceiver::__cordl_internal_set__ReceiveAllVoicePackets_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReceiveAllVoicePackets_k__BackingField = value;
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::PeerVoiceReceiver*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Networking::Client::PeerVoiceReceiver::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::PeerVoiceReceiver*>();
}
inline ::StringW Dissonance::Networking::Client::PeerVoiceReceiver::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Dissonance::Networking::Client::PeerVoiceReceiver::get_Open()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"get_Open", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::set_Open(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"set_Open", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Networking::Client::PeerVoiceReceiver::get_ReceiveAllVoicePackets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"get_ReceiveAllVoicePackets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::set_ReceiveAllVoicePackets(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"set_ReceiveAllVoicePackets", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::_ctor(::StringW  remoteName, uint16_t  localId, ::StringW  localName, ::Dissonance::Networking::Client::IVoiceEventQueue*  events, ::Dissonance::IRooms*  listeningRooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Networking::Client::IVoiceEventQueue*>(), ::i2c::type_of<::Dissonance::IRooms*>(), ::i2c::type_of<::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteName, localId, localName, events, listeningRooms, channelListPool);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::CheckTimeout(::System::DateTime  utcNow, ::System::TimeSpan  activeTimeout, ::System::TimeSpan  inactiveTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"CheckTimeout", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow, activeTimeout, inactiveTimeout);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::StopSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"StopSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::StartSpeaking(uint16_t  startSequenceNumber, uint16_t  channelSession, ::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"StartSpeaking", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startSequenceNumber, channelSession, utcNow);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::ReceivePacket(::by_ref<::Dissonance::Networking::PacketReader>  reader, ::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"ReceivePacket", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, utcNow);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::ReadChannels(::by_ref<::Dissonance::Networking::PacketReader>  reader, uint16_t  numChannels, ::by_ref<bool>  allClosing, ::by_ref<bool>  forceReset, ::by_ref<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>  channelsMetadata, ::System::Collections::Generic::ICollection_1<::Dissonance::RemoteChannel>*  channelsOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"ReadChannels", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::PacketReader>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::Dissonance::RemoteChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, numChannels, allClosing, forceReset, channelsMetadata, channelsOut);
}
inline bool Dissonance::Networking::Client::PeerVoiceReceiver::HasChannelSessionChanged(int32_t  compositeId, int32_t  expectedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"HasChannelSessionChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, compositeId, expectedValue);
}
inline ::System::Nullable_1<::Dissonance::RemoteChannel> Dissonance::Networking::Client::PeerVoiceReceiver::IsChannelToLocalPlayer(::Dissonance::Networking::ChannelBitField  channel, uint16_t  recipient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"IsChannelToLocalPlayer", {}, {::i2c::type_of<::Dissonance::Networking::ChannelBitField>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::RemoteChannel>>(this, ___internal_method, channel, recipient);
}
inline void Dissonance::Networking::Client::PeerVoiceReceiver::RemoveChannelsExcept(::System::Collections::Generic::List_1<int32_t>*  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"RemoveChannelsExcept", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys);
}
inline bool Dissonance::Networking::Client::PeerVoiceReceiver::UpdateSpeakerState(bool  allClosing, bool  forceReset, uint16_t  channelSession, uint16_t  sequenceNumber, ::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"UpdateSpeakerState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, allClosing, forceReset, channelSession, sequenceNumber, utcNow);
}
inline bool Dissonance::Networking::Client::PeerVoiceReceiver::UpdateSequenceNumber(uint16_t  sequenceNumber, ::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"UpdateSequenceNumber", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sequenceNumber, utcNow);
}
inline bool Dissonance::Networking::Client::PeerVoiceReceiver::IsPacketFromPreviousSession(uint16_t  currentChannelSession, uint16_t  packetChannelSession, bool  isExtendedRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PeerVoiceReceiver*>(),
                        {"IsPacketFromPreviousSession", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentChannelSession, packetChannelSession, isExtendedRange);
}
inline ::Dissonance::Networking::Client::PeerVoiceReceiver* Dissonance::Networking::Client::PeerVoiceReceiver::New_ctor(::StringW  remoteName, uint16_t  localId, ::StringW  localName, ::Dissonance::Networking::Client::IVoiceEventQueue*  events, ::Dissonance::IRooms*  listeningRooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::PeerVoiceReceiver*>(remoteName, localId, localName, events, listeningRooms, channelListPool));
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver::PeerVoiceReceiver()   {
}
