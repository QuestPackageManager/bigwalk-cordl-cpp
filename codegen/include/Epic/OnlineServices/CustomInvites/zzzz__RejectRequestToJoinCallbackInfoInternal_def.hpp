#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RejectRequestToJoinCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RejectRequestToJoinCallbackInfoInternal)
namespace Epic::OnlineServices::CustomInvites {
struct RejectRequestToJoinCallbackInfo;
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
struct RejectRequestToJoinCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal, "Epic.OnlineServices.CustomInvites", "RejectRequestToJoinCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.RejectRequestToJoinCallbackInfoInternal
struct CORDL_TYPE RejectRequestToJoinCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804ed9e0, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__CustomInvites__RejectRequestToJoinCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RejectRequestToJoinCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr RejectRequestToJoinCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9087};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal, m_TargetUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
