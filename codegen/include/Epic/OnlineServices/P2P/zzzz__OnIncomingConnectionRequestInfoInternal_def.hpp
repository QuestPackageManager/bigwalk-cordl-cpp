#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingConnectionRequestInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnIncomingConnectionRequestInfoInternal)
namespace Epic::OnlineServices::P2P {
struct OnIncomingConnectionRequestInfo;
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
struct OnIncomingConnectionRequestInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal, "Epic.OnlineServices.P2P", "OnIncomingConnectionRequestInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.OnIncomingConnectionRequestInfoInternal
struct CORDL_TYPE OnIncomingConnectionRequestInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>*() ;

/// @brief Method Get, addr 0x18052f700, size 0x170, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnIncomingConnectionRequestInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnIncomingConnectionRequestInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr OnIncomingConnectionRequestInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9563};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RemoteUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RemoteUserId;

/// @brief Field m_SocketId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_SocketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal, m_RemoteUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal, m_SocketId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
