#pragma once
// IWYU pragma private; include "UnityEngine/Internal_DrawTextureArguments.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/zzzz__Internal_DrawTextureArguments_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "screenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftBorder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightBorder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topBorder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomBorder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomBorderColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderWidths", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "cornerRadiuses", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "smoothCorners", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pass", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Internal_DrawTextureArguments::Internal_DrawTextureArguments(::UnityEngine::Rect  screenRect, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Color  leftBorderColor, ::UnityEngine::Color  rightBorderColor, ::UnityEngine::Color  topBorderColor, ::UnityEngine::Color  bottomBorderColor, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  cornerRadiuses, bool  smoothCorners, int32_t  pass, ::UnityW<::UnityEngine::Texture>  texture, ::UnityW<::UnityEngine::Material>  mat) noexcept  {
this->screenRect = screenRect;
this->sourceRect = sourceRect;
this->leftBorder = leftBorder;
this->rightBorder = rightBorder;
this->topBorder = topBorder;
this->bottomBorder = bottomBorder;
this->leftBorderColor = leftBorderColor;
this->rightBorderColor = rightBorderColor;
this->topBorderColor = topBorderColor;
this->bottomBorderColor = bottomBorderColor;
this->color = color;
this->borderWidths = borderWidths;
this->cornerRadiuses = cornerRadiuses;
this->smoothCorners = smoothCorners;
this->pass = pass;
this->texture = texture;
this->mat = mat;
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal_DrawTextureArguments::Internal_DrawTextureArguments()   {
}
