#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerUGC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerUGC)
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
class SteamGameServerUGC;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerUGC*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerUGC*, "Steamworks", "SteamGameServerUGC");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerUGC
class CORDL_TYPE SteamGameServerUGC : public ::System::Object {
public:
// Declarations
/// @brief Method AddAppDependency, addr 0x18059b1c0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AddAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method AddDependency, addr 0x18059b2b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AddDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID) ;

/// @brief Method AddExcludedTag, addr 0x18059b3a0, size 0x1e0, virtual false, abstract: false, final false
static inline bool AddExcludedTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName) ;

/// @brief Method AddItemKeyValueTag, addr 0x18059b580, size 0x2b0, virtual false, abstract: false, final false
static inline bool AddItemKeyValueTag(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey, ::StringW  pchValue) ;

/// @brief Method AddItemPreviewFile, addr 0x18059b830, size 0x1e0, virtual false, abstract: false, final false
static inline bool AddItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile, ::Steamworks::EItemPreviewType  type) ;

/// @brief Method AddItemPreviewVideo, addr 0x18059ba10, size 0x1e0, virtual false, abstract: false, final false
static inline bool AddItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszVideoID) ;

/// @brief Method AddItemToFavorites, addr 0x18059bbf0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AddItemToFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method AddRequiredKeyValueTag, addr 0x18059bce0, size 0x2b0, virtual false, abstract: false, final false
static inline bool AddRequiredKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pKey, ::StringW  pValue) ;

/// @brief Method AddRequiredTag, addr 0x18059c0a0, size 0x1e0, virtual false, abstract: false, final false
static inline bool AddRequiredTag(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pTagName) ;

/// @brief Method AddRequiredTagGroup, addr 0x18059bf90, size 0x110, virtual false, abstract: false, final false
static inline bool AddRequiredTagGroup(::Steamworks::UGCQueryHandle_t  handle, ::System::Collections::Generic::IList_1<::StringW>*  pTagGroups) ;

/// @brief Method BInitWorkshopForGameServer, addr 0x18059c280, size 0x1e0, virtual false, abstract: false, final false
static inline bool BInitWorkshopForGameServer(::Steamworks::DepotId_t  unWorkshopDepotID, ::StringW  pszFolder) ;

/// @brief Method CreateItem, addr 0x18059c460, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CreateItem(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::EWorkshopFileType  eFileType) ;

/// @brief Method CreateQueryAllUGCRequest, addr 0x18059c670, size 0x210, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, ::StringW  pchCursor) ;

/// @brief Method CreateQueryAllUGCRequest, addr 0x18059c550, size 0x120, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryAllUGCRequest(::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage) ;

/// @brief Method CreateQueryUGCDetailsRequest, addr 0x18059c880, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryUGCDetailsRequest(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method CreateQueryUserUGCRequest, addr 0x18059c970, size 0x130, virtual false, abstract: false, final false
static inline ::Steamworks::UGCQueryHandle_t CreateQueryUserUGCRequest(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUserUGCList  eListType, ::Steamworks::EUGCMatchingUGCType  eMatchingUGCType, ::Steamworks::EUserUGCListSortOrder  eSortOrder, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage) ;

/// @brief Method DeleteItem, addr 0x18059caa0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t DeleteItem(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method DownloadItem, addr 0x18059cb80, size 0xf0, virtual false, abstract: false, final false
static inline bool DownloadItem(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bHighPriority) ;

/// @brief Method GetAppDependencies, addr 0x18059cc70, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetAppDependencies(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method GetItemDownloadInfo, addr 0x18059cd50, size 0xf0, virtual false, abstract: false, final false
static inline bool GetItemDownloadInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method GetItemInstallInfo, addr 0x18059ce40, size 0x160, virtual false, abstract: false, final false
static inline bool GetItemInstallInfo(::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punSizeOnDisk, ::by_ref<::StringW>  pchFolder, uint32_t  cchFolderSize, ::by_ref<uint32_t>  punTimeStamp) ;

/// @brief Method GetItemState, addr 0x18059cfa0, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetItemState(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method GetItemUpdateProgress, addr 0x18059d070, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::EItemUpdateStatus GetItemUpdateProgress(::Steamworks::UGCUpdateHandle_t  handle, ::by_ref<uint64_t>  punBytesProcessed, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method GetNumSubscribedItems, addr 0x18059d160, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetNumSubscribedItems() ;

/// @brief Method GetQueryUGCAdditionalPreview, addr 0x18059d230, size 0x1f0, virtual false, abstract: false, final false
static inline bool GetQueryUGCAdditionalPreview(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  previewIndex, ::by_ref<::StringW>  pchURLOrVideoID, uint32_t  cchURLSize, ::by_ref<::StringW>  pchOriginalFileName, uint32_t  cchOriginalFileNameSize, ::by_ref<::Steamworks::EItemPreviewType>  pPreviewType) ;

/// @brief Method GetQueryUGCChildren, addr 0x18059d420, size 0x110, virtual false, abstract: false, final false
static inline bool GetQueryUGCChildren(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries) ;

/// @brief Method GetQueryUGCKeyValueTag, addr 0x18059d770, size 0x1e0, virtual false, abstract: false, final false
static inline bool GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  keyValueTagIndex, ::by_ref<::StringW>  pchKey, uint32_t  cchKeySize, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetQueryUGCKeyValueTag, addr 0x18059d530, size 0x240, virtual false, abstract: false, final false
static inline bool GetQueryUGCKeyValueTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::StringW  pchKey, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetQueryUGCMetadata, addr 0x18059d950, size 0x150, virtual false, abstract: false, final false
static inline bool GetQueryUGCMetadata(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchMetadata, uint32_t  cchMetadatasize) ;

/// @brief Method GetQueryUGCNumAdditionalPreviews, addr 0x18059daa0, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t GetQueryUGCNumAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method GetQueryUGCNumKeyValueTags, addr 0x18059db80, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t GetQueryUGCNumKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method GetQueryUGCNumTags, addr 0x18059dc60, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t GetQueryUGCNumTags(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method GetQueryUGCPreviewURL, addr 0x18059dd40, size 0x150, virtual false, abstract: false, final false
static inline bool GetQueryUGCPreviewURL(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::StringW>  pchURL, uint32_t  cchURLSize) ;

/// @brief Method GetQueryUGCResult, addr 0x18059de90, size 0x90, virtual false, abstract: false, final false
static inline bool GetQueryUGCResult(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::Steamworks::SteamUGCDetails_t>  pDetails) ;

/// @brief Method GetQueryUGCStatistic, addr 0x18059df20, size 0x110, virtual false, abstract: false, final false
static inline bool GetQueryUGCStatistic(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::Steamworks::EItemStatistic  eStatType, ::by_ref<uint64_t>  pStatValue) ;

/// @brief Method GetQueryUGCTag, addr 0x18059e1a0, size 0x170, virtual false, abstract: false, final false
static inline bool GetQueryUGCTag(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetQueryUGCTagDisplayName, addr 0x18059e030, size 0x170, virtual false, abstract: false, final false
static inline bool GetQueryUGCTagDisplayName(::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::by_ref<::StringW>  pchValue, uint32_t  cchValueSize) ;

/// @brief Method GetSubscribedItems, addr 0x18059e310, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t GetSubscribedItems(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  cMaxEntries) ;

/// @brief Method GetUserItemVote, addr 0x18059e400, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method GetWorkshopEULAStatus, addr 0x18059e4e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetWorkshopEULAStatus() ;

/// @brief Method ReleaseQueryUGCRequest, addr 0x18059e5b0, size 0xe0, virtual false, abstract: false, final false
static inline bool ReleaseQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle) ;

/// @brief Method RemoveAllItemKeyValueTags, addr 0x18059e690, size 0xe0, virtual false, abstract: false, final false
static inline bool RemoveAllItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle) ;

/// @brief Method RemoveAppDependency, addr 0x18059e770, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RemoveAppDependency(::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method RemoveDependency, addr 0x18059e860, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RemoveDependency(::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID) ;

/// @brief Method RemoveItemFromFavorites, addr 0x18059e950, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RemoveItemFromFavorites(::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method RemoveItemKeyValueTags, addr 0x18059ea40, size 0x1e0, virtual false, abstract: false, final false
static inline bool RemoveItemKeyValueTags(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchKey) ;

/// @brief Method RemoveItemPreview, addr 0x18059ec20, size 0xe0, virtual false, abstract: false, final false
static inline bool RemoveItemPreview(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index) ;

/// @brief Method RequestUGCDetails, addr 0x18059ed00, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestUGCDetails(::Steamworks::PublishedFileId_t  nPublishedFileID, uint32_t  unMaxAgeSeconds) ;

/// @brief Method SendQueryUGCRequest, addr 0x18059edf0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SendQueryUGCRequest(::Steamworks::UGCQueryHandle_t  handle) ;

/// @brief Method SetAllowCachedResponse, addr 0x18059eed0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetAllowCachedResponse(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unMaxAgeSeconds) ;

/// @brief Method SetAllowLegacyUpload, addr 0x18059efb0, size 0xf0, virtual false, abstract: false, final false
static inline bool SetAllowLegacyUpload(::Steamworks::UGCUpdateHandle_t  handle, bool  bAllowLegacyUpload) ;

/// @brief Method SetCloudFileNameFilter, addr 0x18059f0a0, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetCloudFileNameFilter(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pMatchCloudFileName) ;

/// @brief Method SetItemContent, addr 0x18059f280, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetItemContent(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszContentFolder) ;

/// @brief Method SetItemDescription, addr 0x18059f460, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetItemDescription(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchDescription) ;

/// @brief Method SetItemMetadata, addr 0x18059f640, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetItemMetadata(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchMetaData) ;

/// @brief Method SetItemPreview, addr 0x18059f820, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetItemPreview(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pszPreviewFile) ;

/// @brief Method SetItemTags, addr 0x18059fa00, size 0x110, virtual false, abstract: false, final false
static inline bool SetItemTags(::Steamworks::UGCUpdateHandle_t  updateHandle, ::System::Collections::Generic::IList_1<::StringW>*  pTags) ;

/// @brief Method SetItemTitle, addr 0x18059fb10, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetItemTitle(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchTitle) ;

/// @brief Method SetItemUpdateLanguage, addr 0x18059fcf0, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetItemUpdateLanguage(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchLanguage) ;

/// @brief Method SetItemVisibility, addr 0x18059fed0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetItemVisibility(::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility) ;

/// @brief Method SetLanguage, addr 0x18059ffb0, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetLanguage(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pchLanguage) ;

/// @brief Method SetMatchAnyTag, addr 0x1805a0190, size 0xf0, virtual false, abstract: false, final false
static inline bool SetMatchAnyTag(::Steamworks::UGCQueryHandle_t  handle, bool  bMatchAnyTag) ;

/// @brief Method SetRankedByTrendDays, addr 0x1805a0280, size 0xe0, virtual false, abstract: false, final false
static inline bool SetRankedByTrendDays(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays) ;

/// @brief Method SetReturnAdditionalPreviews, addr 0x1805a0360, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnAdditionalPreviews(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnAdditionalPreviews) ;

/// @brief Method SetReturnChildren, addr 0x1805a0450, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnChildren(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnChildren) ;

/// @brief Method SetReturnKeyValueTags, addr 0x1805a0540, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnKeyValueTags(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnKeyValueTags) ;

/// @brief Method SetReturnLongDescription, addr 0x1805a0630, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnLongDescription(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnLongDescription) ;

/// @brief Method SetReturnMetadata, addr 0x1805a0720, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnMetadata(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnMetadata) ;

/// @brief Method SetReturnOnlyIDs, addr 0x1805a0810, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnOnlyIDs(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnOnlyIDs) ;

/// @brief Method SetReturnPlaytimeStats, addr 0x1805a0900, size 0xe0, virtual false, abstract: false, final false
static inline bool SetReturnPlaytimeStats(::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays) ;

/// @brief Method SetReturnTotalOnly, addr 0x1805a09e0, size 0xf0, virtual false, abstract: false, final false
static inline bool SetReturnTotalOnly(::Steamworks::UGCQueryHandle_t  handle, bool  bReturnTotalOnly) ;

/// @brief Method SetSearchText, addr 0x1805a0ad0, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetSearchText(::Steamworks::UGCQueryHandle_t  handle, ::StringW  pSearchText) ;

/// @brief Method SetTimeCreatedDateRange, addr 0x1805a0cb0, size 0xf0, virtual false, abstract: false, final false
static inline bool SetTimeCreatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd) ;

/// @brief Method SetTimeUpdatedDateRange, addr 0x1805a0da0, size 0xf0, virtual false, abstract: false, final false
static inline bool SetTimeUpdatedDateRange(::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd) ;

/// @brief Method SetUserItemVote, addr 0x1805a0e90, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SetUserItemVote(::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bVoteUp) ;

/// @brief Method ShowWorkshopEULA, addr 0x1805a0f80, size 0xd0, virtual false, abstract: false, final false
static inline bool ShowWorkshopEULA() ;

/// @brief Method StartItemUpdate, addr 0x1805a1050, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::UGCUpdateHandle_t StartItemUpdate(::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method StartPlaytimeTracking, addr 0x1805a1140, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StartPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method StopPlaytimeTracking, addr 0x1805a1300, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StopPlaytimeTracking(::ArrayW<::Steamworks::PublishedFileId_t>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method StopPlaytimeTrackingForAllItems, addr 0x1805a1230, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t StopPlaytimeTrackingForAllItems() ;

/// @brief Method SubmitItemUpdate, addr 0x1805a13f0, size 0x1f0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SubmitItemUpdate(::Steamworks::UGCUpdateHandle_t  handle, ::StringW  pchChangeNote) ;

/// @brief Method SubscribeItem, addr 0x1805a15e0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t SubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method SuspendDownloads, addr 0x1805a16c0, size 0xd0, virtual false, abstract: false, final false
static inline void SuspendDownloads(bool  bSuspend) ;

/// @brief Method UnsubscribeItem, addr 0x1805a1790, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t UnsubscribeItem(::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method UpdateItemPreviewFile, addr 0x1805a1870, size 0x1e0, virtual false, abstract: false, final false
static inline bool UpdateItemPreviewFile(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszPreviewFile) ;

/// @brief Method UpdateItemPreviewVideo, addr 0x1805a1a50, size 0x1e0, virtual false, abstract: false, final false
static inline bool UpdateItemPreviewVideo(::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::StringW  pszVideoID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerUGC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerUGC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerUGC(SteamGameServerUGC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerUGC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerUGC(SteamGameServerUGC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerUGC) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
