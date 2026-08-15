#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingPacketQueueFullInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnIncomingPacketQueueFullInfoInternal)
namespace Epic::OnlineServices::P2P {
struct OnIncomingPacketQueueFullInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct OnIncomingPacketQueueFullInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, "Epic.OnlineServices.P2P", "OnIncomingPacketQueueFullInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.OnIncomingPacketQueueFullInfoInternal
struct CORDL_TYPE OnIncomingPacketQueueFullInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>*() ;

/// @brief Method Get, addr 0x18052fac0, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnIncomingPacketQueueFullInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnIncomingPacketQueueFullInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_PacketQueueCurrentSizeBytes", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_OverflowPacketLocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OverflowPacketChannel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_OverflowPacketSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr OnIncomingPacketQueueFullInfoInternal(::System::IntPtr  m_ClientData, uint64_t  m_PacketQueueMaxSizeBytes, uint64_t  m_PacketQueueCurrentSizeBytes, ::System::IntPtr  m_OverflowPacketLocalUserId, uint8_t  m_OverflowPacketChannel, uint32_t  m_OverflowPacketSizeBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_PacketQueueMaxSizeBytes, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_PacketQueueMaxSizeBytes;

/// @brief Field m_PacketQueueCurrentSizeBytes, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_PacketQueueCurrentSizeBytes;

/// @brief Field m_OverflowPacketLocalUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_OverflowPacketLocalUserId;

/// @brief Field m_OverflowPacketChannel, offset: 0x20, size: 0x1, def value: None
 uint8_t  m_OverflowPacketChannel;

/// @brief Field m_OverflowPacketSizeBytes, offset: 0x24, size: 0x4, def value: None
 uint32_t  m_OverflowPacketSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, m_PacketQueueMaxSizeBytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, m_PacketQueueCurrentSizeBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, m_OverflowPacketLocalUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, m_OverflowPacketChannel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal, m_OverflowPacketSizeBytes) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
