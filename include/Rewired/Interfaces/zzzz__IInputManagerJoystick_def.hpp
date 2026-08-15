#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IInputManagerJoystick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputManagerJoystick)
namespace Rewired::Interfaces {
class IInputManagerJoystickPublic;
}
namespace Rewired {
class BridgedController;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class ControllerDisconnectedEventArgs;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IInputManagerJoystick;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IInputManagerJoystick*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IInputManagerJoystick*, "Rewired.Interfaces", "IInputManagerJoystick");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IInputManagerJoystick
class CORDL_TYPE IInputManagerJoystick {
public:
// Declarations
/// @brief Convert operator to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr operator  ::Rewired::Interfaces::IInputManagerJoystickPublic*() noexcept;

/// @brief Method FillData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FillData(::Rewired::ControllerDataUpdater*  dataUpdater) ;

/// @brief Method ToBridgedController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::BridgedController* ToBridgedController() ;

/// @brief Method ToControllerDisconnectedEventArgs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerDisconnectedEventArgs* ToControllerDisconnectedEventArgs() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Convert to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* i___Rewired__Interfaces__IInputManagerJoystickPublic() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IInputManagerJoystick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputManagerJoystick(IInputManagerJoystick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
