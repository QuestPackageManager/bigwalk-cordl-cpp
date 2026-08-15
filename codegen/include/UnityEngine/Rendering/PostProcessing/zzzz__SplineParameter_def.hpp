#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/SplineParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineParameter)
namespace UnityEngine::Rendering::PostProcessing {
class ParameterOverride;
}
namespace UnityEngine::Rendering::PostProcessing {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class SplineParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::SplineParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::SplineParameter*, "UnityEngine.Rendering.PostProcessing", "SplineParameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.SplineParameter
class CORDL_TYPE SplineParameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Rendering::PostProcessing::Spline*> {
public:
// Declarations
/// @brief Method Interp, addr 0x181fcfe20, size 0x270, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Rendering::PostProcessing::Spline*  from, ::UnityEngine::Rendering::PostProcessing::Spline*  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::SplineParameter* New_ctor() ;

/// @brief Method OnEnable, addr 0x181fd0090, size 0x20, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetValue, addr 0x181fd00b0, size 0x40, virtual true, abstract: false, final false
inline void SetValue(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  parameter) ;

/// @brief Method .ctor, addr 0x181fd00f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineParameter(SplineParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineParameter(SplineParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::SplineParameter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
