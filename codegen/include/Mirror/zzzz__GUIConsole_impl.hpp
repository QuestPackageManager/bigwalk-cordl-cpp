#pragma once
// IWYU pragma private; include "Mirror/GUIConsole.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Mirror/zzzz__GUIConsole_def.hpp"
#include "Mirror/zzzz__LogEntry_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Mirror::GUIConsole.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::GUIConsole::*)()>(&::Mirror::GUIConsole::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181518370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GUIConsole.OnLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::GUIConsole::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Mirror::GUIConsole::OnLog)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181518640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"OnLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GUIConsole.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::GUIConsole::*)()>(&::Mirror::GUIConsole::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181518760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GUIConsole.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::GUIConsole::*)()>(&::Mirror::GUIConsole::OnGUI)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1815183c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GUIConsole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::GUIConsole::*)()>(&::Mirror::GUIConsole::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181518790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::GUIConsole::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& Mirror::GUIConsole::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Mirror::GUIConsole::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr int32_t& Mirror::GUIConsole::__cordl_internal_get_maxLogCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLogCount;
}
constexpr int32_t const& Mirror::GUIConsole::__cordl_internal_get_maxLogCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLogCount;
}
constexpr void Mirror::GUIConsole::__cordl_internal_set_maxLogCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLogCount = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::LogEntry>*& Mirror::GUIConsole::__cordl_internal_get_log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___log;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::LogEntry>* const& Mirror::GUIConsole::__cordl_internal_get_log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___log;
}
constexpr void Mirror::GUIConsole::__cordl_internal_set_log(::System::Collections::Generic::Queue_1<::Mirror::LogEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___log = value;
}
constexpr ::UnityEngine::KeyCode& Mirror::GUIConsole::__cordl_internal_get_hotKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotKey;
}
constexpr ::UnityEngine::KeyCode const& Mirror::GUIConsole::__cordl_internal_get_hotKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotKey;
}
constexpr void Mirror::GUIConsole::__cordl_internal_set_hotKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hotKey = value;
}
constexpr bool& Mirror::GUIConsole::__cordl_internal_get_visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr bool const& Mirror::GUIConsole::__cordl_internal_get_visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr void Mirror::GUIConsole::__cordl_internal_set_visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visible = value;
}
constexpr ::UnityEngine::Vector2& Mirror::GUIConsole::__cordl_internal_get_scroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scroll;
}
constexpr ::UnityEngine::Vector2 const& Mirror::GUIConsole::__cordl_internal_get_scroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scroll;
}
constexpr void Mirror::GUIConsole::__cordl_internal_set_scroll(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scroll = value;
}
inline void Mirror::GUIConsole::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::GUIConsole::OnLog(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"OnLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, stackTrace, type);
}
inline void Mirror::GUIConsole::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::GUIConsole::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::GUIConsole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GUIConsole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::GUIConsole* Mirror::GUIConsole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::GUIConsole*>());
}
// Ctor Parameters []
constexpr ::Mirror::GUIConsole::GUIConsole()   {
}
