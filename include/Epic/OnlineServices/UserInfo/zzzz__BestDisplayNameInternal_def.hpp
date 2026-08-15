#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/BestDisplayNameInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BestDisplayNameInternal)
namespace Epic::OnlineServices::UserInfo {
struct BestDisplayName;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct BestDisplayNameInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, "Epic.OnlineServices.UserInfo", "BestDisplayNameInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.BestDisplayNameInternal
struct CORDL_TYPE BestDisplayNameInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>*() ;

/// @brief Method Get, addr 0x1804bea90, size 0x150, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::UserInfo::BestDisplayName>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__BestDisplayName_() ;

// Ctor Parameters []
// @brief default ctor
constexpr BestDisplayNameInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayNameSanitized", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Nickname", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlatformType", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BestDisplayNameInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_DisplayNameSanitized, ::System::IntPtr  m_Nickname, uint32_t  m_PlatformType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7458};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

/// @brief Field m_DisplayNameSanitized, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayNameSanitized;

/// @brief Field m_Nickname, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_Nickname;

/// @brief Field m_PlatformType, offset: 0x28, size: 0x4, def value: None
 uint32_t  m_PlatformType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, m_DisplayNameSanitized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, m_Nickname) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal, m_PlatformType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::BestDisplayNameInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
