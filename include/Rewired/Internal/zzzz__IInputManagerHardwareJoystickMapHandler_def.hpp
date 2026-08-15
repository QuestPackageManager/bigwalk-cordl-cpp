#pragma once
// IWYU pragma private; include "Rewired/Internal/IInputManagerHardwareJoystickMapHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputManagerHardwareJoystickMapHandler)
namespace Rewired {
class HardwareJoystickMap_InputManager;
}
// Forward declare root types
namespace Rewired::Internal {
class IInputManagerHardwareJoystickMapHandler;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*, "Rewired.Internal", "IInputManagerHardwareJoystickMapHandler");
// Dependencies 
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.IInputManagerHardwareJoystickMapHandler
class CORDL_TYPE IInputManagerHardwareJoystickMapHandler {
public:
// Declarations
/// @brief Method InitializeHardwareJoystickMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeHardwareJoystickMap(::Rewired::HardwareJoystickMap_InputManager*  hardwareMap) ;

// Ctor Parameters [CppParam { name: "", ty: "IInputManagerHardwareJoystickMapHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputManagerHardwareJoystickMapHandler(IInputManagerHardwareJoystickMapHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Internal
