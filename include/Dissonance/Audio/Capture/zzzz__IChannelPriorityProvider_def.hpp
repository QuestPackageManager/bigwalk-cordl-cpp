#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IChannelPriorityProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IChannelPriorityProvider)
namespace Dissonance {
struct ChannelPriority;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IChannelPriorityProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IChannelPriorityProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IChannelPriorityProvider*, "Dissonance.Audio.Capture", "IChannelPriorityProvider");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IChannelPriorityProvider
class CORDL_TYPE IChannelPriorityProvider {
public:
// Declarations
 __declspec(property(get=get_DefaultChannelPriority, put=set_DefaultChannelPriority)) ::Dissonance::ChannelPriority  DefaultChannelPriority;

/// @brief Method get_DefaultChannelPriority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::ChannelPriority get_DefaultChannelPriority() ;

/// @brief Method set_DefaultChannelPriority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_DefaultChannelPriority(::Dissonance::ChannelPriority  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IChannelPriorityProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IChannelPriorityProvider(IChannelPriorityProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17028};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
