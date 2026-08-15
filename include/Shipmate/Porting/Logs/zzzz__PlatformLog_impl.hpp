#pragma once
// IWYU pragma private; include "Shipmate/Porting/Logs/PlatformLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__IPlatformLogger_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.SetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Shipmate::Porting::Logs::IPlatformLogger*)>(&::Shipmate::Porting::Logs::PlatformLog::SetLogger)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac9640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"SetLogger", {}, {::i2c::type_of<::Shipmate::Porting::Logs::IPlatformLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Shipmate::Porting::Logs::PlatformLogLevel)>(&::Shipmate::Porting::Logs::PlatformLog::SetLogLevel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ac9570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Shipmate::Porting::Logs::PlatformLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmate::Porting::Logs::PlatformLog* (*)(::StringW)>(&::Shipmate::Porting::Logs::PlatformLog::GetLogger)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac94a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"GetLogger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::PlatformLog::*)(::StringW)>(&::Shipmate::Porting::Logs::PlatformLog::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::PlatformLog::*)(::StringW)>(&::Shipmate::Porting::Logs::PlatformLog::Info)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac94e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::PlatformLog::*)(::StringW)>(&::Shipmate::Porting::Logs::PlatformLog::Warn)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac9690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::PlatformLog::*)(::StringW)>(&::Shipmate::Porting::Logs::PlatformLog::Error)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac9300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::PlatformLog::*)(::StringW)>(&::Shipmate::Porting::Logs::PlatformLog::Debug)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac9270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Logs::PlatformLog.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Logs::PlatformLog::*)(::StringW, ::System::Exception*)>(&::Shipmate::Porting::Logs::PlatformLog::Exception)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ac9390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmate::Porting::Logs::PlatformLog::__cordl_internal_get_mPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPrefix;
}
constexpr ::StringW const& Shipmate::Porting::Logs::PlatformLog::__cordl_internal_get_mPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPrefix;
}
constexpr void Shipmate::Porting::Logs::PlatformLog::__cordl_internal_set_mPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPrefix = value;
}
inline void Shipmate::Porting::Logs::PlatformLog::setStaticF_mLogger(::Shipmate::Porting::Logs::IPlatformLogger*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::IPlatformLogger*, "mLogger", ::Shipmate::Porting::Logs::PlatformLog*>(std::forward<::Shipmate::Porting::Logs::IPlatformLogger*>(value));
}
inline ::Shipmate::Porting::Logs::IPlatformLogger* Shipmate::Porting::Logs::PlatformLog::getStaticF_mLogger()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::IPlatformLogger*, "mLogger", ::Shipmate::Porting::Logs::PlatformLog*>();
}
inline void Shipmate::Porting::Logs::PlatformLog::SetLogger(::Shipmate::Porting::Logs::IPlatformLogger*  aLogger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"SetLogger", {}, {::i2c::type_of<::Shipmate::Porting::Logs::IPlatformLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aLogger);
}
inline void Shipmate::Porting::Logs::PlatformLog::SetLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  aLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Shipmate::Porting::Logs::PlatformLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aLevel);
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::Logs::PlatformLog::GetLogger(::StringW  aPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"GetLogger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::Logs::PlatformLog*>(nullptr, ___internal_method, aPrefix);
}
inline void Shipmate::Porting::Logs::PlatformLog::_ctor(::StringW  aPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aPrefix);
}
inline void Shipmate::Porting::Logs::PlatformLog::Info(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::PlatformLog::Warn(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::PlatformLog::Error(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::PlatformLog::Debug(::StringW  aMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage);
}
inline void Shipmate::Porting::Logs::PlatformLog::Exception(::StringW  aMessage, ::System::Exception*  aException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Logs::PlatformLog*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aMessage, aException);
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::Logs::PlatformLog::New_ctor(::StringW  aPrefix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Logs::PlatformLog*>(aPrefix));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Logs::PlatformLog::PlatformLog()   {
}
