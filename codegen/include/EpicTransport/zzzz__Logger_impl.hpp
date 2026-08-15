#pragma once
// IWYU pragma private; include "EpicTransport/Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "EpicTransport/zzzz__Logger_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessage_def.hpp"
//  Writing Method size for method: ::EpicTransport::Logger.EpicDebugLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Epic::OnlineServices::Logging::LogMessage)>(&::EpicTransport::Logger::EpicDebugLog)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181588320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Logger*>(),
                        {"EpicDebugLog", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogMessage>()}}
                    )));
    return ___internal_method;
  }
};
inline void EpicTransport::Logger::EpicDebugLog(::Epic::OnlineServices::Logging::LogMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Logger*>(),
                        {"EpicDebugLog", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::EpicTransport::Logger::Logger()   {
}
