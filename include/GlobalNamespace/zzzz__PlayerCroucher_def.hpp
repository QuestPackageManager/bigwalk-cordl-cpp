#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCroucher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCroucher)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CapsuleCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCroucher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCroucher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCroucher*, "", "PlayerCroucher");
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCroucher
class CORDL_TYPE PlayerCroucher : public ::System::Object {
public:
// Declarations
/// @brief Field OnCrouchDown, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCrouchDown, put=__cordl_internal_set_OnCrouchDown)) ::System::Action*  OnCrouchDown;

/// @brief Field OnCrouchUp, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCrouchUp, put=__cordl_internal_set_OnCrouchUp)) ::System::Action*  OnCrouchUp;

/// @brief Field _playedGrabSound, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__playedGrabSound, put=__cordl_internal_set__playedGrabSound)) bool  _playedGrabSound;

/// @brief Field _prevCrouchness, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevCrouchness, put=__cordl_internal_set__prevCrouchness)) float_t  _prevCrouchness;

 __declspec(property(get=get_authoritiveTrueCrouchness)) float_t  authoritiveTrueCrouchness;

/// @brief Field cheatCameraOffset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cheatCameraOffset, put=__cordl_internal_set_cheatCameraOffset)) float_t  cheatCameraOffset;

/// @brief Field colliderCompressness, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_colliderCompressness, put=__cordl_internal_set_colliderCompressness)) float_t  colliderCompressness;

/// @brief Field colliderHeightDelta, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_colliderHeightDelta, put=__cordl_internal_set_colliderHeightDelta)) float_t  colliderHeightDelta;

/// @brief Field crouchCameraOffset, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crouchCameraOffset, put=__cordl_internal_set_crouchCameraOffset)) float_t  crouchCameraOffset;

/// @brief Field crouchIsToggledOn, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_crouchIsToggledOn, put=__cordl_internal_set_crouchIsToggledOn)) bool  crouchIsToggledOn;

/// @brief Field crouchOnlyDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crouchOnlyDistance, put=__cordl_internal_set_crouchOnlyDistance)) float_t  crouchOnlyDistance;

/// @brief Field crouchSmoothTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_crouchSmoothTime, put=__cordl_internal_set_crouchSmoothTime)) float_t  crouchSmoothTime;

/// @brief Field drawDebug, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawDebug, put=__cordl_internal_set_drawDebug)) bool  drawDebug;

/// @brief Field fullCastDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullCastDistance, put=__cordl_internal_set_fullCastDistance)) float_t  fullCastDistance;

/// @brief Field hit, offset 0x90, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

 __declspec(property(get=get_isCrouchingAuthorative)) bool  isCrouchingAuthorative;

/// @brief Field lastPose, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPose, put=__cordl_internal_set_lastPose)) ::UnityW<::GlobalNamespace::PlayerPose>  lastPose;

/// @brief Field layerMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field localTrueCrouchness, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_localTrueCrouchness, put=__cordl_internal_set_localTrueCrouchness)) float_t  localTrueCrouchness;

/// @brief Field mainCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCollider, put=__cordl_internal_set_mainCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  mainCollider;

/// @brief Field menuBlockFrames, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_menuBlockFrames, put=__cordl_internal_set_menuBlockFrames)) int32_t  menuBlockFrames;

/// @brief Field originalColliderCenter, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalColliderCenter, put=__cordl_internal_set_originalColliderCenter)) ::UnityEngine::Vector3  originalColliderCenter;

/// @brief Field originalColliderHeight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalColliderHeight, put=__cordl_internal_set_originalColliderHeight)) float_t  originalColliderHeight;

/// @brief Field pc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc, put=__cordl_internal_set_pc)) ::UnityW<::GlobalNamespace::PlayerCharacter>  pc;

/// @brief Field posenessVel, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_posenessVel, put=__cordl_internal_set_posenessVel)) float_t  posenessVel;

/// @brief Field smoothPoseness, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothPoseness, put=__cordl_internal_set_smoothPoseness)) float_t  smoothPoseness;

/// @brief Field smoothedCrouchness, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothedCrouchness, put=__cordl_internal_set_smoothedCrouchness)) float_t  smoothedCrouchness;

/// @brief Field smoothedCrouchnessVel, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothedCrouchnessVel, put=__cordl_internal_set_smoothedCrouchnessVel)) float_t  smoothedCrouchnessVel;

/// @brief Method CanPlayersFitAboveMe, addr 0x180463660, size 0x210, virtual false, abstract: false, final false
inline bool CanPlayersFitAboveMe(int32_t  howManyPlayers) ;

/// @brief Method ClearToggles, addr 0x180463870, size 0x10, virtual false, abstract: false, final false
inline void ClearToggles() ;

/// @brief Method GetMinCrouchness, addr 0x180463880, size 0x180, virtual false, abstract: false, final false
inline float_t GetMinCrouchness() ;

/// @brief Method Initialize, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerCroucher* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x180463a00, size 0x130, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected(::GlobalNamespace::PlayerCharacter*  pc) ;

/// @brief Method Update, addr 0x180464ea0, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAudio, addr 0x180463b30, size 0xcb0, virtual false, abstract: false, final false
inline void UpdateAudio() ;

/// @brief Method UpdateFromBasics, addr 0x1804647e0, size 0x500, virtual false, abstract: false, final false
inline void UpdateFromBasics() ;

/// @brief Method UpdateLocal, addr 0x180464ce0, size 0x1c0, virtual false, abstract: false, final false
inline void UpdateLocal() ;

constexpr ::System::Action* const& __cordl_internal_get_OnCrouchDown() const;

constexpr ::System::Action*& __cordl_internal_get_OnCrouchDown() ;

constexpr ::System::Action* const& __cordl_internal_get_OnCrouchUp() const;

constexpr ::System::Action*& __cordl_internal_get_OnCrouchUp() ;

constexpr bool const& __cordl_internal_get__playedGrabSound() const;

constexpr bool& __cordl_internal_get__playedGrabSound() ;

constexpr float_t const& __cordl_internal_get__prevCrouchness() const;

constexpr float_t& __cordl_internal_get__prevCrouchness() ;

constexpr float_t const& __cordl_internal_get_cheatCameraOffset() const;

constexpr float_t& __cordl_internal_get_cheatCameraOffset() ;

constexpr float_t const& __cordl_internal_get_colliderCompressness() const;

constexpr float_t& __cordl_internal_get_colliderCompressness() ;

constexpr float_t const& __cordl_internal_get_colliderHeightDelta() const;

constexpr float_t& __cordl_internal_get_colliderHeightDelta() ;

constexpr float_t const& __cordl_internal_get_crouchCameraOffset() const;

constexpr float_t& __cordl_internal_get_crouchCameraOffset() ;

constexpr bool const& __cordl_internal_get_crouchIsToggledOn() const;

constexpr bool& __cordl_internal_get_crouchIsToggledOn() ;

constexpr float_t const& __cordl_internal_get_crouchOnlyDistance() const;

constexpr float_t& __cordl_internal_get_crouchOnlyDistance() ;

constexpr float_t const& __cordl_internal_get_crouchSmoothTime() const;

constexpr float_t& __cordl_internal_get_crouchSmoothTime() ;

constexpr bool const& __cordl_internal_get_drawDebug() const;

constexpr bool& __cordl_internal_get_drawDebug() ;

constexpr float_t const& __cordl_internal_get_fullCastDistance() const;

constexpr float_t& __cordl_internal_get_fullCastDistance() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_lastPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_lastPose() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr float_t const& __cordl_internal_get_localTrueCrouchness() const;

constexpr float_t& __cordl_internal_get_localTrueCrouchness() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_mainCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_mainCollider() ;

constexpr int32_t const& __cordl_internal_get_menuBlockFrames() const;

constexpr int32_t& __cordl_internal_get_menuBlockFrames() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalColliderCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalColliderCenter() ;

constexpr float_t const& __cordl_internal_get_originalColliderHeight() const;

constexpr float_t& __cordl_internal_get_originalColliderHeight() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_pc() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_pc() ;

constexpr float_t const& __cordl_internal_get_posenessVel() const;

constexpr float_t& __cordl_internal_get_posenessVel() ;

constexpr float_t const& __cordl_internal_get_smoothPoseness() const;

constexpr float_t& __cordl_internal_get_smoothPoseness() ;

constexpr float_t const& __cordl_internal_get_smoothedCrouchness() const;

constexpr float_t& __cordl_internal_get_smoothedCrouchness() ;

constexpr float_t const& __cordl_internal_get_smoothedCrouchnessVel() const;

constexpr float_t& __cordl_internal_get_smoothedCrouchnessVel() ;

constexpr void __cordl_internal_set_OnCrouchDown(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnCrouchUp(::System::Action*  value) ;

constexpr void __cordl_internal_set__playedGrabSound(bool  value) ;

constexpr void __cordl_internal_set__prevCrouchness(float_t  value) ;

constexpr void __cordl_internal_set_cheatCameraOffset(float_t  value) ;

constexpr void __cordl_internal_set_colliderCompressness(float_t  value) ;

constexpr void __cordl_internal_set_colliderHeightDelta(float_t  value) ;

constexpr void __cordl_internal_set_crouchCameraOffset(float_t  value) ;

constexpr void __cordl_internal_set_crouchIsToggledOn(bool  value) ;

constexpr void __cordl_internal_set_crouchOnlyDistance(float_t  value) ;

constexpr void __cordl_internal_set_crouchSmoothTime(float_t  value) ;

constexpr void __cordl_internal_set_drawDebug(bool  value) ;

constexpr void __cordl_internal_set_fullCastDistance(float_t  value) ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_lastPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_localTrueCrouchness(float_t  value) ;

constexpr void __cordl_internal_set_mainCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_menuBlockFrames(int32_t  value) ;

constexpr void __cordl_internal_set_originalColliderCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_originalColliderHeight(float_t  value) ;

constexpr void __cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_posenessVel(float_t  value) ;

constexpr void __cordl_internal_set_smoothPoseness(float_t  value) ;

constexpr void __cordl_internal_set_smoothedCrouchness(float_t  value) ;

constexpr void __cordl_internal_set_smoothedCrouchnessVel(float_t  value) ;

/// @brief Method .ctor, addr 0x180464ef0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnCrouchDown, addr 0x180464f00, size 0x90, virtual false, abstract: false, final false
inline void add_OnCrouchDown(::System::Action*  value) ;

/// @brief Method add_OnCrouchUp, addr 0x180464f90, size 0x90, virtual false, abstract: false, final false
inline void add_OnCrouchUp(::System::Action*  value) ;

/// @brief Method get_authoritiveTrueCrouchness, addr 0x180465020, size 0x60, virtual false, abstract: false, final false
inline float_t get_authoritiveTrueCrouchness() ;

/// @brief Method get_isCrouchingAuthorative, addr 0x180465080, size 0x70, virtual false, abstract: false, final false
inline bool get_isCrouchingAuthorative() ;

/// @brief Method remove_OnCrouchDown, addr 0x1804650f0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnCrouchDown(::System::Action*  value) ;

/// @brief Method remove_OnCrouchUp, addr 0x180465180, size 0x90, virtual false, abstract: false, final false
inline void remove_OnCrouchUp(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCroucher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCroucher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCroucher(PlayerCroucher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCroucher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCroucher(PlayerCroucher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5447};

/// @brief Field pc, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___pc;

/// @brief Field crouchSmoothTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___crouchSmoothTime;

/// @brief Field crouchCameraOffset, offset: 0x1c, size: 0x4, def value: None
 float_t  ___crouchCameraOffset;

/// @brief Field cheatCameraOffset, offset: 0x20, size: 0x4, def value: None
 float_t  ___cheatCameraOffset;

/// @brief Field localTrueCrouchness, offset: 0x24, size: 0x4, def value: None
 float_t  ___localTrueCrouchness;

/// @brief Field mainCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___mainCollider;

/// @brief Field colliderHeightDelta, offset: 0x30, size: 0x4, def value: None
 float_t  ___colliderHeightDelta;

/// @brief Field originalColliderHeight, offset: 0x34, size: 0x4, def value: None
 float_t  ___originalColliderHeight;

/// @brief Field originalColliderCenter, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalColliderCenter;

/// @brief Field layerMask, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field fullCastDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ___fullCastDistance;

/// @brief Field crouchOnlyDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___crouchOnlyDistance;

/// @brief Field drawDebug, offset: 0x50, size: 0x1, def value: None
 bool  ___drawDebug;

/// @brief Field _prevCrouchness, offset: 0x54, size: 0x4, def value: None
 float_t  ____prevCrouchness;

/// @brief Field _playedGrabSound, offset: 0x58, size: 0x1, def value: None
 bool  ____playedGrabSound;

/// @brief Field crouchIsToggledOn, offset: 0x59, size: 0x1, def value: None
 bool  ___crouchIsToggledOn;

/// @brief Field menuBlockFrames, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___menuBlockFrames;

/// @brief Field smoothPoseness, offset: 0x60, size: 0x4, def value: None
 float_t  ___smoothPoseness;

/// @brief Field posenessVel, offset: 0x64, size: 0x4, def value: None
 float_t  ___posenessVel;

/// @brief Field lastPose, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___lastPose;

/// @brief Field smoothedCrouchness, offset: 0x70, size: 0x4, def value: None
 float_t  ___smoothedCrouchness;

/// @brief Field smoothedCrouchnessVel, offset: 0x74, size: 0x4, def value: None
 float_t  ___smoothedCrouchnessVel;

/// @brief Field colliderCompressness, offset: 0x78, size: 0x4, def value: None
 float_t  ___colliderCompressness;

/// @brief Field OnCrouchDown, offset: 0x80, size: 0x8, def value: None
 ::System::Action*  ___OnCrouchDown;

/// @brief Field OnCrouchUp, offset: 0x88, size: 0x8, def value: None
 ::System::Action*  ___OnCrouchUp;

/// @brief Field hit, offset: 0x90, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___pc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___crouchSmoothTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___crouchCameraOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___cheatCameraOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___localTrueCrouchness) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___mainCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___colliderHeightDelta) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___originalColliderHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___originalColliderCenter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___layerMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___fullCastDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___crouchOnlyDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___drawDebug) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ____prevCrouchness) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ____playedGrabSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___crouchIsToggledOn) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___menuBlockFrames) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___smoothPoseness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___posenessVel) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___lastPose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___smoothedCrouchness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___smoothedCrouchnessVel) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___colliderCompressness) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___OnCrouchDown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___OnCrouchUp) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCroucher, ___hit) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCroucher) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
