#pragma once
// IWYU pragma private; include "Rewired/CalibrationMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CalibrationMap)
namespace Rewired::Utils::Classes::Data {
template<typename T>
class MappedArray_1;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
struct AxisCalibrationData;
}
namespace Rewired {
class AxisCalibration;
}
namespace Rewired {
struct AxisSensitivity2DType;
}
namespace Rewired {
struct DeadZone2DType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class CalibrationMap;
}
// Write type traits
MARK_REF_T(::Rewired::CalibrationMap*);
DEFINE_IL2CPP_CLASS(::Rewired::CalibrationMap*, "Rewired", "CalibrationMap");
// Dependencies Rewired.AxisCalibration, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CalibrationMap
class CORDL_TYPE CalibrationMap : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Axes)) ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*  Axes;

/// @brief Field HywPExzOwUbVcxQTYihxCnJyGtaGA, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_HywPExzOwUbVcxQTYihxCnJyGtaGA, put=__cordl_internal_set_HywPExzOwUbVcxQTYihxCnJyGtaGA)) int32_t  HywPExzOwUbVcxQTYihxCnJyGtaGA;

/// @brief Field UxdwlQnYVzTKOzkfEZbJvONLeNHr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UxdwlQnYVzTKOzkfEZbJvONLeNHr, put=__cordl_internal_set_UxdwlQnYVzTKOzkfEZbJvONLeNHr)) ::ArrayW<::Rewired::AxisCalibration*>  UxdwlQnYVzTKOzkfEZbJvONLeNHr;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

/// @brief Field gKiDrltyEsubUrOYDLrCDhdGNxuJ, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gKiDrltyEsubUrOYDLrCDhdGNxuJ, put=__cordl_internal_set_gKiDrltyEsubUrOYDLrCDhdGNxuJ)) ::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>*  gKiDrltyEsubUrOYDLrCDhdGNxuJ;

/// @brief Field myROlDAhmtRTvmftZeuAUxWZthaK, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myROlDAhmtRTvmftZeuAUxWZthaK, put=__cordl_internal_set_myROlDAhmtRTvmftZeuAUxWZthaK)) ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*  myROlDAhmtRTvmftZeuAUxWZthaK;

/// @brief Method BittZrhBnhuMtkgFJUdLYEEhkiXn, addr 0x1819720a0, size 0x1b0, virtual false, abstract: false, final false
inline void BittZrhBnhuMtkgFJUdLYEEhkiXn(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method CopyFrom, addr 0x181972250, size 0xe0, virtual false, abstract: false, final false
inline void CopyFrom(::Rewired::CalibrationMap*  map, bool  copyHardwareDeadzone) ;

/// @brief Method DVfnWFiETStZKSTerVewbWsbTTvk, addr 0x181972330, size 0x480, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* DVfnWFiETStZKSTerVewbWsbTTvk() ;

/// @brief Method GetAxis, addr 0x1819728c0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* GetAxis(int32_t  index) ;

/// @brief Method GetAxisData, addr 0x1819727b0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibrationData GetAxisData(int32_t  index) ;

/// @brief Method GetCalibrated2DValue, addr 0x181972950, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCalibrated2DValue(int32_t  xAxisIndex, int32_t  yAxisIndex, float_t  valueRawX, float_t  valueRawY, ::Rewired::DeadZone2DType  deadZoneType, ::Rewired::AxisSensitivity2DType  sensitivityType) ;

/// @brief Method GetCalibratedValue, addr 0x1819729d0, size 0xd0, virtual false, abstract: false, final false
inline float_t GetCalibratedValue(int32_t  axisIndex, float_t  value) ;

/// @brief Method ImportJsonString, addr 0x181972aa0, size 0x110, virtual false, abstract: false, final false
inline bool ImportJsonString(::StringW  jsonString) ;

/// @brief Method ImportXmlString, addr 0x181972bb0, size 0x110, virtual false, abstract: false, final false
inline bool ImportXmlString(::StringW  xmlString) ;

static inline ::Rewired::CalibrationMap* New_ctor() ;

static inline ::Rewired::CalibrationMap* New_ctor(::ArrayW<::Rewired::AxisCalibration*>  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::CalibrationMap* New_ctor(::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace, ::System::Func_2<int32_t,int32_t>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Reset, addr 0x181972cc0, size 0xc0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetAxisData, addr 0x181972d80, size 0xe0, virtual false, abstract: false, final false
inline bool SetAxisData(int32_t  index, ::Rewired::AxisCalibrationData  data) ;

/// @brief Method ToJsonString, addr 0x181972e60, size 0xe0, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

/// @brief Method ToXmlString, addr 0x181972f40, size 0x110, virtual false, abstract: false, final false
inline ::StringW ToXmlString() ;

constexpr int32_t const& __cordl_internal_get_HywPExzOwUbVcxQTYihxCnJyGtaGA() const;

constexpr int32_t& __cordl_internal_get_HywPExzOwUbVcxQTYihxCnJyGtaGA() ;

constexpr ::ArrayW<::Rewired::AxisCalibration*> const& __cordl_internal_get_UxdwlQnYVzTKOzkfEZbJvONLeNHr() const;

constexpr ::ArrayW<::Rewired::AxisCalibration*>& __cordl_internal_get_UxdwlQnYVzTKOzkfEZbJvONLeNHr() ;

constexpr ::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>* const& __cordl_internal_get_gKiDrltyEsubUrOYDLrCDhdGNxuJ() const;

constexpr ::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>*& __cordl_internal_get_gKiDrltyEsubUrOYDLrCDhdGNxuJ() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>* const& __cordl_internal_get_myROlDAhmtRTvmftZeuAUxWZthaK() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*& __cordl_internal_get_myROlDAhmtRTvmftZeuAUxWZthaK() ;

constexpr void __cordl_internal_set_HywPExzOwUbVcxQTYihxCnJyGtaGA(int32_t  value) ;

constexpr void __cordl_internal_set_UxdwlQnYVzTKOzkfEZbJvONLeNHr(::ArrayW<::Rewired::AxisCalibration*>  value) ;

constexpr void __cordl_internal_set_gKiDrltyEsubUrOYDLrCDhdGNxuJ(::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>*  value) ;

constexpr void __cordl_internal_set_myROlDAhmtRTvmftZeuAUxWZthaK(::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*  value) ;

/// @brief Method .ctor, addr 0x181973330, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181973250, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Rewired::AxisCalibration*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181973050, size 0x200, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Rewired::AxisCalibrationData>  _cordl_fixed_empty_name_whitespace, ::System::Func_2<int32_t,int32_t>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_Axes, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>* get_Axes() ;

/// @brief Method get_axisCount, addr 0x1803a9050, size 0x20, virtual false, abstract: false, final false
inline int32_t get_axisCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CalibrationMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CalibrationMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CalibrationMap(CalibrationMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CalibrationMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CalibrationMap(CalibrationMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2021};

/// @brief Field UxdwlQnYVzTKOzkfEZbJvONLeNHr, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Rewired::AxisCalibration*>  ___UxdwlQnYVzTKOzkfEZbJvONLeNHr;

/// @brief Field gKiDrltyEsubUrOYDLrCDhdGNxuJ, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::MappedArray_1<::Rewired::AxisCalibration*>*  ___gKiDrltyEsubUrOYDLrCDhdGNxuJ;

/// @brief Field myROlDAhmtRTvmftZeuAUxWZthaK, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::AxisCalibration*>*  ___myROlDAhmtRTvmftZeuAUxWZthaK;

/// @brief Field HywPExzOwUbVcxQTYihxCnJyGtaGA, offset: 0x28, size: 0x4, def value: None
 int32_t  ___HywPExzOwUbVcxQTYihxCnJyGtaGA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CalibrationMap, ___UxdwlQnYVzTKOzkfEZbJvONLeNHr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::CalibrationMap, ___gKiDrltyEsubUrOYDLrCDhdGNxuJ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::CalibrationMap, ___myROlDAhmtRTvmftZeuAUxWZthaK) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::CalibrationMap, ___HywPExzOwUbVcxQTYihxCnJyGtaGA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::CalibrationMap) == 0x30, "Size mismatch!");

} // namespace end def Rewired
