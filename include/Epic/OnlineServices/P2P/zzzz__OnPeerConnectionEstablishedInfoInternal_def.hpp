#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionEstablishedInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__ConnectionEstablishedType_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NetworkConnectionType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnPeerConnectionEstablishedInfoInternal)
namespace Epic::OnlineServices::P2P {
struct OnPeerConnectionEstablishedInfo;
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
struct OnPeerConnectionEstablishedInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, "Epic.OnlineServices.P2P", "OnPeerConnectionEstablishedInfoInternal");
// Dependencies Epic.OnlineServices.P2P.ConnectionEstablishedType, Epic.OnlineServices.P2P.NetworkConnectionType, System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.OnPeerConnectionEstablishedInfoInternal
struct CORDL_TYPE OnPeerConnectionEstablishedInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>*() ;

/// @brief Method Get, addr 0x180530570, size 0x150, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnPeerConnectionEstablishedInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnPeerConnectionEstablishedInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ConnectionType", ty: "::Epic::OnlineServices::P2P::ConnectionEstablishedType", modifiers: "", def_value: None }, CppParam { name: "m_NetworkType", ty: "::Epic::OnlineServices::P2P::NetworkConnectionType", modifiers: "", def_value: None }]
constexpr OnPeerConnectionEstablishedInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId, ::Epic::OnlineServices::P2P::ConnectionEstablishedType  m_ConnectionType, ::Epic::OnlineServices::P2P::NetworkConnectionType  m_NetworkType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RemoteUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RemoteUserId;

/// @brief Field m_SocketId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_SocketId;

/// @brief Field m_ConnectionType, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::ConnectionEstablishedType  m_ConnectionType;

/// @brief Field m_NetworkType, offset: 0x24, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::NetworkConnectionType  m_NetworkType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, m_RemoteUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, m_SocketId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, m_ConnectionType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal, m_NetworkType) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
