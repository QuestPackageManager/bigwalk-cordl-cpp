#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/VerifyIdTokenCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerifyIdTokenCallbackInfoInternal)
namespace Epic::OnlineServices::Connect {
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
namespace Epic::OnlineServices::Connect {
struct VerifyIdTokenCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, "Epic.OnlineServices.Connect", "VerifyIdTokenCallbackInfoInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.VerifyIdTokenCallbackInfoInternal
struct CORDL_TYPE VerifyIdTokenCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo>*() ;

/// @brief Method Get, addr 0x18052c290, size 0x1c0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__VerifyIdTokenCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyIdTokenCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsAccountInfoPresent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Platform", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeviceType", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeploymentId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr VerifyIdTokenCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_ProductUserId, int32_t  m_IsAccountInfoPresent, ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_Platform, ::System::IntPtr  m_DeviceType, ::System::IntPtr  m_ClientId, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_SandboxId, ::System::IntPtr  m_DeploymentId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_ProductUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ProductUserId;

/// @brief Field m_IsAccountInfoPresent, offset: 0x18, size: 0x4, def value: None
 int32_t  m_IsAccountInfoPresent;

/// @brief Field m_AccountIdType, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountIdType;

/// @brief Field m_AccountId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

/// @brief Field m_Platform, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_Platform;

/// @brief Field m_DeviceType, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_DeviceType;

/// @brief Field m_ClientId, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_ClientId;

/// @brief Field m_ProductId, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_ProductId;

/// @brief Field m_SandboxId, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_SandboxId;

/// @brief Field m_DeploymentId, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  m_DeploymentId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_ProductUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_IsAccountInfoPresent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_AccountIdType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_AccountId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_Platform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_DeviceType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_ClientId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_ProductId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_SandboxId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal, m_DeploymentId) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
