#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PlayerRegistry)
namespace GlobalNamespace {
class LimbSpline;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class PropHome;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerRegistry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerRegistry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerRegistry*, "", "PlayerRegistry");
// Dependencies System.Object, UnityEngine.Collider
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerRegistry
class CORDL_TYPE PlayerRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field armUprightBone, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_armUprightBone, put=__cordl_internal_set_armUprightBone)) ::UnityW<::UnityEngine::Transform>  armUprightBone;

/// @brief Field backpackPocket, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_backpackPocket, put=__cordl_internal_set_backpackPocket)) ::UnityW<::GlobalNamespace::PropHome>  backpackPocket;

/// @brief Field backpackTextChatAim, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_backpackTextChatAim, put=__cordl_internal_set_backpackTextChatAim)) ::UnityW<::UnityEngine::Transform>  backpackTextChatAim;

/// @brief Field blindfoldPocket, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blindfoldPocket, put=__cordl_internal_set_blindfoldPocket)) ::UnityW<::GlobalNamespace::PropHome>  blindfoldPocket;

/// @brief Field bobOffsetBone, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_bobOffsetBone, put=__cordl_internal_set_bobOffsetBone)) ::UnityW<::UnityEngine::Transform>  bobOffsetBone;

/// @brief Field corpsePrefab, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_corpsePrefab, put=__cordl_internal_set_corpsePrefab)) ::UnityW<::UnityEngine::GameObject>  corpsePrefab;

/// @brief Field fakeHolster, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fakeHolster, put=__cordl_internal_set_fakeHolster)) ::UnityW<::UnityEngine::MeshRenderer>  fakeHolster;

/// @brief Field grabCollider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabCollider, put=__cordl_internal_set_grabCollider)) ::UnityW<::UnityEngine::Collider>  grabCollider;

/// @brief Field grabPose, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPose, put=__cordl_internal_set_grabPose)) ::UnityW<::GlobalNamespace::PlayerPose>  grabPose;

/// @brief Field headBone, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headBone, put=__cordl_internal_set_headBone)) ::UnityW<::UnityEngine::Transform>  headBone;

/// @brief Field headMeshFilter, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_headMeshFilter, put=__cordl_internal_set_headMeshFilter)) ::UnityW<::UnityEngine::MeshFilter>  headMeshFilter;

/// @brief Field holsterPocket, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_holsterPocket, put=__cordl_internal_set_holsterPocket)) ::UnityW<::GlobalNamespace::PropHome>  holsterPocket;

/// @brief Field holsterTextChatAim, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_holsterTextChatAim, put=__cordl_internal_set_holsterTextChatAim)) ::UnityW<::UnityEngine::Transform>  holsterTextChatAim;

/// @brief Field leftElbow, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftElbow, put=__cordl_internal_set_leftElbow)) ::UnityW<::UnityEngine::Transform>  leftElbow;

/// @brief Field leftFoot, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftFoot, put=__cordl_internal_set_leftFoot)) ::UnityW<::UnityEngine::Transform>  leftFoot;

/// @brief Field leftKnee, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftKnee, put=__cordl_internal_set_leftKnee)) ::UnityW<::UnityEngine::Transform>  leftKnee;

/// @brief Field leftLegLimbSpline, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftLegLimbSpline, put=__cordl_internal_set_leftLegLimbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  leftLegLimbSpline;

/// @brief Field localBum, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_localBum, put=__cordl_internal_set_localBum)) ::UnityW<::UnityEngine::Transform>  localBum;

/// @brief Field localLeftElbow, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_localLeftElbow, put=__cordl_internal_set_localLeftElbow)) ::UnityW<::UnityEngine::Transform>  localLeftElbow;

/// @brief Field localLeftLegLimbSpline, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_localLeftLegLimbSpline, put=__cordl_internal_set_localLeftLegLimbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  localLeftLegLimbSpline;

/// @brief Field localRightElbow, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRightElbow, put=__cordl_internal_set_localRightElbow)) ::UnityW<::UnityEngine::Transform>  localRightElbow;

/// @brief Field localRightLegLimbSpline, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRightLegLimbSpline, put=__cordl_internal_set_localRightLegLimbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  localRightLegLimbSpline;

/// @brief Field playerZoner, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZoner, put=__cordl_internal_set_playerZoner)) ::UnityW<::UnityEngine::Transform>  playerZoner;

/// @brief Field poseLeftGrip, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseLeftGrip, put=__cordl_internal_set_poseLeftGrip)) ::UnityW<::UnityEngine::Transform>  poseLeftGrip;

/// @brief Field poseLeftGripSitting, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseLeftGripSitting, put=__cordl_internal_set_poseLeftGripSitting)) ::UnityW<::UnityEngine::Transform>  poseLeftGripSitting;

/// @brief Field poseLeftGripSittingLocal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseLeftGripSittingLocal, put=__cordl_internal_set_poseLeftGripSittingLocal)) ::UnityW<::UnityEngine::Transform>  poseLeftGripSittingLocal;

/// @brief Field poseRightGrip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseRightGrip, put=__cordl_internal_set_poseRightGrip)) ::UnityW<::UnityEngine::Transform>  poseRightGrip;

/// @brief Field poseRightGripSitting, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseRightGripSitting, put=__cordl_internal_set_poseRightGripSitting)) ::UnityW<::UnityEngine::Transform>  poseRightGripSitting;

/// @brief Field poseRightGripSittingLocal, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_poseRightGripSittingLocal, put=__cordl_internal_set_poseRightGripSittingLocal)) ::UnityW<::UnityEngine::Transform>  poseRightGripSittingLocal;

/// @brief Field rightElbow, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightElbow, put=__cordl_internal_set_rightElbow)) ::UnityW<::UnityEngine::Transform>  rightElbow;

/// @brief Field rightFoot, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightFoot, put=__cordl_internal_set_rightFoot)) ::UnityW<::UnityEngine::Transform>  rightFoot;

/// @brief Field rightKnee, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightKnee, put=__cordl_internal_set_rightKnee)) ::UnityW<::UnityEngine::Transform>  rightKnee;

/// @brief Field rightLegLimbSpline, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightLegLimbSpline, put=__cordl_internal_set_rightLegLimbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  rightLegLimbSpline;

/// @brief Field root, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field screenSpacePivotLocal, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenSpacePivotLocal, put=__cordl_internal_set_screenSpacePivotLocal)) ::UnityW<::UnityEngine::Transform>  screenSpacePivotLocal;

/// @brief Field screenSpacePivotRemote, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenSpacePivotRemote, put=__cordl_internal_set_screenSpacePivotRemote)) ::UnityW<::UnityEngine::Transform>  screenSpacePivotRemote;

/// @brief Field segmentColliders, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_segmentColliders, put=__cordl_internal_set_segmentColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  segmentColliders;

static inline ::GlobalNamespace::PlayerRegistry* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_armUprightBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_armUprightBone() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_backpackPocket() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_backpackPocket() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_backpackTextChatAim() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_backpackTextChatAim() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_blindfoldPocket() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_blindfoldPocket() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bobOffsetBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bobOffsetBone() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_corpsePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_corpsePrefab() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_fakeHolster() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_fakeHolster() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_grabCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_grabCollider() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_grabPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_grabPose() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headBone() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_headMeshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_headMeshFilter() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_holsterPocket() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_holsterPocket() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_holsterTextChatAim() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_holsterTextChatAim() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftElbow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftElbow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftFoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftFoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftKnee() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftKnee() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_leftLegLimbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_leftLegLimbSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_localBum() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_localBum() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_localLeftElbow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_localLeftElbow() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_localLeftLegLimbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_localLeftLegLimbSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_localRightElbow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_localRightElbow() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_localRightLegLimbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_localRightLegLimbSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerZoner() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerZoner() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseLeftGrip() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseLeftGrip() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseLeftGripSitting() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseLeftGripSitting() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseLeftGripSittingLocal() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseLeftGripSittingLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseRightGrip() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseRightGrip() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseRightGripSitting() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseRightGripSitting() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poseRightGripSittingLocal() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poseRightGripSittingLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightElbow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightElbow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightFoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightFoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightKnee() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightKnee() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_rightLegLimbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_rightLegLimbSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_screenSpacePivotLocal() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_screenSpacePivotLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_screenSpacePivotRemote() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_screenSpacePivotRemote() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_segmentColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_segmentColliders() ;

constexpr void __cordl_internal_set_armUprightBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_backpackPocket(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_backpackTextChatAim(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_blindfoldPocket(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_bobOffsetBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_corpsePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fakeHolster(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_grabCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_grabPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

constexpr void __cordl_internal_set_headBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_headMeshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_holsterPocket(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_holsterTextChatAim(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftElbow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftFoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftKnee(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_localBum(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localLeftElbow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localLeftLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_localRightElbow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localRightLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_playerZoner(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseLeftGrip(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseLeftGripSitting(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseLeftGripSittingLocal(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseRightGrip(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseRightGripSitting(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_poseRightGripSittingLocal(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightElbow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightFoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightKnee(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_screenSpacePivotLocal(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_screenSpacePivotRemote(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_segmentColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerRegistry(PlayerRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerRegistry(PlayerRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5477};

/// @brief Field grabCollider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___grabCollider;

/// @brief Field grabPose, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___grabPose;

/// @brief Field poseLeftGrip, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseLeftGrip;

/// @brief Field poseRightGrip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseRightGrip;

/// @brief Field poseLeftGripSitting, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseLeftGripSitting;

/// @brief Field poseRightGripSitting, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseRightGripSitting;

/// @brief Field poseLeftGripSittingLocal, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseLeftGripSittingLocal;

/// @brief Field poseRightGripSittingLocal, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poseRightGripSittingLocal;

/// @brief Field segmentColliders, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___segmentColliders;

/// @brief Field corpsePrefab, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___corpsePrefab;

/// @brief Field leftElbow, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftElbow;

/// @brief Field localLeftElbow, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___localLeftElbow;

/// @brief Field rightElbow, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightElbow;

/// @brief Field localRightElbow, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___localRightElbow;

/// @brief Field bobOffsetBone, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___bobOffsetBone;

/// @brief Field armUprightBone, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___armUprightBone;

/// @brief Field screenSpacePivotRemote, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___screenSpacePivotRemote;

/// @brief Field screenSpacePivotLocal, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___screenSpacePivotLocal;

/// @brief Field leftKnee, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftKnee;

/// @brief Field rightKnee, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightKnee;

/// @brief Field blindfoldPocket, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___blindfoldPocket;

/// @brief Field backpackPocket, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___backpackPocket;

/// @brief Field holsterPocket, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___holsterPocket;

/// @brief Field localBum, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___localBum;

/// @brief Field root, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___root;

/// @brief Field headBone, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headBone;

/// @brief Field playerZoner, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerZoner;

/// @brief Field fakeHolster, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___fakeHolster;

/// @brief Field leftFoot, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftFoot;

/// @brief Field rightFoot, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightFoot;

/// @brief Field leftLegLimbSpline, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___leftLegLimbSpline;

/// @brief Field rightLegLimbSpline, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___rightLegLimbSpline;

/// @brief Field localLeftLegLimbSpline, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___localLeftLegLimbSpline;

/// @brief Field localRightLegLimbSpline, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___localRightLegLimbSpline;

/// @brief Field headMeshFilter, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___headMeshFilter;

/// @brief Field holsterTextChatAim, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___holsterTextChatAim;

/// @brief Field backpackTextChatAim, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___backpackTextChatAim;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___grabCollider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___grabPose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___poseLeftGrip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___poseRightGrip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___poseLeftGripSitting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___poseRightGripSitting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___poseLeftGripSittingLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___poseRightGripSittingLocal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___segmentColliders) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___corpsePrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___leftElbow) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___localLeftElbow) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___rightElbow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___localRightElbow) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___bobOffsetBone) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___armUprightBone) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___screenSpacePivotRemote) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___screenSpacePivotLocal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___leftKnee) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___rightKnee) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___blindfoldPocket) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___backpackPocket) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___holsterPocket) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___localBum) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___root) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___headBone) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___playerZoner) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___fakeHolster) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___leftFoot) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___rightFoot) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___leftLegLimbSpline) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___rightLegLimbSpline) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___localLeftLegLimbSpline) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___localRightLegLimbSpline) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___headMeshFilter) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___holsterTextChatAim) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerRegistry, ___backpackTextChatAim) == 0x130, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerRegistry) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
