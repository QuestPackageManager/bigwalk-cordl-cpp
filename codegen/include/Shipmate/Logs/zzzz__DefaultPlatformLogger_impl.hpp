#pragma once
// IWYU pragma private; include "Shipmate/Logs/DefaultPlatformLogger.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Logs/zzzz__DefaultPlatformLogger_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__IPlatformLogger_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)(::StringW)>(&::Shipmate::Logs::DefaultPlatformLogger::Error)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac91b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)(::StringW)>(&::Shipmate::Logs::DefaultPlatformLogger::Info)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac9220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)(::StringW)>(&::Shipmate::Logs::DefaultPlatformLogger::Debug)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac9190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)(::StringW, ::System::Exception*)>(&::Shipmate::Logs::DefaultPlatformLogger::Exception)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)(::StringW)>(&::Shipmate::Logs::DefaultPlatformLogger::Warn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac9240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)(::Shipmate::Porting::Logs::PlatformLogLevel)>(&::Shipmate::Logs::DefaultPlatformLogger::SetLogLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Shipmate::Porting::Logs::PlatformLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Logs::DefaultPlatformLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Logs::DefaultPlatformLogger::*)()>(&::Shipmate::Logs::DefaultPlatformLogger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel& Shipmate::Logs::DefaultPlatformLogger::__cordl_internal_get_mLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLogLevel;
}
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel const& Shipmate::Logs::DefaultPlatformLogger::__cordl_internal_get_mLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLogLevel;
}
constexpr void Shipmate::Logs::DefaultPlatformLogger::__cordl_internal_set_mLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mLogLevel = value;
}
inline void Shipmate::Logs::DefaultPlatformLogger::Error(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Logs::DefaultPlatformLogger::Info(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Logs::DefaultPlatformLogger::Debug(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Logs::DefaultPlatformLogger::Exception(::StringW  aMessage, ::System::Exception*  aException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage, aException);
}
inline void Shipmate::Logs::DefaultPlatformLogger::Warn(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Logs::DefaultPlatformLogger::SetLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  aLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Shipmate::Porting::Logs::PlatformLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aLevel);
}
inline void Shipmate::Logs::DefaultPlatformLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Logs::DefaultPlatformLogger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Logs::DefaultPlatformLogger* Shipmate::Logs::DefaultPlatformLogger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Logs::DefaultPlatformLogger*>());
}
/// @brief Convert operator to "::Shipmate::Porting::Logs::IPlatformLogger"
constexpr  Shipmate::Logs::DefaultPlatformLogger::operator ::Shipmate::Porting::Logs::IPlatformLogger*() noexcept {
return static_cast<::Shipmate::Porting::Logs::IPlatformLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Shipmate::Porting::Logs::IPlatformLogger"
constexpr ::Shipmate::Porting::Logs::IPlatformLogger* Shipmate::Logs::DefaultPlatformLogger::i___Shipmate__Porting__Logs__IPlatformLogger() noexcept {
return static_cast<::Shipmate::Porting::Logs::IPlatformLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Shipmate::Logs::DefaultPlatformLogger::DefaultPlatformLogger()   {
}
