#pragma once
// IWYU pragma private; include "Rewired/AxisCalibrationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisCalibrationData)
namespace Rewired::Data::Mapping {
class AxisCalibrationInfo;
}
namespace Rewired {
struct AxisSensitivityType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Rewired {
struct AxisCalibrationData;
}
// Write type traits
MARK_VAL_T(::Rewired::AxisCalibrationData);
DEFINE_IL2CPP_CLASS(::Rewired::AxisCalibrationData, "Rewired", "AxisCalibrationData");
// Dependencies Rewired.AxisSensitivityType
namespace Rewired {
// Is value type: true
// CS Name: Rewired.AxisCalibrationData
struct CORDL_TYPE AxisCalibrationData {
public:
// Declarations
/// @brief Method .ctor, addr 0x181981840, size 0x130, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method .ctor, addr 0x181981970, size 0x90, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_7, float_t  _cordl_fixed_empty_name_whitespace_param_8, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method .ctor, addr 0x181981a00, size 0x130, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, float_t  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method get_Default, addr 0x181981b30, size 0x120, virtual false, abstract: false, final false
static inline ::Rewired::AxisCalibrationData get_Default() ;

/// @brief Method get_Raw, addr 0x181981c50, size 0x150, virtual false, abstract: false, final false
static inline ::Rewired::AxisCalibrationData get_Raw() ;

// Ctor Parameters []
// @brief default ctor
constexpr AxisCalibrationData() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "deadZone", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zero", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "invert", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sensitivityType", ty: "::Rewired::AxisSensitivityType", modifiers: "", def_value: None }, CppParam { name: "sensitivity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sensitivityCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "applyRangeCalibration", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "calibrations", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*", modifiers: "", def_value: None }]
constexpr AxisCalibrationData(bool  enabled, float_t  deadZone, float_t  zero, float_t  min, float_t  max, bool  invert, ::Rewired::AxisSensitivityType  sensitivityType, float_t  sensitivity, ::UnityEngine::AnimationCurve*  sensitivityCurve, bool  applyRangeCalibration, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  calibrations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// @brief Field deadZone, offset: 0x4, size: 0x4, def value: None
 float_t  deadZone;

/// @brief Field zero, offset: 0x8, size: 0x4, def value: None
 float_t  zero;

/// @brief Field min, offset: 0xc, size: 0x4, def value: None
 float_t  min;

/// @brief Field max, offset: 0x10, size: 0x4, def value: None
 float_t  max;

/// @brief Field invert, offset: 0x14, size: 0x1, def value: None
 bool  invert;

/// @brief Field sensitivityType, offset: 0x18, size: 0x4, def value: None
 ::Rewired::AxisSensitivityType  sensitivityType;

/// @brief Field sensitivity, offset: 0x1c, size: 0x4, def value: None
 float_t  sensitivity;

/// @brief Field sensitivityCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  sensitivityCurve;

/// @brief Field applyRangeCalibration, offset: 0x28, size: 0x1, def value: None
 bool  applyRangeCalibration;

/// @brief Field calibrations, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  calibrations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::AxisCalibrationData, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, deadZone) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, zero) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, min) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, max) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, invert) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, sensitivityType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, sensitivity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, sensitivityCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, applyRangeCalibration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibrationData, calibrations) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::AxisCalibrationData) == 0x38, "Size mismatch!");

} // namespace end def Rewired
