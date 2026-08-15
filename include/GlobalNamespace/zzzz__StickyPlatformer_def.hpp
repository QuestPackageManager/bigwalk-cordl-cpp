#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyPlatformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(StickyPlatformer)
namespace GlobalNamespace {
class StickyPlatform;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class StickyPlatformer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StickyPlatformer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyPlatformer*, "", "StickyPlatformer");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StickyPlatformer
class CORDL_TYPE StickyPlatformer : public ::System::Object {
public:
// Declarations
/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field platform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::UnityW<::GlobalNamespace::StickyPlatform>  platform;

 __declspec(property(get=get_platformTransform)) ::UnityW<::UnityEngine::Transform>  platformTransform;

/// @brief Field positionMovement, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionMovement, put=__cordl_internal_set_positionMovement)) ::UnityEngine::Vector3  positionMovement;

/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field rotationMovement, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationMovement, put=__cordl_internal_set_rotationMovement)) ::UnityEngine::Quaternion  rotationMovement;

/// @brief Field storedPlatformPosition, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_storedPlatformPosition, put=__cordl_internal_set_storedPlatformPosition)) ::UnityEngine::Vector3  storedPlatformPosition;

/// @brief Field storedPlatformRotation, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_storedPlatformRotation, put=__cordl_internal_set_storedPlatformRotation)) ::UnityEngine::Quaternion  storedPlatformRotation;

/// @brief Field storedPositionRelativeToPlatform, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_storedPositionRelativeToPlatform, put=__cordl_internal_set_storedPositionRelativeToPlatform)) ::UnityEngine::Vector3  storedPositionRelativeToPlatform;

/// @brief Method FixedUpdate, addr 0x180416860, size 0x570, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialize, addr 0x180416dd0, size 0x10, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::StickyPlatformer* New_ctor() ;

/// @brief Method SetPlatform, addr 0x180416de0, size 0x140, virtual false, abstract: false, final false
inline void SetPlatform(::GlobalNamespace::StickyPlatform*  platform) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

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

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_storedPositionRelativeToPlatform() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_storedPositionRelativeToPlatform() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_platform(::UnityW<::GlobalNamespace::StickyPlatform>  value) ;

constexpr void __cordl_internal_set_positionMovement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rotationMovement(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_storedPlatformPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_storedPlatformRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_storedPositionRelativeToPlatform(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_platformTransform, addr 0x180416f20, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_platformTransform() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickyPlatformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickyPlatformer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StickyPlatformer(StickyPlatformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickyPlatformer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickyPlatformer(StickyPlatformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5103};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field platform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StickyPlatform>  ___platform;

/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field storedPlatformPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___storedPlatformPosition;

/// @brief Field storedPlatformRotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___storedPlatformRotation;

/// @brief Field storedPositionRelativeToPlatform, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___storedPositionRelativeToPlatform;

/// @brief Field positionMovement, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionMovement;

/// @brief Field rotationMovement, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotationMovement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___storedPlatformPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___storedPlatformRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___storedPositionRelativeToPlatform) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___positionMovement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatformer, ___rotationMovement) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyPlatformer) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
