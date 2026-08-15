#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/TouchPad.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__TouchPad_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__CrossPlatformInputManager_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__TouchPad_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption::TouchPad_AxisOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption::TouchPad_AxisOption()   {
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption::Both{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption::OnlyHorizontal{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption::OnlyVertical{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle::TouchPad_ControlStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle::TouchPad_ControlStyle()   {
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle::Absolute{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle::Relative{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle::Swipe{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ac1a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac1e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.CreateVirtualAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::CreateVirtualAxes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ac1a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"CreateVirtualAxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.UpdateVirtualAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)(::UnityEngine::Vector3)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::UpdateVirtualAxes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ac1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"UpdateVirtualAxes", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnPointerDown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac1d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::Update)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181ac1f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnPointerUp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac1dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnDisable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181ac1b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ac2110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_axesToUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axesToUse;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_axesToUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axesToUse;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_axesToUse(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_AxisOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axesToUse = value;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_controlStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlStyle;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_controlStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlStyle;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_controlStyle(::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad_ControlStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlStyle = value;
}
constexpr ::StringW& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_horizontalAxisName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAxisName;
}
constexpr ::StringW const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_horizontalAxisName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalAxisName;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_horizontalAxisName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalAxisName = value;
}
constexpr ::StringW& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_verticalAxisName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalAxisName;
}
constexpr ::StringW const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_verticalAxisName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalAxisName;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_verticalAxisName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalAxisName = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_Xsensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Xsensitivity;
}
constexpr float_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_Xsensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Xsensitivity;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_Xsensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Xsensitivity = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_Ysensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ysensitivity;
}
constexpr float_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_Ysensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ysensitivity;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_Ysensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ysensitivity = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_StartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPos;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_StartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartPos;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_StartPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartPos = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_PreviousDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDelta;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_PreviousDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDelta;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_PreviousDelta(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousDelta = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_JoytickOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JoytickOutput;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_JoytickOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JoytickOutput;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_JoytickOutput(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JoytickOutput = value;
}
constexpr bool& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_UseX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseX;
}
constexpr bool const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_UseX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseX;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_UseX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseX = value;
}
constexpr bool& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_UseY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseY;
}
constexpr bool const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_UseY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseY;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_UseY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseY = value;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_HorizontalVirtualAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalVirtualAxis;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_HorizontalVirtualAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalVirtualAxis;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_HorizontalVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HorizontalVirtualAxis = value;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_VerticalVirtualAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalVirtualAxis;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_VerticalVirtualAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalVirtualAxis;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_VerticalVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalVirtualAxis = value;
}
constexpr bool& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Dragging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dragging;
}
constexpr bool const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Dragging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dragging;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_Dragging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Dragging = value;
}
constexpr int32_t& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr int32_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_Id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Id = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_PreviousTouchPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTouchPos;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_PreviousTouchPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTouchPos;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_PreviousTouchPos(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousTouchPos = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Center = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_get_m_Image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Image;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::__cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Image = value;
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::CreateVirtualAxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"CreateVirtualAxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::UpdateVirtualAxes(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"UpdateVirtualAxes", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad* Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TouchPad::TouchPad()   {
}
