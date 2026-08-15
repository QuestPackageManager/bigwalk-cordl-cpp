#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerTemplateElementIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateElementIdentifier)
namespace Rewired::Interfaces {
class IControllerElementIdentifierCommon_Internal;
}
namespace Rewired {
struct ControllerTemplateElementType;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IControllerTemplateElementIdentifier;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IControllerTemplateElementIdentifier*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IControllerTemplateElementIdentifier*, "Rewired.Interfaces", "IControllerTemplateElementIdentifier");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IControllerTemplateElementIdentifier
class CORDL_TYPE IControllerTemplateElementIdentifier {
public:
// Declarations
 __declspec(property(get=get_elementType)) ::Rewired::ControllerTemplateElementType  elementType;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr operator  ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept;

/// @brief Method get_elementType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerTemplateElementType get_elementType() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateElementIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateElementIdentifier(IControllerTemplateElementIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
