#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/ParticipantStatusChangedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTC/zzzz__RTCParticipantStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticipantStatusChangedCallbackInfoInternal)
namespace Epic::OnlineServices::RTC {
struct ParticipantStatusChangedCallbackInfo;
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
namespace Epic::OnlineServices::RTC {
struct ParticipantStatusChangedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, "Epic.OnlineServices.RTC", "ParticipantStatusChangedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.RTC.RTCParticipantStatus, System.IntPtr
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.ParticipantStatusChangedCallbackInfoInternal
struct CORDL_TYPE ParticipantStatusChangedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804fc370, size 0x170, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__ParticipantStatusChangedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticipantStatusChangedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantStatus", ty: "::Epic::OnlineServices::RTC::RTCParticipantStatus", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantMetadataCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantMetadata", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantInBlocklist", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParticipantStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ParticipantId, ::Epic::OnlineServices::RTC::RTCParticipantStatus  m_ParticipantStatus, uint32_t  m_ParticipantMetadataCount, ::System::IntPtr  m_ParticipantMetadata, int32_t  m_ParticipantInBlocklist) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_ParticipantId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantId;

/// @brief Field m_ParticipantStatus, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::RTC::RTCParticipantStatus  m_ParticipantStatus;

/// @brief Field m_ParticipantMetadataCount, offset: 0x24, size: 0x4, def value: None
 uint32_t  m_ParticipantMetadataCount;

/// @brief Field m_ParticipantMetadata, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantMetadata;

/// @brief Field m_ParticipantInBlocklist, offset: 0x30, size: 0x4, def value: None
 int32_t  m_ParticipantInBlocklist;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_ParticipantId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_ParticipantStatus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_ParticipantMetadataCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_ParticipantMetadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal, m_ParticipantInBlocklist) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
