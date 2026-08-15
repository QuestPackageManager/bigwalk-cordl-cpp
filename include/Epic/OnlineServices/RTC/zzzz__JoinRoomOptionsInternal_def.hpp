#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/JoinRoomOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinRoomOptionsInternal)
namespace Epic::OnlineServices::RTC {
struct JoinRoomOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
struct JoinRoomOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, "Epic.OnlineServices.RTC", "JoinRoomOptionsInternal");
// Dependencies Epic.OnlineServices.RTC.JoinRoomFlags, System.IntPtr
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.JoinRoomOptionsInternal
struct CORDL_TYPE JoinRoomOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f80a0, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f8100, size 0x150, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTC__JoinRoomOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinRoomOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientBaseUrl", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantToken", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::RTC::JoinRoomFlags", modifiers: "", def_value: None }, CppParam { name: "m_ManualAudioInputEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ManualAudioOutputEnabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JoinRoomOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ClientBaseUrl, ::System::IntPtr  m_ParticipantToken, ::System::IntPtr  m_ParticipantId, ::Epic::OnlineServices::RTC::JoinRoomFlags  m_Flags, int32_t  m_ManualAudioInputEnabled, int32_t  m_ManualAudioOutputEnabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_ClientBaseUrl, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ClientBaseUrl;

/// @brief Field m_ParticipantToken, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantToken;

/// @brief Field m_ParticipantId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantId;

/// @brief Field m_Flags, offset: 0x30, size: 0x4, def value: None
 ::Epic::OnlineServices::RTC::JoinRoomFlags  m_Flags;

/// @brief Field m_ManualAudioInputEnabled, offset: 0x34, size: 0x4, def value: None
 int32_t  m_ManualAudioInputEnabled;

/// @brief Field m_ManualAudioOutputEnabled, offset: 0x38, size: 0x4, def value: None
 int32_t  m_ManualAudioOutputEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_ClientBaseUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_ParticipantToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_ParticipantId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_Flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_ManualAudioInputEnabled) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal, m_ManualAudioOutputEnabled) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::JoinRoomOptionsInternal) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
