#pragma once
// IWYU pragma private; include "Rewired/Internal/StandaloneAxis2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StandaloneAxis2D)
namespace Rewired::Internal {
class StandaloneAxis2D_ValueChangedEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis;
}
namespace Rewired {
class Axis2DCalibration;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Internal {
class StandaloneAxis2D;
}
namespace Rewired::Internal {
class StandaloneAxis2D_ValueChangedEventHandler;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::StandaloneAxis2D*);
MARK_REF_T(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis2D*, "Rewired.Internal", "StandaloneAxis2D");
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*, "Rewired.Internal", "StandaloneAxis2D/ValueChangedEventHandler");
// Dependencies System.MulticastDelegate
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis2D/ValueChangedEventHandler
class CORDL_TYPE StandaloneAxis2D_ValueChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1818fc870, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Vector2  value) ;

static inline ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x180eb2dd0, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis2D_ValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis2D_ValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis2D_ValueChangedEventHandler(StandaloneAxis2D_ValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis2D_ValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis2D_ValueChangedEventHandler(StandaloneAxis2D_ValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Internal
// Dependencies System.Object
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis2D
class CORDL_TYPE StandaloneAxis2D : public ::System::Object {
public:
// Declarations
using ValueChangedEventHandler = ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler;

/// @brief Field _RawValueChangedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__RawValueChangedEvent, put=__cordl_internal_set__RawValueChangedEvent)) ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  _RawValueChangedEvent;

/// @brief Field _ValueChangedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ValueChangedEvent, put=__cordl_internal_set__ValueChangedEvent)) ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  _ValueChangedEvent;

/// @brief Field _allowEvents, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowEvents, put=__cordl_internal_set__allowEvents)) bool  _allowEvents;

/// @brief Field _calibration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__calibration, put=__cordl_internal_set__calibration)) ::Rewired::Axis2DCalibration*  _calibration;

/// @brief Field _xAxis, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__xAxis, put=__cordl_internal_set__xAxis)) ::Rewired::Internal::StandaloneAxis*  _xAxis;

/// @brief Field _yAxis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::Rewired::Internal::StandaloneAxis*  _yAxis;

 __declspec(property(get=get_calibration)) ::Rewired::Axis2DCalibration*  calibration;

 __declspec(property(get=get_rawValue)) ::UnityEngine::Vector2  rawValue;

 __declspec(property(get=get_rawValueDelta)) ::UnityEngine::Vector2  rawValueDelta;

 __declspec(property(get=get_rawValuePrev)) ::UnityEngine::Vector2  rawValuePrev;

 __declspec(property(get=get_rawZero)) ::UnityEngine::Vector2  rawZero;

 __declspec(property(get=get_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_valueDelta)) ::UnityEngine::Vector2  valueDelta;

 __declspec(property(get=get_valuePrev)) ::UnityEngine::Vector2  valuePrev;

 __declspec(property(get=get_xAxis)) ::Rewired::Internal::StandaloneAxis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::Internal::StandaloneAxis*  yAxis;

/// @brief Method Clear, addr 0x1818f3d00, size 0xa0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateRelative, addr 0x1818f3da0, size 0x170, virtual false, abstract: false, final false
static inline ::Rewired::Internal::StandaloneAxis2D* CreateRelative() ;

/// @brief Method Deinitialize, addr 0x1818f3f10, size 0x10, virtual false, abstract: false, final false
inline void Deinitialize() ;

/// @brief Method EvalAndSendValueChangeEvents, addr 0x1818f3f20, size 0x170, virtual false, abstract: false, final false
inline void EvalAndSendValueChangeEvents() ;

/// @brief Method GetCalibratedValue, addr 0x1818f4100, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCalibratedValue(::Rewired::Internal::StandaloneAxis*  xAxis, ::Rewired::Internal::StandaloneAxis*  yAxis) ;

/// @brief Method GetCalibratedValuePrev, addr 0x1818f4090, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCalibratedValuePrev(::Rewired::Internal::StandaloneAxis*  xAxis, ::Rewired::Internal::StandaloneAxis*  yAxis) ;

/// @brief Method Initialize, addr 0x1818f4170, size 0x10, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Rewired::Internal::StandaloneAxis2D* New_ctor() ;

static inline ::Rewired::Internal::StandaloneAxis2D* New_ctor(::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method OnAxisRawValueChanged, addr 0x1818f4180, size 0x50, virtual false, abstract: false, final false
inline void OnAxisRawValueChanged(float_t  value) ;

/// @brief Method OnAxisValueChanged, addr 0x1818f41d0, size 0x50, virtual false, abstract: false, final false
inline void OnAxisValueChanged(float_t  value) ;

/// @brief Method SetRawValue, addr 0x1818f4290, size 0x70, virtual false, abstract: false, final false
inline void SetRawValue(::UnityEngine::Vector2  value) ;

/// @brief Method SetRawValue, addr 0x1818f4220, size 0x70, virtual false, abstract: false, final false
inline void SetRawValue(float_t  x, float_t  y) ;

/// @brief Method Subscribe, addr 0x1818f4300, size 0x260, virtual false, abstract: false, final false
inline void Subscribe() ;

/// @brief Method Unsubscribe, addr 0x1818f4560, size 0x260, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* const& __cordl_internal_get__RawValueChangedEvent() const;

constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*& __cordl_internal_get__RawValueChangedEvent() ;

constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* const& __cordl_internal_get__ValueChangedEvent() const;

constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*& __cordl_internal_get__ValueChangedEvent() ;

constexpr bool const& __cordl_internal_get__allowEvents() const;

constexpr bool& __cordl_internal_get__allowEvents() ;

constexpr ::Rewired::Axis2DCalibration* const& __cordl_internal_get__calibration() const;

constexpr ::Rewired::Axis2DCalibration*& __cordl_internal_get__calibration() ;

constexpr ::Rewired::Internal::StandaloneAxis* const& __cordl_internal_get__xAxis() const;

constexpr ::Rewired::Internal::StandaloneAxis*& __cordl_internal_get__xAxis() ;

constexpr ::Rewired::Internal::StandaloneAxis* const& __cordl_internal_get__yAxis() const;

constexpr ::Rewired::Internal::StandaloneAxis*& __cordl_internal_get__yAxis() ;

constexpr void __cordl_internal_set__RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__allowEvents(bool  value) ;

constexpr void __cordl_internal_set__calibration(::Rewired::Axis2DCalibration*  value) ;

constexpr void __cordl_internal_set__xAxis(::Rewired::Internal::StandaloneAxis*  value) ;

constexpr void __cordl_internal_set__yAxis(::Rewired::Internal::StandaloneAxis*  value) ;

/// @brief Method .ctor, addr 0x1818f47c0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818f48b0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method add_RawValueChangedEvent, addr 0x1818f49e0, size 0x80, virtual false, abstract: false, final false
inline void add_RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method add_ValueChangedEvent, addr 0x1818f4a60, size 0x80, virtual false, abstract: false, final false
inline void add_ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method add__RawValueChangedEvent, addr 0x1818f49e0, size 0x80, virtual false, abstract: false, final false
inline void add__RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method add__ValueChangedEvent, addr 0x1818f4a60, size 0x80, virtual false, abstract: false, final false
inline void add__ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method get_calibration, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Axis2DCalibration* get_calibration() ;

/// @brief Method get_rawValue, addr 0x1818f4c20, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_rawValue() ;

/// @brief Method get_rawValueDelta, addr 0x1818f4ae0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_rawValueDelta() ;

/// @brief Method get_rawValuePrev, addr 0x1818f4b90, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_rawValuePrev() ;

/// @brief Method get_rawZero, addr 0x1818f4cb0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_rawZero() ;

/// @brief Method get_value, addr 0x1818f4e90, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method get_valueDelta, addr 0x1818f4d10, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_valueDelta() ;

/// @brief Method get_valuePrev, addr 0x1818f4e20, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_valuePrev() ;

/// @brief Method get_xAxis, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::StandaloneAxis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::StandaloneAxis* get_yAxis() ;

/// @brief Method remove_RawValueChangedEvent, addr 0x1818f4f00, size 0x80, virtual false, abstract: false, final false
inline void remove_RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method remove_ValueChangedEvent, addr 0x1818f4f80, size 0x80, virtual false, abstract: false, final false
inline void remove_ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method remove__RawValueChangedEvent, addr 0x1818f4f00, size 0x80, virtual false, abstract: false, final false
inline void remove__RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

/// @brief Method remove__ValueChangedEvent, addr 0x1818f4f80, size 0x80, virtual false, abstract: false, final false
inline void remove__ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis2D(StandaloneAxis2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis2D(StandaloneAxis2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2825};

/// @brief Field _calibration, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Axis2DCalibration*  ____calibration;

/// @brief Field _xAxis, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis*  ____xAxis;

/// @brief Field _yAxis, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis*  ____yAxis;

/// @brief Field _allowEvents, offset: 0x28, size: 0x1, def value: None
 bool  ____allowEvents;

/// @brief Field _ValueChangedEvent, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  ____ValueChangedEvent;

/// @brief Field _RawValueChangedEvent, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  ____RawValueChangedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::StandaloneAxis2D, ____calibration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis2D, ____xAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis2D, ____yAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis2D, ____allowEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis2D, ____ValueChangedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis2D, ____RawValueChangedEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::StandaloneAxis2D) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Internal
