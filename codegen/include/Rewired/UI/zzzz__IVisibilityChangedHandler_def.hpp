#pragma once
// IWYU pragma private; include "Rewired/UI/IVisibilityChangedHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVisibilityChangedHandler)
// Forward declare root types
namespace Rewired::UI {
class IVisibilityChangedHandler;
}
// Write type traits
MARK_REF_T(::Rewired::UI::IVisibilityChangedHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::UI::IVisibilityChangedHandler*, "Rewired.UI", "IVisibilityChangedHandler");
// Dependencies 
namespace Rewired::UI {
// Is value type: false
// CS Name: Rewired.UI.IVisibilityChangedHandler
class CORDL_TYPE IVisibilityChangedHandler {
public:
// Declarations
/// @brief Method OnVisibilityChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnVisibilityChanged(bool  state) ;

// Ctor Parameters [CppParam { name: "", ty: "IVisibilityChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVisibilityChangedHandler(IVisibilityChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::UI
