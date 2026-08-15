#pragma once
// IWYU pragma private; include "Rewired/JoystickMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
CORDL_MODULE_EXPORT(JoystickMapSaveData)
namespace Rewired {
class JoystickMap;
}
namespace Rewired {
class Joystick;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class JoystickMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::JoystickMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::JoystickMapSaveData*, "Rewired", "JoystickMapSaveData");
// Dependencies Rewired.ControllerMapSaveData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.JoystickMapSaveData
class CORDL_TYPE JoystickMapSaveData : public ::Rewired::ControllerMapSaveData {
public:
// Declarations
 __declspec(property(get=get_joystick)) ::Rewired::Joystick*  joystick;

 __declspec(property(get=get_joystickHardwareTypeGuid)) ::System::Guid  joystickHardwareTypeGuid;

 __declspec(property(get=get_joystickMap)) ::Rewired::JoystickMap*  joystickMap;

static inline ::Rewired::JoystickMapSaveData* New_ctor(::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181994ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_joystick, addr 0x181995330, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::Joystick* get_joystick() ;

/// @brief Method get_joystickHardwareTypeGuid, addr 0x1819951b0, size 0x110, virtual false, abstract: false, final false
inline ::System::Guid get_joystickHardwareTypeGuid() ;

/// @brief Method get_joystickMap, addr 0x1819952c0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* get_joystickMap() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoystickMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoystickMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoystickMapSaveData(JoystickMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoystickMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoystickMapSaveData(JoystickMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::JoystickMapSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired
