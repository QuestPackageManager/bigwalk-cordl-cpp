#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/QueryJoinRoomTokenOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryJoinRoomTokenOptionsInternal)
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, "Epic.OnlineServices.RTCAdmin", "QueryJoinRoomTokenOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.QueryJoinRoomTokenOptionsInternal
struct CORDL_TYPE QueryJoinRoomTokenOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1805000f0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180500140, size 0xe0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAdmin__QueryJoinRoomTokenOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryJoinRoomTokenOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIdsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIpAddresses", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryJoinRoomTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_TargetUserIds, uint32_t  m_TargetUserIdsCount, ::System::IntPtr  m_TargetUserIpAddresses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_TargetUserIds, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserIds;

/// @brief Field m_TargetUserIdsCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_TargetUserIdsCount;

/// @brief Field m_TargetUserIpAddresses, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserIpAddresses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, m_TargetUserIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, m_TargetUserIdsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal, m_TargetUserIpAddresses) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
