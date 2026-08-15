#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IControllerDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerDriver)
// Forward declare root types
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
// Write type traits
MARK_REF_T(::Rewired::HID::Drivers::IControllerDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::IControllerDriver*, "Rewired.HID.Drivers", "IControllerDriver");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.IControllerDriver
class CORDL_TYPE IControllerDriver {
public:
// Declarations
 __declspec(property(get=get_AccelerometerCount)) int32_t  AccelerometerCount;

 __declspec(property(get=get_AxisCount)) int32_t  AxisCount;

 __declspec(property(get=get_ButtonCount)) int32_t  ButtonCount;

 __declspec(property(get=get_GyroscopeCount)) int32_t  GyroscopeCount;

 __declspec(property(get=get_HatCount)) int32_t  HatCount;

 __declspec(property(get=get_LightCount)) int32_t  LightCount;

 __declspec(property(get=get_TouchpadCount)) int32_t  TouchpadCount;

 __declspec(property(get=get_VibrationMotorCount)) int32_t  VibrationMotorCount;

/// @brief Method get_AccelerometerCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_AccelerometerCount() ;

/// @brief Method get_AxisCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_AxisCount() ;

/// @brief Method get_ButtonCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_ButtonCount() ;

/// @brief Method get_GyroscopeCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_GyroscopeCount() ;

/// @brief Method get_HatCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_HatCount() ;

/// @brief Method get_LightCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_LightCount() ;

/// @brief Method get_TouchpadCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_TouchpadCount() ;

/// @brief Method get_VibrationMotorCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_VibrationMotorCount() ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerDriver(IControllerDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2222};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::HID::Drivers
