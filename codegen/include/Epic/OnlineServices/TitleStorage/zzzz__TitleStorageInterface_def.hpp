#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/TitleStorageInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TitleStorageInterface)
namespace Epic::OnlineServices::TitleStorage {
struct CopyFileMetadataAtIndexOptions;
}
namespace Epic::OnlineServices::TitleStorage {
struct CopyFileMetadataByFilenameOptions;
}
namespace Epic::OnlineServices::TitleStorage {
struct DeleteCacheOptions;
}
namespace Epic::OnlineServices::TitleStorage {
struct FileMetadata;
}
namespace Epic::OnlineServices::TitleStorage {
struct GetFileMetadataCountOptions;
}
namespace Epic::OnlineServices::TitleStorage {
class OnDeleteCacheCompleteCallback;
}
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileCompleteCallback;
}
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileListCompleteCallback;
}
namespace Epic::OnlineServices::TitleStorage {
class OnReadFileCompleteCallback;
}
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileListOptions;
}
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileOptions;
}
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileOptions;
}
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageFileTransferRequest;
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
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::TitleStorage::TitleStorageInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::TitleStorageInterface*, "Epic.OnlineServices.TitleStorage", "TitleStorageInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::TitleStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.TitleStorage.TitleStorageInterface
class CORDL_TYPE TitleStorageInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyFileMetadataAtIndex, addr 0x1804e19f0, size 0x130, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyFileMetadataAtIndex(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataAtIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>  outMetadata) ;

/// @brief Method CopyFileMetadataByFilename, addr 0x1804e1b20, size 0x110, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyFileMetadataByFilename(::by_ref<::Epic::OnlineServices::TitleStorage::CopyFileMetadataByFilenameOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::TitleStorage::FileMetadata>>  outMetadata) ;

/// @brief Method DeleteCache, addr 0x1804e1c30, size 0x290, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result DeleteCache(::by_ref<::Epic::OnlineServices::TitleStorage::DeleteCacheOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnDeleteCacheCompleteCallback*  completionCallback) ;

/// @brief Method GetFileMetadataCount, addr 0x1804e1ec0, size 0xe0, virtual false, abstract: false, final false
inline uint32_t GetFileMetadataCount(::by_ref<::Epic::OnlineServices::TitleStorage::GetFileMetadataCountOptions>  options) ;

static inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* New_ctor() ;

static inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryFile, addr 0x1804e2250, size 0x260, virtual false, abstract: false, final false
inline void QueryFile(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*  completionCallback) ;

/// @brief Method QueryFileList, addr 0x1804e1fa0, size 0x2b0, virtual false, abstract: false, final false
inline void QueryFileList(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallback*  completionCallback) ;

/// @brief Method ReadFile, addr 0x1804e24b0, size 0x310, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* ReadFile(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallback*  completionCallback) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleStorageInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleStorageInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleStorageInterface(TitleStorageInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleStorageInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleStorageInterface(TitleStorageInterface const& ) = delete;

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

/// @brief Field FILEMETADATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  FILEMETADATA_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field FILENAME_MAX_LENGTH_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  FILENAME_MAX_LENGTH_BYTES{static_cast<int32_t>(0x40)};

/// @brief Field GETFILEMETADATACOUNTOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFILEMETADATACOUNTOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETFILEMETADATACOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFILEMETADATACOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFILELISTOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILELISTOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFILELIST_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILELIST_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYFILE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field READFILEOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  READFILEOPTIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field READFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  READFILE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7639};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::TitleStorage::TitleStorageInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
