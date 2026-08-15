#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/IVoiceEventQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IVoiceEventQueue)
namespace Dissonance::Networking {
struct VoicePacket;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
class IVoiceEventQueue;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::Client::IVoiceEventQueue*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::IVoiceEventQueue*, "Dissonance.Networking.Client", "IVoiceEventQueue");
// Dependencies 
namespace Dissonance::Networking::Client {
// Is value type: false
// CS Name: Dissonance.Networking.Client.IVoiceEventQueue
class CORDL_TYPE IVoiceEventQueue {
public:
// Declarations
/// @brief Method EnqueueStartedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueStartedSpeaking(::StringW  name) ;

/// @brief Method EnqueueStoppedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueStoppedSpeaking(::StringW  name) ;

/// @brief Method EnqueueVoiceData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueVoiceData(::Dissonance::Networking::VoicePacket  voicePacket) ;

/// @brief Method GetEventBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetEventBuffer() ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceEventQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceEventQueue(IVoiceEventQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
