#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteFileOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteFileOptions)
namespace Epic::OnlineServices::PlayerDataStorage {
class OnFileTransferProgressCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileDataCallback;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions, "Epic.OnlineServices.PlayerDataStorage", "WriteFileOptions");
// Dependencies 
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.WriteFileOptions
struct CORDL_TYPE WriteFileOptions {
public:
// Declarations
 __declspec(property(get=get_ChunkLengthBytes, put=set_ChunkLengthBytes)) uint32_t  ChunkLengthBytes;

 __declspec(property(get=get_FileTransferProgressCallback, put=set_FileTransferProgressCallback)) ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*  FileTransferProgressCallback;

 __declspec(property(get=get_Filename, put=set_Filename)) ::Epic::OnlineServices::Utf8String*  Filename;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_WriteFileDataCallback, put=set_WriteFileDataCallback)) ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*  WriteFileDataCallback;

/// @brief Method get_ChunkLengthBytes, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ChunkLengthBytes() ;

/// @brief Method get_FileTransferProgressCallback, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback* get_FileTransferProgressCallback() ;

/// @brief Method get_Filename, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Filename() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_WriteFileDataCallback, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* get_WriteFileDataCallback() ;

/// @brief Method set_ChunkLengthBytes, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ChunkLengthBytes(uint32_t  value) ;

/// @brief Method set_FileTransferProgressCallback, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_FileTransferProgressCallback(::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*  value) ;

/// @brief Method set_Filename, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Filename(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_WriteFileDataCallback, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_WriteFileDataCallback(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WriteFileOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Filename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ChunkLengthBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_WriteFileDataCallback_k__BackingField", ty: "::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*", modifiers: "", def_value: None }, CppParam { name: "_FileTransferProgressCallback_k__BackingField", ty: "::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*", modifiers: "", def_value: None }]
constexpr WriteFileOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField, uint32_t  _ChunkLengthBytes_k__BackingField, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*  _WriteFileDataCallback_k__BackingField, ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*  _FileTransferProgressCallback_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Filename>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField;

/// @brief Field <ChunkLengthBytes>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _ChunkLengthBytes_k__BackingField;

/// @brief Field <WriteFileDataCallback>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*  _WriteFileDataCallback_k__BackingField;

/// @brief Field <FileTransferProgressCallback>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallback*  _FileTransferProgressCallback_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions, _Filename_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions, _ChunkLengthBytes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions, _WriteFileDataCallback_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions, _FileTransferProgressCallback_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
