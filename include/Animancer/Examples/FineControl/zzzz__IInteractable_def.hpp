#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/IInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInteractable)
// Forward declare root types
namespace Animancer::Examples::FineControl {
class IInteractable;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::IInteractable*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::IInteractable*, "Animancer.Examples.FineControl", "IInteractable");
// Dependencies 
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.IInteractable
class CORDL_TYPE IInteractable {
public:
// Declarations
/// @brief Method Interact, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Interact() ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractable(IInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::Examples::FineControl
