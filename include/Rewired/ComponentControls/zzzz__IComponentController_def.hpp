#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/IComponentController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponentController)
namespace Rewired::ComponentControls {
class IComponentControl;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class IRegistrar_1;
}
// Forward declare root types
namespace Rewired::ComponentControls {
class IComponentController;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::IComponentController*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::IComponentController*, "Rewired.ComponentControls", "IComponentController");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.IComponentController
class CORDL_TYPE IComponentController {
public:
// Declarations
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>"
constexpr operator  ::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>*() noexcept;

/// @brief Method ClearControlValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearControlValues() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>"
constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>* i___Rewired__Utils__Interfaces__IRegistrar_1___Rewired__ComponentControls__IComponentControl__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IComponentController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IComponentController(IComponentController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ComponentControls
