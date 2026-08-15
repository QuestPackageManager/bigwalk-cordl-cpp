#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IPriorityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPriorityManager)
namespace Dissonance {
struct ChannelPriority;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IPriorityManager*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IPriorityManager*, "Dissonance.Audio.Playback", "IPriorityManager");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IPriorityManager
class CORDL_TYPE IPriorityManager {
public:
// Declarations
 __declspec(property(get=get_TopPriority)) ::Dissonance::ChannelPriority  TopPriority;

/// @brief Method get_TopPriority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::ChannelPriority get_TopPriority() ;

// Ctor Parameters [CppParam { name: "", ty: "IPriorityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPriorityManager(IPriorityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
