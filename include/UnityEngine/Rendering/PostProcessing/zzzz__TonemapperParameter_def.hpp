#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TonemapperParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Tonemapper_def.hpp"
CORDL_MODULE_EXPORT(TonemapperParameter)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class TonemapperParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TonemapperParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TonemapperParameter*, "UnityEngine.Rendering.PostProcessing", "TonemapperParameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>, UnityEngine.Rendering.PostProcessing.Tonemapper
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TonemapperParameter
class CORDL_TYPE TonemapperParameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityEngine::Rendering::PostProcessing::Tonemapper> {
public:
// Declarations
static inline ::UnityEngine::Rendering::PostProcessing::TonemapperParameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fb04b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TonemapperParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TonemapperParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TonemapperParameter(TonemapperParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TonemapperParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TonemapperParameter(TonemapperParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18558};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TonemapperParameter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
