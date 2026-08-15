#pragma once
// IWYU pragma private; include "UnityEngine/Internal_DrawTextureArguments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Internal_DrawTextureArguments)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
struct Internal_DrawTextureArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Internal_DrawTextureArguments);
DEFINE_IL2CPP_CLASS(::UnityEngine::Internal_DrawTextureArguments, "UnityEngine", "Internal_DrawTextureArguments");
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.Vector4
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Internal_DrawTextureArguments
struct CORDL_TYPE Internal_DrawTextureArguments {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Internal_DrawTextureArguments() ;

// Ctor Parameters [CppParam { name: "screenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "sourceRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "leftBorder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightBorder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topBorder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomBorder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "leftBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "rightBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderWidths", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "cornerRadiuses", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "smoothCorners", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pass", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "mat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }]
constexpr Internal_DrawTextureArguments(::UnityEngine::Rect  screenRect, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Color  leftBorderColor, ::UnityEngine::Color  rightBorderColor, ::UnityEngine::Color  topBorderColor, ::UnityEngine::Color  bottomBorderColor, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  cornerRadiuses, bool  smoothCorners, int32_t  pass, ::UnityW<::UnityEngine::Texture>  texture, ::UnityW<::UnityEngine::Material>  mat) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10505};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field screenRect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  screenRect;

/// @brief Field sourceRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  sourceRect;

/// @brief Field leftBorder, offset: 0x20, size: 0x4, def value: None
 int32_t  leftBorder;

/// @brief Field rightBorder, offset: 0x24, size: 0x4, def value: None
 int32_t  rightBorder;

/// @brief Field topBorder, offset: 0x28, size: 0x4, def value: None
 int32_t  topBorder;

/// @brief Field bottomBorder, offset: 0x2c, size: 0x4, def value: None
 int32_t  bottomBorder;

/// @brief Field leftBorderColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  leftBorderColor;

/// @brief Field rightBorderColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  rightBorderColor;

/// @brief Field topBorderColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  topBorderColor;

/// @brief Field bottomBorderColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  bottomBorderColor;

/// @brief Field color, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field borderWidths, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Vector4  borderWidths;

/// @brief Field cornerRadiuses, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Vector4  cornerRadiuses;

/// @brief Field smoothCorners, offset: 0xa0, size: 0x1, def value: None
 bool  smoothCorners;

/// @brief Field pass, offset: 0xa4, size: 0x4, def value: None
 int32_t  pass;

/// @brief Field texture, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  texture;

/// @brief Field mat, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  mat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, screenRect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, sourceRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, leftBorder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, rightBorder) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, topBorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, bottomBorder) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, leftBorderColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, rightBorderColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, topBorderColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, bottomBorderColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, color) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, borderWidths) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, cornerRadiuses) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, smoothCorners) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, pass) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, texture) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Internal_DrawTextureArguments, mat) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Internal_DrawTextureArguments) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine
