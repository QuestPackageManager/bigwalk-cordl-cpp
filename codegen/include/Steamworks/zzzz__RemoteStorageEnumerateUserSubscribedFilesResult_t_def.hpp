#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageEnumerateUserSubscribedFilesResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageEnumerateUserSubscribedFilesResult_t)
namespace Steamworks {
struct PublishedFileId_t;
}
// Forward declare root types
namespace Steamworks {
struct RemoteStorageEnumerateUserSubscribedFilesResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t, "Steamworks", "RemoteStorageEnumerateUserSubscribedFilesResult_t");
// Dependencies Steamworks.EResult, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageEnumerateUserSubscribedFilesResult_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageEnumerateUserSubscribedFilesResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageEnumerateUserSubscribedFilesResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nResultsReturned", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nTotalResultCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_rgPublishedFileId", ty: "::ArrayW<::Steamworks::PublishedFileId_t>", modifiers: "", def_value: None }, CppParam { name: "m_rgRTimeSubscribed", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr RemoteStorageEnumerateUserSubscribedFilesResult_t(::Steamworks::EResult  m_eResult, int32_t  m_nResultsReturned, int32_t  m_nTotalResultCount, ::ArrayW<::Steamworks::PublishedFileId_t>  m_rgPublishedFileId, ::ArrayW<uint32_t>  m_rgRTimeSubscribed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16160};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x522)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nResultsReturned, offset: 0x4, size: 0x4, def value: None
 int32_t  m_nResultsReturned;

/// @brief Field m_nTotalResultCount, offset: 0x8, size: 0x4, def value: None
 int32_t  m_nTotalResultCount;

/// @brief Field m_rgPublishedFileId, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Steamworks::PublishedFileId_t>  m_rgPublishedFileId;

/// @brief Field m_rgRTimeSubscribed, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  m_rgRTimeSubscribed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t, m_nResultsReturned) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t, m_nTotalResultCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t, m_rgPublishedFileId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t, m_rgRTimeSubscribed) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageEnumerateUserSubscribedFilesResult_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
