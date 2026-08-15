#pragma once
// IWYU pragma private; include "MA/Flora/FloraScreenRangeParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__FloatRangeParameter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloraScreenRangeParameter)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace MA::Flora {
class FloraScreenRangeParameter;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraScreenRangeParameter*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraScreenRangeParameter*, "MA.Flora", "FloraScreenRangeParameter");
// Dependencies UnityEngine.Rendering.FloatRangeParameter
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraScreenRangeParameter
class CORDL_TYPE FloraScreenRangeParameter : public ::UnityEngine::Rendering::FloatRangeParameter {
public:
// Declarations
static inline ::MA::Flora::FloraScreenRangeParameter* New_ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1814cacc0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraScreenRangeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraScreenRangeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraScreenRangeParameter(FloraScreenRangeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraScreenRangeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraScreenRangeParameter(FloraScreenRangeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraScreenRangeParameter) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
