#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateDPadMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateDPadMapping)
// Forward declare root types
namespace Rewired::Data::Mapping {
class ControllerTemplateDPadMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::ControllerTemplateDPadMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::ControllerTemplateDPadMapping*, "Rewired.Data.Mapping", "ControllerTemplateDPadMapping");
// Dependencies Rewired.Data.Mapping.ControllerTemplateSpecialElementMapping
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.ControllerTemplateDPadMapping
class CORDL_TYPE ControllerTemplateDPadMapping : public ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping {
public:
// Declarations
/// @brief Field eid_down, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_down, put=__cordl_internal_set_eid_down)) int32_t  eid_down;

/// @brief Field eid_left, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_left, put=__cordl_internal_set_eid_left)) int32_t  eid_left;

/// @brief Field eid_press, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_press, put=__cordl_internal_set_eid_press)) int32_t  eid_press;

/// @brief Field eid_right, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_right, put=__cordl_internal_set_eid_right)) int32_t  eid_right;

/// @brief Field eid_up, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_up, put=__cordl_internal_set_eid_up)) int32_t  eid_up;

static inline ::Rewired::Data::Mapping::ControllerTemplateDPadMapping* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_eid_down() const;

constexpr int32_t& __cordl_internal_get_eid_down() ;

constexpr int32_t const& __cordl_internal_get_eid_left() const;

constexpr int32_t& __cordl_internal_get_eid_left() ;

constexpr int32_t const& __cordl_internal_get_eid_press() const;

constexpr int32_t& __cordl_internal_get_eid_press() ;

constexpr int32_t const& __cordl_internal_get_eid_right() const;

constexpr int32_t& __cordl_internal_get_eid_right() ;

constexpr int32_t const& __cordl_internal_get_eid_up() const;

constexpr int32_t& __cordl_internal_get_eid_up() ;

constexpr void __cordl_internal_set_eid_down(int32_t  value) ;

constexpr void __cordl_internal_set_eid_left(int32_t  value) ;

constexpr void __cordl_internal_set_eid_press(int32_t  value) ;

constexpr void __cordl_internal_set_eid_right(int32_t  value) ;

constexpr void __cordl_internal_set_eid_up(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818a2070, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateDPadMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateDPadMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateDPadMapping(ControllerTemplateDPadMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateDPadMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateDPadMapping(ControllerTemplateDPadMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2422};

/// @brief Field eid_up, offset: 0x10, size: 0x4, def value: None
 int32_t  ___eid_up;

/// @brief Field eid_right, offset: 0x14, size: 0x4, def value: None
 int32_t  ___eid_right;

/// @brief Field eid_down, offset: 0x18, size: 0x4, def value: None
 int32_t  ___eid_down;

/// @brief Field eid_left, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___eid_left;

/// @brief Field eid_press, offset: 0x20, size: 0x4, def value: None
 int32_t  ___eid_press;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateDPadMapping, ___eid_up) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateDPadMapping, ___eid_right) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateDPadMapping, ___eid_down) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateDPadMapping, ___eid_left) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateDPadMapping, ___eid_press) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::ControllerTemplateDPadMapping) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
