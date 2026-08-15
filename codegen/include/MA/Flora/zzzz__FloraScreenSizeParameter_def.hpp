#pragma once
// IWYU pragma private; include "MA/Flora/FloraScreenSizeParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloraScreenSizeParameter)
// Forward declare root types
namespace MA::Flora {
class FloraScreenSizeParameter;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraScreenSizeParameter*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraScreenSizeParameter*, "MA.Flora", "FloraScreenSizeParameter");
// Dependencies UnityEngine.Rendering.ClampedFloatParameter
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraScreenSizeParameter
class CORDL_TYPE FloraScreenSizeParameter : public ::UnityEngine::Rendering::ClampedFloatParameter {
public:
// Declarations
static inline ::MA::Flora::FloraScreenSizeParameter* New_ctor(float_t  value, float_t  min, float_t  max, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1814e7df0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  value, float_t  min, float_t  max, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraScreenSizeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraScreenSizeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraScreenSizeParameter(FloraScreenSizeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraScreenSizeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraScreenSizeParameter(FloraScreenSizeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13290};

/// @brief Size padding 0x28 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraScreenSizeParameter) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
