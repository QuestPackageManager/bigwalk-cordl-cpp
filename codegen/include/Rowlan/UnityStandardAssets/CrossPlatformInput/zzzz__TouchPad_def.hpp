#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/TouchPad.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchPad)
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualAxis;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct TouchPad_AxisOption;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct TouchPad_ControlStyle;
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
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct TouchPad_AxisOption;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct TouchPad_ControlStyle;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class TouchPad;
}
// Write type traits
MARK_VAL_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption);
MARK_VAL_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle);
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TouchPad/AxisOption");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TouchPad/ControlStyle");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "TouchPad");
// Dependencies 
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: true
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct CORDL_TYPE TouchPad_AxisOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchPad_AxisOption_Unwrapped
enum struct __TouchPad_AxisOption_Unwrapped : int32_t {
__E_Both = static_cast<int32_t>(0x0),
__E_OnlyHorizontal = static_cast<int32_t>(0x1),
__E_OnlyVertical = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPad_AxisOption_Unwrapped () const noexcept {
return static_cast<__TouchPad_AxisOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_AxisOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPad_AxisOption(int32_t  value__) noexcept;

/// @brief Field Both value: I32(0)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption const Both;

/// @brief Field OnlyHorizontal value: I32(1)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption const OnlyHorizontal;

/// @brief Field OnlyVertical value: I32(2)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption const OnlyVertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies 
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: true
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct CORDL_TYPE TouchPad_ControlStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchPad_ControlStyle_Unwrapped
enum struct __TouchPad_ControlStyle_Unwrapped : int32_t {
__E_Absolute = static_cast<int32_t>(0x0),
__E_Relative = static_cast<int32_t>(0x1),
__E_Swipe = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPad_ControlStyle_Unwrapped () const noexcept {
return static_cast<__TouchPad_ControlStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchPad_ControlStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPad_ControlStyle(int32_t  value__) noexcept;

/// @brief Field Absolute value: I32(0)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle const Absolute;

/// @brief Field Relative value: I32(1)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle const Relative;

/// @brief Field Swipe value: I32(2)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle const Swipe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies Rowlan.UnityStandardAssets.CrossPlatformInput.TouchPad::AxisOption, Rowlan.UnityStandardAssets.CrossPlatformInput.TouchPad::ControlStyle, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.TouchPad
class CORDL_TYPE TouchPad : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AxisOption = ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption;

using ControlStyle = ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle;

/// @brief Field Xsensitivity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Xsensitivity, put=__cordl_internal_set_Xsensitivity)) float_t  Xsensitivity;

/// @brief Field Ysensitivity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Ysensitivity, put=__cordl_internal_set_Ysensitivity)) float_t  Ysensitivity;

/// @brief Field axesToUse, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_axesToUse, put=__cordl_internal_set_axesToUse)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  axesToUse;

/// @brief Field controlStyle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_controlStyle, put=__cordl_internal_set_controlStyle)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  controlStyle;

/// @brief Field horizontalAxisName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalAxisName, put=__cordl_internal_set_horizontalAxisName)) ::StringW  horizontalAxisName;

/// @brief Field m_Center, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Center, put=__cordl_internal_set_m_Center)) ::UnityEngine::Vector3  m_Center;

/// @brief Field m_Dragging, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Dragging, put=__cordl_internal_set_m_Dragging)) bool  m_Dragging;

/// @brief Field m_HorizontalVirtualAxis, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalVirtualAxis, put=__cordl_internal_set_m_HorizontalVirtualAxis)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  m_HorizontalVirtualAxis;

/// @brief Field m_Id, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Id, put=__cordl_internal_set_m_Id)) int32_t  m_Id;

/// @brief Field m_Image, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Image, put=__cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::UI::Image>  m_Image;

/// @brief Field m_JoytickOutput, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_JoytickOutput, put=__cordl_internal_set_m_JoytickOutput)) ::UnityEngine::Vector3  m_JoytickOutput;

/// @brief Field m_PreviousDelta, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousDelta, put=__cordl_internal_set_m_PreviousDelta)) ::UnityEngine::Vector2  m_PreviousDelta;

/// @brief Field m_PreviousTouchPos, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousTouchPos, put=__cordl_internal_set_m_PreviousTouchPos)) ::UnityEngine::Vector2  m_PreviousTouchPos;

/// @brief Field m_StartPos, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartPos, put=__cordl_internal_set_m_StartPos)) ::UnityEngine::Vector3  m_StartPos;

/// @brief Field m_UseX, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseX, put=__cordl_internal_set_m_UseX)) bool  m_UseX;

/// @brief Field m_UseY, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseY, put=__cordl_internal_set_m_UseY)) bool  m_UseY;

/// @brief Field m_VerticalVirtualAxis, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VerticalVirtualAxis, put=__cordl_internal_set_m_VerticalVirtualAxis)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  m_VerticalVirtualAxis;

/// @brief Field verticalAxisName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalAxisName, put=__cordl_internal_set_verticalAxisName)) ::StringW  verticalAxisName;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method CreateVirtualAxes, addr 0x181ac1a70, size 0x110, virtual false, abstract: false, final false
inline void CreateVirtualAxes() ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad* New_ctor() ;

/// @brief Method OnDisable, addr 0x181ac1b80, size 0x1f0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181ac1a70, size 0x110, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerDown, addr 0x181ac1d70, size 0x50, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  data) ;

/// @brief Method OnPointerUp, addr 0x181ac1dc0, size 0x90, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  data) ;

/// @brief Method Start, addr 0x181ac1e50, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181ac1f80, size 0x190, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateVirtualAxes, addr 0x181ac1ed0, size 0xb0, virtual false, abstract: false, final false
inline void UpdateVirtualAxes(::UnityEngine::Vector3  value) ;

constexpr float_t const& __cordl_internal_get_Xsensitivity() const;

constexpr float_t& __cordl_internal_get_Xsensitivity() ;

constexpr float_t const& __cordl_internal_get_Ysensitivity() const;

constexpr float_t& __cordl_internal_get_Ysensitivity() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption const& __cordl_internal_get_axesToUse() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption& __cordl_internal_get_axesToUse() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle const& __cordl_internal_get_controlStyle() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle& __cordl_internal_get_controlStyle() ;

constexpr ::StringW const& __cordl_internal_get_horizontalAxisName() const;

constexpr ::StringW& __cordl_internal_get_horizontalAxisName() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Center() ;

constexpr bool const& __cordl_internal_get_m_Dragging() const;

constexpr bool& __cordl_internal_get_m_Dragging() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* const& __cordl_internal_get_m_HorizontalVirtualAxis() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*& __cordl_internal_get_m_HorizontalVirtualAxis() ;

constexpr int32_t const& __cordl_internal_get_m_Id() const;

constexpr int32_t& __cordl_internal_get_m_Id() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_Image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_Image() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_JoytickOutput() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_JoytickOutput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PreviousDelta() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PreviousDelta() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PreviousTouchPos() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PreviousTouchPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartPos() ;

constexpr bool const& __cordl_internal_get_m_UseX() const;

constexpr bool& __cordl_internal_get_m_UseX() ;

constexpr bool const& __cordl_internal_get_m_UseY() const;

constexpr bool& __cordl_internal_get_m_UseY() ;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* const& __cordl_internal_get_m_VerticalVirtualAxis() const;

constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*& __cordl_internal_get_m_VerticalVirtualAxis() ;

constexpr ::StringW const& __cordl_internal_get_verticalAxisName() const;

constexpr ::StringW& __cordl_internal_get_verticalAxisName() ;

constexpr void __cordl_internal_set_Xsensitivity(float_t  value) ;

constexpr void __cordl_internal_set_Ysensitivity(float_t  value) ;

constexpr void __cordl_internal_set_axesToUse(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  value) ;

constexpr void __cordl_internal_set_controlStyle(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  value) ;

constexpr void __cordl_internal_set_horizontalAxisName(::StringW  value) ;

constexpr void __cordl_internal_set_m_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Dragging(bool  value) ;

constexpr void __cordl_internal_set_m_HorizontalVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  value) ;

constexpr void __cordl_internal_set_m_Id(int32_t  value) ;

constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_m_JoytickOutput(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousDelta(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_PreviousTouchPos(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_StartPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_UseX(bool  value) ;

constexpr void __cordl_internal_set_m_UseY(bool  value) ;

constexpr void __cordl_internal_set_m_VerticalVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  value) ;

constexpr void __cordl_internal_set_verticalAxisName(::StringW  value) ;

/// @brief Method .ctor, addr 0x181ac2110, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

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

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20361};

/// @brief Field axesToUse, offset: 0x20, size: 0x4, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  ___axesToUse;

/// @brief Field controlStyle, offset: 0x24, size: 0x4, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  ___controlStyle;

/// @brief Field horizontalAxisName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___horizontalAxisName;

/// @brief Field verticalAxisName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___verticalAxisName;

/// @brief Field Xsensitivity, offset: 0x38, size: 0x4, def value: None
 float_t  ___Xsensitivity;

/// @brief Field Ysensitivity, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Ysensitivity;

/// @brief Field m_StartPos, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartPos;

/// @brief Field m_PreviousDelta, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_PreviousDelta;

/// @brief Field m_JoytickOutput, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_JoytickOutput;

/// @brief Field m_UseX, offset: 0x60, size: 0x1, def value: None
 bool  ___m_UseX;

/// @brief Field m_UseY, offset: 0x61, size: 0x1, def value: None
 bool  ___m_UseY;

/// @brief Field m_HorizontalVirtualAxis, offset: 0x68, size: 0x8, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  ___m_HorizontalVirtualAxis;

/// @brief Field m_VerticalVirtualAxis, offset: 0x70, size: 0x8, def value: None
 ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  ___m_VerticalVirtualAxis;

/// @brief Field m_Dragging, offset: 0x78, size: 0x1, def value: None
 bool  ___m_Dragging;

/// @brief Field m_Id, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___m_Id;

/// @brief Field m_PreviousTouchPos, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_PreviousTouchPos;

/// @brief Field m_Center, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Center;

/// @brief Field m_Image, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___m_Image;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___axesToUse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___controlStyle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___horizontalAxisName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___verticalAxisName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___Xsensitivity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___Ysensitivity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_StartPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_PreviousDelta) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_JoytickOutput) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_UseX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_UseY) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_HorizontalVirtualAxis) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_VerticalVirtualAxis) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_Dragging) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_Id) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_PreviousTouchPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_Center) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad, ___m_Image) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad) == 0xa0, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
