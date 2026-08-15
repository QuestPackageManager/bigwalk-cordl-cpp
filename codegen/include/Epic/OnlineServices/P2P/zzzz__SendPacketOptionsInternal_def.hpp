#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SendPacketOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendPacketOptionsInternal)
namespace Epic::OnlineServices::P2P {
struct PacketReliability;
}
namespace Epic::OnlineServices::P2P {
struct SendPacketOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SendPacketOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SendPacketOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, "Epic.OnlineServices.P2P", "SendPacketOptionsInternal");
// Dependencies Epic.OnlineServices.P2P.PacketReliability, System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SendPacketOptionsInternal
#pragma pack(push, 8)
struct CORDL_TYPE SendPacketOptionsInternal {
public:
// Declarations
 __declspec(property(put=set_AllowDelayedDelivery)) bool  AllowDelayedDelivery;

 __declspec(property(put=set_Channel)) uint8_t  Channel;

 __declspec(property(put=set_Data)) ::System::ArraySegment_1<uint8_t>  Data;

 __declspec(property(put=set_DisableAutoAcceptConnection)) bool  DisableAutoAcceptConnection;

 __declspec(property(put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(put=set_Reliability)) ::Epic::OnlineServices::P2P::PacketReliability  Reliability;

 __declspec(property(put=set_RemoteUserId)) ::Epic::OnlineServices::ProductUserId*  RemoteUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1805000f0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805338a0, size 0x120, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>  other) ;

/// @brief Method Set, addr 0x1805336f0, size 0x1b0, virtual false, abstract: false, final false
inline void Set(::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::SendPacketOptions>>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SendPacketOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_AllowDelayedDelivery, addr 0x1805339c0, size 0x20, virtual false, abstract: false, final false
inline void set_AllowDelayedDelivery(bool  value) ;

/// @brief Method set_Channel, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_Channel(uint8_t  value) ;

/// @brief Method set_Data, addr 0x1805339e0, size 0x50, virtual false, abstract: false, final false
inline void set_Data(::System::ArraySegment_1<uint8_t>  value) ;

/// @brief Method set_DisableAutoAcceptConnection, addr 0x180533a30, size 0x20, virtual false, abstract: false, final false
inline void set_DisableAutoAcceptConnection(bool  value) ;

/// @brief Method set_LocalUserId, addr 0x180533a50, size 0x20, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Reliability, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_Reliability(::Epic::OnlineServices::P2P::PacketReliability  value) ;

/// @brief Method set_RemoteUserId, addr 0x180533a70, size 0xd0, virtual false, abstract: false, final false
inline void set_RemoteUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendPacketOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Channel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllowDelayedDelivery", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reliability", ty: "::Epic::OnlineServices::P2P::PacketReliability", modifiers: "", def_value: None }, CppParam { name: "m_DisableAutoAcceptConnection", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SendPacketOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId, uint8_t  m_Channel, uint32_t  m_DataLengthBytes, ::System::IntPtr  m_Data, int32_t  m_AllowDelayedDelivery, ::Epic::OnlineServices::P2P::PacketReliability  m_Reliability, int32_t  m_DisableAutoAcceptConnection) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RemoteUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RemoteUserId;

/// @brief Field m_SocketId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_SocketId;

/// @brief Field m_Channel, offset: 0x20, size: 0x1, def value: None
 uint8_t  m_Channel;

/// @brief Field m_DataLengthBytes, offset: 0x24, size: 0x4, def value: None
 uint32_t  m_DataLengthBytes;

/// @brief Field m_Data, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_Data;

/// @brief Field m_AllowDelayedDelivery, offset: 0x30, size: 0x4, def value: None
 int32_t  m_AllowDelayedDelivery;

/// @brief Field m_Reliability, offset: 0x34, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::PacketReliability  m_Reliability;

/// @brief Field m_DisableAutoAcceptConnection, offset: 0x38, size: 0x4, def value: None
 int32_t  m_DisableAutoAcceptConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_RemoteUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_SocketId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_Channel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_DataLengthBytes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_Data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_AllowDelayedDelivery) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_Reliability) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal, m_DisableAutoAcceptConnection) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SendPacketOptionsInternal) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
