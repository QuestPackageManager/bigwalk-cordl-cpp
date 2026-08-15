#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/PlayerDataStorageInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataStorageInterface)
namespace Epic::OnlineServices::PlayerDataStorage {
struct CopyFileMetadataAtIndexOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct CopyFileMetadataByFilenameOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct DeleteCacheOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct DeleteFileOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct DuplicateFileOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct FileMetadata;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct GetFileMetadataCountOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDeleteCacheCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDeleteFileCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDuplicateFileCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnQueryFileCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnQueryFileListCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnReadFileCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileCompleteCallback;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageFileTransferRequest;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileListOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*, "Epic.OnlineServices.PlayerDataStorage", "PlayerDataStorageInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.PlayerDataStorageInterface
class CORDL_TYPE PlayerDataStorageInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyFileMetadataAtIndex, addr 0x1804fd240, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyFileMetadataAtIndex(::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions>  copyFileMetadataOptions, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>  outMetadata) ;

/// @brief Method CopyFileMetadataByFilename, addr 0x1804fd300, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyFileMetadataByFilename(::by_ref<::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataByFilenameOptions>  copyFileMetadataOptions, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::PlayerDataStorage::FileMetadata>>  outMetadata) ;

/// @brief Method DeleteCache, addr 0x1804fd3e0, size 0x200, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result DeleteCache(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteCacheOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteCacheCompleteCallback*  completionCallback) ;

/// @brief Method DeleteFile, addr 0x1804fd5e0, size 0x230, virtual false, abstract: false, final false
inline void DeleteFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileOptions>  deleteOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallback*  completionCallback) ;

/// @brief Method DuplicateFile, addr 0x1804fd810, size 0x250, virtual false, abstract: false, final false
inline void DuplicateFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileOptions>  duplicateOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallback*  completionCallback) ;

/// @brief Method GetFileMetadataCount, addr 0x1804fda60, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetFileMetadataCount(::by_ref<::Epic::OnlineServices::PlayerDataStorage::GetFileMetadataCountOptions>  getFileMetadataCountOptions, ::by_ref<int32_t>  outFileMetadataCount) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* New_ctor() ;

static inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryFile, addr 0x1804fdce0, size 0x230, virtual false, abstract: false, final false
inline void QueryFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileOptions>  queryFileOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallback*  completionCallback) ;

/// @brief Method QueryFileList, addr 0x1804fdae0, size 0x200, virtual false, abstract: false, final false
inline void QueryFileList(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions>  queryFileListOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileListCompleteCallback*  completionCallback) ;

/// @brief Method ReadFile, addr 0x1804fdf10, size 0x2b0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* ReadFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileOptions>  readOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnReadFileCompleteCallback*  completionCallback) ;

/// @brief Method WriteFile, addr 0x1804fe1c0, size 0x2b0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* WriteFile(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileOptions>  writeOptions, ::System::Object*  clientData, ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallback*  completionCallback) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerDataStorageInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataStorageInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerDataStorageInterface(PlayerDataStorageInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataStorageInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerDataStorageInterface(PlayerDataStorageInterface const& ) = delete;

/// @brief Field COPYFILEMETADATAATINDEXOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYFILEMETADATAATINDEXOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYFILEMETADATAATINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYFILEMETADATAATINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYFILEMETADATABYFILENAMEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYFILEMETADATABYFILENAMEOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYFILEMETADATABYFILENAME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYFILEMETADATABYFILENAME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DELETECACHEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETECACHEOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DELETECACHE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETECACHE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DELETEFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETEFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DELETEFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETEFILE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DUPLICATEFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DUPLICATEFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DUPLICATEFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DUPLICATEFILE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field FILEMETADATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  FILEMETADATA_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field FILENAME_MAX_LENGTH_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  FILENAME_MAX_LENGTH_BYTES{static_cast<int32_t>(0x40)};

/// @brief Field GETFILEMETADATACOUNTOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFILEMETADATACOUNTOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETFILEMETADATACOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFILEMETADATACOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFILELISTOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILELISTOPTIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYFILELIST_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILELIST_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field READFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  READFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field READFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  READFILE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field TIME_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  TIME_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field WRITEFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  WRITEFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field WRITEFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  WRITEFILE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
