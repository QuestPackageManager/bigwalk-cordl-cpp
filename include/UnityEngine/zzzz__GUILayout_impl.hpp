#pragma once
// IWYU pragma private; include "UnityEngine/GUILayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUILayout_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUILayout_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayout_LayoutedWindow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayout_LayoutedWindow::*)(::UnityEngine::GUI_WindowFunction*, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::ArrayW<::UnityEngine::GUILayoutOption*>, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUILayout_LayoutedWindow::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822d2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout_LayoutedWindow*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout_LayoutedWindow.DoWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayout_LayoutedWindow::*)(int32_t)>(&::UnityEngine::GUILayout_LayoutedWindow::DoWindow)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822d22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout_LayoutedWindow*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUI_WindowFunction*& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_Func()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Func;
}
constexpr ::UnityEngine::GUI_WindowFunction* const& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_Func() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Func;
}
constexpr void UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_set_m_Func(::UnityEngine::GUI_WindowFunction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Func = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_ScreenRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_ScreenRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenRect;
}
constexpr void UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_set_m_ScreenRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenRect = value;
}
constexpr ::ArrayW<::UnityEngine::GUILayoutOption*>& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_Options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Options;
}
constexpr ::ArrayW<::UnityEngine::GUILayoutOption*> const& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_Options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Options;
}
constexpr void UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_set_m_Options(::ArrayW<::UnityEngine::GUILayoutOption*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Options = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_Style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Style;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_get_m_Style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Style;
}
constexpr void UnityEngine::GUILayout_LayoutedWindow::__cordl_internal_set_m_Style(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Style = value;
}
inline void UnityEngine::GUILayout_LayoutedWindow::_ctor(::UnityEngine::GUI_WindowFunction*  f, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::ArrayW<::UnityEngine::GUILayoutOption*>  options, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout_LayoutedWindow*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f, screenRect, content, options, style);
}
inline void UnityEngine::GUILayout_LayoutedWindow::DoWindow(int32_t  windowID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout_LayoutedWindow*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowID);
}
inline ::UnityEngine::GUILayout_LayoutedWindow* UnityEngine::GUILayout_LayoutedWindow::New_ctor(::UnityEngine::GUI_WindowFunction*  f, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::ArrayW<::UnityEngine::GUILayoutOption*>  options, ::UnityEngine::GUIStyle*  style)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUILayout_LayoutedWindow*>(f, screenRect, content, options, style));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayout_LayoutedWindow::GUILayout_LayoutedWindow()   {
}
//  Writing Method size for method: ::UnityEngine::GUILayout.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Label)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822c3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Label", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Label)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822c34e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Label", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Label)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822c34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoLabel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822c2720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoLabel", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Box)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822c2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Box", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoBox)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822c2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoBox", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Button)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822c2550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoButton)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822c26b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoButton", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.TextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::TextField)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822c3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"TextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.TextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::TextField)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822c3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"TextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.PasswordField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::PasswordField)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1822c35e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"PasswordField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.PasswordField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, int32_t, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::PasswordField)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822c3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"PasswordField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, bool, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoTextField)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1822c27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::StringW, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Toggle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822c3ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Toggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Toggle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822c3bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Toggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoToggle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822c2910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoToggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.VerticalSlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::VerticalSlider)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1822c3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"VerticalSlider", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoVerticalSlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoVerticalSlider)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822c2990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoVerticalSlider", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.HorizontalScrollbar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::HorizontalScrollbar)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822c32f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"HorizontalScrollbar", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.HorizontalScrollbar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::HorizontalScrollbar)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822c3220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"HorizontalScrollbar", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::GUILayout::Space)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1822c3840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Space", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.FlexibleSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::FlexibleSpace)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822c2fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"FlexibleSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginHorizontal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822c1ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginHorizontal", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginHorizontal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822c1c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginHorizontal", {}, {::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginHorizontal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822c1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginHorizontal", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::EndHorizontal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822c2ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndHorizontal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginVertical)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822c2350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginVertical", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginVertical)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822c2410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginVertical", {}, {::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginVertical)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822c2280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginVertical", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::EndVertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822c2ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndVertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::UnityEngine::GUILayout::BeginArea)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1822c1720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginArea", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUILayout::BeginArea)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1822c1920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginArea", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::EndArea)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822c2cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginScrollView)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1822c1c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginScrollView)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1822c1de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, bool, bool, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginScrollView)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1822c2050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::EndScrollView)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822c2eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndScrollView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUILayout::EndScrollView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822c2ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndScrollView", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Window
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Window)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822c3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Window", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoWindow)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1822c2a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Width)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822c3db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Width", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.MaxWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::MaxWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822c3580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"MaxWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Height)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822c31c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.MaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::MaxHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822c3520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"MaxHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.ExpandWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(bool)>(&::UnityEngine::GUILayout::ExpandWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822c2f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"ExpandWidth", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.ExpandHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(bool)>(&::UnityEngine::GUILayout::ExpandHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822c2f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"ExpandHeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::GUILayout::Label(::StringW  text, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Label", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, options);
}
inline void UnityEngine::GUILayout::Label(::StringW  text, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Label", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, style, options);
}
inline void UnityEngine::GUILayout::Label(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::DoLabel(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoLabel", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::Box(::StringW  text, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Box", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, options);
}
inline void UnityEngine::GUILayout::DoBox(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoBox", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline bool UnityEngine::GUILayout::Button(::StringW  text, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Button", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, options);
}
inline bool UnityEngine::GUILayout::DoButton(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoButton", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, content, style, options);
}
inline ::StringW UnityEngine::GUILayout::TextField(::StringW  text, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"TextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, options);
}
inline ::StringW UnityEngine::GUILayout::TextField(::StringW  text, int32_t  maxLength, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"TextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, maxLength, options);
}
inline ::StringW UnityEngine::GUILayout::PasswordField(::StringW  password, char16_t  maskChar, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"PasswordField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, password, maskChar, options);
}
inline ::StringW UnityEngine::GUILayout::PasswordField(::StringW  password, char16_t  maskChar, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"PasswordField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, password, maskChar, maxLength, style, options);
}
inline ::StringW UnityEngine::GUILayout::DoTextField(::StringW  text, int32_t  maxLength, bool  multiline, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoTextField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, maxLength, multiline, style, options);
}
inline bool UnityEngine::GUILayout::Toggle(bool  value, ::StringW  text, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Toggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, text, style, options);
}
inline bool UnityEngine::GUILayout::Toggle(bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Toggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, content, style, options);
}
inline bool UnityEngine::GUILayout::DoToggle(bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoToggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, content, style, options);
}
inline float_t UnityEngine::GUILayout::VerticalSlider(float_t  value, float_t  leftValue, float_t  rightValue, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"VerticalSlider", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, leftValue, rightValue, options);
}
inline float_t UnityEngine::GUILayout::DoVerticalSlider(float_t  value, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoVerticalSlider", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, leftValue, rightValue, slider, thumb, options);
}
inline float_t UnityEngine::GUILayout::HorizontalScrollbar(float_t  value, float_t  size, float_t  leftValue, float_t  rightValue, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"HorizontalScrollbar", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, size, leftValue, rightValue, options);
}
inline float_t UnityEngine::GUILayout::HorizontalScrollbar(float_t  value, float_t  size, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"HorizontalScrollbar", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, size, leftValue, rightValue, style, options);
}
inline void UnityEngine::GUILayout::Space(float_t  pixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Space", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pixels);
}
inline void UnityEngine::GUILayout::FlexibleSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"FlexibleSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayout::BeginHorizontal(::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginHorizontal", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, options);
}
inline void UnityEngine::GUILayout::BeginHorizontal(::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginHorizontal", {}, {::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, options);
}
inline void UnityEngine::GUILayout::BeginHorizontal(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginHorizontal", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::EndHorizontal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndHorizontal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayout::BeginVertical(::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginVertical", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, options);
}
inline void UnityEngine::GUILayout::BeginVertical(::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginVertical", {}, {::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, options);
}
inline void UnityEngine::GUILayout::BeginVertical(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginVertical", {}, {::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::EndVertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndVertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayout::BeginArea(::UnityEngine::Rect  screenRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginArea", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect);
}
inline void UnityEngine::GUILayout::BeginArea(::UnityEngine::Rect  screenRect, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginArea", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, content, style);
}
inline void UnityEngine::GUILayout::EndArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::GUILayout::BeginScrollView(::UnityEngine::Vector2  scrollPosition, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, scrollPosition, options);
}
inline ::UnityEngine::Vector2 UnityEngine::GUILayout::BeginScrollView(::UnityEngine::Vector2  scrollPosition, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, scrollPosition, style, options);
}
inline ::UnityEngine::Vector2 UnityEngine::GUILayout::BeginScrollView(::UnityEngine::Vector2  scrollPosition, bool  alwaysShowHorizontal, bool  alwaysShowVertical, ::UnityEngine::GUIStyle*  horizontalScrollbar, ::UnityEngine::GUIStyle*  verticalScrollbar, ::UnityEngine::GUIStyle*  background, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, options);
}
inline void UnityEngine::GUILayout::EndScrollView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndScrollView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayout::EndScrollView(bool  handleScrollWheel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"EndScrollView", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handleScrollWheel);
}
inline ::UnityEngine::Rect UnityEngine::GUILayout::Window(int32_t  id, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUI_WindowFunction*  func, ::StringW  text, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Window", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, screenRect, func, text, options);
}
inline ::UnityEngine::Rect UnityEngine::GUILayout::DoWindow(int32_t  id, ::UnityEngine::Rect  screenRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, screenRect, func, content, style, options);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Width(float_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Width", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, width);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::MaxWidth(float_t  maxWidth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"MaxWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, maxWidth);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Height(float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"Height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, height);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::MaxHeight(float_t  maxHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"MaxHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, maxHeight);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::ExpandWidth(bool  expand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"ExpandWidth", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, expand);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::ExpandHeight(bool  expand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayout*>(),
                        {"ExpandHeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, expand);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayout::GUILayout()   {
}
