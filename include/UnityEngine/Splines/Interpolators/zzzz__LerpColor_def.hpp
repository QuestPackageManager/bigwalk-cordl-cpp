#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Interpolators/LerpColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LerpColor)
namespace UnityEngine::Splines {
template<typename T>
class IInterpolator_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Splines::Interpolators {
struct LerpColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::Interpolators::LerpColor);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::Interpolators::LerpColor, "UnityEngine.Splines.Interpolators", "LerpColor");
// Dependencies 
namespace UnityEngine::Splines::Interpolators {
// Is value type: true
// CS Name: UnityEngine.Splines.Interpolators.LerpColor
#pragma pack(push, 0)
struct CORDL_TYPE LerpColor {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>"
constexpr operator  ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>*() ;

/// @brief Method Interpolate, addr 0x18217ae70, size 0x100, virtual true, abstract: false, final true
inline ::UnityEngine::Color Interpolate(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t) ;

/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>* i___UnityEngine__Splines__IInterpolator_1___UnityEngine__Color_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LerpColor() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::Interpolators::LerpColor) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Splines::Interpolators
