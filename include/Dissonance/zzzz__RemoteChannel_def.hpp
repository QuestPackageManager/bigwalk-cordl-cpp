#pragma once
// IWYU pragma private; include "Dissonance/RemoteChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RemoteChannel)
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
namespace Dissonance {
struct ChannelType;
}
// Forward declare root types
namespace Dissonance {
struct RemoteChannel;
}
// Write type traits
MARK_VAL_T(::Dissonance::RemoteChannel);
DEFINE_IL2CPP_CLASS(::Dissonance::RemoteChannel, "Dissonance", "RemoteChannel");
// Dependencies Dissonance.Audio.Playback.PlaybackOptions, Dissonance.ChannelType
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.RemoteChannel
struct CORDL_TYPE RemoteChannel {
public:
// Declarations
 __declspec(property(get=get_Options)) ::Dissonance::Audio::Playback::PlaybackOptions  Options;

 __declspec(property(get=get_TargetName)) ::StringW  TargetName;

 __declspec(property(get=get_Type)) ::Dissonance::ChannelType  Type;

/// @brief Method .ctor, addr 0x1805ce3e0, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::StringW  targetName, ::Dissonance::ChannelType  type, ::Dissonance::Audio::Playback::PlaybackOptions  options) ;

/// @brief Method get_Options, addr 0x1805c3280, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Audio::Playback::PlaybackOptions get_Options() ;

/// @brief Method get_TargetName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_TargetName() ;

/// @brief Method get_Type, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelType get_Type() ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteChannel() ;

// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Dissonance::ChannelType", modifiers: "", def_value: None }, CppParam { name: "_Options_k__BackingField", ty: "::Dissonance::Audio::Playback::PlaybackOptions", modifiers: "", def_value: None }, CppParam { name: "_TargetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr RemoteChannel(::Dissonance::ChannelType  _Type_k__BackingField, ::Dissonance::Audio::Playback::PlaybackOptions  _Options_k__BackingField, ::StringW  _TargetName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16789};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Type>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Dissonance::ChannelType  _Type_k__BackingField;

/// @brief Field <Options>k__BackingField, offset: 0x4, size: 0xc, def value: None
 ::Dissonance::Audio::Playback::PlaybackOptions  _Options_k__BackingField;

/// @brief Field <TargetName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _TargetName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::RemoteChannel, _Type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RemoteChannel, _Options_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RemoteChannel, _TargetName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::RemoteChannel) == 0x18, "Size mismatch!");

} // namespace end def Dissonance
