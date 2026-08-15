#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveTransformToClosestPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MoveTransformToClosestPosition)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveTransformToClosestPosition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MoveTransformToClosestPosition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoveTransformToClosestPosition*, "", "MoveTransformToClosestPosition");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoveTransformToClosestPosition
class CORDL_TYPE MoveTransformToClosestPosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PositionOffsets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PositionOffsets, put=__cordl_internal_set_PositionOffsets)) ::ArrayW<::UnityEngine::Vector3>  PositionOffsets;

/// @brief Field TransformToMove, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformToMove, put=__cordl_internal_set_TransformToMove)) ::UnityW<::UnityEngine::Transform>  TransformToMove;

static inline ::GlobalNamespace::MoveTransformToClosestPosition* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Update, addr 0x1803d5ae0, size 0x2a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_PositionOffsets() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_PositionOffsets() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_TransformToMove() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_TransformToMove() ;

constexpr void __cordl_internal_set_PositionOffsets(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_TransformToMove(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveTransformToClosestPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveTransformToClosestPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveTransformToClosestPosition(MoveTransformToClosestPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveTransformToClosestPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveTransformToClosestPosition(MoveTransformToClosestPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4850};

/// @brief Field PositionOffsets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___PositionOffsets;

/// @brief Field TransformToMove, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___TransformToMove;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoveTransformToClosestPosition, ___PositionOffsets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveTransformToClosestPosition, ___TransformToMove) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoveTransformToClosestPosition) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
