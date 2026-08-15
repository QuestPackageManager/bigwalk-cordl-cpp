#pragma once
// IWYU pragma private; include "Rewired/Internal/GUIText.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__TextAlignment_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/Internal/zzzz__GUIText_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_text)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::StringW)>(&::Rewired::Internal::GUIText::set_text)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAnchor (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_anchor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::UnityEngine::TextAnchor)>(&::Rewired::Internal::GUIText::set_anchor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f1f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_anchor", {}, {::i2c::type_of<::UnityEngine::TextAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAlignment (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_alignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_alignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::UnityEngine::TextAlignment)>(&::Rewired::Internal::GUIText::set_alignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f1f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_alignment", {}, {::i2c::type_of<::UnityEngine::TextAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_lineSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_lineSpacing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_lineSpacing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_lineSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(float_t)>(&::Rewired::Internal::GUIText::set_lineSpacing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f2030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_lineSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_font
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_font)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_font", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_font
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::UnityEngine::Font*)>(&::Rewired::Internal::GUIText::set_font)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f1fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_font", {}, {::i2c::type_of<::UnityEngine::Font*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_fontSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_fontSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_fontSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_fontSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(int32_t)>(&::Rewired::Internal::GUIText::set_fontSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f1fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_fontSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_fontStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FontStyle (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_fontStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180e25b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_fontStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_fontStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::UnityEngine::FontStyle)>(&::Rewired::Internal::GUIText::set_fontStyle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f1fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_fontStyle", {}, {::i2c::type_of<::UnityEngine::FontStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_color)> {
  constexpr static std::size_t size = 0xbb40;
  constexpr static std::size_t addrs = 0x180e3e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::UnityEngine::Color)>(&::Rewired::Internal::GUIText::set_color)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f1f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_pixelOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_pixelOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_pixelOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_pixelOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(::UnityEngine::Vector2)>(&::Rewired::Internal::GUIText::set_pixelOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f2040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_pixelOffset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.get_useUnityUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::get_useUnityUI)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_useUnityUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.set_useUnityUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)(bool)>(&::Rewired::Internal::GUIText::set_useUnityUI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f2050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_useUnityUI", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f1860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::OnGUI)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1818f1630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f1830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.kdnxVlNbdWbcpzSOdvNhMUUDVHNH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::kdnxVlNbdWbcpzSOdvNhMUUDVHNH)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x1818f19a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"kdnxVlNbdWbcpzSOdvNhMUUDVHNH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.rGdiRTEHdTkIZUVMlgiFvATjHrZt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::rGdiRTEHdTkIZUVMlgiFvATjHrZt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f1ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"rGdiRTEHdTkIZUVMlgiFvATjHrZt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.yLVFssfzfZFfBAbngQimClWeOjSCc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::yLVFssfzfZFfBAbngQimClWeOjSCc)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1818f2070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"yLVFssfzfZFfBAbngQimClWeOjSCc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.GetOrAddComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::Internal::GUIText> (*)(::UnityEngine::GameObject*)>(&::Rewired::Internal::GUIText::GetOrAddComponent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f15b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"GetOrAddComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText.CreateLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::Internal::GUIText> (*)(::UnityEngine::GameObject*)>(&::Rewired::Internal::GUIText::CreateLogger)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818f1500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"CreateLogger", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::GUIText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::GUIText::*)()>(&::Rewired::Internal::GUIText::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Internal::GUIText::__cordl_internal_get_StxNoassIivBEhuvfBoomaemWDMW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StxNoassIivBEhuvfBoomaemWDMW;
}
constexpr ::StringW const& Rewired::Internal::GUIText::__cordl_internal_get_StxNoassIivBEhuvfBoomaemWDMW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StxNoassIivBEhuvfBoomaemWDMW;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_StxNoassIivBEhuvfBoomaemWDMW(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StxNoassIivBEhuvfBoomaemWDMW = value;
}
constexpr ::UnityEngine::GUIStyle*& Rewired::Internal::GUIText::__cordl_internal_get_TKzVgLQhmFmRVJLZIvBTnVaUqicE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TKzVgLQhmFmRVJLZIvBTnVaUqicE;
}
constexpr ::UnityEngine::GUIStyle* const& Rewired::Internal::GUIText::__cordl_internal_get_TKzVgLQhmFmRVJLZIvBTnVaUqicE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TKzVgLQhmFmRVJLZIvBTnVaUqicE;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_TKzVgLQhmFmRVJLZIvBTnVaUqicE(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TKzVgLQhmFmRVJLZIvBTnVaUqicE = value;
}
constexpr ::UnityEngine::TextAnchor& Rewired::Internal::GUIText::__cordl_internal_get_kvGyRIqmUZgvrVVMQzRZAyRZNmxw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kvGyRIqmUZgvrVVMQzRZAyRZNmxw;
}
constexpr ::UnityEngine::TextAnchor const& Rewired::Internal::GUIText::__cordl_internal_get_kvGyRIqmUZgvrVVMQzRZAyRZNmxw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kvGyRIqmUZgvrVVMQzRZAyRZNmxw;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_kvGyRIqmUZgvrVVMQzRZAyRZNmxw(::UnityEngine::TextAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kvGyRIqmUZgvrVVMQzRZAyRZNmxw = value;
}
constexpr ::UnityEngine::TextAlignment& Rewired::Internal::GUIText::__cordl_internal_get_xTqUmHlVeHfJsBjdgpfFHVosunSX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xTqUmHlVeHfJsBjdgpfFHVosunSX;
}
constexpr ::UnityEngine::TextAlignment const& Rewired::Internal::GUIText::__cordl_internal_get_xTqUmHlVeHfJsBjdgpfFHVosunSX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xTqUmHlVeHfJsBjdgpfFHVosunSX;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_xTqUmHlVeHfJsBjdgpfFHVosunSX(::UnityEngine::TextAlignment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xTqUmHlVeHfJsBjdgpfFHVosunSX = value;
}
constexpr float_t& Rewired::Internal::GUIText::__cordl_internal_get_NSdTKvjnYBGMOjbalDzWKNkuCQqB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NSdTKvjnYBGMOjbalDzWKNkuCQqB;
}
constexpr float_t const& Rewired::Internal::GUIText::__cordl_internal_get_NSdTKvjnYBGMOjbalDzWKNkuCQqB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NSdTKvjnYBGMOjbalDzWKNkuCQqB;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_NSdTKvjnYBGMOjbalDzWKNkuCQqB(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NSdTKvjnYBGMOjbalDzWKNkuCQqB = value;
}
constexpr ::UnityW<::UnityEngine::Font>& Rewired::Internal::GUIText::__cordl_internal_get_nWCKhFxsVfAkZEUqvFcSdLSTZpGv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nWCKhFxsVfAkZEUqvFcSdLSTZpGv;
}
constexpr ::UnityW<::UnityEngine::Font> const& Rewired::Internal::GUIText::__cordl_internal_get_nWCKhFxsVfAkZEUqvFcSdLSTZpGv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nWCKhFxsVfAkZEUqvFcSdLSTZpGv;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_nWCKhFxsVfAkZEUqvFcSdLSTZpGv(::UnityW<::UnityEngine::Font>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nWCKhFxsVfAkZEUqvFcSdLSTZpGv = value;
}
constexpr int32_t& Rewired::Internal::GUIText::__cordl_internal_get_YMYDDiHWSTdaLVmrmBXggsLXdhLgA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YMYDDiHWSTdaLVmrmBXggsLXdhLgA;
}
constexpr int32_t const& Rewired::Internal::GUIText::__cordl_internal_get_YMYDDiHWSTdaLVmrmBXggsLXdhLgA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YMYDDiHWSTdaLVmrmBXggsLXdhLgA;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_YMYDDiHWSTdaLVmrmBXggsLXdhLgA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YMYDDiHWSTdaLVmrmBXggsLXdhLgA = value;
}
constexpr ::UnityEngine::FontStyle& Rewired::Internal::GUIText::__cordl_internal_get_KKHbjkghMrJQIXIUbAFgkdzWpMXgA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KKHbjkghMrJQIXIUbAFgkdzWpMXgA;
}
constexpr ::UnityEngine::FontStyle const& Rewired::Internal::GUIText::__cordl_internal_get_KKHbjkghMrJQIXIUbAFgkdzWpMXgA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KKHbjkghMrJQIXIUbAFgkdzWpMXgA;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_KKHbjkghMrJQIXIUbAFgkdzWpMXgA(::UnityEngine::FontStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KKHbjkghMrJQIXIUbAFgkdzWpMXgA = value;
}
constexpr ::UnityEngine::Color& Rewired::Internal::GUIText::__cordl_internal_get_VXHnnmNAEKcNQeDtcAvZgDdsoaThA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VXHnnmNAEKcNQeDtcAvZgDdsoaThA;
}
constexpr ::UnityEngine::Color const& Rewired::Internal::GUIText::__cordl_internal_get_VXHnnmNAEKcNQeDtcAvZgDdsoaThA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VXHnnmNAEKcNQeDtcAvZgDdsoaThA;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_VXHnnmNAEKcNQeDtcAvZgDdsoaThA(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VXHnnmNAEKcNQeDtcAvZgDdsoaThA = value;
}
constexpr ::UnityEngine::Vector2& Rewired::Internal::GUIText::__cordl_internal_get__pixelOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pixelOffset;
}
constexpr ::UnityEngine::Vector2 const& Rewired::Internal::GUIText::__cordl_internal_get__pixelOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pixelOffset;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set__pixelOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pixelOffset = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get__useUnityUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useUnityUI;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get__useUnityUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useUnityUI;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set__useUnityUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useUnityUI = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_ZNboAZTBXStchIYhKYpezHAFnhmb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZNboAZTBXStchIYhKYpezHAFnhmb;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_ZNboAZTBXStchIYhKYpezHAFnhmb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZNboAZTBXStchIYhKYpezHAFnhmb;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_ZNboAZTBXStchIYhKYpezHAFnhmb(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZNboAZTBXStchIYhKYpezHAFnhmb = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_dzesXKotijWRtHCDykRzxFsNUUXX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dzesXKotijWRtHCDykRzxFsNUUXX;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_dzesXKotijWRtHCDykRzxFsNUUXX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dzesXKotijWRtHCDykRzxFsNUUXX;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_dzesXKotijWRtHCDykRzxFsNUUXX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dzesXKotijWRtHCDykRzxFsNUUXX = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_XcSHhCKSndOiEYLGupRjsoOKaHjY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XcSHhCKSndOiEYLGupRjsoOKaHjY;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_XcSHhCKSndOiEYLGupRjsoOKaHjY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XcSHhCKSndOiEYLGupRjsoOKaHjY;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_XcSHhCKSndOiEYLGupRjsoOKaHjY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XcSHhCKSndOiEYLGupRjsoOKaHjY = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_IQDrufXnyQcjwFRSmBTHDVUPAsZoA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IQDrufXnyQcjwFRSmBTHDVUPAsZoA;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_IQDrufXnyQcjwFRSmBTHDVUPAsZoA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IQDrufXnyQcjwFRSmBTHDVUPAsZoA;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_IQDrufXnyQcjwFRSmBTHDVUPAsZoA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IQDrufXnyQcjwFRSmBTHDVUPAsZoA = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_sUMlcgfEpUSKuPuuxLoYwxVakoGt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sUMlcgfEpUSKuPuuxLoYwxVakoGt;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_sUMlcgfEpUSKuPuuxLoYwxVakoGt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sUMlcgfEpUSKuPuuxLoYwxVakoGt;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_sUMlcgfEpUSKuPuuxLoYwxVakoGt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sUMlcgfEpUSKuPuuxLoYwxVakoGt = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_cTnKwxTOCjwjOsWJcvORphgTiQao()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cTnKwxTOCjwjOsWJcvORphgTiQao;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_cTnKwxTOCjwjOsWJcvORphgTiQao() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cTnKwxTOCjwjOsWJcvORphgTiQao;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_cTnKwxTOCjwjOsWJcvORphgTiQao(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cTnKwxTOCjwjOsWJcvORphgTiQao = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_nBMaibCTZuMKBLCLtHllncjwxFsR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBMaibCTZuMKBLCLtHllncjwxFsR;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_nBMaibCTZuMKBLCLtHllncjwxFsR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBMaibCTZuMKBLCLtHllncjwxFsR;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_nBMaibCTZuMKBLCLtHllncjwxFsR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nBMaibCTZuMKBLCLtHllncjwxFsR = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Rewired::Internal::GUIText::__cordl_internal_get_WVvKjfspBJtPThIMhaWflYKwyLpB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WVvKjfspBJtPThIMhaWflYKwyLpB;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Rewired::Internal::GUIText::__cordl_internal_get_WVvKjfspBJtPThIMhaWflYKwyLpB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WVvKjfspBJtPThIMhaWflYKwyLpB;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_WVvKjfspBJtPThIMhaWflYKwyLpB(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WVvKjfspBJtPThIMhaWflYKwyLpB = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_QDhKivEhHSQMqyVXJnCUAwivRpdR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QDhKivEhHSQMqyVXJnCUAwivRpdR;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_QDhKivEhHSQMqyVXJnCUAwivRpdR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QDhKivEhHSQMqyVXJnCUAwivRpdR;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_QDhKivEhHSQMqyVXJnCUAwivRpdR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QDhKivEhHSQMqyVXJnCUAwivRpdR = value;
}
constexpr bool& Rewired::Internal::GUIText::__cordl_internal_get_eXOLIPiLQFttDjEXLjoquHspBPCaA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eXOLIPiLQFttDjEXLjoquHspBPCaA;
}
constexpr bool const& Rewired::Internal::GUIText::__cordl_internal_get_eXOLIPiLQFttDjEXLjoquHspBPCaA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eXOLIPiLQFttDjEXLjoquHspBPCaA;
}
constexpr void Rewired::Internal::GUIText::__cordl_internal_set_eXOLIPiLQFttDjEXLjoquHspBPCaA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eXOLIPiLQFttDjEXLjoquHspBPCaA = value;
}
inline ::StringW Rewired::Internal::GUIText::get_text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextAnchor Rewired::Internal::GUIText::get_anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAnchor>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_anchor(::UnityEngine::TextAnchor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_anchor", {}, {::i2c::type_of<::UnityEngine::TextAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextAlignment Rewired::Internal::GUIText::get_alignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_alignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAlignment>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_alignment(::UnityEngine::TextAlignment  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_alignment", {}, {::i2c::type_of<::UnityEngine::TextAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Internal::GUIText::get_lineSpacing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_lineSpacing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_lineSpacing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_lineSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Font> Rewired::Internal::GUIText::get_font()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_font", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_font(::UnityEngine::Font*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_font", {}, {::i2c::type_of<::UnityEngine::Font*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Internal::GUIText::get_fontSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_fontSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_fontSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_fontSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::FontStyle Rewired::Internal::GUIText::get_fontStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_fontStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::FontStyle>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_fontStyle(::UnityEngine::FontStyle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_fontStyle", {}, {::i2c::type_of<::UnityEngine::FontStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Rewired::Internal::GUIText::get_color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::Internal::GUIText::get_pixelOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_pixelOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_pixelOffset(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_pixelOffset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Internal::GUIText::get_useUnityUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"get_useUnityUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::set_useUnityUI(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"set_useUnityUI", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::GUIText::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::kdnxVlNbdWbcpzSOdvNhMUUDVHNH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"kdnxVlNbdWbcpzSOdvNhMUUDVHNH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::rGdiRTEHdTkIZUVMlgiFvATjHrZt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"rGdiRTEHdTkIZUVMlgiFvATjHrZt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::GUIText::yLVFssfzfZFfBAbngQimClWeOjSCc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"yLVFssfzfZFfBAbngQimClWeOjSCc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Rewired::Internal::GUIText> Rewired::Internal::GUIText::GetOrAddComponent(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"GetOrAddComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::Internal::GUIText>>(nullptr, ___internal_method, gameObject);
}
inline ::UnityW<::Rewired::Internal::GUIText> Rewired::Internal::GUIText::CreateLogger(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {"CreateLogger", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::Internal::GUIText>>(nullptr, ___internal_method, gameObject);
}
inline void Rewired::Internal::GUIText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::GUIText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Internal::GUIText* Rewired::Internal::GUIText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::GUIText*>());
}
// Ctor Parameters []
constexpr ::Rewired::Internal::GUIText::GUIText()   {
}
