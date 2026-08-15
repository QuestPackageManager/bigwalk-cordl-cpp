#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyPlatformerOld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(StickyPlatformerOld)
namespace GlobalNamespace {
class StickyPlatform;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class StickyPlatformerOld;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StickyPlatformerOld*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyPlatformerOld*, "", "StickyPlatformerOld");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StickyPlatformerOld
class CORDL_TYPE StickyPlatformerOld : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field applyMovement, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyMovement, put=__cordl_internal_set_applyMovement)) bool  applyMovement;

/// @brief Field applyRotation, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyRotation, put=__cordl_internal_set_applyRotation)) bool  applyRotation;

/// @brief Field includeRotationBasedMovement, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeRotationBasedMovement, put=__cordl_internal_set_includeRotationBasedMovement)) bool  includeRotationBasedMovement;

/// @brief Field platform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::UnityW<::GlobalNamespace::StickyPlatform>  platform;

/// @brief Field positionMovement, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionMovement, put=__cordl_internal_set_positionMovement)) ::UnityEngine::Vector3  positionMovement;

/// @brief Field rb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field rotationMovement, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationMovement, put=__cordl_internal_set_rotationMovement)) ::UnityEngine::Quaternion  rotationMovement;

/// @brief Field storedPlatformPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_storedPlatformPosition, put=__cordl_internal_set_storedPlatformPosition)) ::UnityEngine::Vector3  storedPlatformPosition;

/// @brief Field storedPlatformRotation, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_storedPlatformRotation, put=__cordl_internal_set_storedPlatformRotation)) ::UnityEngine::Quaternion  storedPlatformRotation;

/// @brief Method ApplyFrameMovement, addr 0x1804163a0, size 0x3b0, virtual false, abstract: false, final false
inline void ApplyFrameMovement(::GlobalNamespace::StickyPlatform*  platform) ;

/// @brief Method FixedUpdate, addr 0x180416750, size 0x40, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::StickyPlatformerOld* New_ctor() ;

/// @brief Method SetPlatform, addr 0x180416790, size 0xd0, virtual false, abstract: false, final false
inline void SetPlatform(::GlobalNamespace::StickyPlatform*  platform) ;

constexpr bool const& __cordl_internal_get_applyMovement() const;

constexpr bool& __cordl_internal_get_applyMovement() ;

constexpr bool const& __cordl_internal_get_applyRotation() const;

constexpr bool& __cordl_internal_get_applyRotation() ;

constexpr bool const& __cordl_internal_get_includeRotationBasedMovement() const;

constexpr bool& __cordl_internal_get_includeRotationBasedMovement() ;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& __cordl_internal_get_platform() const;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& __cordl_internal_get_platform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionMovement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionMovement() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationMovement() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationMovement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_storedPlatformPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_storedPlatformPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_storedPlatformRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_storedPlatformRotation() ;

constexpr void __cordl_internal_set_applyMovement(bool  value) ;

constexpr void __cordl_internal_set_applyRotation(bool  value) ;

constexpr void __cordl_internal_set_includeRotationBasedMovement(bool  value) ;

constexpr void __cordl_internal_set_platform(::UnityW<::GlobalNamespace::StickyPlatform>  value) ;

constexpr void __cordl_internal_set_positionMovement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rotationMovement(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_storedPlatformPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_storedPlatformRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickyPlatformerOld() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickyPlatformerOld", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StickyPlatformerOld(StickyPlatformerOld && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickyPlatformerOld", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickyPlatformerOld(StickyPlatformerOld const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5104};

/// @brief Field applyMovement, offset: 0x20, size: 0x1, def value: None
 bool  ___applyMovement;

/// @brief Field applyRotation, offset: 0x21, size: 0x1, def value: None
 bool  ___applyRotation;

/// @brief Field includeRotationBasedMovement, offset: 0x22, size: 0x1, def value: None
 bool  ___includeRotationBasedMovement;

/// @brief Field rb, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field platform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StickyPlatform>  ___platform;

/// @brief Field storedPlatformPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___storedPlatformPosition;

/// @brief Field storedPlatformRotation, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___storedPlatformRotation;

/// @brief Field positionMovement, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionMovement;

/// @brief Field rotationMovement, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotationMovement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___applyMovement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___applyRotation) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___includeRotationBasedMovement) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___rb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___platform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___storedPlatformPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___storedPlatformRotation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___positionMovement) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformerOld, ___rotationMovement) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyPlatformerOld) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
