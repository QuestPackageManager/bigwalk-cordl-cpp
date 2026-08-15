#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/UserLoginStatusChangedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UserLoginStatusChangedCallbackInfoInternal)
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserLoginStatusChangedCallbackInfo;
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
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserLoginStatusChangedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, "Epic.OnlineServices.IntegratedPlatform", "UserLoginStatusChangedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.LoginStatus, System.IntPtr
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.UserLoginStatusChangedCallbackInfoInternal
struct CORDL_TYPE UserLoginStatusChangedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>*() ;

/// @brief Method Get, addr 0x18051e1e0, size 0x160, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__IntegratedPlatform__UserLoginStatusChangedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserLoginStatusChangedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlatformType", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalPlatformUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PreviousLoginStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }, CppParam { name: "m_CurrentLoginStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }]
constexpr UserLoginStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_PlatformType, ::System::IntPtr  m_LocalPlatformUserId, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_ProductUserId, ::Epic::OnlineServices::LoginStatus  m_PreviousLoginStatus, ::Epic::OnlineServices::LoginStatus  m_CurrentLoginStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8824};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_PlatformType, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PlatformType;

/// @brief Field m_LocalPlatformUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalPlatformUserId;

/// @brief Field m_AccountId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

/// @brief Field m_ProductUserId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ProductUserId;

/// @brief Field m_PreviousLoginStatus, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  m_PreviousLoginStatus;

/// @brief Field m_CurrentLoginStatus, offset: 0x2c, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  m_CurrentLoginStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_PlatformType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_LocalPlatformUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_AccountId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_ProductUserId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_PreviousLoginStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal, m_CurrentLoginStatus) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
