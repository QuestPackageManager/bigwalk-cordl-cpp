#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/SendCustomNativeInviteRequestedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendCustomNativeInviteRequestedCallbackInfoInternal)
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomNativeInviteRequestedCallbackInfo;
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
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomNativeInviteRequestedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, "Epic.OnlineServices.CustomInvites", "SendCustomNativeInviteRequestedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.SendCustomNativeInviteRequestedCallbackInfoInternal
struct CORDL_TYPE SendCustomNativeInviteRequestedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f1d80, size 0x140, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__SendCustomNativeInviteRequestedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SendCustomNativeInviteRequestedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetNativeAccountType", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserNativeAccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SendCustomNativeInviteRequestedCallbackInfoInternal(::System::IntPtr  m_ClientData, uint64_t  m_UiEventId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetNativeAccountType, ::System::IntPtr  m_TargetUserNativeAccountId, ::System::IntPtr  m_InviteId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_UiEventId, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_UiEventId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetNativeAccountType, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetNativeAccountType;

/// @brief Field m_TargetUserNativeAccountId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserNativeAccountId;

/// @brief Field m_InviteId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_InviteId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, m_UiEventId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, m_TargetNativeAccountType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, m_TargetUserNativeAccountId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal, m_InviteId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
