#pragma once
// IWYU pragma private; include "System/IConsoleDriver.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleColor_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
//  Writing Method size for method: ::System::IConsoleDriver.set_ForegroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IConsoleDriver::*)(::System::ConsoleColor)>(&::System::IConsoleDriver::set_ForegroundColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IConsoleDriver*>(),
                    {::i2c::class_of<::System::IConsoleDriver*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IConsoleDriver.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IConsoleDriver::*)()>(&::System::IConsoleDriver::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IConsoleDriver*>(),
                    {::i2c::class_of<::System::IConsoleDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IConsoleDriver.ReadKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::IConsoleDriver::*)(bool)>(&::System::IConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IConsoleDriver*>(),
                    {::i2c::class_of<::System::IConsoleDriver*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IConsoleDriver.ResetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IConsoleDriver::*)()>(&::System::IConsoleDriver::ResetColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IConsoleDriver*>(),
                    {::i2c::class_of<::System::IConsoleDriver*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void System::IConsoleDriver::set_ForegroundColor(::System::ConsoleColor  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IConsoleDriver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IConsoleDriver::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IConsoleDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::IConsoleDriver::ReadKey(bool  intercept)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IConsoleDriver*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, intercept);
}
inline void System::IConsoleDriver::ResetColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IConsoleDriver*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
