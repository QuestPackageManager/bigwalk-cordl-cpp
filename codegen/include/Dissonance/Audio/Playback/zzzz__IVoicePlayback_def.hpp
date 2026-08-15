#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IVoicePlayback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IVoicePlayback)
namespace Dissonance {
struct ChannelPriority;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IVoicePlayback;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IVoicePlayback*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IVoicePlayback*, "Dissonance.Audio.Playback", "IVoicePlayback");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IVoicePlayback
class CORDL_TYPE IVoicePlayback {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Jitter)) float_t  Jitter;

 __declspec(property(get=get_PacketLoss)) ::System::Nullable_1<float_t>  PacketLoss;

 __declspec(property(get=get_PlayerName)) ::StringW  PlayerName;

 __declspec(property(get=get_Priority)) ::Dissonance::ChannelPriority  Priority;

/// @brief Method get_Amplitude, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_IsActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_IsSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_Jitter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Jitter() ;

/// @brief Method get_PacketLoss, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<float_t> get_PacketLoss() ;

/// @brief Method get_PlayerName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_PlayerName() ;

/// @brief Method get_Priority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

// Ctor Parameters [CppParam { name: "", ty: "IVoicePlayback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoicePlayback(IVoicePlayback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
