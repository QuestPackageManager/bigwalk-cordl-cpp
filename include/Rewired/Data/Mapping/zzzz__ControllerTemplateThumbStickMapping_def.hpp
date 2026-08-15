#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateThumbStickMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateThumbStickMapping)
// Forward declare root types
namespace Rewired::Data::Mapping {
class ControllerTemplateThumbStickMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping*, "Rewired.Data.Mapping", "ControllerTemplateThumbStickMapping");
// Dependencies Rewired.Data.Mapping.ControllerTemplateSpecialElementMapping
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.ControllerTemplateThumbStickMapping
class CORDL_TYPE ControllerTemplateThumbStickMapping : public ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping {
public:
// Declarations
/// @brief Field eid_axisX, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_axisX, put=__cordl_internal_set_eid_axisX)) int32_t  eid_axisX;

/// @brief Field eid_axisY, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_axisY, put=__cordl_internal_set_eid_axisY)) int32_t  eid_axisY;

/// @brief Field eid_button, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_button, put=__cordl_internal_set_eid_button)) int32_t  eid_button;

static inline ::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_eid_axisX() const;

constexpr int32_t& __cordl_internal_get_eid_axisX() ;

constexpr int32_t const& __cordl_internal_get_eid_axisY() const;

constexpr int32_t& __cordl_internal_get_eid_axisY() ;

constexpr int32_t const& __cordl_internal_get_eid_button() const;

constexpr int32_t& __cordl_internal_get_eid_button() ;

constexpr void __cordl_internal_set_eid_axisX(int32_t  value) ;

constexpr void __cordl_internal_set_eid_axisY(int32_t  value) ;

constexpr void __cordl_internal_set_eid_button(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818a2230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateThumbStickMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateThumbStickMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateThumbStickMapping(ControllerTemplateThumbStickMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateThumbStickMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateThumbStickMapping(ControllerTemplateThumbStickMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2421};

/// @brief Field eid_axisX, offset: 0x10, size: 0x4, def value: None
 int32_t  ___eid_axisX;

/// @brief Field eid_axisY, offset: 0x14, size: 0x4, def value: None
 int32_t  ___eid_axisY;

/// @brief Field eid_button, offset: 0x18, size: 0x4, def value: None
 int32_t  ___eid_button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping, ___eid_axisX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping, ___eid_axisY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping, ___eid_button) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::ControllerTemplateThumbStickMapping) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
