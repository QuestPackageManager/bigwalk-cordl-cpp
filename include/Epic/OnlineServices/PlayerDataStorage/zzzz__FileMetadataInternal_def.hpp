#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/FileMetadataInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileMetadataInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct FileMetadata;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct FileMetadataInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, "Epic.OnlineServices.PlayerDataStorage", "FileMetadataInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.FileMetadataInternal
struct CORDL_TYPE FileMetadataInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>*() ;

/// @brief Method Get, addr 0x1804f7690, size 0x140, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__PlayerDataStorage__FileMetadata_() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileMetadataInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FileSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MD5Hash", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LastModifiedTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_UnencryptedDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FileMetadataInternal(int32_t  m_ApiVersion, uint32_t  m_FileSizeBytes, ::System::IntPtr  m_MD5Hash, ::System::IntPtr  m_Filename, int64_t  m_LastModifiedTime, uint32_t  m_UnencryptedDataSizeBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_FileSizeBytes, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_FileSizeBytes;

/// @brief Field m_MD5Hash, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_MD5Hash;

/// @brief Field m_Filename, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Filename;

/// @brief Field m_LastModifiedTime, offset: 0x18, size: 0x8, def value: None
 int64_t  m_LastModifiedTime;

/// @brief Field m_UnencryptedDataSizeBytes, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_UnencryptedDataSizeBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, m_FileSizeBytes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, m_MD5Hash) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, m_Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, m_LastModifiedTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal, m_UnencryptedDataSizeBytes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::FileMetadataInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
