#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/IComponentControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponentControl)
// Forward declare root types
namespace Rewired::ComponentControls {
class IComponentControl;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::IComponentControl*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::IComponentControl*, "Rewired.ComponentControls", "IComponentControl");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.IComponentControl
class CORDL_TYPE IComponentControl {
public:
// Declarations
/// @brief Method ClearValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearValue() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

// Ctor Parameters [CppParam { name: "", ty: "IComponentControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IComponentControl(IComponentControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2742};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ComponentControls
