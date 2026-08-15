#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/QueryUserInfoByDisplayNameOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryUserInfoByDisplayNameOptionsInternal)
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByDisplayNameOptions;
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
struct QueryUserInfoByDisplayNameOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal, "Epic.OnlineServices.UserInfo", "QueryUserInfoByDisplayNameOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.QueryUserInfoByDisplayNameOptionsInternal
struct CORDL_TYPE QueryUserInfoByDisplayNameOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7440, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7930, size 0x160, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UserInfo__QueryUserInfoByDisplayNameOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryUserInfoByDisplayNameOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryUserInfoByDisplayNameOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_DisplayName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_DisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal, m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
