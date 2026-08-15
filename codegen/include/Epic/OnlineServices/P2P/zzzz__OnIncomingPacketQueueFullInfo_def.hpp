#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingPacketQueueFullInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnIncomingPacketQueueFullInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct OnIncomingPacketQueueFullInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, "Epic.OnlineServices.P2P", "OnIncomingPacketQueueFullInfo");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.OnIncomingPacketQueueFullInfo
struct CORDL_TYPE OnIncomingPacketQueueFullInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_OverflowPacketChannel, put=set_OverflowPacketChannel)) uint8_t  OverflowPacketChannel;

 __declspec(property(get=get_OverflowPacketLocalUserId, put=set_OverflowPacketLocalUserId)) ::Epic::OnlineServices::ProductUserId*  OverflowPacketLocalUserId;

 __declspec(property(get=get_OverflowPacketSizeBytes, put=set_OverflowPacketSizeBytes)) uint32_t  OverflowPacketSizeBytes;

 __declspec(property(get=get_PacketQueueCurrentSizeBytes, put=set_PacketQueueCurrentSizeBytes)) uint64_t  PacketQueueCurrentSizeBytes;

 __declspec(property(get=get_PacketQueueMaxSizeBytes, put=set_PacketQueueMaxSizeBytes)) uint64_t  PacketQueueMaxSizeBytes;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_OverflowPacketChannel, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline uint8_t get_OverflowPacketChannel() ;

/// @brief Method get_OverflowPacketLocalUserId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_OverflowPacketLocalUserId() ;

/// @brief Method get_OverflowPacketSizeBytes, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_OverflowPacketSizeBytes() ;

/// @brief Method get_PacketQueueCurrentSizeBytes, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_PacketQueueCurrentSizeBytes() ;

/// @brief Method get_PacketQueueMaxSizeBytes, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_PacketQueueMaxSizeBytes() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_OverflowPacketChannel, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_OverflowPacketChannel(uint8_t  value) ;

/// @brief Method set_OverflowPacketLocalUserId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_OverflowPacketLocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_OverflowPacketSizeBytes, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_OverflowPacketSizeBytes(uint32_t  value) ;

/// @brief Method set_PacketQueueCurrentSizeBytes, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_PacketQueueCurrentSizeBytes(uint64_t  value) ;

/// @brief Method set_PacketQueueMaxSizeBytes, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_PacketQueueMaxSizeBytes(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnIncomingPacketQueueFullInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_PacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_PacketQueueCurrentSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_OverflowPacketLocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_OverflowPacketChannel_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_OverflowPacketSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr OnIncomingPacketQueueFullInfo(::System::Object*  _ClientData_k__BackingField, uint64_t  _PacketQueueMaxSizeBytes_k__BackingField, uint64_t  _PacketQueueCurrentSizeBytes_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _OverflowPacketLocalUserId_k__BackingField, uint8_t  _OverflowPacketChannel_k__BackingField, uint32_t  _OverflowPacketSizeBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <PacketQueueMaxSizeBytes>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _PacketQueueMaxSizeBytes_k__BackingField;

/// @brief Field <PacketQueueCurrentSizeBytes>k__BackingField, offset: 0x10, size: 0x8, def value: None
 uint64_t  _PacketQueueCurrentSizeBytes_k__BackingField;

/// @brief Field <OverflowPacketLocalUserId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _OverflowPacketLocalUserId_k__BackingField;

/// @brief Field <OverflowPacketChannel>k__BackingField, offset: 0x20, size: 0x1, def value: None
 uint8_t  _OverflowPacketChannel_k__BackingField;

/// @brief Field <OverflowPacketSizeBytes>k__BackingField, offset: 0x24, size: 0x4, def value: None
 uint32_t  _OverflowPacketSizeBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, _PacketQueueMaxSizeBytes_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, _PacketQueueCurrentSizeBytes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, _OverflowPacketLocalUserId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, _OverflowPacketChannel_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo, _OverflowPacketSizeBytes_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
