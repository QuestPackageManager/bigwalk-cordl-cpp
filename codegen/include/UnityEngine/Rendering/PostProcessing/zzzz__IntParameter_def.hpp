#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/IntParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntParameter)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class IntParameter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::IntParameter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::IntParameter*, "UnityEngine.Rendering.PostProcessing", "IntParameter");
// Dependencies UnityEngine.Rendering.PostProcessing.ParameterOverride`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.IntParameter
class CORDL_TYPE IntParameter : public ::UnityEngine::Rendering::PostProcessing::ParameterOverride_1<int32_t> {
public:
// Declarations
/// @brief Method Interp, addr 0x181fc04e0, size 0x30, virtual true, abstract: false, final false
inline void Interp(int32_t  from, int32_t  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::IntParameter* New_ctor() ;

/// @brief Method .ctor, addr 0x181fb04b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntParameter(IntParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntParameter(IntParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18609};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::IntParameter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
