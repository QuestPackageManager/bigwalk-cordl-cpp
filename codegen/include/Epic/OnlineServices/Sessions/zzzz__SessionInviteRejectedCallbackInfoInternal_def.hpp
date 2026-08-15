#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionInviteRejectedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SessionInviteRejectedCallbackInfoInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionInviteRejectedCallbackInfo;
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
namespace Epic::OnlineServices::Sessions {
struct SessionInviteRejectedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal, "Epic.OnlineServices.Sessions", "SessionInviteRejectedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionInviteRejectedCallbackInfoInternal
struct CORDL_TYPE SessionInviteRejectedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f25f0, size 0x130, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionInviteRejectedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionInviteRejectedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SessionId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SessionInviteRejectedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_InviteId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_SessionId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7815};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_InviteId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_InviteId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_SessionId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_SessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal, m_InviteId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal, m_TargetUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal, m_SessionId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
