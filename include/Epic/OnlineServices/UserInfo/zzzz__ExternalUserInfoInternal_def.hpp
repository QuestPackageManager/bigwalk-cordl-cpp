#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/ExternalUserInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalUserInfoInternal)
namespace Epic::OnlineServices::UserInfo {
struct ExternalUserInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct ExternalUserInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal, "Epic.OnlineServices.UserInfo", "ExternalUserInfoInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.ExternalUserInfoInternal
struct CORDL_TYPE ExternalUserInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>*() ;

/// @brief Method Get, addr 0x1804d8bc0, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::UserInfo::ExternalUserInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__ExternalUserInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ExternalUserInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AccountType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayNameSanitized", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ExternalUserInfoInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::ExternalAccountType  m_AccountType, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_DisplayNameSanitized) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AccountType, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountType;

/// @brief Field m_AccountId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId;

/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_DisplayNameSanitized, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayNameSanitized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal, m_AccountType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal, m_AccountId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal, m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal, m_DisplayNameSanitized) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
