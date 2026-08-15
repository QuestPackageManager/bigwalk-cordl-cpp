#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/FileMetadataInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileMetadataInternal)
namespace Epic::OnlineServices::TitleStorage {
struct FileMetadata;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct FileMetadataInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::FileMetadataInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::FileMetadataInternal, "Epic.OnlineServices.TitleStorage", "FileMetadataInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.FileMetadataInternal
struct CORDL_TYPE FileMetadataInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>*() ;

/// @brief Method Get, addr 0x1804d8ca0, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::TitleStorage::FileMetadata>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__TitleStorage__FileMetadata_() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileMetadataInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FileSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MD5Hash", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UnencryptedDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FileMetadataInternal(int32_t  m_ApiVersion, uint32_t  m_FileSizeBytes, ::System::IntPtr  m_MD5Hash, ::System::IntPtr  m_Filename, uint32_t  m_UnencryptedDataSizeBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7600};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_FileSizeBytes, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_FileSizeBytes;

/// @brief Field m_MD5Hash, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_MD5Hash;

/// @brief Field m_Filename, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Filename;

/// @brief Field m_UnencryptedDataSizeBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_UnencryptedDataSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadataInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadataInternal, m_FileSizeBytes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadataInternal, m_MD5Hash) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadataInternal, m_Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadataInternal, m_UnencryptedDataSizeBytes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::FileMetadataInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
