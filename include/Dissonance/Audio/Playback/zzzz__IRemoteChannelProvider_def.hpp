#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IRemoteChannelProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRemoteChannelProvider)
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IRemoteChannelProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IRemoteChannelProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IRemoteChannelProvider*, "Dissonance.Audio.Playback", "IRemoteChannelProvider");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IRemoteChannelProvider
class CORDL_TYPE IRemoteChannelProvider {
public:
// Declarations
/// @brief Method GetRemoteChannels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "IRemoteChannelProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRemoteChannelProvider(IRemoteChannelProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
