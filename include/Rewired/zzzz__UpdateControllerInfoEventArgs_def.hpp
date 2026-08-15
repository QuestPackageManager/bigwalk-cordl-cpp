#pragma once
// IWYU pragma private; include "Rewired/UpdateControllerInfoEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(UpdateControllerInfoEventArgs)
namespace Rewired::Interfaces {
class IInputManagerJoystickPublic;
}
// Forward declare root types
namespace Rewired {
class UpdateControllerInfoEventArgs;
}
// Write type traits
MARK_REF_T(::Rewired::UpdateControllerInfoEventArgs*);
DEFINE_IL2CPP_CLASS(::Rewired::UpdateControllerInfoEventArgs*, "Rewired", "UpdateControllerInfoEventArgs");
// Dependencies System.EventArgs
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UpdateControllerInfoEventArgs
class CORDL_TYPE UpdateControllerInfoEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field sourceJoystick, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceJoystick, put=__cordl_internal_set_sourceJoystick)) ::Rewired::Interfaces::IInputManagerJoystickPublic*  sourceJoystick;

static inline ::Rewired::UpdateControllerInfoEventArgs* New_ctor(::Rewired::Interfaces::IInputManagerJoystickPublic*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* const& __cordl_internal_get_sourceJoystick() const;

constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic*& __cordl_internal_get_sourceJoystick() ;

constexpr void __cordl_internal_set_sourceJoystick(::Rewired::Interfaces::IInputManagerJoystickPublic*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Interfaces::IInputManagerJoystickPublic*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateControllerInfoEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateControllerInfoEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateControllerInfoEventArgs(UpdateControllerInfoEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateControllerInfoEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateControllerInfoEventArgs(UpdateControllerInfoEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1976};

/// @brief Field sourceJoystick, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Interfaces::IInputManagerJoystickPublic*  ___sourceJoystick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UpdateControllerInfoEventArgs, ___sourceJoystick) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::UpdateControllerInfoEventArgs) == 0x18, "Size mismatch!");

} // namespace end def Rewired
