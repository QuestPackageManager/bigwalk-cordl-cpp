#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/InfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__Status_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InfoInternal)
namespace Epic::OnlineServices::Presence {
struct Info;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct InfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::InfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::InfoInternal, "Epic.OnlineServices.Presence", "InfoInternal");
// Dependencies Epic.OnlineServices.Presence.Status, System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.InfoInternal
struct CORDL_TYPE InfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>*() ;

/// @brief Method Get, addr 0x1804f79c0, size 0x1b0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Presence::Info>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Presence__Info_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Status", ty: "::Epic::OnlineServices::Presence::Status", modifiers: "", def_value: None }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductVersion", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Platform", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RichText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RecordsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Records", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ProductName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IntegratedPlatform", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr InfoInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Presence::Status  m_Status, ::System::IntPtr  m_UserId, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_ProductVersion, ::System::IntPtr  m_Platform, ::System::IntPtr  m_RichText, int32_t  m_RecordsCount, ::System::IntPtr  m_Records, ::System::IntPtr  m_ProductName, ::System::IntPtr  m_IntegratedPlatform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Status, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::Presence::Status  m_Status;

/// @brief Field m_UserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_UserId;

/// @brief Field m_ProductId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ProductId;

/// @brief Field m_ProductVersion, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ProductVersion;

/// @brief Field m_Platform, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_Platform;

/// @brief Field m_RichText, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_RichText;

/// @brief Field m_RecordsCount, offset: 0x30, size: 0x4, def value: None
 int32_t  m_RecordsCount;

/// @brief Field m_Records, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_Records;

/// @brief Field m_ProductName, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_ProductName;

/// @brief Field m_IntegratedPlatform, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_IntegratedPlatform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_Status) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_UserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_ProductId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_ProductVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_Platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_RichText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_RecordsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_Records) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_ProductName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::InfoInternal, m_IntegratedPlatform) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::InfoInternal) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
