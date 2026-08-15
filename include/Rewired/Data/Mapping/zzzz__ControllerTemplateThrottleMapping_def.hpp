#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateThrottleMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__ControllerTemplateSpecialElementMapping_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateThrottleMapping)
// Forward declare root types
namespace Rewired::Data::Mapping {
class ControllerTemplateThrottleMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::ControllerTemplateThrottleMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::ControllerTemplateThrottleMapping*, "Rewired.Data.Mapping", "ControllerTemplateThrottleMapping");
// Dependencies Rewired.Data.Mapping.ControllerTemplateSpecialElementMapping
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.ControllerTemplateThrottleMapping
class CORDL_TYPE ControllerTemplateThrottleMapping : public ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping {
public:
// Declarations
/// @brief Field eid_axis, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_axis, put=__cordl_internal_set_eid_axis)) int32_t  eid_axis;

/// @brief Field eid_minDetent, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_eid_minDetent, put=__cordl_internal_set_eid_minDetent)) int32_t  eid_minDetent;

static inline ::Rewired::Data::Mapping::ControllerTemplateThrottleMapping* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_eid_axis() const;

constexpr int32_t& __cordl_internal_get_eid_axis() ;

constexpr int32_t const& __cordl_internal_get_eid_minDetent() const;

constexpr int32_t& __cordl_internal_get_eid_minDetent() ;

constexpr void __cordl_internal_set_eid_axis(int32_t  value) ;

constexpr void __cordl_internal_set_eid_minDetent(int32_t  value) ;

/// @brief Method .ctor, addr 0x1814551b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateThrottleMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateThrottleMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateThrottleMapping(ControllerTemplateThrottleMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateThrottleMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateThrottleMapping(ControllerTemplateThrottleMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2424};

/// @brief Field eid_axis, offset: 0x10, size: 0x4, def value: None
 int32_t  ___eid_axis;

/// @brief Field eid_minDetent, offset: 0x14, size: 0x4, def value: None
 int32_t  ___eid_minDetent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateThrottleMapping, ___eid_axis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::ControllerTemplateThrottleMapping, ___eid_minDetent) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::ControllerTemplateThrottleMapping) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
