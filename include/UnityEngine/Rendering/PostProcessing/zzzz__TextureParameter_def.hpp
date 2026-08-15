#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameterDefault_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureParameter)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class TextureParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TextureParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TextureParameter*, "UnityEngine.Rendering.PostProcessing", "TextureParameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>, UnityEngine.Rendering.PostProcessing.TextureParameterDefault
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TextureParameter
class CORDL_TYPE TextureParameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<::UnityW<::UnityEngine::Texture>> {
public:
// Declarations
/// @brief Field defaultState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultState, put=__cordl_internal_set_defaultState)) ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  defaultState;

/// @brief Method Interp, addr 0x181fd0100, size 0x300, virtual true, abstract: false, final false
inline void Interp(::UnityEngine::Texture*  from, ::UnityEngine::Texture*  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::TextureParameter* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const& __cordl_internal_get_defaultState() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault& __cordl_internal_get_defaultState() ;

constexpr void __cordl_internal_set_defaultState(::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  value) ;

/// @brief Method .ctor, addr 0x181fd0400, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureParameter(TextureParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureParameter(TextureParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18617};

/// @brief Field defaultState, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  ___defaultState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureParameter, ___defaultState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TextureParameter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
