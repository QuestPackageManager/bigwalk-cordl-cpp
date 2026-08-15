#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetBiosNodeType.hpp"
#include "System/Net/NetworkInformation/zzzz__NetBiosNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::NetBiosNodeType::NetBiosNodeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::NetBiosNodeType::NetBiosNodeType()   {
}
constexpr ::System::Net::NetworkInformation::NetBiosNodeType  System::Net::NetworkInformation::NetBiosNodeType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Net::NetworkInformation::NetBiosNodeType  System::Net::NetworkInformation::NetBiosNodeType::Broadcast{static_cast<int32_t>(0x1)};
constexpr ::System::Net::NetworkInformation::NetBiosNodeType  System::Net::NetworkInformation::NetBiosNodeType::Peer2Peer{static_cast<int32_t>(0x2)};
constexpr ::System::Net::NetworkInformation::NetBiosNodeType  System::Net::NetworkInformation::NetBiosNodeType::Mixed{static_cast<int32_t>(0x4)};
constexpr ::System::Net::NetworkInformation::NetBiosNodeType  System::Net::NetworkInformation::NetBiosNodeType::Hybrid{static_cast<int32_t>(0x8)};
