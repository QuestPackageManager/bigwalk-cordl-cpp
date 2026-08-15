#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateYokeMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateYokeMapping)
// Forward declare root types
namespace Rewired::Data::Mapping {
class ControllerTemplateYokeMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::ControllerTemplateYokeMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::ControllerTemplateYokeMapping*, "Rewired.Data.Mapping", "ControllerTemplateYokeMapping");
// Dependencies Rewired.Data.Mapping.ControllerTemplateSpecialElementMapping
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.ControllerTemplateYokeMapping
class CORDL_TYPE ControllerTemplateYokeMapping : public ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping {
public:
// Declarations
/// @brief Field eid_axisX, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_axisX, put=__cordl_internal_set_eid_axisX)) int32_t  eid_axisX;

/// @brief Field eid_axisZ, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_axisZ, put=__cordl_internal_set_eid_axisZ)) int32_t  eid_axisZ;

static inline ::Rewired::Data::Mapping::ControllerTemplateYokeMapping* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_eid_axisX() const;

constexpr int32_t& __cordl_internal_get_eid_axisX() ;

constexpr int32_t const& __cordl_internal_get_eid_axisZ() const;

constexpr int32_t& __cordl_internal_get_eid_axisZ() ;

constexpr void __cordl_internal_set_eid_axisX(int32_t  value) ;

constexpr void __cordl_internal_set_eid_axisZ(int32_t  value) ;

/// @brief Method .ctor, addr 0x1814551b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateYokeMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateYokeMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateYokeMapping(ControllerTemplateYokeMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateYokeMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateYokeMapping(ControllerTemplateYokeMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2426};

/// @brief Field eid_axisX, offset: 0x10, size: 0x4, def value: None
 int32_t  ___eid_axisX;

/// @brief Field eid_axisZ, offset: 0x14, size: 0x4, def value: None
 int32_t  ___eid_axisZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateYokeMapping, ___eid_axisX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateYokeMapping, ___eid_axisZ) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::ControllerTemplateYokeMapping) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
