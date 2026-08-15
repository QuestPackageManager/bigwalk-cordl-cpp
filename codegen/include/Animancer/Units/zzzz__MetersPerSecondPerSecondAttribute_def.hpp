#pragma once
// IWYU pragma private; include "Animancer/Units/MetersPerSecondPerSecondAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Units/zzzz__UnitsAttribute_def.hpp"
CORDL_MODULE_EXPORT(MetersPerSecondPerSecondAttribute)
// Forward declare root types
namespace Animancer::Units {
class MetersPerSecondPerSecondAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::Units::MetersPerSecondPerSecondAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::Units::MetersPerSecondPerSecondAttribute*, "Animancer.Units", "MetersPerSecondPerSecondAttribute");
// Dependencies Animancer.Units.UnitsAttribute
namespace Animancer::Units {
// Is value type: false
// CS Name: Animancer.Units.MetersPerSecondPerSecondAttribute
class CORDL_TYPE MetersPerSecondPerSecondAttribute : public ::Animancer::Units::UnitsAttribute {
public:
// Declarations
static inline ::Animancer::Units::MetersPerSecondPerSecondAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetersPerSecondPerSecondAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetersPerSecondPerSecondAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetersPerSecondPerSecondAttribute(MetersPerSecondPerSecondAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetersPerSecondPerSecondAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetersPerSecondPerSecondAttribute(MetersPerSecondPerSecondAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18248};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Units::MetersPerSecondPerSecondAttribute) == 0x20, "Size mismatch!");

} // namespace end def Animancer::Units
