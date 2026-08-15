#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/QueryFileListOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryFileListOptionsInternal)
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileListOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileListOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal, "Epic.OnlineServices.TitleStorage", "QueryFileListOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.QueryFileListOptionsInternal
struct CORDL_TYPE QueryFileListOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7440, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804dfd20, size 0x100, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__TitleStorage__QueryFileListOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryFileListOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ListOfTags", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ListOfTagsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryFileListOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_ListOfTags, uint32_t  m_ListOfTagsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_ListOfTags, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ListOfTags;

/// @brief Field m_ListOfTagsCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_ListOfTagsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal, m_ListOfTags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal, m_ListOfTagsCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::QueryFileListOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
