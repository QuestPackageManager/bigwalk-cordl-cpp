#pragma once
// IWYU pragma private; include "Rewired/Axis2DCalibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisSensitivity2DType_def.hpp"
#include "Rewired/zzzz__DeadZone2DType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Axis2DCalibration)
namespace Rewired {
class AxisCalibration;
}
namespace Rewired {
struct AxisSensitivity2DType;
}
namespace Rewired {
struct DeadZone2DType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class Axis2DCalibration;
}
// Write type traits
MARK_REF_T(::Rewired::Axis2DCalibration*);
DEFINE_IL2CPP_CLASS(::Rewired::Axis2DCalibration*, "Rewired", "Axis2DCalibration");
// Dependencies Rewired.AxisSensitivity2DType, Rewired.DeadZone2DType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Axis2DCalibration
class CORDL_TYPE Axis2DCalibration : public ::System::Object {
public:
// Declarations
/// @brief Field _deadZoneType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZoneType, put=__cordl_internal_set__deadZoneType)) ::Rewired::DeadZone2DType  _deadZoneType;

/// @brief Field _sensitivityType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__sensitivityType, put=__cordl_internal_set__sensitivityType)) ::Rewired::AxisSensitivity2DType  _sensitivityType;

 __declspec(property(get=get_deadZoneType, put=set_deadZoneType)) ::Rewired::DeadZone2DType  deadZoneType;

 __declspec(property(get=get_sensitivityType, put=set_sensitivityType)) ::Rewired::AxisSensitivity2DType  sensitivityType;

/// @brief Method GetCalibrated2DValue, addr 0x181981360, size 0x4e0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCalibrated2DValue(float_t  valueRawX, float_t  valueRawY, ::Rewired::AxisCalibration*  xAxis, ::Rewired::AxisCalibration*  yAxis) ;

/// @brief Method GetCalibrated2DValue, addr 0x181980e90, size 0x4d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetCalibrated2DValue(float_t  valueRawX, float_t  valueRawY, ::Rewired::AxisCalibration*  xAxis, ::Rewired::AxisCalibration*  yAxis, ::Rewired::DeadZone2DType  deadZoneType, ::Rewired::AxisSensitivity2DType  sensitivityType) ;

static inline ::Rewired::Axis2DCalibration* New_ctor() ;

constexpr ::Rewired::DeadZone2DType const& __cordl_internal_get__deadZoneType() const;

constexpr ::Rewired::DeadZone2DType& __cordl_internal_get__deadZoneType() ;

constexpr ::Rewired::AxisSensitivity2DType const& __cordl_internal_get__sensitivityType() const;

constexpr ::Rewired::AxisSensitivity2DType& __cordl_internal_get__sensitivityType() ;

constexpr void __cordl_internal_set__deadZoneType(::Rewired::DeadZone2DType  value) ;

constexpr void __cordl_internal_set__sensitivityType(::Rewired::AxisSensitivity2DType  value) ;

/// @brief Method .ctor, addr 0x181659530, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_deadZoneType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::DeadZone2DType get_deadZoneType() ;

/// @brief Method get_sensitivityType, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivity2DType get_sensitivityType() ;

/// @brief Method set_deadZoneType, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_deadZoneType(::Rewired::DeadZone2DType  value) ;

/// @brief Method set_sensitivityType, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivityType(::Rewired::AxisSensitivity2DType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis2DCalibration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis2DCalibration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis2DCalibration(Axis2DCalibration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis2DCalibration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis2DCalibration(Axis2DCalibration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2024};

/// @brief Field _deadZoneType, offset: 0x10, size: 0x4, def value: None
 ::Rewired::DeadZone2DType  ____deadZoneType;

/// @brief Field _sensitivityType, offset: 0x14, size: 0x4, def value: None
 ::Rewired::AxisSensitivity2DType  ____sensitivityType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Axis2DCalibration, ____deadZoneType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Axis2DCalibration, ____sensitivityType) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Axis2DCalibration) == 0x18, "Size mismatch!");

} // namespace end def Rewired
