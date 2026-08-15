#pragma once
// IWYU pragma private; include "Rewired/AxisCalibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__AlternateAxisCalibrationType_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisCalibration)
namespace Rewired::Data::Mapping {
struct AlternateAxisCalibrationType;
}
namespace Rewired::Data::Mapping {
class AxisCalibrationInfo;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
struct AxisCalibrationData;
}
namespace Rewired {
struct AxisRange;
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
class AxisCalibration;
}
// Write type traits
MARK_REF_T(::Rewired::AxisCalibration*);
DEFINE_IL2CPP_CLASS(::Rewired::AxisCalibration*, "Rewired", "AxisCalibration");
// Dependencies Rewired.AxisSensitivityType, Rewired.Data.Mapping.AlternateAxisCalibrationType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.AxisCalibration
class CORDL_TYPE AxisCalibration : public ::System::Object {
public:
// Declarations
/// @brief Field _applyRangeCalibration, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__applyRangeCalibration, put=__cordl_internal_set__applyRangeCalibration)) bool  _applyRangeCalibration;

/// @brief Field _calibratedMax, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__calibratedMax, put=__cordl_internal_set__calibratedMax)) float_t  _calibratedMax;

/// @brief Field _calibratedMin, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__calibratedMin, put=__cordl_internal_set__calibratedMin)) float_t  _calibratedMin;

/// @brief Field _calibratedZero, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__calibratedZero, put=__cordl_internal_set__calibratedZero)) float_t  _calibratedZero;

/// @brief Field _calibrationMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__calibrationMode, put=__cordl_internal_set__calibrationMode)) ::Rewired::Data::Mapping::AlternateAxisCalibrationType  _calibrationMode;

/// @brief Field _deadZone, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZone, put=__cordl_internal_set__deadZone)) float_t  _deadZone;

/// @brief Field _enabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _hardwareCalibrations, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardwareCalibrations, put=__cordl_internal_set__hardwareCalibrations)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  _hardwareCalibrations;

/// @brief Field _invert, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__invert, put=__cordl_internal_set__invert)) bool  _invert;

/// @brief Field _sensitivity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sensitivity, put=__cordl_internal_set__sensitivity)) float_t  _sensitivity;

/// @brief Field _sensitivityCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sensitivityCurve, put=__cordl_internal_set__sensitivityCurve)) ::UnityEngine::AnimationCurve*  _sensitivityCurve;

/// @brief Field _sensitivityType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__sensitivityType, put=__cordl_internal_set__sensitivityType)) ::Rewired::AxisSensitivityType  _sensitivityType;

 __declspec(property(get=get_applyRangeCalibration, put=set_applyRangeCalibration)) bool  applyRangeCalibration;

 __declspec(property(get=get_calibratedMax, put=set_calibratedMax)) float_t  calibratedMax;

 __declspec(property(get=get_calibratedMin, put=set_calibratedMin)) float_t  calibratedMin;

 __declspec(property(get=get_calibratedZero, put=set_calibratedZero)) float_t  calibratedZero;

 __declspec(property(get=get_calibrationMode, put=set_calibrationMode)) ::Rewired::Data::Mapping::AlternateAxisCalibrationType  calibrationMode;

 __declspec(property(get=get_deadZone, put=set_deadZone)) float_t  deadZone;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_invert, put=set_invert)) bool  invert;

 __declspec(property(get=get_sensitivity, put=set_sensitivity)) float_t  sensitivity;

 __declspec(property(get=get_sensitivityCurve, put=set_sensitivityCurve)) ::UnityEngine::AnimationCurve*  sensitivityCurve;

 __declspec(property(get=get_sensitivityType, put=set_sensitivityType)) ::Rewired::AxisSensitivityType  sensitivityType;

/// @brief Method CopyFrom, addr 0x181981da0, size 0xb0, virtual false, abstract: false, final false
inline void CopyFrom(::Rewired::AxisCalibration*  data, bool  copyHardwareData) ;

/// @brief Method CreateDefaultHardwareCalibration, addr 0x181981e50, size 0x90, virtual false, abstract: false, final false
inline void CreateDefaultHardwareCalibration(::Rewired::AxisCalibrationData  defaultData) ;

/// @brief Method CreateRelative, addr 0x181981ee0, size 0x340, virtual false, abstract: false, final false
static inline ::Rewired::AxisCalibration* CreateRelative() ;

/// @brief Method ExportData, addr 0x181982220, size 0x180, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* ExportData() ;

/// @brief Method GetCalibratedValue, addr 0x1819825a0, size 0xc0, virtual false, abstract: false, final false
inline float_t GetCalibratedValue(float_t  value) ;

/// @brief Method GetCalibratedValue, addr 0x181982660, size 0x120, virtual false, abstract: false, final false
inline float_t GetCalibratedValue(float_t  value, ::Rewired::AxisRange  axisRange) ;

/// @brief Method GetCalibratedValue, addr 0x181982480, size 0x120, virtual false, abstract: false, final false
inline float_t GetCalibratedValue(float_t  value, ::Rewired::AxisRange  axisRange, float_t  customDeadzone, bool  applySensitivity, bool  applyInversion) ;

/// @brief Method GetCalibratedValue, addr 0x1819823a0, size 0xe0, virtual false, abstract: false, final false
inline float_t GetCalibratedValue(float_t  value, float_t  customDeadzone, bool  applySensitivity, bool  applyInversion) ;

/// @brief Method GetData, addr 0x181982780, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibrationData GetData() ;

/// @brief Method GetHardwareDefault, addr 0x181982830, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::AxisCalibrationInfo* GetHardwareDefault() ;

/// @brief Method Import, addr 0x1819828f0, size 0x140, virtual false, abstract: false, final false
inline void Import(::Rewired::Utils::Classes::Data::SerializedObject*  serializedObject) ;

/// @brief Method InitHardwareCalibrations, addr 0x181982a30, size 0x170, virtual false, abstract: false, final false
inline void InitHardwareCalibrations(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  hardwareCalibrations, ::Rewired::AxisCalibrationData  defaultData) ;

static inline ::Rewired::AxisCalibration* New_ctor() ;

static inline ::Rewired::AxisCalibration* New_ctor(::Rewired::AxisCalibrationData  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::AxisCalibration* New_ctor(bool  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, float_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, bool  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method Reset, addr 0x181982ba0, size 0x130, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetData, addr 0x181982cd0, size 0x70, virtual false, abstract: false, final false
inline void SetData(::Rewired::AxisCalibrationData  data) ;

constexpr bool const& __cordl_internal_get__applyRangeCalibration() const;

constexpr bool& __cordl_internal_get__applyRangeCalibration() ;

constexpr float_t const& __cordl_internal_get__calibratedMax() const;

constexpr float_t& __cordl_internal_get__calibratedMax() ;

constexpr float_t const& __cordl_internal_get__calibratedMin() const;

constexpr float_t& __cordl_internal_get__calibratedMin() ;

constexpr float_t const& __cordl_internal_get__calibratedZero() const;

constexpr float_t& __cordl_internal_get__calibratedZero() ;

constexpr ::Rewired::Data::Mapping::AlternateAxisCalibrationType const& __cordl_internal_get__calibrationMode() const;

constexpr ::Rewired::Data::Mapping::AlternateAxisCalibrationType& __cordl_internal_get__calibrationMode() ;

constexpr float_t const& __cordl_internal_get__deadZone() const;

constexpr float_t& __cordl_internal_get__deadZone() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>* const& __cordl_internal_get__hardwareCalibrations() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*& __cordl_internal_get__hardwareCalibrations() ;

constexpr bool const& __cordl_internal_get__invert() const;

constexpr bool& __cordl_internal_get__invert() ;

constexpr float_t const& __cordl_internal_get__sensitivity() const;

constexpr float_t& __cordl_internal_get__sensitivity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__sensitivityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__sensitivityCurve() ;

constexpr ::Rewired::AxisSensitivityType const& __cordl_internal_get__sensitivityType() const;

constexpr ::Rewired::AxisSensitivityType& __cordl_internal_get__sensitivityType() ;

constexpr void __cordl_internal_set__applyRangeCalibration(bool  value) ;

constexpr void __cordl_internal_set__calibratedMax(float_t  value) ;

constexpr void __cordl_internal_set__calibratedMin(float_t  value) ;

constexpr void __cordl_internal_set__calibratedZero(float_t  value) ;

constexpr void __cordl_internal_set__calibrationMode(::Rewired::Data::Mapping::AlternateAxisCalibrationType  value) ;

constexpr void __cordl_internal_set__deadZone(float_t  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__hardwareCalibrations(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  value) ;

constexpr void __cordl_internal_set__invert(bool  value) ;

constexpr void __cordl_internal_set__sensitivity(float_t  value) ;

constexpr void __cordl_internal_set__sensitivityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__sensitivityType(::Rewired::AxisSensitivityType  value) ;

/// @brief Method .ctor, addr 0x181982e40, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181982d40, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Rewired::AxisCalibrationData  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181982ff0, size 0x200, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4, float_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, bool  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::AxisSensitivityType  _cordl_fixed_empty_name_whitespace_param_8, float_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::AnimationCurve*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method get_applyRangeCalibration, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_applyRangeCalibration() ;

/// @brief Method get_calibratedMax, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_calibratedMax() ;

/// @brief Method get_calibratedMin, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_calibratedMin() ;

/// @brief Method get_calibratedZero, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_calibratedZero() ;

/// @brief Method get_calibrationMode, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::Mapping::AlternateAxisCalibrationType get_calibrationMode() ;

/// @brief Method get_deadZone, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_deadZone() ;

/// @brief Method get_enabled, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_invert, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method get_sensitivity, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_sensitivity() ;

/// @brief Method get_sensitivityCurve, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_sensitivityCurve() ;

/// @brief Method get_sensitivityType, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivityType get_sensitivityType() ;

/// @brief Method set_applyRangeCalibration, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_applyRangeCalibration(bool  value) ;

/// @brief Method set_calibratedMax, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_calibratedMax(float_t  value) ;

/// @brief Method set_calibratedMin, addr 0x180bb44a0, size 0x3450, virtual false, abstract: false, final false
inline void set_calibratedMin(float_t  value) ;

/// @brief Method set_calibratedZero, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_calibratedZero(float_t  value) ;

/// @brief Method set_calibrationMode, addr 0x1819831f0, size 0x10, virtual false, abstract: false, final false
inline void set_calibrationMode(::Rewired::Data::Mapping::AlternateAxisCalibrationType  value) ;

/// @brief Method set_deadZone, addr 0x181983200, size 0x20, virtual false, abstract: false, final false
inline void set_deadZone(float_t  value) ;

/// @brief Method set_enabled, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_invert, addr 0x180c29b80, size 0x2090, virtual false, abstract: false, final false
inline void set_invert(bool  value) ;

/// @brief Method set_sensitivity, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivity(float_t  value) ;

/// @brief Method set_sensitivityCurve, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivityCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_sensitivityType, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_sensitivityType(::Rewired::AxisSensitivityType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisCalibration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisCalibration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisCalibration(AxisCalibration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisCalibration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisCalibration(AxisCalibration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2022};

/// @brief Field _calibrationMode, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Data::Mapping::AlternateAxisCalibrationType  ____calibrationMode;

/// @brief Field _hardwareCalibrations, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::Mapping::AxisCalibrationInfo*>*  ____hardwareCalibrations;

/// @brief Field _enabled, offset: 0x20, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _deadZone, offset: 0x24, size: 0x4, def value: None
 float_t  ____deadZone;

/// @brief Field _calibratedZero, offset: 0x28, size: 0x4, def value: None
 float_t  ____calibratedZero;

/// @brief Field _calibratedMin, offset: 0x2c, size: 0x4, def value: None
 float_t  ____calibratedMin;

/// @brief Field _calibratedMax, offset: 0x30, size: 0x4, def value: None
 float_t  ____calibratedMax;

/// @brief Field _invert, offset: 0x34, size: 0x1, def value: None
 bool  ____invert;

/// @brief Field _sensitivityType, offset: 0x38, size: 0x4, def value: None
 ::Rewired::AxisSensitivityType  ____sensitivityType;

/// @brief Field _sensitivity, offset: 0x3c, size: 0x4, def value: None
 float_t  ____sensitivity;

/// @brief Field _sensitivityCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____sensitivityCurve;

/// @brief Field _applyRangeCalibration, offset: 0x48, size: 0x1, def value: None
 bool  ____applyRangeCalibration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::AxisCalibration, ____calibrationMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____hardwareCalibrations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____enabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____deadZone) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____calibratedZero) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____calibratedMin) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____calibratedMax) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____invert) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____sensitivityType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____sensitivity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____sensitivityCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::AxisCalibration, ____applyRangeCalibration) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rewired::AxisCalibration) == 0x50, "Size mismatch!");

} // namespace end def Rewired
