#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCheater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCheater)
namespace GlobalNamespace {
class CameraCheatMover;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCheater;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCheater*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCheater*, "", "PlayerCheater");
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Ray, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCheater
class CORDL_TYPE PlayerCheater : public ::System::Object {
public:
// Declarations
/// @brief Field LockedRay, offset 0x30, size 0x1c 
 __declspec(property(get=__cordl_internal_get_LockedRay, put=__cordl_internal_set_LockedRay)) ::System::Nullable_1<::UnityEngine::Ray>  LockedRay;

/// @brief Field _cameraDampPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__cameraDampPosition, put=__cordl_internal_set__cameraDampPosition)) ::UnityEngine::Vector3  _cameraDampPosition;

/// @brief Field _cameraDampVelocity, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__cameraDampVelocity, put=__cordl_internal_set__cameraDampVelocity)) ::UnityEngine::Vector3  _cameraDampVelocity;

/// @brief Field _musicToggle, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get__musicToggle, put=__cordl_internal_set__musicToggle)) bool  _musicToggle;

/// @brief Field _noMuteEffects, offset 0x4f, size 0x1 
 __declspec(property(get=__cordl_internal_get__noMuteEffects, put=__cordl_internal_set__noMuteEffects)) bool  _noMuteEffects;

/// @brief Field _trailerAudio, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get__trailerAudio, put=__cordl_internal_set__trailerAudio)) bool  _trailerAudio;

/// @brief Field _voice2DSet, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__voice2DSet, put=__cordl_internal_set__voice2DSet)) bool  _voice2DSet;

/// @brief Field _voice2DToggle, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__voice2DToggle, put=__cordl_internal_set__voice2DToggle)) bool  _voice2DToggle;

/// @brief Field _voiceToggle, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__voiceToggle, put=__cordl_internal_set__voiceToggle)) bool  _voiceToggle;

/// @brief Field cameraCheatMover, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraCheatMover, put=__cordl_internal_set_cameraCheatMover)) ::UnityW<::GlobalNamespace::CameraCheatMover>  cameraCheatMover;

/// @brief Field cameraDampSmoothTime, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraDampSmoothTime, put=__cordl_internal_set_cameraDampSmoothTime)) ::System::Nullable_1<float_t>  cameraDampSmoothTime;

/// @brief Field cheatButtonsIsPrimed, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_cheatButtonsIsPrimed, put=__cordl_internal_set_cheatButtonsIsPrimed)) bool  cheatButtonsIsPrimed;

/// @brief Field cheatTextIsPrimed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_cheatTextIsPrimed, put=__cordl_internal_set_cheatTextIsPrimed)) bool  cheatTextIsPrimed;

/// @brief Field ghostMovementScalar, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ghostMovementScalar, put=__cordl_internal_set_ghostMovementScalar)) float_t  ghostMovementScalar;

/// @brief Field logVerbose, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field nextPoint, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPoint, put=__cordl_internal_set_nextPoint)) int32_t  nextPoint;

 __declspec(property(get=get_noMuteEffects)) bool  noMuteEffects;

/// @brief Field playerCharacter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field starsDisabled, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get_starsDisabled, put=__cordl_internal_set_starsDisabled)) bool  starsDisabled;

/// @brief Method ApplyCameraDampening, addr 0x180462010, size 0x2d0, virtual false, abstract: false, final false
inline void ApplyCameraDampening() ;

/// @brief Method CheckForCheat, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool CheckForCheat(::StringW  text) ;

/// @brief Method ClearCameraDampening, addr 0x1804622e0, size 0x50, virtual false, abstract: false, final false
inline void ClearCameraDampening() ;

/// @brief Method ClearTrack, addr 0x180462330, size 0x60, virtual false, abstract: false, final false
inline void ClearTrack() ;

/// @brief Method Initialize, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerCheater* New_ctor() ;

/// @brief Method ProjectOntoRay, addr 0x180462390, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ProjectOntoRay(::UnityEngine::Vector3  point, ::UnityEngine::Ray  ray) ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Nullable_1<::UnityEngine::Ray> const& __cordl_internal_get_LockedRay() const;

constexpr ::System::Nullable_1<::UnityEngine::Ray>& __cordl_internal_get_LockedRay() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraDampPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraDampPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraDampVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraDampVelocity() ;

constexpr bool const& __cordl_internal_get__musicToggle() const;

constexpr bool& __cordl_internal_get__musicToggle() ;

constexpr bool const& __cordl_internal_get__noMuteEffects() const;

constexpr bool& __cordl_internal_get__noMuteEffects() ;

constexpr bool const& __cordl_internal_get__trailerAudio() const;

constexpr bool& __cordl_internal_get__trailerAudio() ;

constexpr bool const& __cordl_internal_get__voice2DSet() const;

constexpr bool& __cordl_internal_get__voice2DSet() ;

constexpr bool const& __cordl_internal_get__voice2DToggle() const;

constexpr bool& __cordl_internal_get__voice2DToggle() ;

constexpr bool const& __cordl_internal_get__voiceToggle() const;

constexpr bool& __cordl_internal_get__voiceToggle() ;

constexpr ::UnityW<::GlobalNamespace::CameraCheatMover> const& __cordl_internal_get_cameraCheatMover() const;

constexpr ::UnityW<::GlobalNamespace::CameraCheatMover>& __cordl_internal_get_cameraCheatMover() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_cameraDampSmoothTime() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_cameraDampSmoothTime() ;

constexpr bool const& __cordl_internal_get_cheatButtonsIsPrimed() const;

constexpr bool& __cordl_internal_get_cheatButtonsIsPrimed() ;

constexpr bool const& __cordl_internal_get_cheatTextIsPrimed() const;

constexpr bool& __cordl_internal_get_cheatTextIsPrimed() ;

constexpr float_t const& __cordl_internal_get_ghostMovementScalar() const;

constexpr float_t& __cordl_internal_get_ghostMovementScalar() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int32_t const& __cordl_internal_get_nextPoint() const;

constexpr int32_t& __cordl_internal_get_nextPoint() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr bool const& __cordl_internal_get_starsDisabled() const;

constexpr bool& __cordl_internal_get_starsDisabled() ;

constexpr void __cordl_internal_set_LockedRay(::System::Nullable_1<::UnityEngine::Ray>  value) ;

constexpr void __cordl_internal_set__cameraDampPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__cameraDampVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__musicToggle(bool  value) ;

constexpr void __cordl_internal_set__noMuteEffects(bool  value) ;

constexpr void __cordl_internal_set__trailerAudio(bool  value) ;

constexpr void __cordl_internal_set__voice2DSet(bool  value) ;

constexpr void __cordl_internal_set__voice2DToggle(bool  value) ;

constexpr void __cordl_internal_set__voiceToggle(bool  value) ;

constexpr void __cordl_internal_set_cameraCheatMover(::UnityW<::GlobalNamespace::CameraCheatMover>  value) ;

constexpr void __cordl_internal_set_cameraDampSmoothTime(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_cheatButtonsIsPrimed(bool  value) ;

constexpr void __cordl_internal_set_cheatTextIsPrimed(bool  value) ;

constexpr void __cordl_internal_set_ghostMovementScalar(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_nextPoint(int32_t  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_starsDisabled(bool  value) ;

/// @brief Method .ctor, addr 0x180462430, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_noMuteEffects, addr 0x180462440, size 0x10, virtual false, abstract: false, final false
inline bool get_noMuteEffects() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCheater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCheater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCheater(PlayerCheater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCheater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCheater(PlayerCheater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5445};

/// @brief Field playerCharacter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field cheatTextIsPrimed, offset: 0x18, size: 0x1, def value: None
 bool  ___cheatTextIsPrimed;

/// @brief Field cheatButtonsIsPrimed, offset: 0x19, size: 0x1, def value: None
 bool  ___cheatButtonsIsPrimed;

/// @brief Field cameraCheatMover, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraCheatMover>  ___cameraCheatMover;

/// @brief Field nextPoint, offset: 0x28, size: 0x4, def value: None
 int32_t  ___nextPoint;

/// @brief Field ghostMovementScalar, offset: 0x2c, size: 0x4, def value: None
 float_t  ___ghostMovementScalar;

/// @brief Field LockedRay, offset: 0x30, size: 0x1c, def value: None
 ::System::Nullable_1<::UnityEngine::Ray>  ___LockedRay;

/// @brief Field logVerbose, offset: 0x4c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _trailerAudio, offset: 0x4d, size: 0x1, def value: None
 bool  ____trailerAudio;

/// @brief Field _musicToggle, offset: 0x4e, size: 0x1, def value: None
 bool  ____musicToggle;

/// @brief Field _noMuteEffects, offset: 0x4f, size: 0x1, def value: None
 bool  ____noMuteEffects;

/// @brief Field _voiceToggle, offset: 0x50, size: 0x1, def value: None
 bool  ____voiceToggle;

/// @brief Field _voice2DToggle, offset: 0x51, size: 0x1, def value: None
 bool  ____voice2DToggle;

/// @brief Field _voice2DSet, offset: 0x52, size: 0x1, def value: None
 bool  ____voice2DSet;

/// @brief Field starsDisabled, offset: 0x53, size: 0x1, def value: None
 bool  ___starsDisabled;

/// @brief Field _cameraDampPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cameraDampPosition;

/// @brief Field _cameraDampVelocity, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cameraDampVelocity;

/// @brief Field cameraDampSmoothTime, offset: 0x6c, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___cameraDampSmoothTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___playerCharacter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___cheatTextIsPrimed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___cheatButtonsIsPrimed) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___cameraCheatMover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___nextPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___ghostMovementScalar) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___LockedRay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___logVerbose) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____trailerAudio) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____musicToggle) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____noMuteEffects) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____voiceToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____voice2DToggle) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____voice2DSet) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___starsDisabled) == 0x53, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____cameraDampPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ____cameraDampVelocity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCheater, ___cameraDampSmoothTime) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCheater) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
