#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SendPacketOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendPacketOptions)
namespace Epic::OnlineServices::P2P {
struct PacketReliability;
}
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SendPacketOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SendPacketOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SendPacketOptions, "Epic.OnlineServices.P2P", "SendPacketOptions");
// Dependencies Epic.OnlineServices.P2P.PacketReliability, Epic.OnlineServices.P2P.SocketId, System.ArraySegment`1<T>, System.Nullable`1<T>
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SendPacketOptions
struct CORDL_TYPE SendPacketOptions {
public:
// Declarations
 __declspec(property(get=get_AllowDelayedDelivery, put=set_AllowDelayedDelivery)) bool  AllowDelayedDelivery;

 __declspec(property(get=get_Channel, put=set_Channel)) uint8_t  Channel;

 __declspec(property(get=get_Data, put=set_Data)) ::System::ArraySegment_1<uint8_t>  Data;

 __declspec(property(get=get_DisableAutoAcceptConnection, put=set_DisableAutoAcceptConnection)) bool  DisableAutoAcceptConnection;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_Reliability, put=set_Reliability)) ::Epic::OnlineServices::P2P::PacketReliability  Reliability;

 __declspec(property(get=get_RemoteUserId, put=set_RemoteUserId)) ::Epic::OnlineServices::ProductUserId*  RemoteUserId;

 __declspec(property(get=get_SocketId, put=set_SocketId)) ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  SocketId;

/// @brief Method get_AllowDelayedDelivery, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowDelayedDelivery() ;

/// @brief Method get_Channel, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline uint8_t get_Channel() ;

/// @brief Method get_Data, addr 0x18052ca40, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Data() ;

/// @brief Method get_DisableAutoAcceptConnection, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableAutoAcceptConnection() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_Reliability, addr 0x180497940, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::P2P::PacketReliability get_Reliability() ;

/// @brief Method get_RemoteUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_RemoteUserId() ;

/// @brief Method get_SocketId, addr 0x18035c980, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> get_SocketId() ;

/// @brief Method set_AllowDelayedDelivery, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_AllowDelayedDelivery(bool  value) ;

/// @brief Method set_Channel, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_Channel(uint8_t  value) ;

/// @brief Method set_Data, addr 0x18052ca50, size 0x20, virtual false, abstract: false, final false
inline void set_Data(::System::ArraySegment_1<uint8_t>  value) ;

/// @brief Method set_DisableAutoAcceptConnection, addr 0x1803de5b0, size 0x10, virtual false, abstract: false, final false
inline void set_DisableAutoAcceptConnection(bool  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Reliability, addr 0x180497a90, size 0x10, virtual false, abstract: false, final false
inline void set_Reliability(::Epic::OnlineServices::P2P::PacketReliability  value) ;

/// @brief Method set_RemoteUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RemoteUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_SocketId, addr 0x18052c970, size 0x30, virtual false, abstract: false, final false
inline void set_SocketId(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendPacketOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RemoteUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_SocketId_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>", modifiers: "", def_value: None }, CppParam { name: "_Channel_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_AllowDelayedDelivery_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Reliability_k__BackingField", ty: "::Epic::OnlineServices::P2P::PacketReliability", modifiers: "", def_value: None }, CppParam { name: "_DisableAutoAcceptConnection_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SendPacketOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _RemoteUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField, uint8_t  _Channel_k__BackingField, ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField, bool  _AllowDelayedDelivery_k__BackingField, ::Epic::OnlineServices::P2P::PacketReliability  _Reliability_k__BackingField, bool  _DisableAutoAcceptConnection_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RemoteUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _RemoteUserId_k__BackingField;

/// @brief Field <SocketId>k__BackingField, offset: 0x10, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField;

/// @brief Field <Channel>k__BackingField, offset: 0x38, size: 0x1, def value: None
 uint8_t  _Channel_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0x40, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField;

/// @brief Field <AllowDelayedDelivery>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  _AllowDelayedDelivery_k__BackingField;

/// @brief Field <Reliability>k__BackingField, offset: 0x54, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::PacketReliability  _Reliability_k__BackingField;

/// @brief Field <DisableAutoAcceptConnection>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  _DisableAutoAcceptConnection_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _RemoteUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _SocketId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _Channel_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _Data_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _AllowDelayedDelivery_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _Reliability_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptions, _DisableAutoAcceptConnection_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SendPacketOptions) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
