#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SyncState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeSpan_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SyncState)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
struct SyncState;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Playback::SyncState);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SyncState, "Dissonance.Audio.Playback", "SyncState");
// Dependencies System.TimeSpan
namespace Dissonance::Audio::Playback {
// Is value type: true
// CS Name: Dissonance.Audio.Playback.SyncState
struct CORDL_TYPE SyncState {
public:
// Declarations
/// @brief Method .ctor, addr 0x1805eace0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  actualPlaybackPosition, ::System::TimeSpan  idealPlaybackPosition, ::System::TimeSpan  desync, float_t  compensatedPlaybackSpeed, bool  enabled) ;

// Ctor Parameters []
// @brief default ctor
constexpr SyncState() ;

// Ctor Parameters [CppParam { name: "ActualPlaybackPosition", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "IdealPlaybackPosition", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "Desync", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "CompensatedPlaybackSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None }]
constexpr SyncState(::System::TimeSpan  ActualPlaybackPosition, ::System::TimeSpan  IdealPlaybackPosition, ::System::TimeSpan  Desync, float_t  CompensatedPlaybackSpeed, bool  Enabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ActualPlaybackPosition, offset: 0x0, size: 0x8, def value: None
 ::System::TimeSpan  ActualPlaybackPosition;

/// @brief Field IdealPlaybackPosition, offset: 0x8, size: 0x8, def value: None
 ::System::TimeSpan  IdealPlaybackPosition;

/// @brief Field Desync, offset: 0x10, size: 0x8, def value: None
 ::System::TimeSpan  Desync;

/// @brief Field CompensatedPlaybackSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  CompensatedPlaybackSpeed;

/// @brief Field Enabled, offset: 0x1c, size: 0x1, def value: None
 bool  Enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SyncState, ActualPlaybackPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SyncState, IdealPlaybackPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SyncState, Desync) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SyncState, CompensatedPlaybackSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SyncState, Enabled) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SyncState) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
