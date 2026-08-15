#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/ControllerTemplateSpecialElementMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerTemplateSpecialElementMapping)
// Forward declare root types
namespace Rewired::Data::Mapping {
class ControllerTemplateSpecialElementMapping;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping*, "Rewired.Data.Mapping", "ControllerTemplateSpecialElementMapping");
// Dependencies System.Object
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.ControllerTemplateSpecialElementMapping
class CORDL_TYPE ControllerTemplateSpecialElementMapping : public ::System::Object {
public:
// Declarations
static inline ::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateSpecialElementMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateSpecialElementMapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateSpecialElementMapping(ControllerTemplateSpecialElementMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateSpecialElementMapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateSpecialElementMapping(ControllerTemplateSpecialElementMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
