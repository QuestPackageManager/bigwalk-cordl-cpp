#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LoggingInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LoggingInterface_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogCategory_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageFunc_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LoggingInterface.SetCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)(::Epic::OnlineServices::Logging::LogMessageFunc*)>(&::Epic::OnlineServices::Logging::LoggingInterface::SetCallback)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18050c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LoggingInterface*>(),
                        {"SetCallback", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogMessageFunc*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LoggingInterface.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)(::Epic::OnlineServices::Logging::LogCategory, ::Epic::OnlineServices::Logging::LogLevel)>(&::Epic::OnlineServices::Logging::LoggingInterface::SetLogLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18050c260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LoggingInterface*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogCategory>(), ::i2c::type_of<::Epic::OnlineServices::Logging::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LoggingInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LoggingInterface::*)()>(&::Epic::OnlineServices::Logging::LoggingInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LoggingInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Logging::LoggingInterface::SetCallback(::Epic::OnlineServices::Logging::LogMessageFunc*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LoggingInterface*>(),
                        {"SetCallback", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogMessageFunc*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method, callback);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Logging::LoggingInterface::SetLogLevel(::Epic::OnlineServices::Logging::LogCategory  logCategory, ::Epic::OnlineServices::Logging::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LoggingInterface*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogCategory>(), ::i2c::type_of<::Epic::OnlineServices::Logging::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method, logCategory, logLevel);
}
inline void Epic::OnlineServices::Logging::LoggingInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LoggingInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Logging::LoggingInterface* Epic::OnlineServices::Logging::LoggingInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Logging::LoggingInterface*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Logging::LoggingInterface::LoggingInterface()   {
}
