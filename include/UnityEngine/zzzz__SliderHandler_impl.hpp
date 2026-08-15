#pragma once
// IWYU pragma private; include "UnityEngine/SliderHandler.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__SliderHandler_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__SliderState_def.hpp"
//  Writing Method size for method: ::UnityEngine::SliderHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SliderHandler::*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, bool, int32_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::SliderHandler::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822d70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::Handle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822d5b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.OnMouseDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::OnMouseDown)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1822d5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnMouseDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.OnMouseDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::OnMouseDrag)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822d61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnMouseDrag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.OnMouseUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::OnMouseUp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822d62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnMouseUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.OnRepaint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::OnRepaint)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1822d6320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnRepaint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.CurrentEventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventType (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::CurrentEventType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822d5a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"CurrentEventType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.CurrentScrollTroughSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::CurrentScrollTroughSide)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822d5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"CurrentScrollTroughSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.IsEmptySlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::IsEmptySlider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822d5da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"IsEmptySlider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.SupportsPageMovements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::SupportsPageMovements)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822d6a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"SupportsPageMovements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.PageMovementValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::PageMovementValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1822d6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"PageMovementValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.PageUpMovementBound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::PageUpMovementBound)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822d6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"PageUpMovementBound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.CurrentEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Event* (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::CurrentEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822d5a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"CurrentEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ValueForCurrentMousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ValueForCurrentMousePosition)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822d6d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ValueForCurrentMousePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)(float_t)>(&::UnityEngine::SliderHandler::Clamp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d5990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"Clamp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ThumbSelectionRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ThumbSelectionRect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822d6c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbSelectionRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.StartDraggingWithValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SliderHandler::*)(float_t)>(&::UnityEngine::SliderHandler::StartDraggingWithValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822d6970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"StartDraggingWithValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.SliderState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SliderState* (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::SliderState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822d68f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"SliderState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ThumbExtRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ThumbExtRect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822d6aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbExtRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ThumbRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ThumbRect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822d6b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.VerticalThumbRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::VerticalThumbRect)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1822d6ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"VerticalThumbRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.HorizontalThumbRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::HorizontalThumbRect)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1822d5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"HorizontalThumbRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ClampedCurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ClampedCurrentValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ClampedCurrentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.MousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::MousePosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822d5e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"MousePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ValuesPerPixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ValuesPerPixel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822d6e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ValuesPerPixel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.ThumbSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::ThumbSize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822d6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.MaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::MaxValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822d5dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"MaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SliderHandler.MinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SliderHandler::*)()>(&::UnityEngine::SliderHandler::MinValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822d5de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"MinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SliderHandler::_ctor(::UnityEngine::Rect  position, float_t  currentValue, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, bool  horiz, int32_t  id, ::UnityEngine::GUIStyle*  thumbExtent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, currentValue, size, start, end, slider, thumb, horiz, id, thumbExtent);
}
inline float_t UnityEngine::SliderHandler::Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::OnMouseDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnMouseDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::OnMouseDrag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnMouseDrag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::OnMouseUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnMouseUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::OnRepaint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"OnRepaint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::EventType UnityEngine::SliderHandler::CurrentEventType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"CurrentEventType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventType>(*this, ___internal_method);
}
inline int32_t UnityEngine::SliderHandler::CurrentScrollTroughSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"CurrentScrollTroughSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::SliderHandler::IsEmptySlider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"IsEmptySlider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::SliderHandler::SupportsPageMovements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"SupportsPageMovements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::PageMovementValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"PageMovementValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::PageUpMovementBound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"PageUpMovementBound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Event* UnityEngine::SliderHandler::CurrentEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"CurrentEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Event*>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::ValueForCurrentMousePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ValueForCurrentMousePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::Clamp(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"Clamp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::SliderHandler::ThumbSelectionRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbSelectionRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline void UnityEngine::SliderHandler::StartDraggingWithValue(float_t  dragStartValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"StartDraggingWithValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dragStartValue);
}
inline ::UnityEngine::SliderState* UnityEngine::SliderHandler::SliderState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"SliderState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SliderState*>(*this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::SliderHandler::ThumbExtRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbExtRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::SliderHandler::ThumbRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::SliderHandler::VerticalThumbRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"VerticalThumbRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::SliderHandler::HorizontalThumbRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"HorizontalThumbRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::ClampedCurrentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ClampedCurrentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::MousePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"MousePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::ValuesPerPixel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ValuesPerPixel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::ThumbSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"ThumbSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::MaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"MaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::SliderHandler::MinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderHandler>(),
                        {"MinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentValue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "slider", ty: "::UnityEngine::GUIStyle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "thumb", ty: "::UnityEngine::GUIStyle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "thumbExtent", ty: "::UnityEngine::GUIStyle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "horiz", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SliderHandler::SliderHandler(::UnityEngine::Rect  position, float_t  currentValue, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, ::UnityEngine::GUIStyle*  thumbExtent, bool  horiz, int32_t  id) noexcept  {
this->position = position;
this->currentValue = currentValue;
this->size = size;
this->start = start;
this->end = end;
this->slider = slider;
this->thumb = thumb;
this->thumbExtent = thumbExtent;
this->horiz = horiz;
this->id = id;
}
// Ctor Parameters []
constexpr ::UnityEngine::SliderHandler::SliderHandler()   {
}
