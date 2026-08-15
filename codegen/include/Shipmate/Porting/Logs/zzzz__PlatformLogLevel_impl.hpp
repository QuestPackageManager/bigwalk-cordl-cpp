#pragma once
// IWYU pragma private; include "Shipmate/Porting/Logs/PlatformLogLevel.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel::PlatformLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel::PlatformLogLevel()   {
}
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel  Shipmate::Porting::Logs::PlatformLogLevel::Debug{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel  Shipmate::Porting::Logs::PlatformLogLevel::Info{static_cast<int32_t>(0x1)};
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel  Shipmate::Porting::Logs::PlatformLogLevel::Warn{static_cast<int32_t>(0x2)};
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel  Shipmate::Porting::Logs::PlatformLogLevel::Error{static_cast<int32_t>(0x3)};
constexpr ::Shipmate::Porting::Logs::PlatformLogLevel  Shipmate::Porting::Logs::PlatformLogLevel::Exception{static_cast<int32_t>(0x4)};
