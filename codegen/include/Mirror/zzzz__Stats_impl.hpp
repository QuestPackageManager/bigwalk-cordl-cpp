#pragma once
// IWYU pragma private; include "Mirror/Stats.hpp"
#include "Mirror/zzzz__Stats_def.hpp"
//  Writing Method size for method: ::Mirror::Stats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Stats::*)(int32_t, double_t, int32_t, int32_t, int64_t, int64_t, float_t, double_t, double_t, double_t, double_t, double_t)>(&::Mirror::Stats::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18152f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Stats>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Stats::_ctor(int32_t  connections, double_t  uptime, int32_t  configuredTickRate, int32_t  actualTickRate, int64_t  sentBytesPerSecond, int64_t  receiveBytesPerSecond, float_t  serverTickInterval, double_t  fullUpdateAvg, double_t  serverEarlyAvg, double_t  serverLateAvg, double_t  transportEarlyAvg, double_t  transportLateAvg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Stats>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, connections, uptime, configuredTickRate, actualTickRate, sentBytesPerSecond, receiveBytesPerSecond, serverTickInterval, fullUpdateAvg, serverEarlyAvg, serverLateAvg, transportEarlyAvg, transportLateAvg);
}
// Ctor Parameters [CppParam { name: "connections", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uptime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "configuredTickRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actualTickRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sentBytesPerSecond", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiveBytesPerSecond", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverTickInterval", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fullUpdateAvg", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverEarlyAvg", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverLateAvg", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transportEarlyAvg", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transportLateAvg", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Stats::Stats(int32_t  connections, double_t  uptime, int32_t  configuredTickRate, int32_t  actualTickRate, int64_t  sentBytesPerSecond, int64_t  receiveBytesPerSecond, float_t  serverTickInterval, double_t  fullUpdateAvg, double_t  serverEarlyAvg, double_t  serverLateAvg, double_t  transportEarlyAvg, double_t  transportLateAvg) noexcept  {
this->connections = connections;
this->uptime = uptime;
this->configuredTickRate = configuredTickRate;
this->actualTickRate = actualTickRate;
this->sentBytesPerSecond = sentBytesPerSecond;
this->receiveBytesPerSecond = receiveBytesPerSecond;
this->serverTickInterval = serverTickInterval;
this->fullUpdateAvg = fullUpdateAvg;
this->serverEarlyAvg = serverEarlyAvg;
this->serverLateAvg = serverLateAvg;
this->transportEarlyAvg = transportEarlyAvg;
this->transportLateAvg = transportLateAvg;
}
// Ctor Parameters []
constexpr ::Mirror::Stats::Stats()   {
}
