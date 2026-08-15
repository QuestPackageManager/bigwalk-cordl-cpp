#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateElementSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateElementSource)
namespace Rewired {
struct ControllerTemplateElementSourceType;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateElementSource;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateElementSource*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateElementSource*, "Rewired", "IControllerTemplateElementSource");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateElementSource
class CORDL_TYPE IControllerTemplateElementSource {
public:
// Declarations
 __declspec(property(get=get_type)) ::Rewired::ControllerTemplateElementSourceType  type;

/// @brief Method get_type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerTemplateElementSourceType get_type() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateElementSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateElementSource(IControllerTemplateElementSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
