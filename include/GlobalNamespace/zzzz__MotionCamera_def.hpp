#pragma once
// IWYU pragma private; include "GlobalNamespace/MotionCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MotionCamera)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MotionCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MotionCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MotionCamera*, "", "MotionCamera");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MotionCamera
class CORDL_TYPE MotionCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field coneAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_coneAngle, put=__cordl_internal_set_coneAngle)) float_t  coneAngle;

/// @brief Field farDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_farDistance, put=__cordl_internal_set_farDistance)) float_t  farDistance;

/// @brief Field isAlarmed, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAlarmed, put=__cordl_internal_set_isAlarmed)) bool  isAlarmed;

/// @brief Field layerMask, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field outputSystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputSystem, put=__cordl_internal_set_outputSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  outputSystem;

/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Method CanSee, addr 0x1804043c0, size 0x410, virtual false, abstract: false, final false
inline bool CanSee(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method CanSeeAnyPlayer, addr 0x180404320, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> CanSeeAnyPlayer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  playerCharacters) ;

static inline ::GlobalNamespace::MotionCamera* New_ctor() ;

/// @brief Method SetAlarmed, addr 0x1804047d0, size 0x50, virtual false, abstract: false, final false
inline void SetAlarmed(bool  newValue) ;

/// @brief Method Update, addr 0x180404820, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_coneAngle() const;

constexpr float_t& __cordl_internal_get_coneAngle() ;

constexpr float_t const& __cordl_internal_get_farDistance() const;

constexpr float_t& __cordl_internal_get_farDistance() ;

constexpr bool const& __cordl_internal_get_isAlarmed() const;

constexpr bool& __cordl_internal_get_isAlarmed() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_outputSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_outputSystem() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr void __cordl_internal_set_coneAngle(float_t  value) ;

constexpr void __cordl_internal_set_farDistance(float_t  value) ;

constexpr void __cordl_internal_set_isAlarmed(bool  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_outputSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MotionCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MotionCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MotionCamera(MotionCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MotionCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MotionCamera(MotionCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5081};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field farDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___farDistance;

/// @brief Field layerMask, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field coneAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___coneAngle;

/// @brief Field outputSystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___outputSystem;

/// @brief Field logVerbose, offset: 0x40, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field isAlarmed, offset: 0x41, size: 0x1, def value: None
 bool  ___isAlarmed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MotionCamera, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MotionCamera, ___farDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MotionCamera, ___layerMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MotionCamera, ___coneAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MotionCamera, ___outputSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MotionCamera, ___logVerbose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MotionCamera, ___isAlarmed) == 0x41, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MotionCamera) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
