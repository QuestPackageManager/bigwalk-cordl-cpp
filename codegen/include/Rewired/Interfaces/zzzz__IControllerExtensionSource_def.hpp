#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerExtensionSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerExtensionSource)
// Forward declare root types
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IControllerExtensionSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IControllerExtensionSource*, "Rewired.Interfaces", "IControllerExtensionSource");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IControllerExtensionSource
class CORDL_TYPE IControllerExtensionSource {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IControllerExtensionSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerExtensionSource(IControllerExtensionSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
