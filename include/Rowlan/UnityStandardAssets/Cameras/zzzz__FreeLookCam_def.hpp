#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Cameras/FreeLookCam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/UnityStandardAssets/Cameras/zzzz__PivotBasedCameraRig_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FreeLookCam)
// Forward declare root types
namespace Rowlan::UnityStandardAssets::Cameras {
class FreeLookCam;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam*, "Rowlan.UnityStandardAssets.Cameras", "FreeLookCam");
// Dependencies Rowlan.UnityStandardAssets.Cameras.PivotBasedCameraRig, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Rowlan::UnityStandardAssets::Cameras {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.Cameras.FreeLookCam
class CORDL_TYPE FreeLookCam : public ::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig {
public:
// Declarations
/// @brief Field m_LockCursor, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LockCursor, put=__cordl_internal_set_m_LockCursor)) bool  m_LockCursor;

/// @brief Field m_LookAngle, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookAngle, put=__cordl_internal_set_m_LookAngle)) float_t  m_LookAngle;

/// @brief Field m_MoveSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveSpeed, put=__cordl_internal_set_m_MoveSpeed)) float_t  m_MoveSpeed;

/// @brief Field m_PivotEulers, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PivotEulers, put=__cordl_internal_set_m_PivotEulers)) ::UnityEngine::Vector3  m_PivotEulers;

/// @brief Field m_PivotTargetRot, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PivotTargetRot, put=__cordl_internal_set_m_PivotTargetRot)) ::UnityEngine::Quaternion  m_PivotTargetRot;

/// @brief Field m_TiltAngle, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TiltAngle, put=__cordl_internal_set_m_TiltAngle)) float_t  m_TiltAngle;

/// @brief Field m_TiltMax, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TiltMax, put=__cordl_internal_set_m_TiltMax)) float_t  m_TiltMax;

/// @brief Field m_TiltMin, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TiltMin, put=__cordl_internal_set_m_TiltMin)) float_t  m_TiltMin;

/// @brief Field m_TransformTargetRot, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_TransformTargetRot, put=__cordl_internal_set_m_TransformTargetRot)) ::UnityEngine::Quaternion  m_TransformTargetRot;

/// @brief Field m_TurnSmoothing, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnSmoothing, put=__cordl_internal_set_m_TurnSmoothing)) float_t  m_TurnSmoothing;

/// @brief Field m_TurnSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnSpeed, put=__cordl_internal_set_m_TurnSpeed)) float_t  m_TurnSpeed;

/// @brief Field m_VerticalAutoReturn, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_VerticalAutoReturn, put=__cordl_internal_set_m_VerticalAutoReturn)) bool  m_VerticalAutoReturn;

/// @brief Method Awake, addr 0x181abe090, size 0x180, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FollowTarget, addr 0x181abe210, size 0x140, virtual true, abstract: false, final false
inline void FollowTarget(float_t  deltaTime) ;

/// @brief Method HandleRotationMovement, addr 0x181abe350, size 0x360, virtual false, abstract: false, final false
inline void HandleRotationMovement() ;

static inline ::Rowlan::UnityStandardAssets::Cameras::FreeLookCam* New_ctor() ;

/// @brief Method OnDisable, addr 0x181abe6b0, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetAutoTargetPlayer, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void SetAutoTargetPlayer(bool  autoTarget) ;

/// @brief Method SetMoveSpeed, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void SetMoveSpeed(float_t  speed) ;

/// @brief Method Update, addr 0x181abe6d0, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_m_LockCursor() const;

constexpr bool& __cordl_internal_get_m_LockCursor() ;

constexpr float_t const& __cordl_internal_get_m_LookAngle() const;

constexpr float_t& __cordl_internal_get_m_LookAngle() ;

constexpr float_t const& __cordl_internal_get_m_MoveSpeed() const;

constexpr float_t& __cordl_internal_get_m_MoveSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PivotEulers() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PivotEulers() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PivotTargetRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PivotTargetRot() ;

constexpr float_t const& __cordl_internal_get_m_TiltAngle() const;

constexpr float_t& __cordl_internal_get_m_TiltAngle() ;

constexpr float_t const& __cordl_internal_get_m_TiltMax() const;

constexpr float_t& __cordl_internal_get_m_TiltMax() ;

constexpr float_t const& __cordl_internal_get_m_TiltMin() const;

constexpr float_t& __cordl_internal_get_m_TiltMin() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_TransformTargetRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_TransformTargetRot() ;

constexpr float_t const& __cordl_internal_get_m_TurnSmoothing() const;

constexpr float_t& __cordl_internal_get_m_TurnSmoothing() ;

constexpr float_t const& __cordl_internal_get_m_TurnSpeed() const;

constexpr float_t& __cordl_internal_get_m_TurnSpeed() ;

constexpr bool const& __cordl_internal_get_m_VerticalAutoReturn() const;

constexpr bool& __cordl_internal_get_m_VerticalAutoReturn() ;

constexpr void __cordl_internal_set_m_LockCursor(bool  value) ;

constexpr void __cordl_internal_set_m_LookAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_MoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_PivotEulers(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PivotTargetRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_TiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_TiltMax(float_t  value) ;

constexpr void __cordl_internal_set_m_TiltMin(float_t  value) ;

constexpr void __cordl_internal_set_m_TransformTargetRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_TurnSmoothing(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_VerticalAutoReturn(bool  value) ;

/// @brief Method .ctor, addr 0x181abe720, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeLookCam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeLookCam", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeLookCam(FreeLookCam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeLookCam", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeLookCam(FreeLookCam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20367};

/// @brief Field k_LookDistance offset 0xffffffff size 0x4
static constexpr float_t  k_LookDistance{static_cast<float_t>(100.0f)};

/// @brief Field m_MoveSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_MoveSpeed;

/// @brief Field m_TurnSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_TurnSpeed;

/// @brief Field m_TurnSmoothing, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_TurnSmoothing;

/// @brief Field m_TiltMax, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_TiltMax;

/// @brief Field m_TiltMin, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_TiltMin;

/// @brief Field m_LockCursor, offset: 0x68, size: 0x1, def value: None
 bool  ___m_LockCursor;

/// @brief Field m_VerticalAutoReturn, offset: 0x69, size: 0x1, def value: None
 bool  ___m_VerticalAutoReturn;

/// @brief Field m_LookAngle, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_LookAngle;

/// @brief Field m_TiltAngle, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_TiltAngle;

/// @brief Field m_PivotEulers, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PivotEulers;

/// @brief Field m_PivotTargetRot, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PivotTargetRot;

/// @brief Field m_TransformTargetRot, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_TransformTargetRot;

/// @brief Size padding 0xa8 - 0xa0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_MoveSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_TurnSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_TurnSmoothing) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_TiltMax) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_TiltMin) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_LockCursor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_VerticalAutoReturn) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_LookAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_TiltAngle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_PivotEulers) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_PivotTargetRot) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam, ___m_TransformTargetRot) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::Cameras::FreeLookCam) == 0xa8, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::Cameras
