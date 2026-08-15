#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/UserPreLogoutCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UserPreLogoutCallbackInfoInternal)
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserPreLogoutCallbackInfo;
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
struct UserPreLogoutCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal, "Epic.OnlineServices.IntegratedPlatform", "UserPreLogoutCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.UserPreLogoutCallbackInfoInternal
struct CORDL_TYPE UserPreLogoutCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>*() ;

/// @brief Method Get, addr 0x18051e340, size 0x160, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__IntegratedPlatform__UserPreLogoutCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserPreLogoutCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlatformType", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalPlatformUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UserPreLogoutCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_PlatformType, ::System::IntPtr  m_LocalPlatformUserId, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_ProductUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

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

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal, m_PlatformType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal, m_LocalPlatformUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal, m_AccountId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal, m_ProductUserId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
