#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IControllerTemplateMapSpecialElement_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateMapSpecialElement_Internal)
// Forward declare root types
namespace Rewired::Data::Mapping {
class IControllerTemplateMapSpecialElement_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*, "Rewired.Data.Mapping", "IControllerTemplateMapSpecialElement_Internal");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.IControllerTemplateMapSpecialElement_Internal
class CORDL_TYPE IControllerTemplateMapSpecialElement_Internal {
public:
// Declarations
/// @brief Method GetMapping, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T GetMapping() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateMapSpecialElement_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateMapSpecialElement_Internal(IControllerTemplateMapSpecialElement_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2672};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Data::Mapping
