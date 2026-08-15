#pragma once
// IWYU pragma private; include "kcp2k/AckItem.hpp"
#include "kcp2k/zzzz__AckItem_def.hpp"
// Ctor Parameters [CppParam { name: "serialNumber", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timestamp", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::kcp2k::AckItem::AckItem(uint32_t  serialNumber, uint32_t  timestamp) noexcept  {
this->serialNumber = serialNumber;
this->timestamp = timestamp;
}
// Ctor Parameters []
constexpr ::kcp2k::AckItem::AckItem()   {
}
