#pragma once
// IWYU pragma private; include "UnityEngine/GUISettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GUISettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUISettings.Internal_GetCursorFlashSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::GUISettings::Internal_GetCursorFlashSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822c3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"Internal_GetCursorFlashSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISettings.get_doubleClickSelectsWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::get_doubleClickSelectsWord)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_doubleClickSelectsWord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISettings.get_tripleClickSelectsLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::get_tripleClickSelectsLine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_tripleClickSelectsLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISettings.get_cursorColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::get_cursorColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803e6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_cursorColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISettings.get_cursorFlashSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::get_cursorFlashSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822c3f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_cursorFlashSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISettings.get_selectionColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::get_selectionColor)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x180a26490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_selectionColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822c3f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GUISettings::__cordl_internal_get_m_DoubleClickSelectsWord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DoubleClickSelectsWord;
}
constexpr bool const& UnityEngine::GUISettings::__cordl_internal_get_m_DoubleClickSelectsWord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DoubleClickSelectsWord;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_DoubleClickSelectsWord(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DoubleClickSelectsWord = value;
}
constexpr bool& UnityEngine::GUISettings::__cordl_internal_get_m_TripleClickSelectsLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TripleClickSelectsLine;
}
constexpr bool const& UnityEngine::GUISettings::__cordl_internal_get_m_TripleClickSelectsLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TripleClickSelectsLine;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_TripleClickSelectsLine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TripleClickSelectsLine = value;
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__cordl_internal_get_m_CursorColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CursorColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__cordl_internal_get_m_CursorColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CursorColor;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_CursorColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CursorColor = value;
}
constexpr float_t& UnityEngine::GUISettings::__cordl_internal_get_m_CursorFlashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CursorFlashSpeed;
}
constexpr float_t const& UnityEngine::GUISettings::__cordl_internal_get_m_CursorFlashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CursorFlashSpeed;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_CursorFlashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CursorFlashSpeed = value;
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__cordl_internal_get_m_SelectionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectionColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__cordl_internal_get_m_SelectionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectionColor;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_SelectionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectionColor = value;
}
inline float_t UnityEngine::GUISettings::Internal_GetCursorFlashSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"Internal_GetCursorFlashSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::GUISettings::get_doubleClickSelectsWord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_doubleClickSelectsWord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::GUISettings::get_tripleClickSelectsLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_tripleClickSelectsLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::GUISettings::get_cursorColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_cursorColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline float_t UnityEngine::GUISettings::get_cursorFlashSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_cursorFlashSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::GUISettings::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {"get_selectionColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::GUISettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUISettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GUISettings* UnityEngine::GUISettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUISettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISettings::GUISettings()   {
}
