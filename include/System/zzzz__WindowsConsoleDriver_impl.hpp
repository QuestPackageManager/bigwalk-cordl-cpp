#pragma once
// IWYU pragma private; include "System/WindowsConsoleDriver.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WindowsConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleColor_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__ConsoleScreenBufferInfo_def.hpp"
#include "System/zzzz__Coord_def.hpp"
#include "System/zzzz__Handles_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__InputRecord_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::WindowsConsoleDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WindowsConsoleDriver::*)()>(&::System::WindowsConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181769830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetAttrForeground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int32_t, ::System::ConsoleColor)>(&::System::WindowsConsoleDriver::GetAttrForeground)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181769240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"GetAttrForeground", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ConsoleColor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.set_ForegroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WindowsConsoleDriver::*)(::System::ConsoleColor)>(&::System::WindowsConsoleDriver::set_ForegroundColor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181769920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"set_ForegroundColor", {}, {::i2c::type_of<::System::ConsoleColor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WindowsConsoleDriver::*)()>(&::System::WindowsConsoleDriver::Clear)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181768e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::WindowsConsoleDriver::*)(bool)>(&::System::WindowsConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1817694e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"ReadKey", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ResetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WindowsConsoleDriver::*)()>(&::System::WindowsConsoleDriver::ResetColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817696e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"ResetColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.IsModifierKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int16_t)>(&::System::WindowsConsoleDriver::IsModifierKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181769380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"IsModifierKey", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetStdHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Handles)>(&::System::WindowsConsoleDriver::GetStdHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1817692f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"GetStdHandle", {}, {::i2c::type_of<::System::Handles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.GetConsoleScreenBufferInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::ConsoleScreenBufferInfo>)>(&::System::WindowsConsoleDriver::GetConsoleScreenBufferInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181769250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"GetConsoleScreenBufferInfo", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::ConsoleScreenBufferInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.FillConsoleOutputCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, char16_t, int32_t, ::System::Coord, ::by_ref<int32_t>)>(&::System::WindowsConsoleDriver::FillConsoleOutputCharacter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181769180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"FillConsoleOutputCharacter", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Coord>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.FillConsoleOutputAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int16_t, int32_t, ::System::Coord, ::by_ref<int32_t>)>(&::System::WindowsConsoleDriver::FillConsoleOutputAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1817690c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"FillConsoleOutputAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Coord>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.SetConsoleCursorPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::Coord)>(&::System::WindowsConsoleDriver::SetConsoleCursorPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1817696f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"SetConsoleCursorPosition", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Coord>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.SetConsoleTextAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int16_t)>(&::System::WindowsConsoleDriver::SetConsoleTextAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181769790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"SetConsoleTextAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsoleDriver.ReadConsoleInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::System::InputRecord>, int32_t, ::by_ref<int32_t>)>(&::System::WindowsConsoleDriver::ReadConsoleInput)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1817693b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"ReadConsoleInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::InputRecord>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::WindowsConsoleDriver::__cordl_internal_get_inputHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputHandle;
}
constexpr ::System::IntPtr const& System::WindowsConsoleDriver::__cordl_internal_get_inputHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputHandle;
}
constexpr void System::WindowsConsoleDriver::__cordl_internal_set_inputHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputHandle = value;
}
constexpr ::System::IntPtr& System::WindowsConsoleDriver::__cordl_internal_get_outputHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputHandle;
}
constexpr ::System::IntPtr const& System::WindowsConsoleDriver::__cordl_internal_get_outputHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputHandle;
}
constexpr void System::WindowsConsoleDriver::__cordl_internal_set_outputHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputHandle = value;
}
constexpr int16_t& System::WindowsConsoleDriver::__cordl_internal_get_defaultAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAttribute;
}
constexpr int16_t const& System::WindowsConsoleDriver::__cordl_internal_get_defaultAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAttribute;
}
constexpr void System::WindowsConsoleDriver::__cordl_internal_set_defaultAttribute(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAttribute = value;
}
inline void System::WindowsConsoleDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int16_t System::WindowsConsoleDriver::GetAttrForeground(int32_t  attr, ::System::ConsoleColor  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"GetAttrForeground", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ConsoleColor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, attr, color);
}
inline void System::WindowsConsoleDriver::set_ForegroundColor(::System::ConsoleColor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"set_ForegroundColor", {}, {::i2c::type_of<::System::ConsoleColor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::WindowsConsoleDriver::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::WindowsConsoleDriver::ReadKey(bool  intercept)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"ReadKey", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, intercept);
}
inline void System::WindowsConsoleDriver::ResetColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"ResetColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::WindowsConsoleDriver::IsModifierKey(int16_t  virtualKeyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"IsModifierKey", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualKeyCode);
}
inline ::System::IntPtr System::WindowsConsoleDriver::GetStdHandle(::System::Handles  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"GetStdHandle", {}, {::i2c::type_of<::System::Handles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline bool System::WindowsConsoleDriver::GetConsoleScreenBufferInfo(::System::IntPtr  handle, ::by_ref<::System::ConsoleScreenBufferInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"GetConsoleScreenBufferInfo", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::ConsoleScreenBufferInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, info);
}
inline bool System::WindowsConsoleDriver::FillConsoleOutputCharacter(::System::IntPtr  handle, char16_t  c, int32_t  size, ::System::Coord  coord, ::by_ref<int32_t>  written)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"FillConsoleOutputCharacter", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Coord>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, c, size, coord, written);
}
inline bool System::WindowsConsoleDriver::FillConsoleOutputAttribute(::System::IntPtr  handle, int16_t  c, int32_t  size, ::System::Coord  coord, ::by_ref<int32_t>  written)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"FillConsoleOutputAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Coord>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, c, size, coord, written);
}
inline bool System::WindowsConsoleDriver::SetConsoleCursorPosition(::System::IntPtr  handle, ::System::Coord  coord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"SetConsoleCursorPosition", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Coord>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, coord);
}
inline bool System::WindowsConsoleDriver::SetConsoleTextAttribute(::System::IntPtr  handle, int16_t  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"SetConsoleTextAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, attribute);
}
inline bool System::WindowsConsoleDriver::ReadConsoleInput(::System::IntPtr  handle, ::by_ref<::System::InputRecord>  record, int32_t  length, ::by_ref<int32_t>  nread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::WindowsConsoleDriver*>(),
                        {"ReadConsoleInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::InputRecord>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, record, length, nread);
}
inline ::System::WindowsConsoleDriver* System::WindowsConsoleDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WindowsConsoleDriver*>());
}
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr  System::WindowsConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::WindowsConsoleDriver::i___System__IConsoleDriver() noexcept {
return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::WindowsConsoleDriver::WindowsConsoleDriver()   {
}
