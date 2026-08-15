#pragma once
// IWYU pragma private; include "UnityEngine/GUI.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FocusType_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUI_WindowFunction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUI_WindowFunction::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::GUI_WindowFunction::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI_WindowFunction.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUI_WindowFunction::*)(int32_t)>(&::UnityEngine::GUI_WindowFunction::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(),
                    {::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::GUI_WindowFunction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::GUI_WindowFunction::Invoke(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::UnityEngine::GUI_WindowFunction* UnityEngine::GUI_WindowFunction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUI_WindowFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUI_WindowFunction::GUI_WindowFunction()   {
}
//  Writing Method size for method: ::UnityEngine::GUI.get_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_color)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_color)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822d0fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_backgroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_backgroundColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_backgroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_backgroundColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822d0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_contentColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_contentColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_contentColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_contentColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822d1020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_changed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_changed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::set_changed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_changed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d1050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_usePageScrollbars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_usePageScrollbars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_usePageScrollbars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_blendMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::GUI::get_blendMaterial)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blendMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_blitMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::GUI::get_blitMaterial)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blitMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_roundedRectMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::GUI::get_roundedRectMaterial)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_roundedRectWithColorPerBorderMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::GUI::get_roundedRectWithColorPerBorderMaterial)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectWithColorPerBorderMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.GrabMouseControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUI::GrabMouseControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822ce6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"GrabMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HasMouseControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::GUI::HasMouseControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822cefb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HasMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.ReleaseMouseControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::ReleaseMouseControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822cf910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"ReleaseMouseControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.InternalRepaintEditorWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::InternalRepaintEditorWindow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822cf3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"InternalRepaintEditorWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Internal_DoWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, bool)>(&::UnityEngine::GUI::Internal_DoWindow)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822cf410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DragWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::UnityEngine::GUI::DragWindow)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822cc860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_scrollTroughSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUI::get_scrollTroughSide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollTroughSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_scrollTroughSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUI::set_scrollTroughSide)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822d10f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_scrollTroughSide", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_nextScrollStepTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::UnityEngine::GUI::get_nextScrollStepTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_nextScrollStepTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_nextScrollStepTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime)>(&::UnityEngine::GUI::set_nextScrollStepTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822d10a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_nextScrollStepTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_skin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::UnityEngine::GUI::set_skin)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1822d1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_skin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_skin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GUISkin> (*)()>(&::UnityEngine::GUI::get_skin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822d0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_skin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoSetSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::UnityEngine::GUI::DoSetSkin)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822cc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoSetSkin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_matrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::GUI::get_matrix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822be960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_matrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_matrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::GUI::set_matrix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d1060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_matrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822cf550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822cf4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822cf600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822cd9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822cd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1822cc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool, float_t)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1822cd480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool, float_t, ::UnityEngine::Color, float_t, float_t)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1822cd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool, float_t, ::UnityEngine::Color, ::UnityEngine::Vector4, float_t)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1822cca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool, float_t, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822cd340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool, float_t, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822cd200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, bool, float_t, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(&::UnityEngine::GUI::DrawTexture)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x1822ccbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.CalculateScaledTextureRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::ScaleMode, float_t, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUI::CalculateScaledTextureRects)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1822cb400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"CalculateScaledTextureRects", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822caf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822caf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1822cada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822caff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1822cb060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Button)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1822cb270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoRepeatButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::FocusType)>(&::UnityEngine::GUI::DoRepeatButton)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1822cbe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoRepeatButton", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::FocusType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.PasswordField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Rect, ::StringW, char16_t, int32_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::PasswordField)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822cf730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"PasswordField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.PasswordFieldGetStrToShow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t)>(&::UnityEngine::GUI::PasswordFieldGetStrToShow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822cf680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"PasswordFieldGetStrToShow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoTextField)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822cc2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::StringW)>(&::UnityEngine::GUI::DoTextField)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822cc5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoTextField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::StringW, char16_t)>(&::UnityEngine::GUI::DoTextField)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1822cc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HandleTextFieldEventForTouchscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::StringW, char16_t, ::UnityEngine::TextEditor*)>(&::UnityEngine::GUI::HandleTextFieldEventForTouchscreen)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1822cec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForTouchscreen", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HandleTextFieldEventForDesktop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, bool, int32_t, ::UnityEngine::GUIStyle*, ::UnityEngine::TextEditor*)>(&::UnityEngine::GUI::HandleTextFieldEventForDesktop)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x1822ce6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForDesktop", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, bool, ::StringW)>(&::UnityEngine::GUI::Toggle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822d02b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Toggle)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1822d0330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, bool, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoControl)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1822cb8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoControl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoLabel)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1822cbbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoLabel", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoToggle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822cc660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoToggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, int32_t, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoButton)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822cb800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoButton", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HorizontalSlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t)>(&::UnityEngine::GUI::HorizontalSlider)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1822cf260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HorizontalSlider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.VerticalSlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::VerticalSlider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822d07e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"VerticalSlider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Slider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, bool, int32_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Slider)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822d00d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Slider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.HorizontalScrollbar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::HorizontalScrollbar)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1822cefc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HorizontalScrollbar", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.ScrollerRepeatButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::ScrollerRepeatButton)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1822cf920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"ScrollerRepeatButton", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.VerticalScrollbar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::VerticalScrollbar)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1822d0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"VerticalScrollbar", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Scroller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, bool)>(&::UnityEngine::GUI::Scroller)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x1822cfad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Scroller", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822ca270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::Vector2)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1822ca020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.EndGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::EndGroup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822cdba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"EndGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_scrollViewStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngineInternal::GenericStack* (*)()>(&::UnityEngine::GUI::get_scrollViewStates)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822d0ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollViewStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Rect, bool, bool, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::BeginScrollView)> {
  constexpr static std::size_t size = 0xab0;
  constexpr static std::size_t addrs = 0x1822ca2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.EndScrollView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::EndScrollView)> {
  constexpr static std::size_t size = 0xae0;
  constexpr static std::size_t addrs = 0x1822cdbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"EndScrollView", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Window
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Window)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1822d0890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Window", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(int32_t, ::UnityEngine::Rect, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUISkin*, bool)>(&::UnityEngine::GUI::DoWindow)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822cc760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.CallWindowDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUI_WindowFunction*, int32_t, int32_t, ::UnityEngine::GUISkin*, int32_t, float_t, float_t, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::CallWindowDelegate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1822cb5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"CallWindowDelegate", {}, {::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_color_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_color_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_color_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_color_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_backgroundColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_backgroundColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_contentColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_contentColor_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_contentColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_contentColor_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d1010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_blendMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::GUI::get_blendMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blendMaterial_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_blitMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::GUI::get_blitMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blitMaterial_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_roundedRectMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::GUI::get_roundedRectMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectMaterial_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_roundedRectWithColorPerBorderMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::GUI::get_roundedRectWithColorPerBorderMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822d0e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectWithColorPerBorderMaterial_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Internal_DoWindow_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::GUI_WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, bool, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUI::Internal_DoWindow_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822cf400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DragWindow_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUI::DragWindow_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822cc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::GUI::setStaticF_s_ScrollControlId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ScrollControlId", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ScrollControlId()  {
return ::cordl_internals::getStaticField<int32_t, "s_ScrollControlId", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_HotTextField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HotTextField", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_HotTextField()  {
return ::cordl_internals::getStaticField<int32_t, "s_HotTextField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_BoxHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BoxHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_BoxHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_BoxHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ButonHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ButonHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ButonHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ButonHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_RepeatButtonHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_RepeatButtonHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_RepeatButtonHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_RepeatButtonHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ToggleHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ToggleHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ToggleHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ToggleHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ButtonGridHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ButtonGridHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ButtonGridHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ButtonGridHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_SliderHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SliderHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_SliderHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_SliderHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_BeginGroupHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BeginGroupHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_BeginGroupHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_BeginGroupHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ScrollviewHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ScrollviewHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ScrollviewHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_ScrollviewHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__scrollTroughSide_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<scrollTroughSide>k__BackingField", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF__scrollTroughSide_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<scrollTroughSide>k__BackingField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "<nextScrollStepTime>k__BackingField", ::UnityEngine::GUI*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime UnityEngine::GUI::getStaticF__nextScrollStepTime_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::DateTime, "<nextScrollStepTime>k__BackingField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_Skin(::UnityW<::UnityEngine::GUISkin>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GUISkin>, "s_Skin", ::UnityEngine::GUI*>(std::forward<::UnityW<::UnityEngine::GUISkin>>(value));
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUI::getStaticF_s_Skin()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GUISkin>, "s_Skin", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ToolTipRect(::UnityEngine::Rect  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rect, "s_ToolTipRect", ::UnityEngine::GUI*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::GUI::getStaticF_s_ToolTipRect()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rect, "s_ToolTipRect", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack*  value)  {
::cordl_internals::setStaticField<::UnityEngineInternal::GenericStack*, "<scrollViewStates>k__BackingField", ::UnityEngine::GUI*>(std::forward<::UnityEngineInternal::GenericStack*>(value));
}
inline ::UnityEngineInternal::GenericStack* UnityEngine::GUI::getStaticF__scrollViewStates_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngineInternal::GenericStack*, "<scrollViewStates>k__BackingField", ::UnityEngine::GUI*>();
}
inline ::UnityEngine::Color UnityEngine::GUI::get_color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::GUI::get_backgroundColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_backgroundColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::GUI::get_contentColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_contentColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_changed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_changed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_changed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_changed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_usePageScrollbars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_usePageScrollbars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::GUI::get_blendMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blendMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::GUI::get_blitMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blitMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::GUI::get_roundedRectMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::GUI::get_roundedRectWithColorPerBorderMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectWithColorPerBorderMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::GrabMouseControl(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"GrabMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline bool UnityEngine::GUI::HasMouseControl(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HasMouseControl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline void UnityEngine::GUI::ReleaseMouseControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"ReleaseMouseControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::InternalRepaintEditorWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"InternalRepaintEditorWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::GUI::Internal_DoWindow(int32_t  id, int32_t  instanceID, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout);
}
inline void UnityEngine::GUI::DragWindow(::UnityEngine::Rect  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position);
}
inline int32_t UnityEngine::GUI::get_scrollTroughSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollTroughSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_scrollTroughSide(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_scrollTroughSide", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::DateTime UnityEngine::GUI::get_nextScrollStepTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_nextScrollStepTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_nextScrollStepTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_nextScrollStepTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::set_skin(::UnityEngine::GUISkin*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_skin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUI::get_skin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_skin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GUISkin>>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::DoSetSkin(::UnityEngine::GUISkin*  newSkin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoSetSkin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newSkin);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::GUI::get_matrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_matrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_matrix(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_matrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect  position, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, style);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Label", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend, imageAspect);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, float_t  borderWidth, float_t  borderRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend, imageAspect, color, borderWidth, borderRadius);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, float_t  borderRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend, imageAspect, color, borderWidths, borderRadius);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  borderRadiuses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend, imageAspect, color, borderWidths, borderRadiuses);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  color, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  borderRadiuses, bool  drawSmoothCorners)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend, imageAspect, color, borderWidths, borderRadiuses, drawSmoothCorners);
}
inline void UnityEngine::GUI::DrawTexture(::UnityEngine::Rect  position, ::UnityEngine::Texture*  image, ::UnityEngine::ScaleMode  scaleMode, bool  alphaBlend, float_t  imageAspect, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, ::UnityEngine::Vector4  borderWidths, ::UnityEngine::Vector4  borderRadiuses, bool  drawSmoothCorners)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, image, scaleMode, alphaBlend, imageAspect, leftColor, topColor, rightColor, bottomColor, borderWidths, borderRadiuses, drawSmoothCorners);
}
inline bool UnityEngine::GUI::CalculateScaledTextureRects(::UnityEngine::Rect  position, ::UnityEngine::ScaleMode  scaleMode, float_t  imageAspect, ::by_ref<::UnityEngine::Rect>  outScreenRect, ::by_ref<::UnityEngine::Rect>  outSourceRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"CalculateScaledTextureRects", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, scaleMode, imageAspect, outScreenRect, outSourceRect);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect  position, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect  position, ::StringW  text, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, style);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Box", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, text);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, content, style);
}
inline bool UnityEngine::GUI::Button(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Button", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, content, style);
}
inline bool UnityEngine::GUI::DoRepeatButton(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::UnityEngine::FocusType  focusType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoRepeatButton", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::FocusType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, content, style, focusType);
}
inline ::StringW UnityEngine::GUI::PasswordField(::UnityEngine::Rect  position, ::StringW  password, char16_t  maskChar, int32_t  maxLength, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"PasswordField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, position, password, maskChar, maxLength, style);
}
inline ::StringW UnityEngine::GUI::PasswordFieldGetStrToShow(::StringW  password, char16_t  maskChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"PasswordFieldGetStrToShow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, password, maskChar);
}
inline void UnityEngine::GUI::DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style);
}
inline void UnityEngine::GUI::DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, secureText);
}
inline void UnityEngine::GUI::DoTextField(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoTextField", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, secureText, maskChar);
}
inline void UnityEngine::GUI::HandleTextFieldEventForTouchscreen(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::StringW  secureText, char16_t  maskChar, ::UnityEngine::TextEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForTouchscreen", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, secureText, maskChar, editor);
}
inline void UnityEngine::GUI::HandleTextFieldEventForDesktop(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, bool  multiline, int32_t  maxLength, ::UnityEngine::GUIStyle*  style, ::UnityEngine::TextEditor*  editor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HandleTextFieldEventForDesktop", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::TextEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, id, content, multiline, maxLength, style, editor);
}
inline bool UnityEngine::GUI::Toggle(::UnityEngine::Rect  position, bool  value, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, value, text);
}
inline bool UnityEngine::GUI::Toggle(::UnityEngine::Rect  position, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Toggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, value, content, style);
}
inline bool UnityEngine::GUI::DoControl(::UnityEngine::Rect  position, int32_t  id, bool  on, bool  hover, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoControl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, on, hover, content, style);
}
inline void UnityEngine::GUI::DoLabel(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoLabel", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline bool UnityEngine::GUI::DoToggle(::UnityEngine::Rect  position, int32_t  id, bool  value, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoToggle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, value, content, style);
}
inline bool UnityEngine::GUI::DoButton(::UnityEngine::Rect  position, int32_t  id, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoButton", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, id, content, style);
}
inline float_t UnityEngine::GUI::HorizontalSlider(::UnityEngine::Rect  position, float_t  value, float_t  leftValue, float_t  rightValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HorizontalSlider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, leftValue, rightValue);
}
inline float_t UnityEngine::GUI::VerticalSlider(::UnityEngine::Rect  position, float_t  value, float_t  topValue, float_t  bottomValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"VerticalSlider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, topValue, bottomValue, slider, thumb);
}
inline float_t UnityEngine::GUI::Slider(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  start, float_t  end, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, bool  horiz, int32_t  id, ::UnityEngine::GUIStyle*  thumbExtent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Slider", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, size, start, end, slider, thumb, horiz, id, thumbExtent);
}
inline float_t UnityEngine::GUI::HorizontalScrollbar(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"HorizontalScrollbar", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, size, leftValue, rightValue, style);
}
inline bool UnityEngine::GUI::ScrollerRepeatButton(int32_t  scrollerID, ::UnityEngine::Rect  rect, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"ScrollerRepeatButton", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scrollerID, rect, style);
}
inline float_t UnityEngine::GUI::VerticalScrollbar(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  topValue, float_t  bottomValue, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"VerticalScrollbar", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, size, topValue, bottomValue, style);
}
inline float_t UnityEngine::GUI::Scroller(::UnityEngine::Rect  position, float_t  value, float_t  size, float_t  leftValue, float_t  rightValue, ::UnityEngine::GUIStyle*  slider, ::UnityEngine::GUIStyle*  thumb, ::UnityEngine::GUIStyle*  leftButton, ::UnityEngine::GUIStyle*  rightButton, bool  horiz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Scroller", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, position, value, size, leftValue, rightValue, slider, thumb, leftButton, rightButton, horiz);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect  position, ::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::UnityEngine::Vector2  scrollOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginGroup", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style, scrollOffset);
}
inline void UnityEngine::GUI::EndGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"EndGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngineInternal::GenericStack* UnityEngine::GUI::get_scrollViewStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_scrollViewStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngineInternal::GenericStack*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::GUI::BeginScrollView(::UnityEngine::Rect  position, ::UnityEngine::Vector2  scrollPosition, ::UnityEngine::Rect  viewRect, bool  alwaysShowHorizontal, bool  alwaysShowVertical, ::UnityEngine::GUIStyle*  horizontalScrollbar, ::UnityEngine::GUIStyle*  verticalScrollbar, ::UnityEngine::GUIStyle*  background)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"BeginScrollView", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, position, scrollPosition, viewRect, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background);
}
inline void UnityEngine::GUI::EndScrollView(bool  handleScrollWheel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"EndScrollView", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handleScrollWheel);
}
inline ::UnityEngine::Rect UnityEngine::GUI::Window(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Window", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, clientRect, func, title, style);
}
inline ::UnityEngine::Rect UnityEngine::GUI::DoWindow(int32_t  id, ::UnityEngine::Rect  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::UnityEngine::GUISkin*  skin, bool  forceRectOnLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DoWindow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, id, clientRect, func, title, style, skin, forceRectOnLayout);
}
inline void UnityEngine::GUI::CallWindowDelegate(::UnityEngine::GUI_WindowFunction*  func, int32_t  id, int32_t  instanceID, ::UnityEngine::GUISkin*  _skin, int32_t  forceRect, float_t  width, float_t  height, ::UnityEngine::GUIStyle*  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"CallWindowDelegate", {}, {::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, id, instanceID, _skin, forceRect, width, height, style);
}
inline void UnityEngine::GUI::get_color_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_color_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::get_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_backgroundColor_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_backgroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::get_contentColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_contentColor_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"set_contentColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::GUI::get_blendMaterial_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blendMaterial_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::GUI::get_blitMaterial_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_blitMaterial_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::GUI::get_roundedRectMaterial_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectMaterial_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::GUI::get_roundedRectWithColorPerBorderMaterial_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"get_roundedRectWithColorPerBorderMaterial_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::Internal_DoWindow_Injected(int32_t  id, int32_t  instanceID, ::by_ref<::UnityEngine::Rect>  clientRect, ::UnityEngine::GUI_WindowFunction*  func, ::UnityEngine::GUIContent*  title, ::UnityEngine::GUIStyle*  style, ::System::Object*  skin, bool  forceRectOnLayout, ::by_ref<::UnityEngine::Rect>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"Internal_DoWindow_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout, ret);
}
inline void UnityEngine::GUI::DragWindow_Injected(::by_ref<::UnityEngine::Rect>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUI*>(),
                        {"DragWindow_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUI::GUI()   {
}
