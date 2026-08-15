#pragma once
// IWYU pragma private; include "GlobalNamespace/HousePhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HousePhysics)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HousePhysics;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HousePhysics*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HousePhysics*, "", "HousePhysics");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HousePhysics
class CORDL_TYPE HousePhysics : public ::System::Object {
public:
// Declarations
/// @brief Method ColliderCast, addr 0x1803eb1f0, size 0x6b0, virtual false, abstract: false, final false
static inline bool ColliderCast(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  originOffset, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method FindLowestPoint, addr 0x1803eb8a0, size 0x810, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FindLowestPoint(::UnityEngine::Collider*  collider) ;

/// @brief Method FindLowestPoint, addr 0x1803ec0b0, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FindLowestPoint(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliers) ;

/// @brief Method SmoothDampEuler, addr 0x1803ec210, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SmoothDampEuler(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime) ;

/// @brief Method SmoothDampQuaternion, addr 0x1803ec2e0, size 0x1f0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SmoothDampQuaternion(::UnityEngine::Quaternion  current, ::UnityEngine::Quaternion  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HousePhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HousePhysics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HousePhysics(HousePhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HousePhysics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HousePhysics(HousePhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HousePhysics) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
