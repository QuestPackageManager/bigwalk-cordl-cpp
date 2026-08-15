#pragma once
// IWYU pragma private; include "UnityEngine/TerrainTools/BrushTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BrushTransform)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TerrainTools {
struct BrushTransform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainTools::BrushTransform);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainTools::BrushTransform, "UnityEngine.TerrainTools", "BrushTransform");
// Dependencies UnityEngine.Vector2
namespace UnityEngine::TerrainTools {
// Is value type: true
// CS Name: UnityEngine.TerrainTools.BrushTransform
struct CORDL_TYPE BrushTransform {
public:
// Declarations
 __declspec(property(get=get_targetOrigin)) ::UnityEngine::Vector2  targetOrigin;

 __declspec(property(get=get_targetX)) ::UnityEngine::Vector2  targetX;

 __declspec(property(get=get_targetY)) ::UnityEngine::Vector2  targetY;

/// @brief Method .ctor, addr 0x18230e720, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  brushOrigin, ::UnityEngine::Vector2  brushU, ::UnityEngine::Vector2  brushV) ;

/// @brief Method get_targetOrigin, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_targetOrigin() ;

/// @brief Method get_targetX, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_targetX() ;

/// @brief Method get_targetY, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_targetY() ;

// Ctor Parameters []
// @brief default ctor
constexpr BrushTransform() ;

// Ctor Parameters [CppParam { name: "_brushOrigin_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_brushU_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_brushV_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_targetOrigin_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_targetX_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_targetY_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr BrushTransform(::UnityEngine::Vector2  _brushOrigin_k__BackingField, ::UnityEngine::Vector2  _brushU_k__BackingField, ::UnityEngine::Vector2  _brushV_k__BackingField, ::UnityEngine::Vector2  _targetOrigin_k__BackingField, ::UnityEngine::Vector2  _targetX_k__BackingField, ::UnityEngine::Vector2  _targetY_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <brushOrigin>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  _brushOrigin_k__BackingField;

/// @brief Field <brushU>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  _brushU_k__BackingField;

/// @brief Field <brushV>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  _brushV_k__BackingField;

/// @brief Field <targetOrigin>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  _targetOrigin_k__BackingField;

/// @brief Field <targetX>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  _targetX_k__BackingField;

/// @brief Field <targetY>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  _targetY_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainTools::BrushTransform, _brushOrigin_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainTools::BrushTransform, _brushU_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainTools::BrushTransform, _brushV_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainTools::BrushTransform, _targetOrigin_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainTools::BrushTransform, _targetX_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainTools::BrushTransform, _targetY_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainTools::BrushTransform) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::TerrainTools
