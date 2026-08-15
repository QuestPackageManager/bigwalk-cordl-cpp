#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/ReadFileOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadFileOptions)
namespace Epic::OnlineServices::TitleStorage {
class OnFileTransferProgressCallback;
}
namespace Epic::OnlineServices::TitleStorage {
class OnReadFileDataCallback;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::ReadFileOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::ReadFileOptions, "Epic.OnlineServices.TitleStorage", "ReadFileOptions");
// Dependencies 
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.ReadFileOptions
struct CORDL_TYPE ReadFileOptions {
public:
// Declarations
 __declspec(property(get=get_FileTransferProgressCallback, put=set_FileTransferProgressCallback)) ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*  FileTransferProgressCallback;

 __declspec(property(get=get_Filename, put=set_Filename)) ::Epic::OnlineServices::Utf8String*  Filename;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ReadChunkLengthBytes, put=set_ReadChunkLengthBytes)) uint32_t  ReadChunkLengthBytes;

 __declspec(property(get=get_ReadFileDataCallback, put=set_ReadFileDataCallback)) ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*  ReadFileDataCallback;

/// @brief Method get_FileTransferProgressCallback, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback* get_FileTransferProgressCallback() ;

/// @brief Method get_Filename, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Filename() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ReadChunkLengthBytes, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ReadChunkLengthBytes() ;

/// @brief Method get_ReadFileDataCallback, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback* get_ReadFileDataCallback() ;

/// @brief Method set_FileTransferProgressCallback, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_FileTransferProgressCallback(::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*  value) ;

/// @brief Method set_Filename, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Filename(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ReadChunkLengthBytes, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ReadChunkLengthBytes(uint32_t  value) ;

/// @brief Method set_ReadFileDataCallback, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ReadFileDataCallback(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadFileOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Filename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ReadChunkLengthBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_ReadFileDataCallback_k__BackingField", ty: "::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*", modifiers: "", def_value: None }, CppParam { name: "_FileTransferProgressCallback_k__BackingField", ty: "::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*", modifiers: "", def_value: None }]
constexpr ReadFileOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField, uint32_t  _ReadChunkLengthBytes_k__BackingField, ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*  _ReadFileDataCallback_k__BackingField, ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*  _FileTransferProgressCallback_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Filename>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField;

/// @brief Field <ReadChunkLengthBytes>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _ReadChunkLengthBytes_k__BackingField;

/// @brief Field <ReadFileDataCallback>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallback*  _ReadFileDataCallback_k__BackingField;

/// @brief Field <FileTransferProgressCallback>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::TitleStorage::OnFileTransferProgressCallback*  _FileTransferProgressCallback_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptions, _Filename_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptions, _ReadChunkLengthBytes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptions, _ReadFileDataCallback_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadFileOptions, _FileTransferProgressCallback_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::ReadFileOptions) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
