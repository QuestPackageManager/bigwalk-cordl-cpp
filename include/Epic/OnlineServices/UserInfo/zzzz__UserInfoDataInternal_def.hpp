#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/UserInfoDataInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserInfoDataInternal)
namespace Epic::OnlineServices::UserInfo {
struct UserInfoData;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct UserInfoDataInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::UserInfoDataInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, "Epic.OnlineServices.UserInfo", "UserInfoDataInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.UserInfoDataInternal
struct CORDL_TYPE UserInfoDataInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>*() ;

/// @brief Method Get, addr 0x1804e4a90, size 0x160, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::UserInfo::UserInfoData>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::UserInfoData>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__UserInfoData_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserInfoDataInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Country", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PreferredLanguage", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Nickname", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayNameSanitized", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UserInfoDataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, ::System::IntPtr  m_Country, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_PreferredLanguage, ::System::IntPtr  m_Nickname, ::System::IntPtr  m_DisplayNameSanitized) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_Country, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Country;

/// @brief Field m_DisplayName, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_PreferredLanguage, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_PreferredLanguage;

/// @brief Field m_Nickname, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_Nickname;

/// @brief Field m_DisplayNameSanitized, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayNameSanitized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_Country) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_PreferredLanguage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_Nickname) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal, m_DisplayNameSanitized) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::UserInfoDataInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
