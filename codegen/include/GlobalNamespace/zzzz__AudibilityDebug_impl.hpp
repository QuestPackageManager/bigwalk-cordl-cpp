#pragma once
// IWYU pragma private; include "GlobalNamespace/AudibilityDebug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudibilityDebug_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudibilityDebug.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AudibilityDebug::*)()>(&::GlobalNamespace::AudibilityDebug::get_Identifier)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18037a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudibilityDebug.get_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudibilityDebug::*)()>(&::GlobalNamespace::AudibilityDebug::get_GUIDebugMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudibilityDebug.ToggleGUIDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudibilityDebug::*)()>(&::GlobalNamespace::AudibilityDebug::ToggleGUIDebug)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180379f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"ToggleGUIDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudibilityDebug.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudibilityDebug::*)()>(&::GlobalNamespace::AudibilityDebug::DrawGUI)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x1803798e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudibilityDebug._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudibilityDebug::*)()>(&::GlobalNamespace::AudibilityDebug::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUIStyle*& GlobalNamespace::AudibilityDebug::__cordl_internal_get__guiDebugTextStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr ::UnityEngine::GUIStyle* const& GlobalNamespace::AudibilityDebug::__cordl_internal_get__guiDebugTextStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr void GlobalNamespace::AudibilityDebug::__cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugTextStyle = value;
}
constexpr bool& GlobalNamespace::AudibilityDebug::__cordl_internal_get__guiDebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugMode;
}
constexpr bool const& GlobalNamespace::AudibilityDebug::__cordl_internal_get__guiDebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugMode;
}
constexpr void GlobalNamespace::AudibilityDebug::__cordl_internal_set__guiDebugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugMode = value;
}
inline ::StringW GlobalNamespace::AudibilityDebug::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::AudibilityDebug::get_GUIDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudibilityDebug::ToggleGUIDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"ToggleGUIDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudibilityDebug::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudibilityDebug::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudibilityDebug*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudibilityDebug* GlobalNamespace::AudibilityDebug::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudibilityDebug*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::AudibilityDebug::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::AudibilityDebug::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudibilityDebug::AudibilityDebug()   {
}
