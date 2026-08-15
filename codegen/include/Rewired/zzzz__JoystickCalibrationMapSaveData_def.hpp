#pragma once
// IWYU pragma private; include "Rewired/JoystickCalibrationMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__CalibrationMapSaveData_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JoystickCalibrationMapSaveData)
namespace Rewired {
class CalibrationMap;
}
namespace Rewired {
struct ControllerType;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class JoystickCalibrationMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::JoystickCalibrationMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::JoystickCalibrationMapSaveData*, "Rewired", "JoystickCalibrationMapSaveData");
// Dependencies Rewired.CalibrationMapSaveData, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.JoystickCalibrationMapSaveData
class CORDL_TYPE JoystickCalibrationMapSaveData : public ::Rewired::CalibrationMapSaveData {
public:
// Declarations
 __declspec(property(get=get_joystickHardwareTypeGuid)) ::System::Guid  joystickHardwareTypeGuid;

/// @brief Field pQkQjGGuLCOYLlBLZlZQggznEBpt, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_pQkQjGGuLCOYLlBLZlZQggznEBpt, put=__cordl_internal_set_pQkQjGGuLCOYLlBLZlZQggznEBpt)) ::System::Guid  pQkQjGGuLCOYLlBLZlZQggznEBpt;

static inline ::Rewired::JoystickCalibrationMapSaveData* New_ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr ::System::Guid const& __cordl_internal_get_pQkQjGGuLCOYLlBLZlZQggznEBpt() const;

constexpr ::System::Guid& __cordl_internal_get_pQkQjGGuLCOYLlBLZlZQggznEBpt() ;

constexpr void __cordl_internal_set_pQkQjGGuLCOYLlBLZlZQggznEBpt(::System::Guid  value) ;

/// @brief Method .ctor, addr 0x181973bd0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_joystickHardwareTypeGuid, addr 0x180a26490, size 0x12a0, virtual false, abstract: false, final false
inline ::System::Guid get_joystickHardwareTypeGuid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoystickCalibrationMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoystickCalibrationMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoystickCalibrationMapSaveData(JoystickCalibrationMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoystickCalibrationMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoystickCalibrationMapSaveData(JoystickCalibrationMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2020};

/// @brief Field pQkQjGGuLCOYLlBLZlZQggznEBpt, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  ___pQkQjGGuLCOYLlBLZlZQggznEBpt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::JoystickCalibrationMapSaveData, ___pQkQjGGuLCOYLlBLZlZQggznEBpt) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::JoystickCalibrationMapSaveData) == 0x38, "Size mismatch!");

} // namespace end def Rewired
