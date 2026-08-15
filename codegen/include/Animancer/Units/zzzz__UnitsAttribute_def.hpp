#pragma once
// IWYU pragma private; include "Animancer/Units/UnitsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__SelfDrawerAttribute_def.hpp"
#include "Animancer/zzzz__Validate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnitsAttribute)
namespace Animancer {
struct Validate_Value;
}
// Forward declare root types
namespace Animancer::Units {
class UnitsAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::Units::UnitsAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::Units::UnitsAttribute*, "Animancer.Units", "UnitsAttribute");
// Dependencies Animancer.SelfDrawerAttribute, Animancer.Validate::Value
namespace Animancer::Units {
// Is value type: false
// CS Name: Animancer.Units.UnitsAttribute
class CORDL_TYPE UnitsAttribute : public ::Animancer::SelfDrawerAttribute {
public:
// Declarations
 __declspec(property(get=get_Rule, put=set_Rule)) ::Animancer::Validate_Value  Rule;

/// @brief Field <Rule>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Rule_k__BackingField, put=__cordl_internal_set__Rule_k__BackingField)) ::Animancer::Validate_Value  _Rule_k__BackingField;

static inline ::Animancer::Units::UnitsAttribute* New_ctor() ;

static inline ::Animancer::Units::UnitsAttribute* New_ctor(::ArrayW<float_t>  multipliers, ::ArrayW<::StringW>  suffixes, int32_t  unitIndex) ;

static inline ::Animancer::Units::UnitsAttribute* New_ctor(::StringW  suffix) ;

constexpr ::Animancer::Validate_Value const& __cordl_internal_get__Rule_k__BackingField() const;

constexpr ::Animancer::Validate_Value& __cordl_internal_get__Rule_k__BackingField() ;

constexpr void __cordl_internal_set__Rule_k__BackingField(::Animancer::Validate_Value  value) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<float_t>  multipliers, ::ArrayW<::StringW>  suffixes, int32_t  unitIndex) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  suffix) ;

/// @brief Method get_Rule, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::Validate_Value get_Rule() ;

/// @brief Method set_Rule, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_Rule(::Animancer::Validate_Value  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitsAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitsAttribute(UnitsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitsAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitsAttribute(UnitsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18251};

/// @brief Field <Rule>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Animancer::Validate_Value  ____Rule_k__BackingField;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Units::UnitsAttribute, ____Rule_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Animancer::Units::UnitsAttribute) == 0x20, "Size mismatch!");

} // namespace end def Animancer::Units
