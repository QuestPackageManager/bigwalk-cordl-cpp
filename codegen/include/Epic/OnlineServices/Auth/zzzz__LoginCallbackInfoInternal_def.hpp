#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginCallbackInfoInternal)
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfo;
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
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, "Epic.OnlineServices.Auth", "LoginCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginCallbackInfoInternal
struct CORDL_TYPE LoginCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginCallbackInfo>*() ;

/// @brief Method Get, addr 0x1805260d0, size 0x180, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__LoginCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PinGrantInfo", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ContinuanceToken", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountFeatureRestrictedInfo_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SelectedAccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LoginCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_PinGrantInfo, ::System::IntPtr  m_ContinuanceToken, ::System::IntPtr  m_AccountFeatureRestrictedInfo_DEPRECATED, ::System::IntPtr  m_SelectedAccountId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PinGrantInfo, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_PinGrantInfo;

/// @brief Field m_ContinuanceToken, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ContinuanceToken;

/// @brief Field m_AccountFeatureRestrictedInfo_DEPRECATED, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_AccountFeatureRestrictedInfo_DEPRECATED;

/// @brief Field m_SelectedAccountId, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_SelectedAccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_PinGrantInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_ContinuanceToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_AccountFeatureRestrictedInfo_DEPRECATED) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal, m_SelectedAccountId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginCallbackInfoInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
