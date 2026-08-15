#pragma once
// IWYU pragma private; include "UnityEngine/DetailInstanceTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DetailInstanceTransform)
// Forward declare root types
namespace UnityEngine {
struct DetailInstanceTransform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DetailInstanceTransform);
DEFINE_IL2CPP_CLASS(::UnityEngine::DetailInstanceTransform, "UnityEngine", "DetailInstanceTransform");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DetailInstanceTransform
struct CORDL_TYPE DetailInstanceTransform {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DetailInstanceTransform() ;

// Ctor Parameters [CppParam { name: "posX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scaleXZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scaleY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotationY", ty: "float_t", modifiers: "", def_value: None }]
constexpr DetailInstanceTransform(float_t  posX, float_t  posY, float_t  posZ, float_t  scaleXZ, float_t  scaleY, float_t  rotationY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field posX, offset: 0x0, size: 0x4, def value: None
 float_t  posX;

/// @brief Field posY, offset: 0x4, size: 0x4, def value: None
 float_t  posY;

/// @brief Field posZ, offset: 0x8, size: 0x4, def value: None
 float_t  posZ;

/// @brief Field scaleXZ, offset: 0xc, size: 0x4, def value: None
 float_t  scaleXZ;

/// @brief Field scaleY, offset: 0x10, size: 0x4, def value: None
 float_t  scaleY;

/// @brief Field rotationY, offset: 0x14, size: 0x4, def value: None
 float_t  rotationY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DetailInstanceTransform, posX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailInstanceTransform, posY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailInstanceTransform, posZ) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailInstanceTransform, scaleXZ) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailInstanceTransform, scaleY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailInstanceTransform, rotationY) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::DetailInstanceTransform) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
