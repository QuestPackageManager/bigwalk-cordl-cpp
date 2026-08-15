#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyIdTokenCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerifyIdTokenCallbackInfoInternal)
namespace Epic::OnlineServices::Auth {
struct VerifyIdTokenCallbackInfo;
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
struct VerifyIdTokenCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, "Epic.OnlineServices.Auth", "VerifyIdTokenCallbackInfoInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.VerifyIdTokenCallbackInfoInternal
struct CORDL_TYPE VerifyIdTokenCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>*() ;

/// @brief Method Get, addr 0x18052c450, size 0x250, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__VerifyIdTokenCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyIdTokenCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ApplicationId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeploymentId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsExternalAccountInfoPresent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ExternalAccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_ExternalAccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ExternalAccountDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Platform", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr VerifyIdTokenCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_ApplicationId, ::System::IntPtr  m_ClientId, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_SandboxId, ::System::IntPtr  m_DeploymentId, ::System::IntPtr  m_DisplayName, int32_t  m_IsExternalAccountInfoPresent, ::Epic::OnlineServices::ExternalAccountType  m_ExternalAccountIdType, ::System::IntPtr  m_ExternalAccountId, ::System::IntPtr  m_ExternalAccountDisplayName, ::System::IntPtr  m_Platform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_ApplicationId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ApplicationId;

/// @brief Field m_ClientId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ClientId;

/// @brief Field m_ProductId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ProductId;

/// @brief Field m_SandboxId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_SandboxId;

/// @brief Field m_DeploymentId, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_DeploymentId;

/// @brief Field m_DisplayName, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_IsExternalAccountInfoPresent, offset: 0x40, size: 0x4, def value: None
 int32_t  m_IsExternalAccountInfoPresent;

/// @brief Field m_ExternalAccountIdType, offset: 0x44, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_ExternalAccountIdType;

/// @brief Field m_ExternalAccountId, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_ExternalAccountId;

/// @brief Field m_ExternalAccountDisplayName, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  m_ExternalAccountDisplayName;

/// @brief Field m_Platform, offset: 0x58, size: 0x8, def value: None
 ::System::IntPtr  m_Platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ApplicationId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ClientId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ProductId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_SandboxId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_DeploymentId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_DisplayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_IsExternalAccountInfoPresent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ExternalAccountIdType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ExternalAccountId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_ExternalAccountDisplayName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal, m_Platform) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
