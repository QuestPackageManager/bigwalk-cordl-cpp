#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/RTCRoomConnectionChangedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTCRoomConnectionChangedCallbackInfoInternal)
namespace Epic::OnlineServices::Lobby {
struct RTCRoomConnectionChangedCallbackInfo;
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
namespace Epic::OnlineServices::Lobby {
struct RTCRoomConnectionChangedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal, "Epic.OnlineServices.Lobby", "RTCRoomConnectionChangedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.RTCRoomConnectionChangedCallbackInfoInternal
struct CORDL_TYPE RTCRoomConnectionChangedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>*() ;

/// @brief Method Get, addr 0x180511150, size 0x220, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__RTCRoomConnectionChangedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RTCRoomConnectionChangedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsConnected", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DisconnectReason", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }]
constexpr RTCRoomConnectionChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId, int32_t  m_IsConnected, ::Epic::OnlineServices::Result  m_DisconnectReason) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LobbyId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_IsConnected, offset: 0x18, size: 0x4, def value: None
 int32_t  m_IsConnected;

/// @brief Field m_DisconnectReason, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_DisconnectReason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal, m_LobbyId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal, m_IsConnected) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal, m_DisconnectReason) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
