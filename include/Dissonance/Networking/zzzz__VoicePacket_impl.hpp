#pragma once
// IWYU pragma private; include "Dissonance/Networking/VoicePacket.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::VoicePacket.get_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::VoicePacket::*)()>(&::Dissonance::Networking::VoicePacket::get_Positional)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ed9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_Positional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::VoicePacket.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Networking::VoicePacket::*)()>(&::Dissonance::Networking::VoicePacket::get_Priority)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805eda10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::VoicePacket.get_AmplitudeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Networking::VoicePacket::*)()>(&::Dissonance::Networking::VoicePacket::get_AmplitudeMultiplier)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ed990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::VoicePacket.get_PlaybackOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::PlaybackOptions (::Dissonance::Networking::VoicePacket::*)()>(&::Dissonance::Networking::VoicePacket::get_PlaybackOptions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_PlaybackOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::VoicePacket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::VoicePacket::*)(::StringW, ::Dissonance::ChannelPriority, float_t, bool, ::System::ArraySegment_1<uint8_t>, uint32_t, ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::Networking::VoicePacket::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805ed8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelPriority>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Dissonance::Networking::VoicePacket::get_Positional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_Positional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::Networking::VoicePacket::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(*this, ___internal_method);
}
inline float_t Dissonance::Networking::VoicePacket::get_AmplitudeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::PlaybackOptions Dissonance::Networking::VoicePacket::get_PlaybackOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {"get_PlaybackOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::PlaybackOptions>(*this, ___internal_method);
}
inline void Dissonance::Networking::VoicePacket::_ctor(::StringW  senderPlayerId, ::Dissonance::ChannelPriority  priority, float_t  ampMul, bool  positional, ::System::ArraySegment_1<uint8_t>  encodedAudioFrame, uint32_t  sequence, ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::VoicePacket>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelPriority>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, senderPlayerId, priority, ampMul, positional, encodedAudioFrame, sequence, channels);
}
// Ctor Parameters [CppParam { name: "SenderPlayerId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "EncodedAudioFrame", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SequenceNumber", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Channels", ty: "::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlaybackOptions_k__BackingField", ty: "::Dissonance::Audio::Playback::PlaybackOptions", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::VoicePacket::VoicePacket(::StringW  SenderPlayerId, ::System::ArraySegment_1<uint8_t>  EncodedAudioFrame, uint32_t  SequenceNumber, ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  Channels, ::Dissonance::Audio::Playback::PlaybackOptions  _PlaybackOptions_k__BackingField) noexcept  {
this->SenderPlayerId = SenderPlayerId;
this->EncodedAudioFrame = EncodedAudioFrame;
this->SequenceNumber = SequenceNumber;
this->Channels = Channels;
this->_PlaybackOptions_k__BackingField = _PlaybackOptions_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::VoicePacket::VoicePacket()   {
}
