#pragma once
// IWYU pragma private; include "Dissonance/Audio/OpenChannelVolumeDuck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/zzzz__Fader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OpenChannelVolumeDuck)
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class RoomChannels;
}
// Forward declare root types
namespace Dissonance::Audio {
class OpenChannelVolumeDuck;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::OpenChannelVolumeDuck*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::OpenChannelVolumeDuck*, "Dissonance.Audio", "OpenChannelVolumeDuck");
// Dependencies Dissonance.Audio.Fader, System.Object
namespace Dissonance::Audio {
// Is value type: false
// CS Name: Dissonance.Audio.OpenChannelVolumeDuck
class CORDL_TYPE OpenChannelVolumeDuck : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_TargetVolume)) float_t  TargetVolume;

/// @brief Field _fader, offset 0x20, size 0x14 
 __declspec(property(get=__cordl_internal_get__fader, put=__cordl_internal_set__fader)) ::Dissonance::Audio::Fader  _fader;

/// @brief Field _players, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::Dissonance::PlayerChannels*  _players;

/// @brief Field _rooms, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::Dissonance::RoomChannels*  _rooms;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr operator  ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept;

static inline ::Dissonance::Audio::OpenChannelVolumeDuck* New_ctor(::Dissonance::RoomChannels*  rooms, ::Dissonance::PlayerChannels*  players) ;

/// @brief Method Update, addr 0x1805e13a0, size 0x140, virtual false, abstract: false, final false
inline void Update(bool  isMuted, float_t  dt) ;

constexpr ::Dissonance::Audio::Fader const& __cordl_internal_get__fader() const;

constexpr ::Dissonance::Audio::Fader& __cordl_internal_get__fader() ;

constexpr ::Dissonance::PlayerChannels* const& __cordl_internal_get__players() const;

constexpr ::Dissonance::PlayerChannels*& __cordl_internal_get__players() ;

constexpr ::Dissonance::RoomChannels* const& __cordl_internal_get__rooms() const;

constexpr ::Dissonance::RoomChannels*& __cordl_internal_get__rooms() ;

constexpr void __cordl_internal_set__fader(::Dissonance::Audio::Fader  value) ;

constexpr void __cordl_internal_set__players(::Dissonance::PlayerChannels*  value) ;

constexpr void __cordl_internal_set__rooms(::Dissonance::RoomChannels*  value) ;

/// @brief Method .ctor, addr 0x1805e14e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::RoomChannels*  rooms, ::Dissonance::PlayerChannels*  players) ;

/// @brief Method get_TargetVolume, addr 0x1802f42b0, size 0x10, virtual true, abstract: false, final true
inline float_t get_TargetVolume() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* i___Dissonance__Audio__Playback__IVolumeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenChannelVolumeDuck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenChannelVolumeDuck", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenChannelVolumeDuck(OpenChannelVolumeDuck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenChannelVolumeDuck", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenChannelVolumeDuck(OpenChannelVolumeDuck const& ) = delete;

/// @brief Field FadeDurationSecondsDown offset 0xffffffff size 0x4
static constexpr float_t  FadeDurationSecondsDown{static_cast<float_t>(0.3f)};

/// @brief Field FadeDurationSecondsUp offset 0xffffffff size 0x4
static constexpr float_t  FadeDurationSecondsUp{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16959};

/// @brief Field _rooms, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  ____rooms;

/// @brief Field _players, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  ____players;

/// @brief Field _fader, offset: 0x20, size: 0x14, def value: None
 ::Dissonance::Audio::Fader  ____fader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::OpenChannelVolumeDuck, ____rooms) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::OpenChannelVolumeDuck, ____players) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::OpenChannelVolumeDuck, ____fader) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::OpenChannelVolumeDuck) == 0x38, "Size mismatch!");

} // namespace end def Dissonance::Audio
