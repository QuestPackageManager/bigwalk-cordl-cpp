#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/CopyExternalUserInfoByAccountTypeOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyExternalUserInfoByAccountTypeOptionsInternal)
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByAccountTypeOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct CopyExternalUserInfoByAccountTypeOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal, "Epic.OnlineServices.UserInfo", "CopyExternalUserInfoByAccountTypeOptionsInternal");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.IntPtr
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.CopyExternalUserInfoByAccountTypeOptionsInternal
struct CORDL_TYPE CopyExternalUserInfoByAccountTypeOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7440, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7570, size 0xd0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UserInfo__CopyExternalUserInfoByAccountTypeOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyExternalUserInfoByAccountTypeOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AccountType", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }]
constexpr CopyExternalUserInfoByAccountTypeOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, ::Epic::OnlineServices::ExternalAccountType  m_AccountType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

/// @brief Field m_AccountType, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  m_AccountType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal, m_TargetUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal, m_AccountType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
