#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchPad.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__TouchInteractable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchPad)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForBoolean;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSetForFloat;
}
namespace Rewired::ComponentControls {
struct TouchPad_AxisDirection;
}
namespace Rewired::ComponentControls {
class TouchPad_PressDownEventHandler;
}
namespace Rewired::ComponentControls {
class TouchPad_PressUpEventHandler;
}
namespace Rewired::ComponentControls {
class TouchPad_TapEventHandler;
}
namespace Rewired::ComponentControls {
struct TouchPad_TouchPadMode;
}
namespace Rewired::ComponentControls {
class TouchPad_ValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
struct TouchPad_ValueFormat;
}
namespace Rewired::ComponentControls {
class TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb;
}
namespace Rewired::ComponentControls {
class jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR;
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
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::ComponentControls {
struct TouchPad_AxisDirection;
}
namespace Rewired::ComponentControls {
struct TouchPad_TouchPadMode;
}
namespace Rewired::ComponentControls {
struct TouchPad_ValueFormat;
}
namespace Rewired::ComponentControls {
class TouchPad;
}
namespace Rewired::ComponentControls {
class TouchPad_PressDownEventHandler;
}
namespace Rewired::ComponentControls {
class TouchPad_PressUpEventHandler;
}
namespace Rewired::ComponentControls {
class TouchPad_TapEventHandler;
}
namespace Rewired::ComponentControls {
class TouchPad_ValueChangedEventHandler;
}
namespace Rewired::ComponentControls {
class TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb;
}
namespace Rewired::ComponentControls {
class jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::TouchPad_AxisDirection);
MARK_VAL_T(::Rewired::ComponentControls::TouchPad_TouchPadMode);
MARK_VAL_T(::Rewired::ComponentControls::TouchPad_ValueFormat);
MARK_REF_T(::Rewired::ComponentControls::TouchPad*);
MARK_REF_T(::Rewired::ComponentControls::TouchPad_PressDownEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchPad_PressUpEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchPad_TapEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*);
MARK_REF_T(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*);
MARK_REF_T(::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_AxisDirection, "Rewired.ComponentControls", "TouchPad/AxisDirection");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_TouchPadMode, "Rewired.ComponentControls", "TouchPad/TouchPadMode");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_ValueFormat, "Rewired.ComponentControls", "TouchPad/ValueFormat");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad*, "Rewired.ComponentControls", "TouchPad");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_PressDownEventHandler*, "Rewired.ComponentControls", "TouchPad/PressDownEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_PressUpEventHandler*, "Rewired.ComponentControls", "TouchPad/PressUpEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_TapEventHandler*, "Rewired.ComponentControls", "TouchPad/TapEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*, "Rewired.ComponentControls", "TouchPad/ValueChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*, "Rewired.ComponentControls", "TouchPad/jBojNJDTyFWPznhONwSqSCpNPCbGb");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*, "Rewired.ComponentControls", "TouchPad/jBojNJDTyFWPznhONwSqSCpNPCbGb/WaznCkNdFDAyuUaCmYpLpziPfgdR");
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchPad/AxisDirection
struct CORDL_TYPE TouchPad_AxisDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchPad_AxisDirection_Unwrapped
enum struct __TouchPad_AxisDirection_Unwrapped : int32_t {
__E_Both = static_cast<int32_t>(0x0),
__E_Horizontal = static_cast<int32_t>(0x1),
__E_Vertical = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPad_AxisDirection_Unwrapped () const noexcept {
return static_cast<__TouchPad_AxisDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_AxisDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPad_AxisDirection(int32_t  value__) noexcept;

/// @brief Field Both value: I32(0)
static ::Rewired::ComponentControls::TouchPad_AxisDirection const Both;

/// @brief Field Horizontal value: I32(1)
static ::Rewired::ComponentControls::TouchPad_AxisDirection const Horizontal;

/// @brief Field Vertical value: I32(2)
static ::Rewired::ComponentControls::TouchPad_AxisDirection const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchPad_AxisDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchPad_AxisDirection) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchPad/TouchPadMode
struct CORDL_TYPE TouchPad_TouchPadMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchPad_TouchPadMode_Unwrapped
enum struct __TouchPad_TouchPadMode_Unwrapped : int32_t {
__E_Delta = static_cast<int32_t>(0x0),
__E_ScreenPosition = static_cast<int32_t>(0x1),
__E_VectorFromCenter = static_cast<int32_t>(0x2),
__E_VectorFromInitialTouch = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPad_TouchPadMode_Unwrapped () const noexcept {
return static_cast<__TouchPad_TouchPadMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_TouchPadMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPad_TouchPadMode(int32_t  value__) noexcept;

/// @brief Field Delta value: I32(0)
static ::Rewired::ComponentControls::TouchPad_TouchPadMode const Delta;

/// @brief Field ScreenPosition value: I32(1)
static ::Rewired::ComponentControls::TouchPad_TouchPadMode const ScreenPosition;

/// @brief Field VectorFromCenter value: I32(2)
static ::Rewired::ComponentControls::TouchPad_TouchPadMode const VectorFromCenter;

/// @brief Field VectorFromInitialTouch value: I32(3)
static ::Rewired::ComponentControls::TouchPad_TouchPadMode const VectorFromInitialTouch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchPad_TouchPadMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchPad_TouchPadMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies 
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.TouchPad/ValueFormat
struct CORDL_TYPE TouchPad_ValueFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchPad_ValueFormat_Unwrapped
enum struct __TouchPad_ValueFormat_Unwrapped : int32_t {
__E_Pixels = static_cast<int32_t>(0x0),
__E_Screen = static_cast<int32_t>(0x1),
__E_Physical = static_cast<int32_t>(0x2),
__E_Direction = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPad_ValueFormat_Unwrapped () const noexcept {
return static_cast<__TouchPad_ValueFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_ValueFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPad_ValueFormat(int32_t  value__) noexcept;

/// @brief Field Direction value: I32(3)
static ::Rewired::ComponentControls::TouchPad_ValueFormat const Direction;

/// @brief Field Physical value: I32(2)
static ::Rewired::ComponentControls::TouchPad_ValueFormat const Physical;

/// @brief Field Pixels value: I32(0)
static ::Rewired::ComponentControls::TouchPad_ValueFormat const Pixels;

/// @brief Field Screen value: I32(1)
static ::Rewired::ComponentControls::TouchPad_ValueFormat const Screen;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchPad_ValueFormat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchPad_ValueFormat) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad/jBojNJDTyFWPznhONwSqSCpNPCbGb/WaznCkNdFDAyuUaCmYpLpziPfgdR
class CORDL_TYPE jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR : public ::System::Object {
public:
// Declarations
/// @brief Field dSZvEHMKHQOhgjKIRqVFQwGueile, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_dSZvEHMKHQOhgjKIRqVFQwGueile, put=__cordl_internal_set_dSZvEHMKHQOhgjKIRqVFQwGueile)) uint32_t  dSZvEHMKHQOhgjKIRqVFQwGueile;

/// @brief Field meaYmCWZTyHQJeIhFTaAaGJlRvQv, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_meaYmCWZTyHQJeIhFTaAaGJlRvQv, put=__cordl_internal_set_meaYmCWZTyHQJeIhFTaAaGJlRvQv)) float_t  meaYmCWZTyHQJeIhFTaAaGJlRvQv;

/// @brief Field uXItBsqRKlrItqGOxgDPPsnHAVAA, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_uXItBsqRKlrItqGOxgDPPsnHAVAA, put=__cordl_internal_set_uXItBsqRKlrItqGOxgDPPsnHAVAA)) float_t  uXItBsqRKlrItqGOxgDPPsnHAVAA;

static inline ::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_dSZvEHMKHQOhgjKIRqVFQwGueile() const;

constexpr uint32_t& __cordl_internal_get_dSZvEHMKHQOhgjKIRqVFQwGueile() ;

constexpr float_t const& __cordl_internal_get_meaYmCWZTyHQJeIhFTaAaGJlRvQv() const;

constexpr float_t& __cordl_internal_get_meaYmCWZTyHQJeIhFTaAaGJlRvQv() ;

constexpr float_t const& __cordl_internal_get_uXItBsqRKlrItqGOxgDPPsnHAVAA() const;

constexpr float_t& __cordl_internal_get_uXItBsqRKlrItqGOxgDPPsnHAVAA() ;

constexpr void __cordl_internal_set_dSZvEHMKHQOhgjKIRqVFQwGueile(uint32_t  value) ;

constexpr void __cordl_internal_set_meaYmCWZTyHQJeIhFTaAaGJlRvQv(float_t  value) ;

constexpr void __cordl_internal_set_uXItBsqRKlrItqGOxgDPPsnHAVAA(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR(jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR(jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2785};

/// @brief Field meaYmCWZTyHQJeIhFTaAaGJlRvQv, offset: 0x10, size: 0x4, def value: None
 float_t  ___meaYmCWZTyHQJeIhFTaAaGJlRvQv;

/// @brief Field uXItBsqRKlrItqGOxgDPPsnHAVAA, offset: 0x14, size: 0x4, def value: None
 float_t  ___uXItBsqRKlrItqGOxgDPPsnHAVAA;

/// @brief Field dSZvEHMKHQOhgjKIRqVFQwGueile, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___dSZvEHMKHQOhgjKIRqVFQwGueile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR, ___meaYmCWZTyHQJeIhFTaAaGJlRvQv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR, ___uXItBsqRKlrItqGOxgDPPsnHAVAA) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR, ___dSZvEHMKHQOhgjKIRqVFQwGueile) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR) == 0x20, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchPad::jBojNJDTyFWPznhONwSqSCpNPCbGb::WaznCkNdFDAyuUaCmYpLpziPfgdR, System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad/jBojNJDTyFWPznhONwSqSCpNPCbGb
class CORDL_TYPE TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb : public ::System::Object {
public:
// Declarations
using WaznCkNdFDAyuUaCmYpLpziPfgdR = ::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR;

/// @brief Field NTRXTJwsVcwROgHtYTnhAAPupzXF, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_NTRXTJwsVcwROgHtYTnhAAPupzXF, put=__cordl_internal_set_NTRXTJwsVcwROgHtYTnhAAPupzXF)) int32_t  NTRXTJwsVcwROgHtYTnhAAPupzXF;

/// @brief Field eSYFQMbvLAMPWPEvRZlfBpDsQzXu, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_eSYFQMbvLAMPWPEvRZlfBpDsQzXu, put=__cordl_internal_set_eSYFQMbvLAMPWPEvRZlfBpDsQzXu)) ::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>  eSYFQMbvLAMPWPEvRZlfBpDsQzXu;

/// @brief Field etybDCAfhEBzMSRFnufWBNiEGBxAA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_etybDCAfhEBzMSRFnufWBNiEGBxAA, put=__cordl_internal_set_etybDCAfhEBzMSRFnufWBNiEGBxAA)) int32_t  etybDCAfhEBzMSRFnufWBNiEGBxAA;

/// @brief Method JgsuiiMRwsMpimmAFdYPMDyXYiNV, addr 0x1818fd900, size 0x10, virtual false, abstract: false, final false
static inline int32_t JgsuiiMRwsMpimmAFdYPMDyXYiNV(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QyzXobKBPifuOXLbffcBiWsnSHXD, addr 0x1818fd910, size 0xc0, virtual false, abstract: false, final false
inline void QyzXobKBPifuOXLbffcBiWsnSHXD(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method UnQQFAivPruigpCSRgDbBKDgiIIh, addr 0x1818fd9d0, size 0x10, virtual false, abstract: false, final false
inline int32_t UnQQFAivPruigpCSRgDbBKDgiIIh(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method VDxKgTnlzWukyosbXQizlfwbcRtKA, addr 0x1818fd9e0, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 VDxKgTnlzWukyosbXQizlfwbcRtKA() ;

constexpr int32_t const& __cordl_internal_get_NTRXTJwsVcwROgHtYTnhAAPupzXF() const;

constexpr int32_t& __cordl_internal_get_NTRXTJwsVcwROgHtYTnhAAPupzXF() ;

constexpr ::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*> const& __cordl_internal_get_eSYFQMbvLAMPWPEvRZlfBpDsQzXu() const;

constexpr ::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>& __cordl_internal_get_eSYFQMbvLAMPWPEvRZlfBpDsQzXu() ;

constexpr int32_t const& __cordl_internal_get_etybDCAfhEBzMSRFnufWBNiEGBxAA() const;

constexpr int32_t& __cordl_internal_get_etybDCAfhEBzMSRFnufWBNiEGBxAA() ;

constexpr void __cordl_internal_set_NTRXTJwsVcwROgHtYTnhAAPupzXF(int32_t  value) ;

constexpr void __cordl_internal_set_eSYFQMbvLAMPWPEvRZlfBpDsQzXu(::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>  value) ;

constexpr void __cordl_internal_set_etybDCAfhEBzMSRFnufWBNiEGBxAA(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818fdae0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method dAMOhHkFZFUiljIwPTpWRxzHbyK, addr 0x1818fdb40, size 0x20, virtual false, abstract: false, final false
static inline bool dAMOhHkFZFUiljIwPTpWRxzHbyK(uint32_t  _cordl_fixed_empty_name_whitespace, uint32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method nuZvuCvAeYruDliZCdKkkmyBjnifb, addr 0x1818fdb60, size 0x20, virtual false, abstract: false, final false
inline void nuZvuCvAeYruDliZCdKkkmyBjnifb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb(TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb(TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2786};

/// @brief Field NTRXTJwsVcwROgHtYTnhAAPupzXF, offset: 0x10, size: 0x4, def value: None
 int32_t  ___NTRXTJwsVcwROgHtYTnhAAPupzXF;

/// @brief Field eSYFQMbvLAMPWPEvRZlfBpDsQzXu, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>  ___eSYFQMbvLAMPWPEvRZlfBpDsQzXu;

/// @brief Field etybDCAfhEBzMSRFnufWBNiEGBxAA, offset: 0x20, size: 0x4, def value: None
 int32_t  ___etybDCAfhEBzMSRFnufWBNiEGBxAA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb, ___NTRXTJwsVcwROgHtYTnhAAPupzXF) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb, ___eSYFQMbvLAMPWPEvRZlfBpDsQzXu) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb, ___etybDCAfhEBzMSRFnufWBNiEGBxAA) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb) == 0x28, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector2
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad/ValueChangedEventHandler
class CORDL_TYPE TouchPad_ValueChangedEventHandler : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_ValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_ValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPad_ValueChangedEventHandler(TouchPad_ValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_ValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPad_ValueChangedEventHandler(TouchPad_ValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad/TapEventHandler
class CORDL_TYPE TouchPad_TapEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchPad_TapEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_TapEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_TapEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPad_TapEventHandler(TouchPad_TapEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_TapEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPad_TapEventHandler(TouchPad_TapEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2788};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchPad_TapEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad/PressDownEventHandler
class CORDL_TYPE TouchPad_PressDownEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchPad_PressDownEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_PressDownEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_PressDownEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPad_PressDownEventHandler(TouchPad_PressDownEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_PressDownEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPad_PressDownEventHandler(TouchPad_PressDownEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchPad_PressDownEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.Events.UnityEvent
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad/PressUpEventHandler
class CORDL_TYPE TouchPad_PressUpEventHandler : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Rewired::ComponentControls::TouchPad_PressUpEventHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x18060c280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_PressUpEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_PressUpEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPad_PressUpEventHandler(TouchPad_PressUpEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPad_PressUpEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPad_PressUpEventHandler(TouchPad_PressUpEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::TouchPad_PressUpEventHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.TouchInteractable, Rewired.ComponentControls.TouchPad::AxisDirection, Rewired.ComponentControls.TouchPad::TouchPadMode, Rewired.ComponentControls.TouchPad::ValueFormat, UnityEngine.Vector2, UnityEngine.Vector3
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchPad
class CORDL_TYPE TouchPad : public ::Rewired::ComponentControls::TouchInteractable {
public:
// Declarations
using AxisDirection = ::Rewired::ComponentControls::TouchPad_AxisDirection;

using PressDownEventHandler = ::Rewired::ComponentControls::TouchPad_PressDownEventHandler;

using PressUpEventHandler = ::Rewired::ComponentControls::TouchPad_PressUpEventHandler;

using TapEventHandler = ::Rewired::ComponentControls::TouchPad_TapEventHandler;

using TouchPadMode = ::Rewired::ComponentControls::TouchPad_TouchPadMode;

using ValueChangedEventHandler = ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler;

using ValueFormat = ::Rewired::ComponentControls::TouchPad_ValueFormat;

using jBojNJDTyFWPznhONwSqSCpNPCbGb = ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb;

 __declspec(property(get=jZDETYWFoUAIkRRiNmaSivHcDDMT)) ::Rewired::Internal::StandaloneAxis2D*  BFKDcXbkbdUFgaNZVYkizTfWilwr;

/// @brief Field IgjTfOWBPNVpnYXocDkPsnfKzwcD, offset 0x1b5, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgjTfOWBPNVpnYXocDkPsnfKzwcD, put=__cordl_internal_set_IgjTfOWBPNVpnYXocDkPsnfKzwcD)) bool  IgjTfOWBPNVpnYXocDkPsnfKzwcD;

/// @brief Field __fakePointerEventData, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get___fakePointerEventData, put=__cordl_internal_set___fakePointerEventData)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  __fakePointerEventData;

/// @brief Field _activateOnSwipeIn, offset 0x164, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateOnSwipeIn, put=__cordl_internal_set__activateOnSwipeIn)) bool  _activateOnSwipeIn;

/// @brief Field _allowPress, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowPress, put=__cordl_internal_set__allowPress)) bool  _allowPress;

/// @brief Field _allowTap, offset 0x166, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowTap, put=__cordl_internal_set__allowTap)) bool  _allowTap;

/// @brief Field _axesToUse, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get__axesToUse, put=__cordl_internal_set__axesToUse)) ::Rewired::ComponentControls::TouchPad_AxisDirection  _axesToUse;

/// @brief Field _axis2D, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::Rewired::Internal::StandaloneAxis2D*  _axis2D;

/// @brief Field _currentCenter, offset 0x1c4, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentCenter, put=__cordl_internal_set__currentCenter)) ::UnityEngine::Vector3  _currentCenter;

/// @brief Field _hideAtRuntime, offset 0x17c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideAtRuntime, put=__cordl_internal_set__hideAtRuntime)) bool  _hideAtRuntime;

/// @brief Field _horizontalAxisCustomControllerElement, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalAxisCustomControllerElement, put=__cordl_internal_set__horizontalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _horizontalAxisCustomControllerElement;

/// @brief Field _inertiaFriction, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__inertiaFriction, put=__cordl_internal_set__inertiaFriction)) float_t  _inertiaFriction;

/// @brief Field _isEligibleForPress, offset 0x1dd, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEligibleForPress, put=__cordl_internal_set__isEligibleForPress)) bool  _isEligibleForPress;

/// @brief Field _isEligibleForTap, offset 0x1dc, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEligibleForTap, put=__cordl_internal_set__isEligibleForTap)) bool  _isEligibleForTap;

/// @brief Field _lastTapFrame, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTapFrame, put=__cordl_internal_set__lastTapFrame)) int32_t  _lastTapFrame;

/// @brief Field _onPressDown, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPressDown, put=__cordl_internal_set__onPressDown)) ::Rewired::ComponentControls::TouchPad_PressDownEventHandler*  _onPressDown;

/// @brief Field _onPressUp, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPressUp, put=__cordl_internal_set__onPressUp)) ::Rewired::ComponentControls::TouchPad_PressUpEventHandler*  _onPressUp;

/// @brief Field _onTap, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__onTap, put=__cordl_internal_set__onTap)) ::Rewired::ComponentControls::TouchPad_TapEventHandler*  _onTap;

/// @brief Field _onValueChanged, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__onValueChanged, put=__cordl_internal_set__onValueChanged)) ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*  _onValueChanged;

/// @brief Field _pointerDownIsFake, offset 0x1b6, size 0x1 
 __declspec(property(get=__cordl_internal_get__pointerDownIsFake, put=__cordl_internal_set__pointerDownIsFake)) bool  _pointerDownIsFake;

/// @brief Field _pointerId, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointerId, put=__cordl_internal_set__pointerId)) int32_t  _pointerId;

/// @brief Field _pressCustomControllerElement, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__pressCustomControllerElement, put=__cordl_internal_set__pressCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  _pressCustomControllerElement;

/// @brief Field _pressDistanceLimit, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressDistanceLimit, put=__cordl_internal_set__pressDistanceLimit)) int32_t  _pressDistanceLimit;

/// @brief Field _pressStartDelay, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressStartDelay, put=__cordl_internal_set__pressStartDelay)) float_t  _pressStartDelay;

/// @brief Field _pressValue, offset 0x1de, size 0x1 
 __declspec(property(get=__cordl_internal_get__pressValue, put=__cordl_internal_set__pressValue)) bool  _pressValue;

/// @brief Field _previousTouchPosition, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousTouchPosition, put=__cordl_internal_set__previousTouchPosition)) ::UnityEngine::Vector2  _previousTouchPosition;

/// @brief Field _realMousePointerId, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__realMousePointerId, put=__cordl_internal_set__realMousePointerId)) int32_t  _realMousePointerId;

/// @brief Field _smoothDelta, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothDelta, put=__cordl_internal_set__smoothDelta)) ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*  _smoothDelta;

/// @brief Field _stayActiveOnSwipeOut, offset 0x165, size 0x1 
 __declspec(property(get=__cordl_internal_get__stayActiveOnSwipeOut, put=__cordl_internal_set__stayActiveOnSwipeOut)) bool  _stayActiveOnSwipeOut;

/// @brief Field _tapCustomControllerElement, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__tapCustomControllerElement, put=__cordl_internal_set__tapCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  _tapCustomControllerElement;

/// @brief Field _tapDistanceLimit, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tapDistanceLimit, put=__cordl_internal_set__tapDistanceLimit)) int32_t  _tapDistanceLimit;

/// @brief Field _tapTimeout, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__tapTimeout, put=__cordl_internal_set__tapTimeout)) float_t  _tapTimeout;

/// @brief Field _touchPadMode, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get__touchPadMode, put=__cordl_internal_set__touchPadMode)) ::Rewired::ComponentControls::TouchPad_TouchPadMode  _touchPadMode;

/// @brief Field _touchStartPosition, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchStartPosition, put=__cordl_internal_set__touchStartPosition)) ::UnityEngine::Vector2  _touchStartPosition;

/// @brief Field _touchStartTime, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__touchStartTime, put=__cordl_internal_set__touchStartTime)) float_t  _touchStartTime;

/// @brief Field _useInertia, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get__useInertia, put=__cordl_internal_set__useInertia)) bool  _useInertia;

/// @brief Field _useXAxis, offset 0x1a8, size 0x1 
 __declspec(property(get=__cordl_internal_get__useXAxis, put=__cordl_internal_set__useXAxis)) bool  _useXAxis;

/// @brief Field _useYAxis, offset 0x1a9, size 0x1 
 __declspec(property(get=__cordl_internal_get__useYAxis, put=__cordl_internal_set__useYAxis)) bool  _useYAxis;

/// @brief Field _valueFormat, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueFormat, put=__cordl_internal_set__valueFormat)) ::Rewired::ComponentControls::TouchPad_ValueFormat  _valueFormat;

/// @brief Field _verticalAxisCustomControllerElement, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__verticalAxisCustomControllerElement, put=__cordl_internal_set__verticalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  _verticalAxisCustomControllerElement;

 __declspec(property(get=get_activateOnSwipeIn, put=set_activateOnSwipeIn)) bool  activateOnSwipeIn;

 __declspec(property(get=get_allowPress, put=set_allowPress)) bool  allowPress;

 __declspec(property(get=get_allowTap, put=set_allowTap)) bool  allowTap;

 __declspec(property(get=vNjeMnILCXQWxljmPlbOyyleOsIk)) bool  anxiLvyORpirSpTdgCakjKVsSqZC;

 __declspec(property(get=get_axesToUse, put=set_axesToUse)) ::Rewired::ComponentControls::TouchPad_AxisDirection  axesToUse;

 __declspec(property(get=get_axis2DCalibration)) ::Rewired::Axis2DCalibration*  axis2DCalibration;

 __declspec(property(get=get_hasPointer)) bool  hasPointer;

 __declspec(property(get=get_hideAtRuntime, put=set_hideAtRuntime)) bool  hideAtRuntime;

 __declspec(property(get=get_horizontalAxisCalibration)) ::Rewired::AxisCalibration*  horizontalAxisCalibration;

 __declspec(property(get=get_horizontalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  horizontalAxisCustomControllerElement;

 __declspec(property(get=get_inertiaFriction, put=set_inertiaFriction)) float_t  inertiaFriction;

 __declspec(property(get=get_pointerId, put=set_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_pressCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  pressCustomControllerElement;

 __declspec(property(get=get_pressDistanceLimit, put=set_pressDistanceLimit)) int32_t  pressDistanceLimit;

 __declspec(property(get=get_pressStartDelay, put=set_pressStartDelay)) float_t  pressStartDelay;

 __declspec(property(get=get_stayActiveOnSwipeOut, put=set_stayActiveOnSwipeOut)) bool  stayActiveOnSwipeOut;

 __declspec(property(get=get_tapCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  tapCustomControllerElement;

 __declspec(property(get=get_tapDistanceLimit, put=set_tapDistanceLimit)) int32_t  tapDistanceLimit;

 __declspec(property(get=get_tapTimeout, put=set_tapTimeout)) float_t  tapTimeout;

 __declspec(property(get=get_touchPadMode, put=set_touchPadMode)) ::Rewired::ComponentControls::TouchPad_TouchPadMode  touchPadMode;

 __declspec(property(get=get_touchPosition)) ::UnityEngine::Vector2  touchPosition;

 __declspec(property(get=get_touchStartPosition)) ::UnityEngine::Vector2  touchStartPosition;

/// @brief Field uldmQqpMAWCNQIQyGOPheAUhJhmnA, offset 0x1b4, size 0x1 
 __declspec(property(get=__cordl_internal_get_uldmQqpMAWCNQIQyGOPheAUhJhmnA, put=__cordl_internal_set_uldmQqpMAWCNQIQyGOPheAUhJhmnA)) bool  uldmQqpMAWCNQIQyGOPheAUhJhmnA;

 __declspec(property(get=get_useInertia, put=set_useInertia)) bool  useInertia;

 __declspec(property(get=get_valueFormat, put=set_valueFormat)) ::Rewired::ComponentControls::TouchPad_ValueFormat  valueFormat;

 __declspec(property(get=get_verticalAxisCalibration)) ::Rewired::AxisCalibration*  verticalAxisCalibration;

 __declspec(property(get=get_verticalAxisCustomControllerElement)) ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  verticalAxisCustomControllerElement;

 __declspec(property(get=bTlAcsJWlXsuWRSzhVMeZdhcMmmJ)) int32_t  xyktTIHBueYVfknOGjyKmcQiquAA;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method AtuQQYepiRNldWHfwbBpjLPhptqkA, addr 0x1818f8360, size 0x90, virtual false, abstract: false, final false
inline void AtuQQYepiRNldWHfwbBpjLPhptqkA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Awake, addr 0x1818f83f0, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearValue, addr 0x1818f8430, size 0xd0, virtual true, abstract: false, final false
inline void ClearValue() ;

/// @brief Method JfxgmYsBXGeZBdUPbrFslufDMlRu, addr 0x1818f8500, size 0x1c0, virtual false, abstract: false, final false
inline void JfxgmYsBXGeZBdUPbrFslufDMlRu() ;

/// @brief Method KUfirxVzFMTPetJrLaWUVOpyHpqN, addr 0x1818f86c0, size 0xe0, virtual false, abstract: false, final false
inline void KUfirxVzFMTPetJrLaWUVOpyHpqN(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LUBhVDBsNrAQnlhOOXXTxQjOejgW, addr 0x1818f87a0, size 0x160, virtual false, abstract: false, final false
inline void LUBhVDBsNrAQnlhOOXXTxQjOejgW(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ComponentControls::TouchPad* New_ctor() ;

/// @brief Method OnPointerDown, addr 0x1818f8900, size 0x60, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x1818f8960, size 0x60, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x1818f89c0, size 0xf0, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x1818f8ab0, size 0xf0, virtual true, abstract: false, final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnValidate, addr 0x1818f8ba0, size 0x40, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RXMxPGuKoCDulCnoPRmlOPhLnXyo, addr 0x1818f8be0, size 0x100, virtual false, abstract: false, final false
inline void RXMxPGuKoCDulCnoPRmlOPhLnXyo() ;

/// @brief Method TCUcCNutSJOIAWBTEVRBKHBZJTPs, addr 0x1818f8ce0, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 TCUcCNutSJOIAWBTEVRBKHBZJTPs(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TszfKZAMlGcLLsjWojETulpCcDmYA, addr 0x1818f8e10, size 0x20, virtual false, abstract: false, final false
inline void TszfKZAMlGcLLsjWojETulpCcDmYA() ;

/// @brief Method YiNLyHlhxIiJqusikdCpBMiRSjHM, addr 0x1818f8e30, size 0x210, virtual false, abstract: false, final false
inline void YiNLyHlhxIiJqusikdCpBMiRSjHM() ;

/// @brief Method ZAktBMgIFjptuVBQwCgzcThgEJqA, addr 0x1818f9040, size 0xe0, virtual false, abstract: false, final false
inline void ZAktBMgIFjptuVBQwCgzcThgEJqA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZdxMjiZiEtOjtvyUerTExoUXNhvC, addr 0x1818f9120, size 0xf0, virtual false, abstract: false, final false
inline void ZdxMjiZiEtOjtvyUerTExoUXNhvC(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get_IgjTfOWBPNVpnYXocDkPsnfKzwcD() const;

constexpr bool& __cordl_internal_get_IgjTfOWBPNVpnYXocDkPsnfKzwcD() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get___fakePointerEventData() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get___fakePointerEventData() ;

constexpr bool const& __cordl_internal_get__activateOnSwipeIn() const;

constexpr bool& __cordl_internal_get__activateOnSwipeIn() ;

constexpr bool const& __cordl_internal_get__allowPress() const;

constexpr bool& __cordl_internal_get__allowPress() ;

constexpr bool const& __cordl_internal_get__allowTap() const;

constexpr bool& __cordl_internal_get__allowTap() ;

constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection const& __cordl_internal_get__axesToUse() const;

constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection& __cordl_internal_get__axesToUse() ;

constexpr ::Rewired::Internal::StandaloneAxis2D* const& __cordl_internal_get__axis2D() const;

constexpr ::Rewired::Internal::StandaloneAxis2D*& __cordl_internal_get__axis2D() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentCenter() ;

constexpr bool const& __cordl_internal_get__hideAtRuntime() const;

constexpr bool& __cordl_internal_get__hideAtRuntime() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__horizontalAxisCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__horizontalAxisCustomControllerElement() ;

constexpr float_t const& __cordl_internal_get__inertiaFriction() const;

constexpr float_t& __cordl_internal_get__inertiaFriction() ;

constexpr bool const& __cordl_internal_get__isEligibleForPress() const;

constexpr bool& __cordl_internal_get__isEligibleForPress() ;

constexpr bool const& __cordl_internal_get__isEligibleForTap() const;

constexpr bool& __cordl_internal_get__isEligibleForTap() ;

constexpr int32_t const& __cordl_internal_get__lastTapFrame() const;

constexpr int32_t& __cordl_internal_get__lastTapFrame() ;

constexpr ::Rewired::ComponentControls::TouchPad_PressDownEventHandler* const& __cordl_internal_get__onPressDown() const;

constexpr ::Rewired::ComponentControls::TouchPad_PressDownEventHandler*& __cordl_internal_get__onPressDown() ;

constexpr ::Rewired::ComponentControls::TouchPad_PressUpEventHandler* const& __cordl_internal_get__onPressUp() const;

constexpr ::Rewired::ComponentControls::TouchPad_PressUpEventHandler*& __cordl_internal_get__onPressUp() ;

constexpr ::Rewired::ComponentControls::TouchPad_TapEventHandler* const& __cordl_internal_get__onTap() const;

constexpr ::Rewired::ComponentControls::TouchPad_TapEventHandler*& __cordl_internal_get__onTap() ;

constexpr ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler* const& __cordl_internal_get__onValueChanged() const;

constexpr ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*& __cordl_internal_get__onValueChanged() ;

constexpr bool const& __cordl_internal_get__pointerDownIsFake() const;

constexpr bool& __cordl_internal_get__pointerDownIsFake() ;

constexpr int32_t const& __cordl_internal_get__pointerId() const;

constexpr int32_t& __cordl_internal_get__pointerId() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* const& __cordl_internal_get__pressCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*& __cordl_internal_get__pressCustomControllerElement() ;

constexpr int32_t const& __cordl_internal_get__pressDistanceLimit() const;

constexpr int32_t& __cordl_internal_get__pressDistanceLimit() ;

constexpr float_t const& __cordl_internal_get__pressStartDelay() const;

constexpr float_t& __cordl_internal_get__pressStartDelay() ;

constexpr bool const& __cordl_internal_get__pressValue() const;

constexpr bool& __cordl_internal_get__pressValue() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__previousTouchPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__previousTouchPosition() ;

constexpr int32_t const& __cordl_internal_get__realMousePointerId() const;

constexpr int32_t& __cordl_internal_get__realMousePointerId() ;

constexpr ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb* const& __cordl_internal_get__smoothDelta() const;

constexpr ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*& __cordl_internal_get__smoothDelta() ;

constexpr bool const& __cordl_internal_get__stayActiveOnSwipeOut() const;

constexpr bool& __cordl_internal_get__stayActiveOnSwipeOut() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* const& __cordl_internal_get__tapCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*& __cordl_internal_get__tapCustomControllerElement() ;

constexpr int32_t const& __cordl_internal_get__tapDistanceLimit() const;

constexpr int32_t& __cordl_internal_get__tapDistanceLimit() ;

constexpr float_t const& __cordl_internal_get__tapTimeout() const;

constexpr float_t& __cordl_internal_get__tapTimeout() ;

constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode const& __cordl_internal_get__touchPadMode() const;

constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode& __cordl_internal_get__touchPadMode() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__touchStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__touchStartPosition() ;

constexpr float_t const& __cordl_internal_get__touchStartTime() const;

constexpr float_t& __cordl_internal_get__touchStartTime() ;

constexpr bool const& __cordl_internal_get__useInertia() const;

constexpr bool& __cordl_internal_get__useInertia() ;

constexpr bool const& __cordl_internal_get__useXAxis() const;

constexpr bool& __cordl_internal_get__useXAxis() ;

constexpr bool const& __cordl_internal_get__useYAxis() const;

constexpr bool& __cordl_internal_get__useYAxis() ;

constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat const& __cordl_internal_get__valueFormat() const;

constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat& __cordl_internal_get__valueFormat() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& __cordl_internal_get__verticalAxisCustomControllerElement() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& __cordl_internal_get__verticalAxisCustomControllerElement() ;

constexpr bool const& __cordl_internal_get_uldmQqpMAWCNQIQyGOPheAUhJhmnA() const;

constexpr bool& __cordl_internal_get_uldmQqpMAWCNQIQyGOPheAUhJhmnA() ;

constexpr void __cordl_internal_set_IgjTfOWBPNVpnYXocDkPsnfKzwcD(bool  value) ;

constexpr void __cordl_internal_set___fakePointerEventData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set__activateOnSwipeIn(bool  value) ;

constexpr void __cordl_internal_set__allowPress(bool  value) ;

constexpr void __cordl_internal_set__allowTap(bool  value) ;

constexpr void __cordl_internal_set__axesToUse(::Rewired::ComponentControls::TouchPad_AxisDirection  value) ;

constexpr void __cordl_internal_set__axis2D(::Rewired::Internal::StandaloneAxis2D*  value) ;

constexpr void __cordl_internal_set__currentCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__hideAtRuntime(bool  value) ;

constexpr void __cordl_internal_set__horizontalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set__inertiaFriction(float_t  value) ;

constexpr void __cordl_internal_set__isEligibleForPress(bool  value) ;

constexpr void __cordl_internal_set__isEligibleForTap(bool  value) ;

constexpr void __cordl_internal_set__lastTapFrame(int32_t  value) ;

constexpr void __cordl_internal_set__onPressDown(::Rewired::ComponentControls::TouchPad_PressDownEventHandler*  value) ;

constexpr void __cordl_internal_set__onPressUp(::Rewired::ComponentControls::TouchPad_PressUpEventHandler*  value) ;

constexpr void __cordl_internal_set__onTap(::Rewired::ComponentControls::TouchPad_TapEventHandler*  value) ;

constexpr void __cordl_internal_set__onValueChanged(::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__pointerDownIsFake(bool  value) ;

constexpr void __cordl_internal_set__pointerId(int32_t  value) ;

constexpr void __cordl_internal_set__pressCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  value) ;

constexpr void __cordl_internal_set__pressDistanceLimit(int32_t  value) ;

constexpr void __cordl_internal_set__pressStartDelay(float_t  value) ;

constexpr void __cordl_internal_set__pressValue(bool  value) ;

constexpr void __cordl_internal_set__previousTouchPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__realMousePointerId(int32_t  value) ;

constexpr void __cordl_internal_set__smoothDelta(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*  value) ;

constexpr void __cordl_internal_set__stayActiveOnSwipeOut(bool  value) ;

constexpr void __cordl_internal_set__tapCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  value) ;

constexpr void __cordl_internal_set__tapDistanceLimit(int32_t  value) ;

constexpr void __cordl_internal_set__tapTimeout(float_t  value) ;

constexpr void __cordl_internal_set__touchPadMode(::Rewired::ComponentControls::TouchPad_TouchPadMode  value) ;

constexpr void __cordl_internal_set__touchStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__touchStartTime(float_t  value) ;

constexpr void __cordl_internal_set__useInertia(bool  value) ;

constexpr void __cordl_internal_set__useXAxis(bool  value) ;

constexpr void __cordl_internal_set__useYAxis(bool  value) ;

constexpr void __cordl_internal_set__valueFormat(::Rewired::ComponentControls::TouchPad_ValueFormat  value) ;

constexpr void __cordl_internal_set__verticalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value) ;

constexpr void __cordl_internal_set_uldmQqpMAWCNQIQyGOPheAUhJhmnA(bool  value) ;

/// @brief Method .ctor, addr 0x1818f9210, size 0x3d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_PressDownEvent, addr 0x1818f95e0, size 0x30, virtual false, abstract: false, final false
inline void add_PressDownEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_PressUpEvent, addr 0x1818f9610, size 0x30, virtual false, abstract: false, final false
inline void add_PressUpEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_TapEvent, addr 0x1818f9640, size 0x30, virtual false, abstract: false, final false
inline void add_TapEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method add_ValueChangedEvent, addr 0x1818f9670, size 0x30, virtual false, abstract: false, final false
inline void add_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method bTlAcsJWlXsuWRSzhVMeZdhcMmmJ, addr 0x1818f96a0, size 0x30, virtual false, abstract: false, final false
inline int32_t bTlAcsJWlXsuWRSzhVMeZdhcMmmJ() ;

/// @brief Method bWjKcmCFrdZsEClpvcmCCBXAsihX, addr 0x1818f96d0, size 0x110, virtual false, abstract: false, final false
inline void bWjKcmCFrdZsEClpvcmCCBXAsihX() ;

/// @brief Method ckqtQDxWOZRfolzpXrZwdgQnnVh, addr 0x1818f97e0, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* ckqtQDxWOZRfolzpXrZwdgQnnVh(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method cumegikKNQAGKrFXLCTKuzUNaEzoA, addr 0x1818f98c0, size 0x260, virtual true, abstract: false, final false
inline void cumegikKNQAGKrFXLCTKuzUNaEzoA() ;

/// @brief Method fJiQraipNoYQMBjKRtyUNUvpkWLP, addr 0x1818f9b20, size 0x1b0, virtual false, abstract: false, final false
inline void fJiQraipNoYQMBjKRtyUNUvpkWLP(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fYBPgdTguSWvmhHmaQXFvgkuFPsh, addr 0x1818f9cd0, size 0x70, virtual false, abstract: false, final false
inline bool fYBPgdTguSWvmhHmaQXFvgkuFPsh(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gKmRuqqieMJskagJRcJkcGeMXIVJ, addr 0x1818f9d40, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* gKmRuqqieMJskagJRcJkcGeMXIVJ(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gQtOcsBxxLAEvdqtyGKbFbYcPYkBb, addr 0x1818f9ea0, size 0x160, virtual false, abstract: false, final false
inline void gQtOcsBxxLAEvdqtyGKbFbYcPYkBb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_activateOnSwipeIn, addr 0x1818e3b00, size 0x10, virtual false, abstract: false, final false
inline bool get_activateOnSwipeIn() ;

/// @brief Method get_allowPress, addr 0x1818fa000, size 0x10, virtual false, abstract: false, final false
inline bool get_allowPress() ;

/// @brief Method get_allowTap, addr 0x1818fa010, size 0x10, virtual false, abstract: false, final false
inline bool get_allowTap() ;

/// @brief Method get_axesToUse, addr 0x181454230, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchPad_AxisDirection get_axesToUse() ;

/// @brief Method get_axis2DCalibration, addr 0x1818fa020, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Axis2DCalibration* get_axis2DCalibration() ;

/// @brief Method get_hasPointer, addr 0x1818fa040, size 0x10, virtual false, abstract: false, final false
inline bool get_hasPointer() ;

/// @brief Method get_hideAtRuntime, addr 0x1818fa050, size 0x10, virtual false, abstract: false, final false
inline bool get_hideAtRuntime() ;

/// @brief Method get_horizontalAxisCalibration, addr 0x1818fa060, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_horizontalAxisCalibration() ;

/// @brief Method get_horizontalAxisCustomControllerElement, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_horizontalAxisCustomControllerElement() ;

/// @brief Method get_inertiaFriction, addr 0x1818e3b70, size 0x10, virtual false, abstract: false, final false
inline float_t get_inertiaFriction() ;

/// @brief Method get_pointerId, addr 0x1818fa090, size 0x10, virtual false, abstract: false, final false
inline int32_t get_pointerId() ;

/// @brief Method get_pressCustomControllerElement, addr 0x180474c20, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* get_pressCustomControllerElement() ;

/// @brief Method get_pressDistanceLimit, addr 0x1818fa0a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_pressDistanceLimit() ;

/// @brief Method get_pressStartDelay, addr 0x1818fa0b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_pressStartDelay() ;

/// @brief Method get_stayActiveOnSwipeOut, addr 0x1818fa0c0, size 0x10, virtual false, abstract: false, final false
inline bool get_stayActiveOnSwipeOut() ;

/// @brief Method get_tapCustomControllerElement, addr 0x180474c30, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* get_tapCustomControllerElement() ;

/// @brief Method get_tapDistanceLimit, addr 0x1818fa0d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_tapDistanceLimit() ;

/// @brief Method get_tapTimeout, addr 0x1818e3ba0, size 0x10, virtual false, abstract: false, final false
inline float_t get_tapTimeout() ;

/// @brief Method get_touchPadMode, addr 0x1818fa0e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchPad_TouchPadMode get_touchPadMode() ;

/// @brief Method get_touchPosition, addr 0x1818fa0f0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_touchPosition() ;

/// @brief Method get_touchStartPosition, addr 0x1818fa1a0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_touchStartPosition() ;

/// @brief Method get_useInertia, addr 0x1818e3af0, size 0x10, virtual false, abstract: false, final false
inline bool get_useInertia() ;

/// @brief Method get_valueFormat, addr 0x1818fa1d0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::TouchPad_ValueFormat get_valueFormat() ;

/// @brief Method get_verticalAxisCalibration, addr 0x1818fa1e0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_verticalAxisCalibration() ;

/// @brief Method get_verticalAxisCustomControllerElement, addr 0x1803370f0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_verticalAxisCustomControllerElement() ;

/// @brief Method hDGrHByQgZiRAiKrwVrfwqUCninz, addr 0x1818fa210, size 0x30, virtual true, abstract: false, final false
inline bool hDGrHByQgZiRAiKrwVrfwqUCninz() ;

/// @brief Method hsmphSgmvKDMqDixwXxDMPfzgVZU, addr 0x1818fa240, size 0xa0, virtual false, abstract: false, final false
inline void hsmphSgmvKDMqDixwXxDMPfzgVZU() ;

/// @brief Method htHEWmZEuczQnWjhifksdlkyAJBEb, addr 0x1818fa2e0, size 0x430, virtual false, abstract: false, final false
inline void htHEWmZEuczQnWjhifksdlkyAJBEb() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// @brief Method iyeQRRVIzLeJrEXqRPDtDybubmCh, addr 0x1818fa710, size 0x310, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* iyeQRRVIzLeJrEXqRPDtDybubmCh(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method jZDETYWFoUAIkRRiNmaSivHcDDMT, addr 0x180481bb0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::StandaloneAxis2D* jZDETYWFoUAIkRRiNmaSivHcDDMT() ;

/// @brief Method lBFBEZySOTMuuvcCfLJeKzPUfsxA, addr 0x1818faa20, size 0x160, virtual true, abstract: false, final false
inline void lBFBEZySOTMuuvcCfLJeKzPUfsxA() ;

/// @brief Method mKOEsuscJsEahFRvJrsNgMdOCWVGb, addr 0x1818fab80, size 0xb0, virtual false, abstract: false, final false
inline void mKOEsuscJsEahFRvJrsNgMdOCWVGb(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nDtWVGJylFqtryGsVjQKQdwqikKT, addr 0x1818fac30, size 0xa0, virtual true, abstract: false, final false
inline void nDtWVGJylFqtryGsVjQKQdwqikKT() ;

/// @brief Method oTuQqbKwhPUcEOTpgEgINDhoZDHi, addr 0x1818facd0, size 0x50, virtual false, abstract: false, final false
inline void oTuQqbKwhPUcEOTpgEgINDhoZDHi(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qAbDScddiKnPlzSmQobVpdBSJXLF, addr 0x1818fad20, size 0x250, virtual false, abstract: false, final false
inline void qAbDScddiKnPlzSmQobVpdBSJXLF() ;

/// @brief Method reKlwjneDghirffpJEwuPSkaqpYe, addr 0x1818faf70, size 0xf0, virtual false, abstract: false, final false
inline void reKlwjneDghirffpJEwuPSkaqpYe(::Rewired::ComponentControls::TouchPad_AxisDirection  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method remove_PressDownEvent, addr 0x1818fb060, size 0x30, virtual false, abstract: false, final false
inline void remove_PressDownEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_PressUpEvent, addr 0x1818fb090, size 0x30, virtual false, abstract: false, final false
inline void remove_PressUpEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_TapEvent, addr 0x1818fb0c0, size 0x30, virtual false, abstract: false, final false
inline void remove_TapEvent(::UnityEngine::Events::UnityAction*  value) ;

/// @brief Method remove_ValueChangedEvent, addr 0x1818fb0f0, size 0x30, virtual false, abstract: false, final false
inline void remove_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method rtrhCWAYjYKzIxExZftkWjCXRIOM, addr 0x1818fb120, size 0x40, virtual true, abstract: false, final false
inline void rtrhCWAYjYKzIxExZftkWjCXRIOM() ;

/// @brief Method set_activateOnSwipeIn, addr 0x1818e4900, size 0x30, virtual false, abstract: false, final false
inline void set_activateOnSwipeIn(bool  value) ;

/// @brief Method set_allowPress, addr 0x1818fb160, size 0x30, virtual false, abstract: false, final false
inline void set_allowPress(bool  value) ;

/// @brief Method set_allowTap, addr 0x1818fb190, size 0x30, virtual false, abstract: false, final false
inline void set_allowTap(bool  value) ;

/// @brief Method set_axesToUse, addr 0x1818fb1c0, size 0x40, virtual false, abstract: false, final false
inline void set_axesToUse(::Rewired::ComponentControls::TouchPad_AxisDirection  value) ;

/// @brief Method set_hideAtRuntime, addr 0x1818fb200, size 0x30, virtual false, abstract: false, final false
inline void set_hideAtRuntime(bool  value) ;

/// @brief Method set_inertiaFriction, addr 0x1818fb230, size 0x50, virtual false, abstract: false, final false
inline void set_inertiaFriction(float_t  value) ;

/// @brief Method set_pointerId, addr 0x1818fb280, size 0x10, virtual false, abstract: false, final false
inline void set_pointerId(int32_t  value) ;

/// @brief Method set_pressDistanceLimit, addr 0x1818fb290, size 0x50, virtual false, abstract: false, final false
inline void set_pressDistanceLimit(int32_t  value) ;

/// @brief Method set_pressStartDelay, addr 0x1818fb2e0, size 0x40, virtual false, abstract: false, final false
inline void set_pressStartDelay(float_t  value) ;

/// @brief Method set_stayActiveOnSwipeOut, addr 0x1818fb320, size 0x30, virtual false, abstract: false, final false
inline void set_stayActiveOnSwipeOut(bool  value) ;

/// @brief Method set_tapDistanceLimit, addr 0x1818fb350, size 0x50, virtual false, abstract: false, final false
inline void set_tapDistanceLimit(int32_t  value) ;

/// @brief Method set_tapTimeout, addr 0x1818fb3a0, size 0x50, virtual false, abstract: false, final false
inline void set_tapTimeout(float_t  value) ;

/// @brief Method set_touchPadMode, addr 0x1818fb3f0, size 0x30, virtual false, abstract: false, final false
inline void set_touchPadMode(::Rewired::ComponentControls::TouchPad_TouchPadMode  value) ;

/// @brief Method set_useInertia, addr 0x1818e48d0, size 0x30, virtual false, abstract: false, final false
inline void set_useInertia(bool  value) ;

/// @brief Method set_valueFormat, addr 0x1818fb420, size 0x30, virtual false, abstract: false, final false
inline void set_valueFormat(::Rewired::ComponentControls::TouchPad_ValueFormat  value) ;

/// @brief Method vNjeMnILCXQWxljmPlbOyyleOsIk, addr 0x1818fb450, size 0x20, virtual false, abstract: false, final false
inline bool vNjeMnILCXQWxljmPlbOyyleOsIk() ;

/// @brief Method wlRKeaoPzNeHBLjKwFUZPUAgHidaA, addr 0x1818fb470, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* wlRKeaoPzNeHBLjKwFUZPUAgHidaA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yfQVKwiDdZHQdAScfcyOuEAPrIdH, addr 0x1818fb5a0, size 0x150, virtual false, abstract: false, final false
inline void yfQVKwiDdZHQdAScfcyOuEAPrIdH() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchPad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchPad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchPad(TouchPad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchPad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchPad(TouchPad const& ) = delete;

/// @brief Field SMOOTH_DELTA_FRAME_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  SMOOTH_DELTA_FRAME_COUNT{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2791};

/// @brief Field _horizontalAxisCustomControllerElement, offset: 0x130, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____horizontalAxisCustomControllerElement;

/// @brief Field _verticalAxisCustomControllerElement, offset: 0x138, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  ____verticalAxisCustomControllerElement;

/// @brief Field _tapCustomControllerElement, offset: 0x140, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  ____tapCustomControllerElement;

/// @brief Field _pressCustomControllerElement, offset: 0x148, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  ____pressCustomControllerElement;

/// @brief Field _axesToUse, offset: 0x150, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchPad_AxisDirection  ____axesToUse;

/// @brief Field _touchPadMode, offset: 0x154, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchPad_TouchPadMode  ____touchPadMode;

/// @brief Field _valueFormat, offset: 0x158, size: 0x4, def value: None
 ::Rewired::ComponentControls::TouchPad_ValueFormat  ____valueFormat;

/// @brief Field _useInertia, offset: 0x15c, size: 0x1, def value: None
 bool  ____useInertia;

/// @brief Field _inertiaFriction, offset: 0x160, size: 0x4, def value: None
 float_t  ____inertiaFriction;

/// @brief Field _activateOnSwipeIn, offset: 0x164, size: 0x1, def value: None
 bool  ____activateOnSwipeIn;

/// @brief Field _stayActiveOnSwipeOut, offset: 0x165, size: 0x1, def value: None
 bool  ____stayActiveOnSwipeOut;

/// @brief Field _allowTap, offset: 0x166, size: 0x1, def value: None
 bool  ____allowTap;

/// @brief Field _tapTimeout, offset: 0x168, size: 0x4, def value: None
 float_t  ____tapTimeout;

/// @brief Field _tapDistanceLimit, offset: 0x16c, size: 0x4, def value: None
 int32_t  ____tapDistanceLimit;

/// @brief Field _allowPress, offset: 0x170, size: 0x1, def value: None
 bool  ____allowPress;

/// @brief Field _pressStartDelay, offset: 0x174, size: 0x4, def value: None
 float_t  ____pressStartDelay;

/// @brief Field _pressDistanceLimit, offset: 0x178, size: 0x4, def value: None
 int32_t  ____pressDistanceLimit;

/// @brief Field _hideAtRuntime, offset: 0x17c, size: 0x1, def value: None
 bool  ____hideAtRuntime;

/// @brief Field _axis2D, offset: 0x180, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis2D*  ____axis2D;

/// @brief Field _onValueChanged, offset: 0x188, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*  ____onValueChanged;

/// @brief Field _onTap, offset: 0x190, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchPad_TapEventHandler*  ____onTap;

/// @brief Field _onPressDown, offset: 0x198, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchPad_PressDownEventHandler*  ____onPressDown;

/// @brief Field _onPressUp, offset: 0x1a0, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchPad_PressUpEventHandler*  ____onPressUp;

/// @brief Field _useXAxis, offset: 0x1a8, size: 0x1, def value: None
 bool  ____useXAxis;

/// @brief Field _useYAxis, offset: 0x1a9, size: 0x1, def value: None
 bool  ____useYAxis;

/// @brief Field _pointerId, offset: 0x1ac, size: 0x4, def value: None
 int32_t  ____pointerId;

/// @brief Field _realMousePointerId, offset: 0x1b0, size: 0x4, def value: None
 int32_t  ____realMousePointerId;

/// @brief Field uldmQqpMAWCNQIQyGOPheAUhJhmnA, offset: 0x1b4, size: 0x1, def value: None
 bool  ___uldmQqpMAWCNQIQyGOPheAUhJhmnA;

/// @brief Field IgjTfOWBPNVpnYXocDkPsnfKzwcD, offset: 0x1b5, size: 0x1, def value: None
 bool  ___IgjTfOWBPNVpnYXocDkPsnfKzwcD;

/// @brief Field _pointerDownIsFake, offset: 0x1b6, size: 0x1, def value: None
 bool  ____pointerDownIsFake;

/// @brief Field _touchStartPosition, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____touchStartPosition;

/// @brief Field _touchStartTime, offset: 0x1c0, size: 0x4, def value: None
 float_t  ____touchStartTime;

/// @brief Field _currentCenter, offset: 0x1c4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentCenter;

/// @brief Field _previousTouchPosition, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____previousTouchPosition;

/// @brief Field _lastTapFrame, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ____lastTapFrame;

/// @brief Field _isEligibleForTap, offset: 0x1dc, size: 0x1, def value: None
 bool  ____isEligibleForTap;

/// @brief Field _isEligibleForPress, offset: 0x1dd, size: 0x1, def value: None
 bool  ____isEligibleForPress;

/// @brief Field _pressValue, offset: 0x1de, size: 0x1, def value: None
 bool  ____pressValue;

/// @brief Field _smoothDelta, offset: 0x1e0, size: 0x8, def value: None
 ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*  ____smoothDelta;

/// @brief Field __fakePointerEventData, offset: 0x1e8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  _____fakePointerEventData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____horizontalAxisCustomControllerElement) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____verticalAxisCustomControllerElement) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____tapCustomControllerElement) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____pressCustomControllerElement) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____axesToUse) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____touchPadMode) == 0x154, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____valueFormat) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____useInertia) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____inertiaFriction) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____activateOnSwipeIn) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____stayActiveOnSwipeOut) == 0x165, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____allowTap) == 0x166, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____tapTimeout) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____tapDistanceLimit) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____allowPress) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____pressStartDelay) == 0x174, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____pressDistanceLimit) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____hideAtRuntime) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____axis2D) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____onValueChanged) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____onTap) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____onPressDown) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____onPressUp) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____useXAxis) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____useYAxis) == 0x1a9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____pointerId) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____realMousePointerId) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ___uldmQqpMAWCNQIQyGOPheAUhJhmnA) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ___IgjTfOWBPNVpnYXocDkPsnfKzwcD) == 0x1b5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____pointerDownIsFake) == 0x1b6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____touchStartPosition) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____touchStartTime) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____currentCenter) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____previousTouchPosition) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____lastTapFrame) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____isEligibleForTap) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____isEligibleForPress) == 0x1dd, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____pressValue) == 0x1de, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, ____smoothDelta) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchPad, _____fakePointerEventData) == 0x1e8, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchPad) == 0x1f0, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
