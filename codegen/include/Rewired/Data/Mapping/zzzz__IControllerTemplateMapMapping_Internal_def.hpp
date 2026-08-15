#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IControllerTemplateMapMapping_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IControllerTemplateMapMapping_Internal)
namespace Rewired {
class IControllerElementTarget;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class IControllerTemplateMapMapping_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::IControllerTemplateMapMapping_Internal*, "Rewired.Data.Mapping", "IControllerTemplateMapMapping_Internal");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.IControllerTemplateMapMapping_Internal
class CORDL_TYPE IControllerTemplateMapMapping_Internal {
public:
// Declarations
/// @brief Method GetTargets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<::Rewired::IControllerElementTarget*> GetTargets() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateMapMapping_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateMapMapping_Internal(IControllerTemplateMapMapping_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data::Mapping
