#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/FileMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileMetadata)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct FileMetadata;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::FileMetadata);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::FileMetadata, "Epic.OnlineServices.TitleStorage", "FileMetadata");
// Dependencies 
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.FileMetadata
struct CORDL_TYPE FileMetadata {
public:
// Declarations
 __declspec(property(get=get_FileSizeBytes, put=set_FileSizeBytes)) uint32_t  FileSizeBytes;

 __declspec(property(get=get_Filename, put=set_Filename)) ::Epic::OnlineServices::Utf8String*  Filename;

 __declspec(property(get=get_MD5Hash, put=set_MD5Hash)) ::Epic::OnlineServices::Utf8String*  MD5Hash;

 __declspec(property(get=get_UnencryptedDataSizeBytes, put=set_UnencryptedDataSizeBytes)) uint32_t  UnencryptedDataSizeBytes;

/// @brief Method get_FileSizeBytes, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_FileSizeBytes() ;

/// @brief Method get_Filename, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Filename() ;

/// @brief Method get_MD5Hash, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_MD5Hash() ;

/// @brief Method get_UnencryptedDataSizeBytes, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_UnencryptedDataSizeBytes() ;

/// @brief Method set_FileSizeBytes, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_FileSizeBytes(uint32_t  value) ;

/// @brief Method set_Filename, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Filename(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_MD5Hash, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_MD5Hash(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UnencryptedDataSizeBytes, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_UnencryptedDataSizeBytes(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FileMetadata() ;

// Ctor Parameters [CppParam { name: "_FileSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_MD5Hash_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Filename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnencryptedDataSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FileMetadata(uint32_t  _FileSizeBytes_k__BackingField, ::Epic::OnlineServices::Utf8String*  _MD5Hash_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField, uint32_t  _UnencryptedDataSizeBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7599};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <FileSizeBytes>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _FileSizeBytes_k__BackingField;

/// @brief Field <MD5Hash>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _MD5Hash_k__BackingField;

/// @brief Field <Filename>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField;

/// @brief Field <UnencryptedDataSizeBytes>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _UnencryptedDataSizeBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadata, _FileSizeBytes_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadata, _MD5Hash_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadata, _Filename_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileMetadata, _UnencryptedDataSizeBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::FileMetadata) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
