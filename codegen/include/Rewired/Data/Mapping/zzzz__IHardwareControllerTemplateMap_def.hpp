#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IHardwareControllerTemplateMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHardwareControllerTemplateMap)
// Forward declare root types
namespace Rewired::Data::Mapping {
class IHardwareControllerTemplateMap;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::IHardwareControllerTemplateMap*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::IHardwareControllerTemplateMap*, "Rewired.Data.Mapping", "IHardwareControllerTemplateMap");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.IHardwareControllerTemplateMap
class CORDL_TYPE IHardwareControllerTemplateMap {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IHardwareControllerTemplateMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHardwareControllerTemplateMap(IHardwareControllerTemplateMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2668};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data::Mapping
