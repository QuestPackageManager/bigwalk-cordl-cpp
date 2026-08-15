#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorParameter)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class ColorParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ColorParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ColorParameter*, "UnityEngine.Rendering.PostProcessing", "ColorParameter");
// Dependencies UnityEngine.Color, UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ColorParameter
class CORDL_TYPE ColorParameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Color> {
public:
// Declarations
/// @brief Method Interp, addr 0x181fbf140, size 0x70, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Color  from, ::UnityEngine::Color  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::ColorParameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fbf1b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Implicit, addr 0x181fbf1c0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Rendering::PostProcessing::ColorParameter*  prop) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorParameter(ColorParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorParameter(ColorParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ColorParameter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
