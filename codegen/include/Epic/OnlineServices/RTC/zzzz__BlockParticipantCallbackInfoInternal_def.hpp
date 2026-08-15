#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/BlockParticipantCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockParticipantCallbackInfoInternal)
namespace Epic::OnlineServices::RTC {
struct BlockParticipantCallbackInfo;
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
struct BlockParticipantCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, "Epic.OnlineServices.RTC", "BlockParticipantCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.BlockParticipantCallbackInfoInternal
struct CORDL_TYPE BlockParticipantCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f6210, size 0x150, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__BlockParticipantCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockParticipantCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Blocked", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BlockParticipantCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ParticipantId, int32_t  m_Blocked) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8131};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_ParticipantId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantId;

/// @brief Field m_Blocked, offset: 0x28, size: 0x4, def value: None
 int32_t  m_Blocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, m_RoomName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, m_ParticipantId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal, m_Blocked) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
