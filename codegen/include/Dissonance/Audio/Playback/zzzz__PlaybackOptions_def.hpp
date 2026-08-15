#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/PlaybackOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlaybackOptions)
namespace Dissonance {
struct ChannelPriority;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
struct PlaybackOptions;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Playback::PlaybackOptions);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::PlaybackOptions, "Dissonance.Audio.Playback", "PlaybackOptions");
// Dependencies Dissonance.ChannelPriority
namespace Dissonance::Audio::Playback {
// Is value type: true
// CS Name: Dissonance.Audio.Playback.PlaybackOptions
struct CORDL_TYPE PlaybackOptions {
public:
// Declarations
 __declspec(property(get=get_AmplitudeMultiplier)) float_t  AmplitudeMultiplier;

 __declspec(property(get=get_IsPositional)) bool  IsPositional;

 __declspec(property(get=get_Priority)) ::Dissonance::ChannelPriority  Priority;

/// @brief Method .ctor, addr 0x1805da200, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  isPositional, float_t  amplitudeMultiplier, ::Dissonance::ChannelPriority  priority) ;

/// @brief Method get_AmplitudeMultiplier, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_AmplitudeMultiplier() ;

/// @brief Method get_IsPositional, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_IsPositional() ;

/// @brief Method get_Priority, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlaybackOptions() ;

// Ctor Parameters [CppParam { name: "_IsPositional_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AmplitudeMultiplier_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Priority_k__BackingField", ty: "::Dissonance::ChannelPriority", modifiers: "", def_value: None }]
constexpr PlaybackOptions(bool  _IsPositional_k__BackingField, float_t  _AmplitudeMultiplier_k__BackingField, ::Dissonance::ChannelPriority  _Priority_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16982};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field <IsPositional>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _IsPositional_k__BackingField;

/// @brief Field <AmplitudeMultiplier>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _AmplitudeMultiplier_k__BackingField;

/// @brief Field <Priority>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  _Priority_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::PlaybackOptions, _IsPositional_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::PlaybackOptions, _AmplitudeMultiplier_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::PlaybackOptions, _Priority_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::PlaybackOptions) == 0xc, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
