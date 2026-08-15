#pragma once
// IWYU pragma private; include "GlobalNamespace/EosLogsDisabler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EosLogsDisabler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EosLogsDisabler.DisableEosLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::EosLogsDisabler::DisableEosLogging)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EosLogsDisabler*>(),
                        {"DisableEosLogging", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EosLogsDisabler::DisableEosLogging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EosLogsDisabler*>(),
                        {"DisableEosLogging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EosLogsDisabler::EosLogsDisabler()   {
}
