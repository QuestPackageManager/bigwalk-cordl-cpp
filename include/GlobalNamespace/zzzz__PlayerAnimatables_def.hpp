#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAnimatables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeakPostureMask_def.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerAnimatables)
// Forward declare root types
namespace GlobalNamespace {
class PlayerAnimatables;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerAnimatables*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerAnimatables*, "", "PlayerAnimatables");
// Dependencies BeakPosture, BeakPostureMask, PlayerEyeMood, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerAnimatables
class CORDL_TYPE PlayerAnimatables : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field beakPostureAdditive, offset 0x28, size 0x48 
 __declspec(property(get=__cordl_internal_get_beakPostureAdditive, put=__cordl_internal_set_beakPostureAdditive)) ::GlobalNamespace::BeakPosture  beakPostureAdditive;

/// @brief Field beakPostureOverride, offset 0x70, size 0x48 
 __declspec(property(get=__cordl_internal_get_beakPostureOverride, put=__cordl_internal_set_beakPostureOverride)) ::GlobalNamespace::BeakPosture  beakPostureOverride;

/// @brief Field beakPostureOverridesMask, offset 0xb8, size 0x1c 
 __declspec(property(get=__cordl_internal_get_beakPostureOverridesMask, put=__cordl_internal_set_beakPostureOverridesMask)) ::GlobalNamespace::BeakPostureMask  beakPostureOverridesMask;

/// @brief Field bobOffsetElbowLeft, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobOffsetElbowLeft, put=__cordl_internal_set_bobOffsetElbowLeft)) float_t  bobOffsetElbowLeft;

/// @brief Field bobOffsetElbowRight, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobOffsetElbowRight, put=__cordl_internal_set_bobOffsetElbowRight)) float_t  bobOffsetElbowRight;

/// @brief Field bobOffsetHandLeft, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobOffsetHandLeft, put=__cordl_internal_set_bobOffsetHandLeft)) float_t  bobOffsetHandLeft;

/// @brief Field bobOffsetHandRight, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobOffsetHandRight, put=__cordl_internal_set_bobOffsetHandRight)) float_t  bobOffsetHandRight;

/// @brief Field eyeMood, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeMood, put=__cordl_internal_set_eyeMood)) ::GlobalNamespace::PlayerEyeMood  eyeMood;

/// @brief Field eyeOffsetLeft, offset 0xd4, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeOffsetLeft, put=__cordl_internal_set_eyeOffsetLeft)) ::UnityEngine::Vector2  eyeOffsetLeft;

/// @brief Field eyeOffsetRight, offset 0xdc, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeOffsetRight, put=__cordl_internal_set_eyeOffsetRight)) ::UnityEngine::Vector2  eyeOffsetRight;

/// @brief Field fovChange, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_fovChange, put=__cordl_internal_set_fovChange)) float_t  fovChange;

/// @brief Field grapserToHeadBone, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_grapserToHeadBone, put=__cordl_internal_set_grapserToHeadBone)) float_t  grapserToHeadBone;

/// @brief Field overrideDefaultEyeMood, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideDefaultEyeMood, put=__cordl_internal_set_overrideDefaultEyeMood)) bool  overrideDefaultEyeMood;

/// @brief Field raisedBlockness, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_raisedBlockness, put=__cordl_internal_set_raisedBlockness)) float_t  raisedBlockness;

/// @brief Field screenSpaceElbowLeft, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_screenSpaceElbowLeft, put=__cordl_internal_set_screenSpaceElbowLeft)) float_t  screenSpaceElbowLeft;

/// @brief Field screenSpaceElbowRight, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_screenSpaceElbowRight, put=__cordl_internal_set_screenSpaceElbowRight)) float_t  screenSpaceElbowRight;

/// @brief Field screenSpaceHandLeft, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_screenSpaceHandLeft, put=__cordl_internal_set_screenSpaceHandLeft)) float_t  screenSpaceHandLeft;

/// @brief Field screenSpaceHandRight, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_screenSpaceHandRight, put=__cordl_internal_set_screenSpaceHandRight)) float_t  screenSpaceHandRight;

/// @brief Field ssaLowerLimitLocal, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_ssaLowerLimitLocal, put=__cordl_internal_set_ssaLowerLimitLocal)) float_t  ssaLowerLimitLocal;

/// @brief Field ssaLowerLimitRemote, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ssaLowerLimitRemote, put=__cordl_internal_set_ssaLowerLimitRemote)) float_t  ssaLowerLimitRemote;

/// @brief Field ssaUpperLimitLocal, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_ssaUpperLimitLocal, put=__cordl_internal_set_ssaUpperLimitLocal)) float_t  ssaUpperLimitLocal;

/// @brief Field ssaUpperLimitRemote, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_ssaUpperLimitRemote, put=__cordl_internal_set_ssaUpperLimitRemote)) float_t  ssaUpperLimitRemote;

static inline ::GlobalNamespace::PlayerAnimatables* New_ctor() ;

constexpr ::GlobalNamespace::BeakPosture const& __cordl_internal_get_beakPostureAdditive() const;

constexpr ::GlobalNamespace::BeakPosture& __cordl_internal_get_beakPostureAdditive() ;

constexpr ::GlobalNamespace::BeakPosture const& __cordl_internal_get_beakPostureOverride() const;

constexpr ::GlobalNamespace::BeakPosture& __cordl_internal_get_beakPostureOverride() ;

constexpr ::GlobalNamespace::BeakPostureMask const& __cordl_internal_get_beakPostureOverridesMask() const;

constexpr ::GlobalNamespace::BeakPostureMask& __cordl_internal_get_beakPostureOverridesMask() ;

constexpr float_t const& __cordl_internal_get_bobOffsetElbowLeft() const;

constexpr float_t& __cordl_internal_get_bobOffsetElbowLeft() ;

constexpr float_t const& __cordl_internal_get_bobOffsetElbowRight() const;

constexpr float_t& __cordl_internal_get_bobOffsetElbowRight() ;

constexpr float_t const& __cordl_internal_get_bobOffsetHandLeft() const;

constexpr float_t& __cordl_internal_get_bobOffsetHandLeft() ;

constexpr float_t const& __cordl_internal_get_bobOffsetHandRight() const;

constexpr float_t& __cordl_internal_get_bobOffsetHandRight() ;

constexpr ::GlobalNamespace::PlayerEyeMood const& __cordl_internal_get_eyeMood() const;

constexpr ::GlobalNamespace::PlayerEyeMood& __cordl_internal_get_eyeMood() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_eyeOffsetLeft() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_eyeOffsetLeft() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_eyeOffsetRight() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_eyeOffsetRight() ;

constexpr float_t const& __cordl_internal_get_fovChange() const;

constexpr float_t& __cordl_internal_get_fovChange() ;

constexpr float_t const& __cordl_internal_get_grapserToHeadBone() const;

constexpr float_t& __cordl_internal_get_grapserToHeadBone() ;

constexpr bool const& __cordl_internal_get_overrideDefaultEyeMood() const;

constexpr bool& __cordl_internal_get_overrideDefaultEyeMood() ;

constexpr float_t const& __cordl_internal_get_raisedBlockness() const;

constexpr float_t& __cordl_internal_get_raisedBlockness() ;

constexpr float_t const& __cordl_internal_get_screenSpaceElbowLeft() const;

constexpr float_t& __cordl_internal_get_screenSpaceElbowLeft() ;

constexpr float_t const& __cordl_internal_get_screenSpaceElbowRight() const;

constexpr float_t& __cordl_internal_get_screenSpaceElbowRight() ;

constexpr float_t const& __cordl_internal_get_screenSpaceHandLeft() const;

constexpr float_t& __cordl_internal_get_screenSpaceHandLeft() ;

constexpr float_t const& __cordl_internal_get_screenSpaceHandRight() const;

constexpr float_t& __cordl_internal_get_screenSpaceHandRight() ;

constexpr float_t const& __cordl_internal_get_ssaLowerLimitLocal() const;

constexpr float_t& __cordl_internal_get_ssaLowerLimitLocal() ;

constexpr float_t const& __cordl_internal_get_ssaLowerLimitRemote() const;

constexpr float_t& __cordl_internal_get_ssaLowerLimitRemote() ;

constexpr float_t const& __cordl_internal_get_ssaUpperLimitLocal() const;

constexpr float_t& __cordl_internal_get_ssaUpperLimitLocal() ;

constexpr float_t const& __cordl_internal_get_ssaUpperLimitRemote() const;

constexpr float_t& __cordl_internal_get_ssaUpperLimitRemote() ;

constexpr void __cordl_internal_set_beakPostureAdditive(::GlobalNamespace::BeakPosture  value) ;

constexpr void __cordl_internal_set_beakPostureOverride(::GlobalNamespace::BeakPosture  value) ;

constexpr void __cordl_internal_set_beakPostureOverridesMask(::GlobalNamespace::BeakPostureMask  value) ;

constexpr void __cordl_internal_set_bobOffsetElbowLeft(float_t  value) ;

constexpr void __cordl_internal_set_bobOffsetElbowRight(float_t  value) ;

constexpr void __cordl_internal_set_bobOffsetHandLeft(float_t  value) ;

constexpr void __cordl_internal_set_bobOffsetHandRight(float_t  value) ;

constexpr void __cordl_internal_set_eyeMood(::GlobalNamespace::PlayerEyeMood  value) ;

constexpr void __cordl_internal_set_eyeOffsetLeft(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_eyeOffsetRight(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_fovChange(float_t  value) ;

constexpr void __cordl_internal_set_grapserToHeadBone(float_t  value) ;

constexpr void __cordl_internal_set_overrideDefaultEyeMood(bool  value) ;

constexpr void __cordl_internal_set_raisedBlockness(float_t  value) ;

constexpr void __cordl_internal_set_screenSpaceElbowLeft(float_t  value) ;

constexpr void __cordl_internal_set_screenSpaceElbowRight(float_t  value) ;

constexpr void __cordl_internal_set_screenSpaceHandLeft(float_t  value) ;

constexpr void __cordl_internal_set_screenSpaceHandRight(float_t  value) ;

constexpr void __cordl_internal_set_ssaLowerLimitLocal(float_t  value) ;

constexpr void __cordl_internal_set_ssaLowerLimitRemote(float_t  value) ;

constexpr void __cordl_internal_set_ssaUpperLimitLocal(float_t  value) ;

constexpr void __cordl_internal_set_ssaUpperLimitRemote(float_t  value) ;

/// @brief Method .ctor, addr 0x18035da70, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerAnimatables() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerAnimatables", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerAnimatables(PlayerAnimatables && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAnimatables", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerAnimatables(PlayerAnimatables const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5493};

/// @brief Field raisedBlockness, offset: 0x20, size: 0x4, def value: None
 float_t  ___raisedBlockness;

/// @brief Field grapserToHeadBone, offset: 0x24, size: 0x4, def value: None
 float_t  ___grapserToHeadBone;

/// @brief Field beakPostureAdditive, offset: 0x28, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  ___beakPostureAdditive;

/// @brief Field beakPostureOverride, offset: 0x70, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  ___beakPostureOverride;

/// @brief Field beakPostureOverridesMask, offset: 0xb8, size: 0x1c, def value: None
 ::GlobalNamespace::BeakPostureMask  ___beakPostureOverridesMask;

/// @brief Field eyeOffsetLeft, offset: 0xd4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___eyeOffsetLeft;

/// @brief Field eyeOffsetRight, offset: 0xdc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___eyeOffsetRight;

/// @brief Field overrideDefaultEyeMood, offset: 0xe4, size: 0x1, def value: None
 bool  ___overrideDefaultEyeMood;

/// @brief Field eyeMood, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEyeMood  ___eyeMood;

/// @brief Field fovChange, offset: 0xec, size: 0x4, def value: None
 float_t  ___fovChange;

/// @brief Field screenSpaceHandLeft, offset: 0xf0, size: 0x4, def value: None
 float_t  ___screenSpaceHandLeft;

/// @brief Field screenSpaceHandRight, offset: 0xf4, size: 0x4, def value: None
 float_t  ___screenSpaceHandRight;

/// @brief Field screenSpaceElbowLeft, offset: 0xf8, size: 0x4, def value: None
 float_t  ___screenSpaceElbowLeft;

/// @brief Field screenSpaceElbowRight, offset: 0xfc, size: 0x4, def value: None
 float_t  ___screenSpaceElbowRight;

/// @brief Field ssaUpperLimitLocal, offset: 0x100, size: 0x4, def value: None
 float_t  ___ssaUpperLimitLocal;

/// @brief Field ssaLowerLimitLocal, offset: 0x104, size: 0x4, def value: None
 float_t  ___ssaLowerLimitLocal;

/// @brief Field ssaUpperLimitRemote, offset: 0x108, size: 0x4, def value: None
 float_t  ___ssaUpperLimitRemote;

/// @brief Field ssaLowerLimitRemote, offset: 0x10c, size: 0x4, def value: None
 float_t  ___ssaLowerLimitRemote;

/// @brief Field bobOffsetHandLeft, offset: 0x110, size: 0x4, def value: None
 float_t  ___bobOffsetHandLeft;

/// @brief Field bobOffsetHandRight, offset: 0x114, size: 0x4, def value: None
 float_t  ___bobOffsetHandRight;

/// @brief Field bobOffsetElbowLeft, offset: 0x118, size: 0x4, def value: None
 float_t  ___bobOffsetElbowLeft;

/// @brief Field bobOffsetElbowRight, offset: 0x11c, size: 0x4, def value: None
 float_t  ___bobOffsetElbowRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___raisedBlockness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___grapserToHeadBone) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___beakPostureAdditive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___beakPostureOverride) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___beakPostureOverridesMask) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___eyeOffsetLeft) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___eyeOffsetRight) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___overrideDefaultEyeMood) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___eyeMood) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___fovChange) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___screenSpaceHandLeft) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___screenSpaceHandRight) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___screenSpaceElbowLeft) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___screenSpaceElbowRight) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___ssaUpperLimitLocal) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___ssaLowerLimitLocal) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___ssaUpperLimitRemote) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___ssaLowerLimitRemote) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___bobOffsetHandLeft) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___bobOffsetHandRight) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___bobOffsetElbowLeft) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAnimatables, ___bobOffsetElbowRight) == 0x11c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerAnimatables) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
