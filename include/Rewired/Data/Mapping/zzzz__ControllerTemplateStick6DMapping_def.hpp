#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateStick6DMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateStick6DMapping)
// Forward declare root types
namespace Rewired::Data::Mapping {
class ControllerTemplateStick6DMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping*, "Rewired.Data.Mapping", "ControllerTemplateStick6DMapping");
// Dependencies Rewired.Data.Mapping.ControllerTemplateSpecialElementMapping
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.ControllerTemplateStick6DMapping
class CORDL_TYPE ControllerTemplateStick6DMapping : public ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping {
public:
// Declarations
/// @brief Field eid_positionX, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_positionX, put=__cordl_internal_set_eid_positionX)) int32_t  eid_positionX;

/// @brief Field eid_positionY, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_positionY, put=__cordl_internal_set_eid_positionY)) int32_t  eid_positionY;

/// @brief Field eid_positionZ, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_positionZ, put=__cordl_internal_set_eid_positionZ)) int32_t  eid_positionZ;

/// @brief Field eid_rotationX, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_rotationX, put=__cordl_internal_set_eid_rotationX)) int32_t  eid_rotationX;

/// @brief Field eid_rotationY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_rotationY, put=__cordl_internal_set_eid_rotationY)) int32_t  eid_rotationY;

/// @brief Field eid_rotationZ, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_rotationZ, put=__cordl_internal_set_eid_rotationZ)) int32_t  eid_rotationZ;

static inline ::Rewired::Data::Mapping::ControllerTemplateStick6DMapping* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_eid_positionX() const;

constexpr int32_t& __cordl_internal_get_eid_positionX() ;

constexpr int32_t const& __cordl_internal_get_eid_positionY() const;

constexpr int32_t& __cordl_internal_get_eid_positionY() ;

constexpr int32_t const& __cordl_internal_get_eid_positionZ() const;

constexpr int32_t& __cordl_internal_get_eid_positionZ() ;

constexpr int32_t const& __cordl_internal_get_eid_rotationX() const;

constexpr int32_t& __cordl_internal_get_eid_rotationX() ;

constexpr int32_t const& __cordl_internal_get_eid_rotationY() const;

constexpr int32_t& __cordl_internal_get_eid_rotationY() ;

constexpr int32_t const& __cordl_internal_get_eid_rotationZ() const;

constexpr int32_t& __cordl_internal_get_eid_rotationZ() ;

constexpr void __cordl_internal_set_eid_positionX(int32_t  value) ;

constexpr void __cordl_internal_set_eid_positionY(int32_t  value) ;

constexpr void __cordl_internal_set_eid_positionZ(int32_t  value) ;

constexpr void __cordl_internal_set_eid_rotationX(int32_t  value) ;

constexpr void __cordl_internal_set_eid_rotationY(int32_t  value) ;

constexpr void __cordl_internal_set_eid_rotationZ(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818a2210, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateStick6DMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateStick6DMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateStick6DMapping(ControllerTemplateStick6DMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateStick6DMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateStick6DMapping(ControllerTemplateStick6DMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2427};

/// @brief Field eid_positionX, offset: 0x10, size: 0x4, def value: None
 int32_t  ___eid_positionX;

/// @brief Field eid_positionY, offset: 0x14, size: 0x4, def value: None
 int32_t  ___eid_positionY;

/// @brief Field eid_positionZ, offset: 0x18, size: 0x4, def value: None
 int32_t  ___eid_positionZ;

/// @brief Field eid_rotationX, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___eid_rotationX;

/// @brief Field eid_rotationY, offset: 0x20, size: 0x4, def value: None
 int32_t  ___eid_rotationY;

/// @brief Field eid_rotationZ, offset: 0x24, size: 0x4, def value: None
 int32_t  ___eid_rotationZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping, ___eid_positionX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping, ___eid_positionY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping, ___eid_positionZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping, ___eid_rotationX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping, ___eid_rotationY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping, ___eid_rotationZ) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::ControllerTemplateStick6DMapping) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
