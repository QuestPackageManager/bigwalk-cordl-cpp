#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TiltControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__CustomControllerControl_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TiltControl)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForFloat;
}
namespace Rewired::ComponentControls {
struct TiltControl_TiltDirection;
}
namespace Rewired::Internal {
class StandaloneAxis2D;
}
namespace Rewired {
class Axis2DCalibration;
}
namespace Rewired {
class AxisCalibration;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::ComponentControls {
struct TiltControl_TiltDirection;
}
namespace Rewired::ComponentControls {
class TiltControl;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::TiltControl_TiltDirection);
MARK_REF_T(::Rewired::ComponentControls::TiltControl*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TiltControl_TiltDirection, "Rewired.ComponentControls", "TiltControl/TiltDirection");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TiltControl*, "Rewired.ComponentControls", "TiltControl");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TiltControl/TiltDirection
struct CORDL_TYPE TiltControl_TiltDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TiltControl_TiltDirection_Unwrapped
enum struct __TiltControl_TiltDirection_Unwrapped : int32_t {
__E_Both = static_cast<int32_t>(0x0),
__E_Horizontal = static_cast<int32_t>(0x1),
__E_Forward = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TiltControl_TiltDirection_Unwrapped () const noexcept {
return static_cast<__TiltControl_TiltDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TiltControl_TiltDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TiltControl_TiltDirection(int32_t  value__) noexcept;

/// @brief Field Both value: I32(0)
static ::Rewired::ComponentControls::TiltControl_TiltDirection const Both;

/// @brief Field Forward value: I32(2)
static ::Rewired::ComponentControls::TiltControl_TiltDirection const Forward;

/// @brief Field Horizontal value: I32(1)
static ::Rewired::ComponentControls::TiltControl_TiltDirection const Horizontal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TiltControl_TiltDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TiltControl_TiltDirection) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.CustomControllerControl, Rewired.ComponentControls.TiltControl::TiltDirection
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TiltControl
class CORDL_TYPE TiltControl : public ::Rewired::ComponentControls::CustomControllerControl {
public:
// Declarations
using TiltDirection = ::Rewired::ComponentControls::TiltControl_TiltDirection;

/// @brief Field _allowedTiltDirections, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowedTiltDirections, put=__cordl_internal_set__allowedTiltDirections)) ::Rewired::ComponentControls::TiltControl_TiltDirection  _allowedTiltDirections;

/// @brief Field _axis2D, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::Rewired::Internal::StandaloneAxis2D*  _axis2D;

/// @brief Field _forwardRestAngle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__forwardRestAngle, put=__cordl_internal_set__forwardRestAngle)) float_t  _forwardRestAngle;

/// @brief Field _forwardTiltCustomControllerElement, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardTiltCustomControllerElement, put=__cordl_internal_set__forwardTiltCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _forwardTiltCustomControllerElement;

/// @brief Field _forwardTiltLimit, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__forwardTiltLimit, put=__cordl_internal_set__forwardTiltLimit)) float_t  _forwardTiltLimit;

/// @brief Field _getAccelerationValue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__getAccelerationValue, put=__cordl_internal_set__getAccelerationValue)) ::System::Func_1<::UnityEngine::Vector3>*  _getAccelerationValue;

/// @brief Field _horizontalRestAngle, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__horizontalRestAngle, put=__cordl_internal_set__horizontalRestAngle)) float_t  _horizontalRestAngle;

/// @brief Field _horizontalTiltCustomControllerElement, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalTiltCustomControllerElement, put=__cordl_internal_set__horizontalTiltCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _horizontalTiltCustomControllerElement;

/// @brief Field _horizontalTiltLimit, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__horizontalTiltLimit, put=__cordl_internal_set__horizontalTiltLimit)) float_t  _horizontalTiltLimit;

/// @brief Field _useFAxis, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__useFAxis, put=__cordl_internal_set__useFAxis)) bool  _useFAxis;

/// @brief Field _useHAxis, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHAxis, put=__cordl_internal_set__useHAxis)) bool  _useHAxis;

 __declspec(property(get=get_axesToUse, put=set_axesToUse)) ::Rewired::ComponentControls::TiltControl_TiltDirection  axesToUse;

 __declspec(property(get=get_axis2DCalibration)) ::Rewired::Axis2DCalibration*  axis2DCalibration;

 __declspec(property(get=get_deadZoneType)) ::Rewired::Axis2DCalibration*  deadZoneType;

 __declspec(property(get=get_forwardRestAngle, put=set_forwardRestAngle)) float_t  forwardRestAngle;

 __declspec(property(get=get_forwardTiltCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  forwardTiltCustomControllerElement;

 __declspec(property(get=get_forwardTiltLimit, put=set_forwardTiltLimit)) float_t  forwardTiltLimit;

 __declspec(property(get=get_horizontalAxisCalibration)) ::Rewired::AxisCalibration*  horizontalAxisCalibration;

 __declspec(property(get=get_horizontalRestAngle, put=set_horizontalRestAngle)) float_t  horizontalRestAngle;

 __declspec(property(get=get_horizontalTiltCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  horizontalTiltCustomControllerElement;

 __declspec(property(get=get_horizontalTiltLimit, put=set_horizontalTiltLimit)) float_t  horizontalTiltLimit;

 __declspec(property(get=ysmeNYPaCJghbjvvmVZRTIJLWYQpA)) ::UnityEngine::Vector3  tnfjMFlHXdSGAijbUKoOYFvpxKkB;

 __declspec(property(get=BizNgBmbqrHgVPILYECeZjVnilAD)) ::Rewired::Internal::StandaloneAxis2D*  vXNOkCumVcoIlvHmGDlYRpxWUVJr;

 __declspec(property(get=get_verticalAxisCalibration)) ::Rewired::AxisCalibration*  verticalAxisCalibration;

/// @brief Method BizNgBmbqrHgVPILYECeZjVnilAD, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::StandaloneAxis2D* BizNgBmbqrHgVPILYECeZjVnilAD() ;

/// @brief Method ClearValue, addr 0x1818e0250, size 0x200, virtual true, abstract: false, final false
inline void ClearValue() ;

/// @brief Method IRwGfSVCICMmcoCGZSIDPlXUKbCC, addr 0x1818e0450, size 0x350, virtual false, abstract: false, final false
inline void IRwGfSVCICMmcoCGZSIDPlXUKbCC() ;

/// @brief Method NHKUOXTKuSPxihqrqGGzcwJdfgFQ, addr 0x1818e07a0, size 0x60, virtual true, abstract: false, final false
inline bool NHKUOXTKuSPxihqrqGGzcwJdfgFQ() ;

static inline ::Rewired::ComponentControls::TiltControl* New_ctor() ;

/// @brief Method OnValidate, addr 0x1818e0800, size 0x40, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetAccelerationSourceCallback, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void SetAccelerationSourceCallback(::System::Func_1<::UnityEngine::Vector3>*  callback) ;

/// @brief Method SetRestOrientation, addr 0x1818e0840, size 0x130, virtual false, abstract: false, final false
inline void SetRestOrientation() ;

/// @brief Method VNRzFlJPQQlMrAJxIDqFNtiYbFBGA, addr 0x1818e0970, size 0x100, virtual true, abstract: false, final false
inline void VNRzFlJPQQlMrAJxIDqFNtiYbFBGA() ;

constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection const& __cordl_internal_get__allowedTiltDirections() const;

constexpr ::Rewired::ComponentControls::TiltControl_TiltDirection& __cordl_internal_get__allowedTiltDirections() ;

constexpr ::Rewired::Internal::StandaloneAxis2D* const& __cordl_internal_get__axis2D() const;

constexpr ::Rewired::Internal::StandaloneAxis2D*& __cordl_internal_get__axis2D() ;

constexpr float_t const& __cordl_internal_get__forwardRestAngle() const;

constexpr float_t& __cordl_internal_get__forwardRestAngle() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__forwardTiltCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__forwardTiltCustomControllerElement() ;

constexpr float_t const& __cordl_internal_get__forwardTiltLimit() const;

constexpr float_t& __cordl_internal_get__forwardTiltLimit() ;

constexpr ::System::Func_1<::UnityEngine::Vector3>* const& __cordl_internal_get__getAccelerationValue() const;

constexpr ::System::Func_1<::UnityEngine::Vector3>*& __cordl_internal_get__getAccelerationValue() ;

constexpr float_t const& __cordl_internal_get__horizontalRestAngle() const;

constexpr float_t& __cordl_internal_get__horizontalRestAngle() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__horizontalTiltCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__horizontalTiltCustomControllerElement() ;

constexpr float_t const& __cordl_internal_get__horizontalTiltLimit() const;

constexpr float_t& __cordl_internal_get__horizontalTiltLimit() ;

constexpr bool const& __cordl_internal_get__useFAxis() const;

constexpr bool& __cordl_internal_get__useFAxis() ;

constexpr bool const& __cordl_internal_get__useHAxis() const;

constexpr bool& __cordl_internal_get__useHAxis() ;

constexpr void __cordl_internal_set__allowedTiltDirections(::Rewired::ComponentControls::TiltControl_TiltDirection  value) ;

constexpr void __cordl_internal_set__axis2D(::Rewired::Internal::StandaloneAxis2D*  value) ;

constexpr void __cordl_internal_set__forwardRestAngle(float_t  value) ;

constexpr void __cordl_internal_set__forwardTiltCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set__forwardTiltLimit(float_t  value) ;

constexpr void __cordl_internal_set__getAccelerationValue(::System::Func_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__horizontalRestAngle(float_t  value) ;

constexpr void __cordl_internal_set__horizontalTiltCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set__horizontalTiltLimit(float_t  value) ;

constexpr void __cordl_internal_set__useFAxis(bool  value) ;

constexpr void __cordl_internal_set__useHAxis(bool  value) ;

/// @brief Method .ctor, addr 0x1818e0a70, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method bPhPSQjBqCDsWMjmuHYSRsMtIPqR, addr 0x1818e0b30, size 0x10, virtual true, abstract: false, final false
inline void bPhPSQjBqCDsWMjmuHYSRsMtIPqR() ;

/// @brief Method get_axesToUse, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TiltControl_TiltDirection get_axesToUse() ;

/// @brief Method get_axis2DCalibration, addr 0x181808040, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Axis2DCalibration* get_axis2DCalibration() ;

/// @brief Method get_deadZoneType, addr 0x181808040, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Axis2DCalibration* get_deadZoneType() ;

/// @brief Method get_forwardRestAngle, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_forwardRestAngle() ;

/// @brief Method get_forwardTiltCustomControllerElement, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_forwardTiltCustomControllerElement() ;

/// @brief Method get_forwardTiltLimit, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_forwardTiltLimit() ;

/// @brief Method get_horizontalAxisCalibration, addr 0x1818e0b40, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_horizontalAxisCalibration() ;

/// @brief Method get_horizontalRestAngle, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_horizontalRestAngle() ;

/// @brief Method get_horizontalTiltCustomControllerElement, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_horizontalTiltCustomControllerElement() ;

/// @brief Method get_horizontalTiltLimit, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_horizontalTiltLimit() ;

/// @brief Method get_verticalAxisCalibration, addr 0x1818e0b70, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_verticalAxisCalibration() ;

/// @brief Method jIuVaGMWsljKRmfnpoQpXiuYdUAH, addr 0x1818e0ba0, size 0x150, virtual false, abstract: false, final false
inline void jIuVaGMWsljKRmfnpoQpXiuYdUAH(::Rewired::ComponentControls::TiltControl_TiltDirection  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pihKEZDYJKmyuRUvdKSeLFxxIKsG, addr 0x1818e0cf0, size 0x110, virtual false, abstract: false, final false
inline void pihKEZDYJKmyuRUvdKSeLFxxIKsG() ;

/// @brief Method set_axesToUse, addr 0x1818e0e00, size 0x40, virtual false, abstract: false, final false
inline void set_axesToUse(::Rewired::ComponentControls::TiltControl_TiltDirection  value) ;

/// @brief Method set_forwardRestAngle, addr 0x1818e0e40, size 0x60, virtual false, abstract: false, final false
inline void set_forwardRestAngle(float_t  value) ;

/// @brief Method set_forwardTiltLimit, addr 0x1818e0ea0, size 0x60, virtual false, abstract: false, final false
inline void set_forwardTiltLimit(float_t  value) ;

/// @brief Method set_horizontalRestAngle, addr 0x1818e0f00, size 0x60, virtual false, abstract: false, final false
inline void set_horizontalRestAngle(float_t  value) ;

/// @brief Method set_horizontalTiltLimit, addr 0x1818e0f60, size 0x60, virtual false, abstract: false, final false
inline void set_horizontalTiltLimit(float_t  value) ;

/// @brief Method ysmeNYPaCJghbjvvmVZRTIJLWYQpA, addr 0x1818e0fc0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ysmeNYPaCJghbjvvmVZRTIJLWYQpA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TiltControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TiltControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TiltControl(TiltControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TiltControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TiltControl(TiltControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2745};

/// @brief Field maxAngleOffset offset 0xffffffff size 0x4
static constexpr float_t  maxAngleOffset{static_cast<float_t>(90.0f)};

/// @brief Field maxFullTiltAngle offset 0xffffffff size 0x4
static constexpr float_t  maxFullTiltAngle{static_cast<float_t>(180.0f)};

/// @brief Field _allowedTiltDirections, offset: 0x30, size: 0x4, def value: None
 ::Rewired::ComponentControls::TiltControl_TiltDirection  ____allowedTiltDirections;

/// @brief Field _horizontalTiltCustomControllerElement, offset: 0x38, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____horizontalTiltCustomControllerElement;

/// @brief Field _horizontalTiltLimit, offset: 0x40, size: 0x4, def value: None
 float_t  ____horizontalTiltLimit;

/// @brief Field _horizontalRestAngle, offset: 0x44, size: 0x4, def value: None
 float_t  ____horizontalRestAngle;

/// @brief Field _forwardTiltCustomControllerElement, offset: 0x48, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____forwardTiltCustomControllerElement;

/// @brief Field _forwardTiltLimit, offset: 0x50, size: 0x4, def value: None
 float_t  ____forwardTiltLimit;

/// @brief Field _forwardRestAngle, offset: 0x54, size: 0x4, def value: None
 float_t  ____forwardRestAngle;

/// @brief Field _axis2D, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis2D*  ____axis2D;

/// @brief Field _useHAxis, offset: 0x60, size: 0x1, def value: None
 bool  ____useHAxis;

/// @brief Field _useFAxis, offset: 0x61, size: 0x1, def value: None
 bool  ____useFAxis;

/// @brief Field _getAccelerationValue, offset: 0x68, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Vector3>*  ____getAccelerationValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____allowedTiltDirections) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____horizontalTiltCustomControllerElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____horizontalTiltLimit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____horizontalRestAngle) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____forwardTiltCustomControllerElement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____forwardTiltLimit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____forwardRestAngle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____axis2D) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____useHAxis) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____useFAxis) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TiltControl, ____getAccelerationValue) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TiltControl) == 0x70, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
