#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Cameras/PivotBasedCameraRig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/UnityStandardAssets/Cameras/zzzz__AbstractTargetFollower_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PivotBasedCameraRig)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::Cameras {
class PivotBasedCameraRig;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*, "Rowlan.UnityStandardAssets.Cameras", "PivotBasedCameraRig");
// Dependencies Rowlan.UnityStandardAssets.Cameras.AbstractTargetFollower, UnityEngine.Vector3
namespace Rowlan::UnityStandardAssets::Cameras {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.Cameras.PivotBasedCameraRig
class CORDL_TYPE PivotBasedCameraRig : public ::Rowlan::UnityStandardAssets::Cameras::AbstractTargetFollower {
public:
// Declarations
/// @brief Field m_Cam, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cam, put=__cordl_internal_set_m_Cam)) ::UnityW<::UnityEngine::Transform>  m_Cam;

/// @brief Field m_LastTargetPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastTargetPosition, put=__cordl_internal_set_m_LastTargetPosition)) ::UnityEngine::Vector3  m_LastTargetPosition;

/// @brief Field m_Pivot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Pivot, put=__cordl_internal_set_m_Pivot)) ::UnityW<::UnityEngine::Transform>  m_Pivot;

/// @brief Method Awake, addr 0x181abf730, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Cam() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Cam() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTargetPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Pivot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Pivot() ;

constexpr void __cordl_internal_set_m_Cam(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LastTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Pivot(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x18195f2a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PivotBasedCameraRig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PivotBasedCameraRig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PivotBasedCameraRig(PivotBasedCameraRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PivotBasedCameraRig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PivotBasedCameraRig(PivotBasedCameraRig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20368};

/// @brief Field m_Cam, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Cam;

/// @brief Field m_Pivot, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Pivot;

/// @brief Field m_LastTargetPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastTargetPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig, ___m_Cam) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig, ___m_Pivot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig, ___m_LastTargetPosition) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig) == 0x58, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::Cameras
