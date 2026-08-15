#pragma once
// IWYU pragma private; include "Dissonance/Networking/VoicePacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoicePacket)
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking {
struct VoicePacket;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::VoicePacket);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::VoicePacket, "Dissonance.Networking", "VoicePacket");
// Dependencies Dissonance.Audio.Playback.PlaybackOptions, System.ArraySegment`1<T>
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.VoicePacket
struct CORDL_TYPE VoicePacket {
public:
// Declarations
 __declspec(property(get=get_AmplitudeMultiplier)) float_t  AmplitudeMultiplier;

 __declspec(property(get=get_PlaybackOptions)) ::Dissonance::Audio::Playback::PlaybackOptions  PlaybackOptions;

 __declspec(property(get=get_Positional)) bool  Positional;

 __declspec(property(get=get_Priority)) ::Dissonance::ChannelPriority  Priority;

/// @brief Method .ctor, addr 0x1805ed8c0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  senderPlayerId, ::Dissonance::ChannelPriority  priority, float_t  ampMul, bool  positional, ::System::ArraySegment_1<uint8_t>  encodedAudioFrame, uint32_t  sequence, ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels) ;

/// @brief Method get_AmplitudeMultiplier, addr 0x1805ed990, size 0x50, virtual false, abstract: false, final false
inline float_t get_AmplitudeMultiplier() ;

/// @brief Method get_PlaybackOptions, addr 0x1805d74d0, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::PlaybackOptions get_PlaybackOptions() ;

/// @brief Method get_Positional, addr 0x1805ed9e0, size 0x30, virtual false, abstract: false, final false
inline bool get_Positional() ;

/// @brief Method get_Priority, addr 0x1805eda10, size 0x50, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

// Ctor Parameters []
// @brief default ctor
constexpr VoicePacket() ;

// Ctor Parameters [CppParam { name: "SenderPlayerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "EncodedAudioFrame", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "SequenceNumber", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Channels", ty: "::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*", modifiers: "", def_value: None }, CppParam { name: "_PlaybackOptions_k__BackingField", ty: "::Dissonance::Audio::Playback::PlaybackOptions", modifiers: "", def_value: None }]
constexpr VoicePacket(::StringW  SenderPlayerId, ::System::ArraySegment_1<uint8_t>  EncodedAudioFrame, uint32_t  SequenceNumber, ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  Channels, ::Dissonance::Audio::Playback::PlaybackOptions  _PlaybackOptions_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field SenderPlayerId, offset: 0x0, size: 0x8, def value: None
 ::StringW  SenderPlayerId;

/// @brief Field EncodedAudioFrame, offset: 0x8, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  EncodedAudioFrame;

/// @brief Field SequenceNumber, offset: 0x18, size: 0x4, def value: None
 uint32_t  SequenceNumber;

/// @brief Field Channels, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  Channels;

/// @brief Field <PlaybackOptions>k__BackingField, offset: 0x28, size: 0xc, def value: None
 ::Dissonance::Audio::Playback::PlaybackOptions  _PlaybackOptions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::VoicePacket, SenderPlayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::VoicePacket, EncodedAudioFrame) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::VoicePacket, SequenceNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::VoicePacket, Channels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::VoicePacket, _PlaybackOptions_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::VoicePacket) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Networking
