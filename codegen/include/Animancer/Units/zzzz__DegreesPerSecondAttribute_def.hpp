#pragma once
// IWYU pragma private; include "Animancer/Units/DegreesPerSecondAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Units/zzzz__UnitsAttribute_def.hpp"
CORDL_MODULE_EXPORT(DegreesPerSecondAttribute)
// Forward declare root types
namespace Animancer::Units {
class DegreesPerSecondAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::Units::DegreesPerSecondAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::Units::DegreesPerSecondAttribute*, "Animancer.Units", "DegreesPerSecondAttribute");
// Dependencies Animancer.Units.UnitsAttribute
namespace Animancer::Units {
// Is value type: false
// CS Name: Animancer.Units.DegreesPerSecondAttribute
class CORDL_TYPE DegreesPerSecondAttribute : public ::Animancer::Units::UnitsAttribute {
public:
// Declarations
static inline ::Animancer::Units::DegreesPerSecondAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DegreesPerSecondAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DegreesPerSecondAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DegreesPerSecondAttribute(DegreesPerSecondAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DegreesPerSecondAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DegreesPerSecondAttribute(DegreesPerSecondAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18245};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Units::DegreesPerSecondAttribute) == 0x20, "Size mismatch!");

} // namespace end def Animancer::Units
