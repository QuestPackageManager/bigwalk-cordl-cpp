#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/RemoteCallType.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::RemoteCalls::RemoteCallType::RemoteCallType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::RemoteCalls::RemoteCallType::RemoteCallType()   {
}
constexpr ::Mirror::RemoteCalls::RemoteCallType  Mirror::RemoteCalls::RemoteCallType::Command{static_cast<int32_t>(0x0)};
constexpr ::Mirror::RemoteCalls::RemoteCallType  Mirror::RemoteCalls::RemoteCallType::ClientRpc{static_cast<int32_t>(0x1)};
