#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionEstablishedInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__ConnectionEstablishedType_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NetworkConnectionType_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnPeerConnectionEstablishedInfo)
namespace Epic::OnlineServices::P2P {
struct ConnectionEstablishedType;
}
namespace Epic::OnlineServices::P2P {
struct NetworkConnectionType;
}
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
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
struct OnPeerConnectionEstablishedInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, "Epic.OnlineServices.P2P", "OnPeerConnectionEstablishedInfo");
// Dependencies Epic.OnlineServices.P2P.ConnectionEstablishedType, Epic.OnlineServices.P2P.NetworkConnectionType, Epic.OnlineServices.P2P.SocketId, System.Nullable`1<T>
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.OnPeerConnectionEstablishedInfo
struct CORDL_TYPE OnPeerConnectionEstablishedInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ConnectionType, put=set_ConnectionType)) ::Epic::OnlineServices::P2P::ConnectionEstablishedType  ConnectionType;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_NetworkType, put=set_NetworkType)) ::Epic::OnlineServices::P2P::NetworkConnectionType  NetworkType;

 __declspec(property(get=get_RemoteUserId, put=set_RemoteUserId)) ::Epic::OnlineServices::ProductUserId*  RemoteUserId;

 __declspec(property(get=get_SocketId, put=set_SocketId)) ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  SocketId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ConnectionType, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::P2P::ConnectionEstablishedType get_ConnectionType() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_NetworkType, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::P2P::NetworkConnectionType get_NetworkType() ;

/// @brief Method get_RemoteUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_RemoteUserId() ;

/// @brief Method get_SocketId, addr 0x1804e6790, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> get_SocketId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ConnectionType, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void set_ConnectionType(::Epic::OnlineServices::P2P::ConnectionEstablishedType  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_NetworkType, addr 0x180511580, size 0x10, virtual false, abstract: false, final false
inline void set_NetworkType(::Epic::OnlineServices::P2P::NetworkConnectionType  value) ;

/// @brief Method set_RemoteUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_RemoteUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_SocketId, addr 0x18052c9f0, size 0x30, virtual false, abstract: false, final false
inline void set_SocketId(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnPeerConnectionEstablishedInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RemoteUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_SocketId_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>", modifiers: "", def_value: None }, CppParam { name: "_ConnectionType_k__BackingField", ty: "::Epic::OnlineServices::P2P::ConnectionEstablishedType", modifiers: "", def_value: None }, CppParam { name: "_NetworkType_k__BackingField", ty: "::Epic::OnlineServices::P2P::NetworkConnectionType", modifiers: "", def_value: None }]
constexpr OnPeerConnectionEstablishedInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _RemoteUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField, ::Epic::OnlineServices::P2P::ConnectionEstablishedType  _ConnectionType_k__BackingField, ::Epic::OnlineServices::P2P::NetworkConnectionType  _NetworkType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RemoteUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _RemoteUserId_k__BackingField;

/// @brief Field <SocketId>k__BackingField, offset: 0x18, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField;

/// @brief Field <ConnectionType>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::ConnectionEstablishedType  _ConnectionType_k__BackingField;

/// @brief Field <NetworkType>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::NetworkConnectionType  _NetworkType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, _RemoteUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, _SocketId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, _ConnectionType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo, _NetworkType_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
