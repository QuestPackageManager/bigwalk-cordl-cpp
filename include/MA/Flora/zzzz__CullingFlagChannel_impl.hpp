#pragma once
// IWYU pragma private; include "MA/Flora/CullingFlagChannel.hpp"
#include "MA/Flora/zzzz__CullingFlagChannel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingFlagChannel::CullingFlagChannel(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingFlagChannel::CullingFlagChannel()   {
}
constexpr ::MA::Flora::CullingFlagChannel  MA::Flora::CullingFlagChannel::FlippedWinding{static_cast<uint8_t>(0x0u)};
constexpr ::MA::Flora::CullingFlagChannel  MA::Flora::CullingFlagChannel::HasMotion{static_cast<uint8_t>(0x1u)};
constexpr ::MA::Flora::CullingFlagChannel  MA::Flora::CullingFlagChannel::Count{static_cast<uint8_t>(0x2u)};
