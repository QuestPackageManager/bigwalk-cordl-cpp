#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageDownloadUGCResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__UGCHandle_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageDownloadUGCResult_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageDownloadUGCResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageDownloadUGCResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageDownloadUGCResult_t, "Steamworks", "RemoteStorageDownloadUGCResult_t");
// Dependencies Steamworks.AppId_t, Steamworks.EResult, Steamworks.UGCHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageDownloadUGCResult_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageDownloadUGCResult_t {
public:
// Declarations
 __declspec(property(get=get_m_pchFileName, put=set_m_pchFileName)) ::StringW  m_pchFileName;

/// @brief Method get_m_pchFileName, addr 0x180552c10, size 0x1e0, virtual false, abstract: false, final false
inline ::StringW get_m_pchFileName() ;

/// @brief Method set_m_pchFileName, addr 0x18057e9f0, size 0x32a0, virtual false, abstract: false, final false
inline void set_m_pchFileName(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageDownloadUGCResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_hFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_nSizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_pchFileName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDOwner", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr RemoteStorageDownloadUGCResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::UGCHandle_t  m_hFile, ::Steamworks::AppId_t  m_nAppID, int32_t  m_nSizeInBytes, ::ArrayW<uint8_t>  m_pchFileName_, uint64_t  m_ulSteamIDOwner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x525)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_hFile, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::UGCHandle_t  m_hFile;

/// @brief Field m_nAppID, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

/// @brief Field m_nSizeInBytes, offset: 0x14, size: 0x4, def value: None
 int32_t  m_nSizeInBytes;

/// @brief Field m_pchFileName_, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_pchFileName_;

/// @brief Field m_ulSteamIDOwner, offset: 0x20, size: 0x8, def value: None
 uint64_t  m_ulSteamIDOwner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageDownloadUGCResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageDownloadUGCResult_t, m_hFile) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageDownloadUGCResult_t, m_nAppID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageDownloadUGCResult_t, m_nSizeInBytes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageDownloadUGCResult_t, m_pchFileName_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageDownloadUGCResult_t, m_ulSteamIDOwner) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageDownloadUGCResult_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
