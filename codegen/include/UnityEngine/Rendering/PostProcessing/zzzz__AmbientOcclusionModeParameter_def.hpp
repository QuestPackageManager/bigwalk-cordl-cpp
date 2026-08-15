#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusionModeParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusionMode_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
CORDL_MODULE_EXPORT(AmbientOcclusionModeParameter)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusionModeParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*, "UnityEngine.Rendering.PostProcessing", "AmbientOcclusionModeParameter");
// Dependencies UnityEngine.Rendering.PostProcessing.AmbientOcclusionMode, UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.AmbientOcclusionModeParameter
class CORDL_TYPE AmbientOcclusionModeParameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode> {
public:
// Declarations
static inline ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fb04b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbientOcclusionModeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbientOcclusionModeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbientOcclusionModeParameter(AmbientOcclusionModeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbientOcclusionModeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbientOcclusionModeParameter(AmbientOcclusionModeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18540};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
