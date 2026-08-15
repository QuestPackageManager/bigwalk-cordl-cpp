#pragma once
// IWYU pragma private; include "Steamworks/SteamUGC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUGC)
namespace Steamworks {
struct AccountID_t;
}
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct DepotId_t;
}
namespace Steamworks {
struct EItemPreviewType;
}
namespace Steamworks {
struct EItemStatistic;
}
namespace Steamworks {
struct EItemUpdateStatus;
}
namespace Steamworks {
struct ERemoteStoragePublishedFileVisibility;
}
namespace Steamworks {
struct EUGCMatchingUGCType;
}
namespace Steamworks {
struct EUGCQuery;
}
namespace Steamworks {
struct EUserUGCListSortOrder;
}
namespace Steamworks {
struct EUserUGCList;
}
namespace Steamworks {
struct EWorkshopFileType;
}
namespace Steamworks {
struct PublishedFileId_t;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
struct SteamUGCDetails_t;
}
namespace Steamworks {
struct UGCQueryHandle_t;
}
namespace Steamworks {
struct UGCUpdateHandle_t;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Steamworks {
class SteamUGC;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamUGC*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUGC*, "Steamworks", "SteamUGC");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamUGC
class CORDL_TYPE SteamUGC : public ::System::Object {
public:
// Declarations
/// @brief Method AddAppDependency, addr 0x1805ba7c0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AddAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method AddDependency, addr 0x1805ba800, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AddDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID) ;

/// @brief Method AddExcludedTag, addr 0x1805ba850, size 0xf0, virtual false, abstract: false, final false
static inline bool AddExcludedTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName) ;

/// @brief Method AddItemKeyValueTag, addr 0x1805ba940, size 0x180, virtual false, abstract: false, final false
static inline bool AddItemKeyValueTag(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey, ::StringW  pchValue) ;

/// @brief Method AddItemPreviewFile, addr 0x1805baac0, size 0x100, virtual false, abstract: false, final false
static inline bool AddItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile, ::Steamworks::EItemPreviewType  type) ;

/// @brief Method AddItemPreviewVideo, addr 0x1805babc0, size 0xf0, virtual false, abstract: false, final false
static inline bool AddItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszVideoID) ;

/// @brief Method AddItemToFavorites, addr 0x1805bacb0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AddItemToFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method AddRequiredKeyValueTag, addr 0x1805bacf0, size 0x180, virtual false, abstract: false, final false
static inline bool AddRequiredKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pKey, ::StringW  pValue) ;

/// @brief Method AddRequiredTag, addr 0x1805baef0, size 0xf0, virtual false, abstract: false, final false
static inline bool AddRequiredTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName) ;

/// @brief Method AddRequiredTagGroup, addr 0x1805bae70, size 0x80, virtual false, abstract: false, final false
static inline bool AddRequiredTagGroup(::Steamworks::UGCQueryHandle_t  handle, ::System::Collections::Generic::IList_1<::StringW>*  pTagGroups) ;

/// @brief Method BInitWorkshopForGameServer, addr 0x1805bafe0, size 0xe0, virtual false, abstract: false, final false
static inline bool BInitWorkshopForGameServer(::Steamworks::DepotId_t  unWorkshopDepotID, ::StringW  pszFolder) ;

/// @brief Method CreateItem, addr 0x1805bb0c0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CreateItem(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::EWorkshopFileType  eFileType) ;

/// @brief Method CreateQueryAllUGCRequest, addr 0x1805bb180, size 0x120, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, ::StringW  pchCursor) ;

/// @brief Method CreateQueryAllUGCRequest, addr 0x1805bb100, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage) ;

/// @brief Method CreateQueryUGCDetailsRequest, addr 0x1805bb2a0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryUGCDetailsRequest(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method CreateQueryUserUGCRequest, addr 0x1805bb2f0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryUserUGCRequest(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUserUGCList  eListType, ::Steamworks::EUGCMatchingUGCType  eMatchingUGCType, ::Steamworks::EUserUGCListSortOrder  eSortOrder, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage) ;

/// @brief Method DeleteItem, addr 0x1805bb380, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t DeleteItem(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method DownloadItem, addr 0x1805bb3c0, size 0x50, virtual false, abstract: false, final false
static inline bool DownloadItem(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bHighPriority) ;

/// @brief Method GetAppDependencies, addr 0x1805bb410, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetAppDependencies(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method GetItemDownloadInfo, addr 0x1805bb450, size 0x60, virtual false, abstract: false, final false
static inline bool GetItemDownloadInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method GetItemInstallInfo, addr 0x1805bb4b0, size 0xc0, virtual false, abstract: false, final false
static inline bool GetItemInstallInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punSizeOnDisk, ::by_ref<::StringW>  pchFolder, uint32_t  cchFolderSize, ::by_ref<uint32_t>  punTimeStamp) ;

/// @brief Method GetItemState, addr 0x1805bb570, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetItemState(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method GetItemUpdateProgress, addr 0x1805bb5b0, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::EItemUpdateStatus GetItemUpdateProgress(::Steamworks::UGCUpdateHandle_t  handle, ::by_ref<uint64_t>  punBytesProcessed, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method GetNumSubscribedItems, addr 0x1805bb610, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetNumSubscribedItems() ;

/// @brief Method GetQueryUGCAdditionalPreview, addr 0x1805bb640, size 0x140, virtual false, abstract: false, final false
static inline bool GetQueryUGCAdditionalPreview(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  previewIndex, ::by_ref<::StringW>  pchURLOrVideoID, uint32_t  cchURLSize, ::by_ref<::StringW>  pchOriginalFileName, uint32_t  cchOriginalFileNameSize, ::by_ref<::Steamworks::EItemPreviewType>  pPreviewType) ;

/// @brief Method GetQueryUGCChildren, addr 0x1805bb780, size 0x70, virtual false, abstract: false, final false
static inline bool GetQueryUGCChildren(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries) ;

/// @brief Method GetQueryUGCKeyValueTag, addr 0x1805bb7f0, size 0x130, virtual false, abstract: false, final false
static inline bool GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  keyValueTagIndex, ::by_ref<::StringW>  pchKey, uint32_t  cchKeySize, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetQueryUGCKeyValueTag, addr 0x1805bb920, size 0x150, virtual false, abstract: false, final false
static inline bool GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::StringW  pchKey, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetQueryUGCMetadata, addr 0x1805bba70, size 0xb0, virtual false, abstract: false, final false
static inline bool GetQueryUGCMetadata(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchMetadata, uint32_t  cchMetadatasize) ;

/// @brief Method GetQueryUGCNumAdditionalPreviews, addr 0x1805bbb20, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetQueryUGCNumAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method GetQueryUGCNumKeyValueTags, addr 0x1805bbb60, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetQueryUGCNumKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method GetQueryUGCNumTags, addr 0x1805bbba0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetQueryUGCNumTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method GetQueryUGCPreviewURL, addr 0x1805bbbe0, size 0xb0, virtual false, abstract: false, final false
static inline bool GetQueryUGCPreviewURL(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchURL, uint32_t  cchURLSize) ;

/// @brief Method GetQueryUGCResult, addr 0x1805bbc90, size 0x60, virtual false, abstract: false, final false
static inline bool GetQueryUGCResult(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::Steamworks::SteamUGCDetails_t>  pDetails) ;

/// @brief Method GetQueryUGCStatistic, addr 0x1805bbcf0, size 0x70, virtual false, abstract: false, final false
static inline bool GetQueryUGCStatistic(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::Steamworks::EItemStatistic  eStatType, ::by_ref<uint64_t>  pStatValue) ;

/// @brief Method GetQueryUGCTag, addr 0x1805bbe30, size 0xd0, virtual false, abstract: false, final false
static inline bool GetQueryUGCTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetQueryUGCTagDisplayName, addr 0x1805bbd60, size 0xd0, virtual false, abstract: false, final false
static inline bool GetQueryUGCTagDisplayName(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetSubscribedItems, addr 0x1805bbf00, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetSubscribedItems(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries) ;

/// @brief Method GetUserItemVote, addr 0x1805bbf40, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method GetWorkshopEULAStatus, addr 0x1805bbf80, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetWorkshopEULAStatus() ;

/// @brief Method ReleaseQueryUGCRequest, addr 0x1805bbfb0, size 0x40, virtual false, abstract: false, final false
static inline bool ReleaseQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle) ;

/// @brief Method RemoveAllItemKeyValueTags, addr 0x1805bbff0, size 0x40, virtual false, abstract: false, final false
static inline bool RemoveAllItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle) ;

/// @brief Method RemoveAppDependency, addr 0x1805bc030, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RemoveAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method RemoveDependency, addr 0x1805bc070, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RemoveDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID) ;

/// @brief Method RemoveItemFromFavorites, addr 0x1805bc0c0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RemoveItemFromFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method RemoveItemKeyValueTags, addr 0x1805bc100, size 0xf0, virtual false, abstract: false, final false
static inline bool RemoveItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey) ;

/// @brief Method RemoveItemPreview, addr 0x1805bc1f0, size 0x40, virtual false, abstract: false, final false
static inline bool RemoveItemPreview(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index) ;

/// @brief Method RequestUGCDetails, addr 0x1805bc230, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestUGCDetails(::Steamworks::PublishedFileId_t  nPublishedFileID, uint32_t  unMaxAgeSeconds) ;

/// @brief Method SendQueryUGCRequest, addr 0x1805bc270, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SendQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle) ;

/// @brief Method SetAllowCachedResponse, addr 0x1805bc2b0, size 0x40, virtual false, abstract: false, final false
static inline bool SetAllowCachedResponse(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unMaxAgeSeconds) ;

/// @brief Method SetAllowLegacyUpload, addr 0x1805bc2f0, size 0x50, virtual false, abstract: false, final false
static inline bool SetAllowLegacyUpload(::Steamworks::UGCUpdateHandle_t  handle, bool  bAllowLegacyUpload) ;

/// @brief Method SetCloudFileNameFilter, addr 0x1805bc340, size 0xf0, virtual false, abstract: false, final false
static inline bool SetCloudFileNameFilter(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pMatchCloudFileName) ;

/// @brief Method SetItemContent, addr 0x1805bc430, size 0xf0, virtual false, abstract: false, final false
static inline bool SetItemContent(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszContentFolder) ;

/// @brief Method SetItemDescription, addr 0x1805bc520, size 0xf0, virtual false, abstract: false, final false
static inline bool SetItemDescription(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchDescription) ;

/// @brief Method SetItemMetadata, addr 0x1805bc610, size 0xf0, virtual false, abstract: false, final false
static inline bool SetItemMetadata(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchMetaData) ;

/// @brief Method SetItemPreview, addr 0x1805bc700, size 0xf0, virtual false, abstract: false, final false
static inline bool SetItemPreview(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile) ;

/// @brief Method SetItemTags, addr 0x1805bc7f0, size 0x80, virtual false, abstract: false, final false
static inline bool SetItemTags(::Steamworks::UGCUpdateHandle_t  updateHandle, ::System::Collections::Generic::IList_1<::StringW>*  pTags) ;

/// @brief Method SetItemTitle, addr 0x1805bc870, size 0xf0, virtual false, abstract: false, final false
static inline bool SetItemTitle(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchTitle) ;

/// @brief Method SetItemUpdateLanguage, addr 0x1805bc960, size 0xf0, virtual false, abstract: false, final false
static inline bool SetItemUpdateLanguage(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchLanguage) ;

/// @brief Method SetItemVisibility, addr 0x1805bca50, size 0x40, virtual false, abstract: false, final false
static inline bool SetItemVisibility(::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility) ;

/// @brief Method SetLanguage, addr 0x1805bca90, size 0xf0, virtual false, abstract: false, final false
static inline bool SetLanguage(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pchLanguage) ;

/// @brief Method SetMatchAnyTag, addr 0x1805bcb80, size 0x50, virtual false, abstract: false, final false
static inline bool SetMatchAnyTag(::Steamworks::UGCQueryHandle_t  handle, bool  bMatchAnyTag) ;

/// @brief Method SetRankedByTrendDays, addr 0x1805bcbd0, size 0x40, virtual false, abstract: false, final false
static inline bool SetRankedByTrendDays(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays) ;

/// @brief Method SetReturnAdditionalPreviews, addr 0x1805bcc10, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnAdditionalPreviews) ;

/// @brief Method SetReturnChildren, addr 0x1805bcc60, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnChildren(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnChildren) ;

/// @brief Method SetReturnKeyValueTags, addr 0x1805bccb0, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnKeyValueTags) ;

/// @brief Method SetReturnLongDescription, addr 0x1805bcd00, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnLongDescription(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnLongDescription) ;

/// @brief Method SetReturnMetadata, addr 0x1805bcd50, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnMetadata(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnMetadata) ;

/// @brief Method SetReturnOnlyIDs, addr 0x1805bcda0, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnOnlyIDs(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnOnlyIDs) ;

/// @brief Method SetReturnPlaytimeStats, addr 0x1805bcdf0, size 0x40, virtual false, abstract: false, final false
static inline bool SetReturnPlaytimeStats(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays) ;

/// @brief Method SetReturnTotalOnly, addr 0x1805bce30, size 0x50, virtual false, abstract: false, final false
static inline bool SetReturnTotalOnly(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnTotalOnly) ;

/// @brief Method SetSearchText, addr 0x1805bce80, size 0xf0, virtual false, abstract: false, final false
static inline bool SetSearchText(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pSearchText) ;

/// @brief Method SetTimeCreatedDateRange, addr 0x1805bcf70, size 0x60, virtual false, abstract: false, final false
static inline bool SetTimeCreatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd) ;

/// @brief Method SetTimeUpdatedDateRange, addr 0x1805bcfd0, size 0x60, virtual false, abstract: false, final false
static inline bool SetTimeUpdatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd) ;

/// @brief Method SetUserItemVote, addr 0x1805bd030, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bVoteUp) ;

/// @brief Method ShowWorkshopEULA, addr 0x1805bd080, size 0x30, virtual false, abstract: false, final false
static inline bool ShowWorkshopEULA() ;

/// @brief Method StartItemUpdate, addr 0x1805bd0b0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::UGCUpdateHandle_t StartItemUpdate(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method StartPlaytimeTracking, addr 0x1805bd100, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StartPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method StopPlaytimeTracking, addr 0x1805bd170, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StopPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method StopPlaytimeTrackingForAllItems, addr 0x1805bd140, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StopPlaytimeTrackingForAllItems() ;

/// @brief Method SubmitItemUpdate, addr 0x1805bd1b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SubmitItemUpdate(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchChangeNote) ;

/// @brief Method SubscribeItem, addr 0x1805bd2a0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method SuspendDownloads, addr 0x1805bd2e0, size 0x40, virtual false, abstract: false, final false
static inline void SuspendDownloads(bool  bSuspend) ;

/// @brief Method UnsubscribeItem, addr 0x1805bd320, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UnsubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method UpdateItemPreviewFile, addr 0x1805bd360, size 0x100, virtual false, abstract: false, final false
static inline bool UpdateItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszPreviewFile) ;

/// @brief Method UpdateItemPreviewVideo, addr 0x1805bd460, size 0x100, virtual false, abstract: false, final false
static inline bool UpdateItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszVideoID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamUGC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamUGC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamUGC(SteamUGC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamUGC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamUGC(SteamUGC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamUGC) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
