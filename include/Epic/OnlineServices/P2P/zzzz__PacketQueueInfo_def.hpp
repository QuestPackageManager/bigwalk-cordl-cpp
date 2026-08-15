#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/PacketQueueInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketQueueInfo)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct PacketQueueInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::PacketQueueInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::PacketQueueInfo, "Epic.OnlineServices.P2P", "PacketQueueInfo");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.PacketQueueInfo
struct CORDL_TYPE PacketQueueInfo {
public:
// Declarations
 __declspec(property(get=get_IncomingPacketQueueCurrentPacketCount, put=set_IncomingPacketQueueCurrentPacketCount)) uint64_t  IncomingPacketQueueCurrentPacketCount;

 __declspec(property(get=get_IncomingPacketQueueCurrentSizeBytes, put=set_IncomingPacketQueueCurrentSizeBytes)) uint64_t  IncomingPacketQueueCurrentSizeBytes;

 __declspec(property(get=get_IncomingPacketQueueMaxSizeBytes, put=set_IncomingPacketQueueMaxSizeBytes)) uint64_t  IncomingPacketQueueMaxSizeBytes;

 __declspec(property(get=get_OutgoingPacketQueueCurrentPacketCount, put=set_OutgoingPacketQueueCurrentPacketCount)) uint64_t  OutgoingPacketQueueCurrentPacketCount;

 __declspec(property(get=get_OutgoingPacketQueueCurrentSizeBytes, put=set_OutgoingPacketQueueCurrentSizeBytes)) uint64_t  OutgoingPacketQueueCurrentSizeBytes;

 __declspec(property(get=get_OutgoingPacketQueueMaxSizeBytes, put=set_OutgoingPacketQueueMaxSizeBytes)) uint64_t  OutgoingPacketQueueMaxSizeBytes;

/// @brief Method get_IncomingPacketQueueCurrentPacketCount, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_IncomingPacketQueueCurrentPacketCount() ;

/// @brief Method get_IncomingPacketQueueCurrentSizeBytes, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_IncomingPacketQueueCurrentSizeBytes() ;

/// @brief Method get_IncomingPacketQueueMaxSizeBytes, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_IncomingPacketQueueMaxSizeBytes() ;

/// @brief Method get_OutgoingPacketQueueCurrentPacketCount, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_OutgoingPacketQueueCurrentPacketCount() ;

/// @brief Method get_OutgoingPacketQueueCurrentSizeBytes, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_OutgoingPacketQueueCurrentSizeBytes() ;

/// @brief Method get_OutgoingPacketQueueMaxSizeBytes, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_OutgoingPacketQueueMaxSizeBytes() ;

/// @brief Method set_IncomingPacketQueueCurrentPacketCount, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_IncomingPacketQueueCurrentPacketCount(uint64_t  value) ;

/// @brief Method set_IncomingPacketQueueCurrentSizeBytes, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_IncomingPacketQueueCurrentSizeBytes(uint64_t  value) ;

/// @brief Method set_IncomingPacketQueueMaxSizeBytes, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_IncomingPacketQueueMaxSizeBytes(uint64_t  value) ;

/// @brief Method set_OutgoingPacketQueueCurrentPacketCount, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void set_OutgoingPacketQueueCurrentPacketCount(uint64_t  value) ;

/// @brief Method set_OutgoingPacketQueueCurrentSizeBytes, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_OutgoingPacketQueueCurrentSizeBytes(uint64_t  value) ;

/// @brief Method set_OutgoingPacketQueueMaxSizeBytes, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_OutgoingPacketQueueMaxSizeBytes(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PacketQueueInfo() ;

// Ctor Parameters [CppParam { name: "_IncomingPacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_IncomingPacketQueueCurrentSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_IncomingPacketQueueCurrentPacketCount_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_OutgoingPacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_OutgoingPacketQueueCurrentSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_OutgoingPacketQueueCurrentPacketCount_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr PacketQueueInfo(uint64_t  _IncomingPacketQueueMaxSizeBytes_k__BackingField, uint64_t  _IncomingPacketQueueCurrentSizeBytes_k__BackingField, uint64_t  _IncomingPacketQueueCurrentPacketCount_k__BackingField, uint64_t  _OutgoingPacketQueueMaxSizeBytes_k__BackingField, uint64_t  _OutgoingPacketQueueCurrentSizeBytes_k__BackingField, uint64_t  _OutgoingPacketQueueCurrentPacketCount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <IncomingPacketQueueMaxSizeBytes>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _IncomingPacketQueueMaxSizeBytes_k__BackingField;

/// @brief Field <IncomingPacketQueueCurrentSizeBytes>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _IncomingPacketQueueCurrentSizeBytes_k__BackingField;

/// @brief Field <IncomingPacketQueueCurrentPacketCount>k__BackingField, offset: 0x10, size: 0x8, def value: None
 uint64_t  _IncomingPacketQueueCurrentPacketCount_k__BackingField;

/// @brief Field <OutgoingPacketQueueMaxSizeBytes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 uint64_t  _OutgoingPacketQueueMaxSizeBytes_k__BackingField;

/// @brief Field <OutgoingPacketQueueCurrentSizeBytes>k__BackingField, offset: 0x20, size: 0x8, def value: None
 uint64_t  _OutgoingPacketQueueCurrentSizeBytes_k__BackingField;

/// @brief Field <OutgoingPacketQueueCurrentPacketCount>k__BackingField, offset: 0x28, size: 0x8, def value: None
 uint64_t  _OutgoingPacketQueueCurrentPacketCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfo, _IncomingPacketQueueMaxSizeBytes_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfo, _IncomingPacketQueueCurrentSizeBytes_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfo, _IncomingPacketQueueCurrentPacketCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfo, _OutgoingPacketQueueMaxSizeBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfo, _OutgoingPacketQueueCurrentSizeBytes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfo, _OutgoingPacketQueueCurrentPacketCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::PacketQueueInfo) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
