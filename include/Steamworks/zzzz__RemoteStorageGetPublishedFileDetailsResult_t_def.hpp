#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageGetPublishedFileDetailsResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__ERemoteStoragePublishedFileVisibility_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__EWorkshopFileType_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "Steamworks/zzzz__UGCHandle_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageGetPublishedFileDetailsResult_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageGetPublishedFileDetailsResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, "Steamworks", "RemoteStorageGetPublishedFileDetailsResult_t");
// Dependencies Steamworks.AppId_t, Steamworks.ERemoteStoragePublishedFileVisibility, Steamworks.EResult, Steamworks.EWorkshopFileType, Steamworks.PublishedFileId_t, Steamworks.UGCHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageGetPublishedFileDetailsResult_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageGetPublishedFileDetailsResult_t {
public:
// Declarations
 __declspec(property(get=get_m_pchFileName, put=set_m_pchFileName)) ::StringW  m_pchFileName;

 __declspec(property(get=get_m_rgchDescription, put=set_m_rgchDescription)) ::StringW  m_rgchDescription;

 __declspec(property(get=get_m_rgchTags, put=set_m_rgchTags)) ::StringW  m_rgchTags;

 __declspec(property(get=get_m_rgchTitle, put=set_m_rgchTitle)) ::StringW  m_rgchTitle;

 __declspec(property(get=get_m_rgchURL, put=set_m_rgchURL)) ::StringW  m_rgchURL;

/// @brief Method get_m_pchFileName, addr 0x180581c90, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_pchFileName() ;

/// @brief Method get_m_rgchDescription, addr 0x180581d10, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchDescription() ;

/// @brief Method get_m_rgchTags, addr 0x180581d90, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchTags() ;

/// @brief Method get_m_rgchTitle, addr 0x180552c10, size 0x1e0, virtual false, abstract: false, final false
inline ::StringW get_m_rgchTitle() ;

/// @brief Method get_m_rgchURL, addr 0x180581e10, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchURL() ;

/// @brief Method set_m_pchFileName, addr 0x18057e9f0, size 0x32a0, virtual false, abstract: false, final false
inline void set_m_pchFileName(::StringW  value) ;

/// @brief Method set_m_rgchDescription, addr 0x180581e90, size 0x90, virtual false, abstract: false, final false
inline void set_m_rgchDescription(::StringW  value) ;

/// @brief Method set_m_rgchTags, addr 0x180581f20, size 0x90, virtual false, abstract: false, final false
inline void set_m_rgchTags(::StringW  value) ;

/// @brief Method set_m_rgchTitle, addr 0x180581fb0, size 0x7a0, virtual false, abstract: false, final false
inline void set_m_rgchTitle(::StringW  value) ;

/// @brief Method set_m_rgchURL, addr 0x18054f680, size 0x1d0, virtual false, abstract: false, final false
inline void set_m_rgchURL(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageGetPublishedFileDetailsResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }, CppParam { name: "m_nCreatorAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_nConsumerAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_rgchTitle_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_rgchDescription_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_hFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: None }, CppParam { name: "m_hPreviewFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDOwner", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_rtimeCreated", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_rtimeUpdated", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_eVisibility", ty: "::Steamworks::ERemoteStoragePublishedFileVisibility", modifiers: "", def_value: None }, CppParam { name: "m_bBanned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_rgchTags_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_bTagsTruncated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_pchFileName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_nFileSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nPreviewFileSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_rgchURL_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_eFileType", ty: "::Steamworks::EWorkshopFileType", modifiers: "", def_value: None }, CppParam { name: "m_bAcceptedForUse", ty: "bool", modifiers: "", def_value: None }]
constexpr RemoteStorageGetPublishedFileDetailsResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::AppId_t  m_nCreatorAppID, ::Steamworks::AppId_t  m_nConsumerAppID, ::ArrayW<uint8_t>  m_rgchTitle_, ::ArrayW<uint8_t>  m_rgchDescription_, ::Steamworks::UGCHandle_t  m_hFile, ::Steamworks::UGCHandle_t  m_hPreviewFile, uint64_t  m_ulSteamIDOwner, uint32_t  m_rtimeCreated, uint32_t  m_rtimeUpdated, ::Steamworks::ERemoteStoragePublishedFileVisibility  m_eVisibility, bool  m_bBanned, ::ArrayW<uint8_t>  m_rgchTags_, bool  m_bTagsTruncated, ::ArrayW<uint8_t>  m_pchFileName_, int32_t  m_nFileSize, int32_t  m_nPreviewFileSize, ::ArrayW<uint8_t>  m_rgchURL_, ::Steamworks::EWorkshopFileType  m_eFileType, bool  m_bAcceptedForUse) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x526)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nPublishedFileId, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_nPublishedFileId;

/// @brief Field m_nCreatorAppID, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nCreatorAppID;

/// @brief Field m_nConsumerAppID, offset: 0x14, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nConsumerAppID;

/// @brief Field m_rgchTitle_, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchTitle_;

/// @brief Field m_rgchDescription_, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchDescription_;

/// @brief Field m_hFile, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::UGCHandle_t  m_hFile;

/// @brief Field m_hPreviewFile, offset: 0x30, size: 0x8, def value: None
 ::Steamworks::UGCHandle_t  m_hPreviewFile;

/// @brief Field m_ulSteamIDOwner, offset: 0x38, size: 0x8, def value: None
 uint64_t  m_ulSteamIDOwner;

/// @brief Field m_rtimeCreated, offset: 0x40, size: 0x4, def value: None
 uint32_t  m_rtimeCreated;

/// @brief Field m_rtimeUpdated, offset: 0x44, size: 0x4, def value: None
 uint32_t  m_rtimeUpdated;

/// @brief Field m_eVisibility, offset: 0x48, size: 0x4, def value: None
 ::Steamworks::ERemoteStoragePublishedFileVisibility  m_eVisibility;

/// @brief Field m_bBanned, offset: 0x4c, size: 0x1, def value: None
 bool  m_bBanned;

/// @brief Field m_rgchTags_, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchTags_;

/// @brief Field m_bTagsTruncated, offset: 0x58, size: 0x1, def value: None
 bool  m_bTagsTruncated;

/// @brief Field m_pchFileName_, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_pchFileName_;

/// @brief Field m_nFileSize, offset: 0x68, size: 0x4, def value: None
 int32_t  m_nFileSize;

/// @brief Field m_nPreviewFileSize, offset: 0x6c, size: 0x4, def value: None
 int32_t  m_nPreviewFileSize;

/// @brief Field m_rgchURL_, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchURL_;

/// @brief Field m_eFileType, offset: 0x78, size: 0x4, def value: None
 ::Steamworks::EWorkshopFileType  m_eFileType;

/// @brief Field m_bAcceptedForUse, offset: 0x7c, size: 0x1, def value: None
 bool  m_bAcceptedForUse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_nPublishedFileId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_nCreatorAppID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_nConsumerAppID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_rgchTitle_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_rgchDescription_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_hFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_hPreviewFile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_ulSteamIDOwner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_rtimeCreated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_rtimeUpdated) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_eVisibility) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_bBanned) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_rgchTags_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_bTagsTruncated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_pchFileName_) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_nFileSize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_nPreviewFileSize) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_rgchURL_) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_eFileType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t, m_bAcceptedForUse) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageGetPublishedFileDetailsResult_t) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
