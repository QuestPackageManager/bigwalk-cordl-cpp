#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerRegistry::*)()>(&::GlobalNamespace::PlayerRegistry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_grabCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_grabCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabCollider;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_grabCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_grabPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_grabPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPose;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_grabPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPose = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseLeftGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLeftGrip;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseLeftGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLeftGrip;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_poseLeftGrip(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseLeftGrip = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseRightGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseRightGrip;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseRightGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseRightGrip;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_poseRightGrip(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseRightGrip = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseLeftGripSitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLeftGripSitting;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseLeftGripSitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLeftGripSitting;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_poseLeftGripSitting(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseLeftGripSitting = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseRightGripSitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseRightGripSitting;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseRightGripSitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseRightGripSitting;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_poseRightGripSitting(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseRightGripSitting = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseLeftGripSittingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLeftGripSittingLocal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseLeftGripSittingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLeftGripSittingLocal;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_poseLeftGripSittingLocal(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseLeftGripSittingLocal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseRightGripSittingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseRightGripSittingLocal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_poseRightGripSittingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseRightGripSittingLocal;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_poseRightGripSittingLocal(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseRightGripSittingLocal = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_segmentColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_segmentColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentColliders;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_segmentColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentColliders = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_corpsePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpsePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_corpsePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpsePrefab;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_corpsePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corpsePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftElbow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftElbow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftElbow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftElbow;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_leftElbow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftElbow = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localLeftElbow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftElbow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localLeftElbow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftElbow;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_localLeftElbow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localLeftElbow = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightElbow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightElbow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightElbow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightElbow;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_rightElbow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightElbow = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localRightElbow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightElbow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localRightElbow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightElbow;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_localRightElbow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRightElbow = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_bobOffsetBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_bobOffsetBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobOffsetBone;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_bobOffsetBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobOffsetBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_armUprightBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armUprightBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_armUprightBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armUprightBone;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_armUprightBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armUprightBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_screenSpacePivotRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpacePivotRemote;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_screenSpacePivotRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpacePivotRemote;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_screenSpacePivotRemote(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpacePivotRemote = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_screenSpacePivotLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpacePivotLocal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_screenSpacePivotLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpacePivotLocal;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_screenSpacePivotLocal(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpacePivotLocal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftKnee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftKnee;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftKnee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftKnee;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_leftKnee(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftKnee = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightKnee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightKnee;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightKnee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightKnee;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_rightKnee(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightKnee = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_blindfoldPocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blindfoldPocket;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_blindfoldPocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blindfoldPocket;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_blindfoldPocket(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blindfoldPocket = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_backpackPocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackPocket;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_backpackPocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackPocket;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_backpackPocket(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backpackPocket = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_holsterPocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterPocket;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_holsterPocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterPocket;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_holsterPocket(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holsterPocket = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localBum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBum;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localBum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBum;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_localBum(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBum = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_headBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_headBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headBone;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_headBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_playerZoner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZoner;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_playerZoner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZoner;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_playerZoner(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZoner = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_fakeHolster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fakeHolster;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_fakeHolster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fakeHolster;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_fakeHolster(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fakeHolster = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftFoot;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_leftFoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftFoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightFoot;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_rightFoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightFoot = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftLegLimbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftLegLimbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_leftLegLimbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftLegLimbSpline;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_leftLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftLegLimbSpline = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightLegLimbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightLegLimbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_rightLegLimbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightLegLimbSpline;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_rightLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightLegLimbSpline = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localLeftLegLimbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftLegLimbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localLeftLegLimbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftLegLimbSpline;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_localLeftLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localLeftLegLimbSpline = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localRightLegLimbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightLegLimbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_localRightLegLimbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightLegLimbSpline;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_localRightLegLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRightLegLimbSpline = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_headMeshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headMeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_headMeshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headMeshFilter;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_headMeshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headMeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_holsterTextChatAim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterTextChatAim;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_holsterTextChatAim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterTextChatAim;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_holsterTextChatAim(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holsterTextChatAim = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerRegistry::__cordl_internal_get_backpackTextChatAim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackTextChatAim;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerRegistry::__cordl_internal_get_backpackTextChatAim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackTextChatAim;
}
constexpr void GlobalNamespace::PlayerRegistry::__cordl_internal_set_backpackTextChatAim(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backpackTextChatAim = value;
}
inline void GlobalNamespace::PlayerRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerRegistry* GlobalNamespace::PlayerRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerRegistry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerRegistry::PlayerRegistry()   {
}
