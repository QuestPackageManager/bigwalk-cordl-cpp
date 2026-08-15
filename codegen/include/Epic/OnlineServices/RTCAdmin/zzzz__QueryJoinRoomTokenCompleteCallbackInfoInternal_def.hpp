#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/QueryJoinRoomTokenCompleteCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryJoinRoomTokenCompleteCallbackInfoInternal)
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenCompleteCallbackInfo;
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
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenCompleteCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, "Epic.OnlineServices.RTCAdmin", "QueryJoinRoomTokenCompleteCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.QueryJoinRoomTokenCompleteCallbackInfoInternal
struct CORDL_TYPE QueryJoinRoomTokenCompleteCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>*() ;

/// @brief Method Get, addr 0x180500000, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCAdmin__QueryJoinRoomTokenCompleteCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryJoinRoomTokenCompleteCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientBaseUrl", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_QueryId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_TokenCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryJoinRoomTokenCompleteCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ClientBaseUrl, uint32_t  m_QueryId, uint32_t  m_TokenCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_ClientBaseUrl, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ClientBaseUrl;

/// @brief Field m_QueryId, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_QueryId;

/// @brief Field m_TokenCount, offset: 0x24, size: 0x4, def value: None
 uint32_t  m_TokenCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, m_ClientBaseUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, m_QueryId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal, m_TokenCount) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
