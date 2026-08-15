#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/PacketQueueInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketQueueInfoInternal)
namespace Epic::OnlineServices::P2P {
struct PacketQueueInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct PacketQueueInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::PacketQueueInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, "Epic.OnlineServices.P2P", "PacketQueueInfoInternal");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.PacketQueueInfoInternal
struct CORDL_TYPE PacketQueueInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>*() ;

/// @brief Method Get, addr 0x180532fa0, size 0x50, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__PacketQueueInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PacketQueueInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_IncomingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_IncomingPacketQueueCurrentSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_IncomingPacketQueueCurrentPacketCount", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_OutgoingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_OutgoingPacketQueueCurrentSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_OutgoingPacketQueueCurrentPacketCount", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr PacketQueueInfoInternal(uint64_t  m_IncomingPacketQueueMaxSizeBytes, uint64_t  m_IncomingPacketQueueCurrentSizeBytes, uint64_t  m_IncomingPacketQueueCurrentPacketCount, uint64_t  m_OutgoingPacketQueueMaxSizeBytes, uint64_t  m_OutgoingPacketQueueCurrentSizeBytes, uint64_t  m_OutgoingPacketQueueCurrentPacketCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_IncomingPacketQueueMaxSizeBytes, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_IncomingPacketQueueMaxSizeBytes;

/// @brief Field m_IncomingPacketQueueCurrentSizeBytes, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_IncomingPacketQueueCurrentSizeBytes;

/// @brief Field m_IncomingPacketQueueCurrentPacketCount, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_IncomingPacketQueueCurrentPacketCount;

/// @brief Field m_OutgoingPacketQueueMaxSizeBytes, offset: 0x18, size: 0x8, def value: None
 uint64_t  m_OutgoingPacketQueueMaxSizeBytes;

/// @brief Field m_OutgoingPacketQueueCurrentSizeBytes, offset: 0x20, size: 0x8, def value: None
 uint64_t  m_OutgoingPacketQueueCurrentSizeBytes;

/// @brief Field m_OutgoingPacketQueueCurrentPacketCount, offset: 0x28, size: 0x8, def value: None
 uint64_t  m_OutgoingPacketQueueCurrentPacketCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, m_IncomingPacketQueueMaxSizeBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, m_IncomingPacketQueueCurrentSizeBytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, m_IncomingPacketQueueCurrentPacketCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, m_OutgoingPacketQueueMaxSizeBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, m_OutgoingPacketQueueCurrentSizeBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal, m_OutgoingPacketQueueCurrentPacketCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::PacketQueueInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
