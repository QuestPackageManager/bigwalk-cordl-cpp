#pragma once
// IWYU pragma private; include "UnityEngine/TextEditor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__IMGUITextHandle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__TextSelectingUtilities_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextEditor_DblClickSnapping::TextEditor_DblClickSnapping(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditor_DblClickSnapping::TextEditor_DblClickSnapping()   {
}
constexpr ::UnityEngine::TextEditor_DblClickSnapping  UnityEngine::TextEditor_DblClickSnapping::WORDS{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::TextEditor_DblClickSnapping  UnityEngine::TextEditor_DblClickSnapping::PARAGRAPHS{static_cast<uint8_t>(0x1u)};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_isMultiline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(bool)>(&::UnityEngine::TextEditor::set_isMultiline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dcc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_isMultiline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_showCursor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_showCursor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dcbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_showCursor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_m_HasFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_m_HasFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_m_HasFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_m_HasFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(bool)>(&::UnityEngine::TextEditor::set_m_HasFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_m_HasFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18168e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::set_text)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822dcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_textWithWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_textWithWhitespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822dcbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_textWithWhitespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_textWithWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::set_textWithWhitespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822dcc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_textWithWhitespace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_position)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181788310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Rect)>(&::UnityEngine::TextEditor::set_position)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f1420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_cursorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_cursorIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822dcaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_cursorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_selectIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_selectIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822dcb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_selectIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::_ctor)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1822dc6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnTextChangedHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnTextChangedHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822dc030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnTextChangedHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnContentTextChangedHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnContentTextChangedHandle)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822dbda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnContentTextChangedHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnFocus)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822dbf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnLostFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnLostFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnLostFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.HandleKeyEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextEditor::*)(::UnityEngine::Event*)>(&::UnityEngine::TextEditor::HandleKeyEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822dba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"HandleKeyEvent", {}, {::i2c::type_of<::UnityEngine::Event*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ReplaceSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::ReplaceSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dc0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"ReplaceSelection", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(char16_t)>(&::UnityEngine::TextEditor::Insert)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822dbb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"Insert", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveCursorToPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::MoveCursorToPosition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822dbcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"MoveCursorToPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveCursorToPosition_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2, bool)>(&::UnityEngine::TextEditor::MoveCursorToPosition_Internal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822dbc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"MoveCursorToPosition_Internal", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::SelectToPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822dc1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SelectToPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GetLocalCursorPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::GetLocalCursorPosition)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822db990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"GetLocalCursorPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MouseDragSelectsWholeWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(bool)>(&::UnityEngine::TextEditor::MouseDragSelectsWholeWords)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dbbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"MouseDragSelectsWholeWords", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DblClickSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::TextEditor_DblClickSnapping)>(&::UnityEngine::TextEditor::DblClickSnap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182005f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"DblClickSnap", {}, {::i2c::type_of<::UnityEngine::TextEditor_DblClickSnapping>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectCurrentWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectCurrentWord)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dc1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SelectCurrentWord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectCurrentParagraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SelectCurrentParagraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.UpdateScrollOffsetIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Event*)>(&::UnityEngine::TextEditor::UpdateScrollOffsetIfNeeded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822dc200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"UpdateScrollOffsetIfNeeded", {}, {::i2c::type_of<::UnityEngine::Event*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.UpdateTextHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::UpdateTextHandle)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1822dc5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"UpdateTextHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.UpdateScrollOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::UpdateScrollOffset)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1822dc250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"UpdateScrollOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DrawCursor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::DrawCursor)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1822db510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"DrawCursor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SaveBackup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SaveBackup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822dc0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SaveBackup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DetectFocusChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DetectFocusChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181723810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"DetectFocusChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnDetectFocusChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnDetectFocusChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822dbec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::TextEditor*>(),
                    {::i2c::class_of<::UnityEngine::TextEditor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnCursorIndexChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnCursorIndexChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::TextEditor*>(),
                    {::i2c::class_of<::UnityEngine::TextEditor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnSelectIndexChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnSelectIndexChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822dbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::TextEditor*>(),
                    {::i2c::class_of<::UnityEngine::TextEditor*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUIContent*& UnityEngine::TextEditor::__cordl_internal_get_m_Content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Content;
}
constexpr ::UnityEngine::GUIContent* const& UnityEngine::TextEditor::__cordl_internal_get_m_Content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Content;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_Content(::UnityEngine::GUIContent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Content = value;
}
constexpr ::UnityEngine::TextSelectingUtilities*& UnityEngine::TextEditor::__cordl_internal_get_m_TextSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextSelecting;
}
constexpr ::UnityEngine::TextSelectingUtilities* const& UnityEngine::TextEditor::__cordl_internal_get_m_TextSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextSelecting;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_TextSelecting(::UnityEngine::TextSelectingUtilities*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TextSelecting = value;
}
constexpr ::UnityEngine::TextEditingUtilities*& UnityEngine::TextEditor::__cordl_internal_get_m_TextEditing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextEditing;
}
constexpr ::UnityEngine::TextEditingUtilities* const& UnityEngine::TextEditor::__cordl_internal_get_m_TextEditing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextEditing;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_TextEditing(::UnityEngine::TextEditingUtilities*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TextEditing = value;
}
constexpr ::UnityEngine::IMGUITextHandle*& UnityEngine::TextEditor::__cordl_internal_get_m_TextHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextHandle;
}
constexpr ::UnityEngine::IMGUITextHandle* const& UnityEngine::TextEditor::__cordl_internal_get_m_TextHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextHandle;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_TextHandle(::UnityEngine::IMGUITextHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TextHandle = value;
}
constexpr ::UnityEngine::TouchScreenKeyboard*& UnityEngine::TextEditor::__cordl_internal_get_keyboardOnScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardOnScreen;
}
constexpr ::UnityEngine::TouchScreenKeyboard* const& UnityEngine::TextEditor::__cordl_internal_get_keyboardOnScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyboardOnScreen;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyboardOnScreen = value;
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_controlID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlID;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_controlID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlID;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_controlID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlID = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::TextEditor::__cordl_internal_get_style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::TextEditor::__cordl_internal_get_style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_style(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___style = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_hasHorizontalCursorPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasHorizontalCursorPos;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_hasHorizontalCursorPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasHorizontalCursorPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_hasHorizontalCursorPos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasHorizontalCursorPos = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_isPasswordField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPasswordField;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_isPasswordField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPasswordField;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_isPasswordField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPasswordField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__cordl_internal_get_scrollOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__cordl_internal_get_scrollOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollOffset;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_scrollOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollOffset = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_focus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focus;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_focus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focus;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_focus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focus = value;
}
constexpr ::StringW& UnityEngine::TextEditor::__cordl_internal_get_m_TextWithWhitespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextWithWhitespace;
}
constexpr ::StringW const& UnityEngine::TextEditor::__cordl_internal_get_m_TextWithWhitespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextWithWhitespace;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_TextWithWhitespace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TextWithWhitespace = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::TextEditor::__cordl_internal_get__position_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position_k__BackingField;
}
constexpr ::UnityEngine::Rect const& UnityEngine::TextEditor::__cordl_internal_get__position_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position_k__BackingField;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set__position_k__BackingField(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__cordl_internal_get_graphicalCursorPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicalCursorPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__cordl_internal_get_graphicalCursorPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicalCursorPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_graphicalCursorPos(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphicalCursorPos = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__cordl_internal_get_lastCursorPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCursorPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__cordl_internal_get_lastCursorPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCursorPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_lastCursorPos(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCursorPos = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__cordl_internal_get_previousContentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousContentSize;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__cordl_internal_get_previousContentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousContentSize;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_previousContentSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousContentSize = value;
}
constexpr ::StringW& UnityEngine::TextEditor::__cordl_internal_get_oldText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldText;
}
constexpr ::StringW const& UnityEngine::TextEditor::__cordl_internal_get_oldText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldText;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_oldText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldText = value;
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_oldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_oldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_oldPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldPos = value;
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_oldSelectPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldSelectPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_oldSelectPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldSelectPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_oldSelectPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldSelectPos = value;
}
inline void UnityEngine::TextEditor::set_isMultiline(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_isMultiline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextEditor::get_showCursor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_showCursor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::get_m_HasFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_m_HasFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_m_HasFocus(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_m_HasFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextEditor::get_text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextEditor::get_textWithWhitespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_textWithWhitespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_textWithWhitespace(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_textWithWhitespace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::TextEditor::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::set_position(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextEditor::get_cursorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_cursorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TextEditor::get_selectIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"get_selectIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnTextChangedHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnTextChangedHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnContentTextChangedHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnContentTextChangedHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnLostFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"OnLostFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextEditor::HandleKeyEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"HandleKeyEvent", {}, {::i2c::type_of<::UnityEngine::Event*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline void UnityEngine::TextEditor::ReplaceSelection(::StringW  replace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"ReplaceSelection", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replace);
}
inline void UnityEngine::TextEditor::Insert(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"Insert", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void UnityEngine::TextEditor::MoveCursorToPosition(::UnityEngine::Vector2  cursorPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"MoveCursorToPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorPosition);
}
inline void UnityEngine::TextEditor::MoveCursorToPosition_Internal(::UnityEngine::Vector2  cursorPosition, bool  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"MoveCursorToPosition_Internal", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorPosition, shift);
}
inline void UnityEngine::TextEditor::SelectToPosition(::UnityEngine::Vector2  cursorPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SelectToPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorPosition);
}
inline ::UnityEngine::Vector2 UnityEngine::TextEditor::GetLocalCursorPosition(::UnityEngine::Vector2  cursorPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"GetLocalCursorPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, cursorPosition);
}
inline void UnityEngine::TextEditor::MouseDragSelectsWholeWords(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"MouseDragSelectsWholeWords", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void UnityEngine::TextEditor::DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping  snapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"DblClickSnap", {}, {::i2c::type_of<::UnityEngine::TextEditor_DblClickSnapping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapping);
}
inline void UnityEngine::TextEditor::SelectCurrentWord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SelectCurrentWord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::SelectCurrentParagraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SelectCurrentParagraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::UpdateScrollOffsetIfNeeded(::UnityEngine::Event*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"UpdateScrollOffsetIfNeeded", {}, {::i2c::type_of<::UnityEngine::Event*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::TextEditor::UpdateTextHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"UpdateTextHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::UpdateScrollOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"UpdateScrollOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::DrawCursor(::StringW  newText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"DrawCursor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText);
}
inline void UnityEngine::TextEditor::SaveBackup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"SaveBackup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::DetectFocusChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TextEditor*>(),
                        {"DetectFocusChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnDetectFocusChange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::TextEditor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnCursorIndexChange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::TextEditor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextEditor::OnSelectIndexChange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::TextEditor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextEditor* UnityEngine::TextEditor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextEditor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditor::TextEditor()   {
}
