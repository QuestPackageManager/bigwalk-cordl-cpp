#pragma once
// IWYU pragma private; include "Shipmate/Porting/Logs/IPlatformLogger.hpp"
#include "Shipmate/Porting/Logs/zzzz__IPlatformLogger_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Logs::IPlatformLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::IPlatformLogger::*)(::StringW)>(&::Shipmate::Porting::Logs::IPlatformLogger::Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(),
                    {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::IPlatformLogger.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::IPlatformLogger::*)(::StringW)>(&::Shipmate::Porting::Logs::IPlatformLogger::Info)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(),
                    {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::IPlatformLogger.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::IPlatformLogger::*)(::StringW)>(&::Shipmate::Porting::Logs::IPlatformLogger::Debug)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(),
                    {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::IPlatformLogger.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::IPlatformLogger::*)(::StringW, ::System::Exception*)>(&::Shipmate::Porting::Logs::IPlatformLogger::Exception)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(),
                    {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::IPlatformLogger.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::IPlatformLogger::*)(::StringW)>(&::Shipmate::Porting::Logs::IPlatformLogger::Warn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(),
                    {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::IPlatformLogger.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::IPlatformLogger::*)(::Shipmate::Porting::Logs::PlatformLogLevel)>(&::Shipmate::Porting::Logs::IPlatformLogger::SetLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(),
                    {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Logs::IPlatformLogger::Error(::StringW  aMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::IPlatformLogger::Info(::StringW  aMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::IPlatformLogger::Debug(::StringW  aMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::IPlatformLogger::Exception(::StringW  aMessage, ::System::Exception*  aException)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage, aException);
}
inline void Shipmate::Porting::Logs::IPlatformLogger::Warn(::StringW  aMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::IPlatformLogger::SetLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  aLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Logs::IPlatformLogger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aLevel);
}
