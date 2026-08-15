#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/SendCustomInviteCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendCustomInviteCallbackInfoInternal)
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomInviteCallbackInfo;
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
struct SendCustomInviteCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal, "Epic.OnlineServices.CustomInvites", "SendCustomInviteCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.SendCustomInviteCallbackInfoInternal
struct CORDL_TYPE SendCustomInviteCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo>*() ;

/// @brief Method Get, addr 0x18052ba30, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__SendCustomInviteCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SendCustomInviteCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SendCustomInviteCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserIds, uint32_t  m_TargetUserIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserIds, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserIds;

/// @brief Field m_TargetUserIdsCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_TargetUserIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal, m_TargetUserIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal, m_TargetUserIdsCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
