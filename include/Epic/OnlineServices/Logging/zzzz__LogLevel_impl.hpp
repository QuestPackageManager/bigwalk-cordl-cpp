#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogLevel.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Logging::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Logging::LogLevel::LogLevel()   {
}
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::Off{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::Fatal{static_cast<int32_t>(0x64)};
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::Error{static_cast<int32_t>(0xc8)};
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::Warning{static_cast<int32_t>(0x12c)};
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::Info{static_cast<int32_t>(0x190)};
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::Verbose{static_cast<int32_t>(0x1f4)};
constexpr ::Epic::OnlineServices::Logging::LogLevel  Epic::OnlineServices::Logging::LogLevel::VeryVerbose{static_cast<int32_t>(0x258)};
