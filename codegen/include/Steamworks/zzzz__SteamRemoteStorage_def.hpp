#pragma once
// IWYU pragma private; include "Steamworks/SteamRemoteStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamRemoteStorage)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct ERemoteStorageFilePathType;
}
namespace Steamworks {
struct ERemoteStorageLocalFileChange;
}
namespace Steamworks {
struct ERemoteStoragePlatform;
}
namespace Steamworks {
struct ERemoteStoragePublishedFileVisibility;
}
namespace Steamworks {
struct EUGCReadAction;
}
namespace Steamworks {
struct EWorkshopEnumerationType;
}
namespace Steamworks {
struct EWorkshopFileAction;
}
namespace Steamworks {
struct EWorkshopFileType;
}
namespace Steamworks {
struct EWorkshopVideoProvider;
}
namespace Steamworks {
struct PublishedFileId_t;
}
namespace Steamworks {
struct PublishedFileUpdateHandle_t;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
struct UGCFileWriteStreamHandle_t;
}
namespace Steamworks {
struct UGCHandle_t;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Steamworks {
class SteamRemoteStorage;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamRemoteStorage*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamRemoteStorage*, "Steamworks", "SteamRemoteStorage");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamRemoteStorage
class CORDL_TYPE SteamRemoteStorage : public ::System::Object {
public:
// Declarations
/// @brief Method BeginFileWriteBatch, addr 0x1805b7dd0, size 0x30, virtual false, abstract: false, final false
static inline bool BeginFileWriteBatch() ;

/// @brief Method CommitPublishedFileUpdate, addr 0x1805b7e00, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CommitPublishedFileUpdate(::Steamworks::PublishedFileUpdateHandle_t  updateHandle) ;

/// @brief Method CreatePublishedFileUpdateRequest, addr 0x1805b7e40, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest(::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method DeletePublishedFile, addr 0x1805b7e80, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t DeletePublishedFile(::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method EndFileWriteBatch, addr 0x1805b7ec0, size 0x30, virtual false, abstract: false, final false
static inline bool EndFileWriteBatch() ;

/// @brief Method EnumeratePublishedFilesByUserAction, addr 0x1805b7ef0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t EnumeratePublishedFilesByUserAction(::Steamworks::EWorkshopFileAction  eAction, uint32_t  unStartIndex) ;

/// @brief Method EnumeratePublishedWorkshopFiles, addr 0x1805b7f30, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t EnumeratePublishedWorkshopFiles(::Steamworks::EWorkshopEnumerationType  eEnumerationType, uint32_t  unStartIndex, uint32_t  unCount, uint32_t  unDays, ::System::Collections::Generic::IList_1<::StringW>*  pTags, ::System::Collections::Generic::IList_1<::StringW>*  pUserTags) ;

/// @brief Method EnumerateUserPublishedFiles, addr 0x1805b8010, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t EnumerateUserPublishedFiles(uint32_t  unStartIndex) ;

/// @brief Method EnumerateUserSharedWorkshopFiles, addr 0x1805b8040, size 0xc0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t EnumerateUserSharedWorkshopFiles(::Steamworks::CSteamID  steamId, uint32_t  unStartIndex, ::System::Collections::Generic::IList_1<::StringW>*  pRequiredTags, ::System::Collections::Generic::IList_1<::StringW>*  pExcludedTags) ;

/// @brief Method EnumerateUserSubscribedFiles, addr 0x1805b8100, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t EnumerateUserSubscribedFiles(uint32_t  unStartIndex) ;

/// @brief Method FileDelete, addr 0x1805b8130, size 0xe0, virtual false, abstract: false, final false
static inline bool FileDelete(::StringW  pchFile) ;

/// @brief Method FileExists, addr 0x1805b8210, size 0xe0, virtual false, abstract: false, final false
static inline bool FileExists(::StringW  pchFile) ;

/// @brief Method FileForget, addr 0x1805b82f0, size 0xe0, virtual false, abstract: false, final false
static inline bool FileForget(::StringW  pchFile) ;

/// @brief Method FilePersisted, addr 0x1805b83d0, size 0xe0, virtual false, abstract: false, final false
static inline bool FilePersisted(::StringW  pchFile) ;

/// @brief Method FileRead, addr 0x1805b8610, size 0x100, virtual false, abstract: false, final false
static inline int32_t FileRead(::StringW  pchFile, ::ArrayW<uint8_t>  pvData, int32_t  cubDataToRead) ;

/// @brief Method FileReadAsync, addr 0x1805b8510, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t FileReadAsync(::StringW  pchFile, uint32_t  nOffset, uint32_t  cubToRead) ;

/// @brief Method FileReadAsyncComplete, addr 0x1805b84b0, size 0x60, virtual false, abstract: false, final false
static inline bool FileReadAsyncComplete(::Steamworks::SteamAPICall_t  hReadCall, ::ArrayW<uint8_t>  pvBuffer, uint32_t  cubToRead) ;

/// @brief Method FileShare, addr 0x1805b8710, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t FileShare(::StringW  pchFile) ;

/// @brief Method FileWrite, addr 0x1805b8ab0, size 0x100, virtual false, abstract: false, final false
static inline bool FileWrite(::StringW  pchFile, ::ArrayW<uint8_t>  pvData, int32_t  cubData) ;

/// @brief Method FileWriteAsync, addr 0x1805b87f0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t FileWriteAsync(::StringW  pchFile, ::ArrayW<uint8_t>  pvData, uint32_t  cubData) ;

/// @brief Method FileWriteStreamCancel, addr 0x1805b88f0, size 0x40, virtual false, abstract: false, final false
static inline bool FileWriteStreamCancel(::Steamworks::UGCFileWriteStreamHandle_t  writeHandle) ;

/// @brief Method FileWriteStreamClose, addr 0x1805b8930, size 0x40, virtual false, abstract: false, final false
static inline bool FileWriteStreamClose(::Steamworks::UGCFileWriteStreamHandle_t  writeHandle) ;

/// @brief Method FileWriteStreamOpen, addr 0x1805b8970, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::UGCFileWriteStreamHandle_t FileWriteStreamOpen(::StringW  pchFile) ;

/// @brief Method FileWriteStreamWriteChunk, addr 0x1805b8a50, size 0x60, virtual false, abstract: false, final false
static inline bool FileWriteStreamWriteChunk(::Steamworks::UGCFileWriteStreamHandle_t  writeHandle, ::ArrayW<uint8_t>  pvData, int32_t  cubData) ;

/// @brief Method GetCachedUGCCount, addr 0x1805b8bb0, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetCachedUGCCount() ;

/// @brief Method GetCachedUGCHandle, addr 0x1805b8be0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::UGCHandle_t GetCachedUGCHandle(int32_t  iCachedContent) ;

/// @brief Method GetFileCount, addr 0x1805b8c10, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetFileCount() ;

/// @brief Method GetFileNameAndSize, addr 0x1805b8c40, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetFileNameAndSize(int32_t  iFile, ::by_ref<int32_t>  pnFileSizeInBytes) ;

/// @brief Method GetFileSize, addr 0x1805b8c90, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetFileSize(::StringW  pchFile) ;

/// @brief Method GetFileTimestamp, addr 0x1805b8d70, size 0xe0, virtual false, abstract: false, final false
static inline int64_t GetFileTimestamp(::StringW  pchFile) ;

/// @brief Method GetLocalFileChange, addr 0x1805b8e80, size 0x60, virtual false, abstract: false, final false
static inline ::StringW GetLocalFileChange(int32_t  iFile, ::by_ref<::Steamworks::ERemoteStorageLocalFileChange>  pEChangeType, ::by_ref<::Steamworks::ERemoteStorageFilePathType>  pEFilePathType) ;

/// @brief Method GetLocalFileChangeCount, addr 0x1805b8e50, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetLocalFileChangeCount() ;

/// @brief Method GetPublishedFileDetails, addr 0x1805b8ee0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetPublishedFileDetails(::Steamworks::PublishedFileId_t  unPublishedFileId, uint32_t  unMaxSecondsOld) ;

/// @brief Method GetPublishedItemVoteDetails, addr 0x1805b8f20, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetPublishedItemVoteDetails(::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method GetQuota, addr 0x1805b8f60, size 0x50, virtual false, abstract: false, final false
static inline bool GetQuota(::by_ref<uint64_t>  pnTotalBytes, ::by_ref<uint64_t>  puAvailableBytes) ;

/// @brief Method GetSyncPlatforms, addr 0x1805b8fb0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::ERemoteStoragePlatform GetSyncPlatforms(::StringW  pchFile) ;

/// @brief Method GetUGCDetails, addr 0x1805b9090, size 0xb0, virtual false, abstract: false, final false
static inline bool GetUGCDetails(::Steamworks::UGCHandle_t  hContent, ::by_ref<::Steamworks::AppId_t>  pnAppID, ::by_ref<::StringW>  ppchName, ::by_ref<int32_t>  pnFileSizeInBytes, ::by_ref<::Steamworks::CSteamID>  pSteamIDOwner) ;

/// @brief Method GetUGCDownloadProgress, addr 0x1805b9140, size 0x60, virtual false, abstract: false, final false
static inline bool GetUGCDownloadProgress(::Steamworks::UGCHandle_t  hContent, ::by_ref<int32_t>  pnBytesDownloaded, ::by_ref<int32_t>  pnBytesExpected) ;

/// @brief Method GetUserPublishedItemVoteDetails, addr 0x1805b91a0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetUserPublishedItemVoteDetails(::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method IsCloudEnabledForAccount, addr 0x1805b91e0, size 0x30, virtual false, abstract: false, final false
static inline bool IsCloudEnabledForAccount() ;

/// @brief Method IsCloudEnabledForApp, addr 0x1805b9210, size 0x30, virtual false, abstract: false, final false
static inline bool IsCloudEnabledForApp() ;

/// @brief Method PublishVideo, addr 0x1805b9240, size 0x3b0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t PublishVideo(::Steamworks::EWorkshopVideoProvider  eVideoProvider, ::StringW  pchVideoAccount, ::StringW  pchVideoIdentifier, ::StringW  pchPreviewFile, ::Steamworks::AppId_t  nConsumerAppId, ::StringW  pchTitle, ::StringW  pchDescription, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility, ::System::Collections::Generic::IList_1<::StringW>*  pTags) ;

/// @brief Method PublishWorkshopFile, addr 0x1805b95f0, size 0x2f0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t PublishWorkshopFile(::StringW  pchFile, ::StringW  pchPreviewFile, ::Steamworks::AppId_t  nConsumerAppId, ::StringW  pchTitle, ::StringW  pchDescription, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility, ::System::Collections::Generic::IList_1<::StringW>*  pTags, ::Steamworks::EWorkshopFileType  eWorkshopFileType) ;

/// @brief Method SetCloudEnabledForApp, addr 0x1805b98e0, size 0x40, virtual false, abstract: false, final false
static inline void SetCloudEnabledForApp(bool  bEnabled) ;

/// @brief Method SetSyncPlatforms, addr 0x1805b9920, size 0xf0, virtual false, abstract: false, final false
static inline bool SetSyncPlatforms(::StringW  pchFile, ::Steamworks::ERemoteStoragePlatform  eRemoteStoragePlatform) ;

/// @brief Method SetUserPublishedFileAction, addr 0x1805b9a10, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SetUserPublishedFileAction(::Steamworks::PublishedFileId_t  unPublishedFileId, ::Steamworks::EWorkshopFileAction  eAction) ;

/// @brief Method SubscribePublishedFile, addr 0x1805b9a50, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SubscribePublishedFile(::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method UGCDownload, addr 0x1805b9b90, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UGCDownload(::Steamworks::UGCHandle_t  hContent, uint32_t  unPriority) ;

/// @brief Method UGCDownloadToLocation, addr 0x1805b9a90, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UGCDownloadToLocation(::Steamworks::UGCHandle_t  hContent, ::StringW  pchLocation, uint32_t  unPriority) ;

/// @brief Method UGCRead, addr 0x1805b9bd0, size 0x80, virtual false, abstract: false, final false
static inline int32_t UGCRead(::Steamworks::UGCHandle_t  hContent, ::ArrayW<uint8_t>  pvData, int32_t  cubDataToRead, uint32_t  cOffset, ::Steamworks::EUGCReadAction  eAction) ;

/// @brief Method UnsubscribePublishedFile, addr 0x1805b9c50, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UnsubscribePublishedFile(::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method UpdatePublishedFileDescription, addr 0x1805b9c90, size 0xf0, virtual false, abstract: false, final false
static inline bool UpdatePublishedFileDescription(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchDescription) ;

/// @brief Method UpdatePublishedFileFile, addr 0x1805b9d80, size 0xf0, virtual false, abstract: false, final false
static inline bool UpdatePublishedFileFile(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchFile) ;

/// @brief Method UpdatePublishedFilePreviewFile, addr 0x1805b9e70, size 0xf0, virtual false, abstract: false, final false
static inline bool UpdatePublishedFilePreviewFile(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchPreviewFile) ;

/// @brief Method UpdatePublishedFileSetChangeDescription, addr 0x1805b9f60, size 0xf0, virtual false, abstract: false, final false
static inline bool UpdatePublishedFileSetChangeDescription(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchChangeDescription) ;

/// @brief Method UpdatePublishedFileTags, addr 0x1805ba050, size 0x80, virtual false, abstract: false, final false
static inline bool UpdatePublishedFileTags(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::System::Collections::Generic::IList_1<::StringW>*  pTags) ;

/// @brief Method UpdatePublishedFileTitle, addr 0x1805ba0d0, size 0xf0, virtual false, abstract: false, final false
static inline bool UpdatePublishedFileTitle(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::StringW  pchTitle) ;

/// @brief Method UpdatePublishedFileVisibility, addr 0x1805ba1c0, size 0x40, virtual false, abstract: false, final false
static inline bool UpdatePublishedFileVisibility(::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility) ;

/// @brief Method UpdateUserPublishedItemVote, addr 0x1805ba200, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UpdateUserPublishedItemVote(::Steamworks::PublishedFileId_t  unPublishedFileId, bool  bVoteUp) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamRemoteStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamRemoteStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamRemoteStorage(SteamRemoteStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamRemoteStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamRemoteStorage(SteamRemoteStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamRemoteStorage) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
