#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Interpolators/SmoothStepFloat4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SmoothStepFloat4)
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Splines {
template<typename T>
class IInterpolator_1;
}
// Forward declare root types
namespace UnityEngine::Splines::Interpolators {
struct SmoothStepFloat4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::Interpolators::SmoothStepFloat4);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::Interpolators::SmoothStepFloat4, "UnityEngine.Splines.Interpolators", "SmoothStepFloat4");
// Dependencies 
namespace UnityEngine::Splines::Interpolators {
// Is value type: true
// CS Name: UnityEngine.Splines.Interpolators.SmoothStepFloat4
#pragma pack(push, 0)
struct CORDL_TYPE SmoothStepFloat4 {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>"
constexpr operator  ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*() ;

/// @brief Method Interpolate, addr 0x18217b960, size 0xd0, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float4 Interpolate(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, float_t  t) ;

/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>* i___UnityEngine__Splines__IInterpolator_1___Unity__Mathematics__float4_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SmoothStepFloat4() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18778};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::Interpolators::SmoothStepFloat4) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Splines::Interpolators
