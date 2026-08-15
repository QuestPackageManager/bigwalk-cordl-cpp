#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageGetPublishedItemVoteDetailsResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageGetPublishedItemVoteDetailsResult_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageGetPublishedItemVoteDetailsResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, "Steamworks", "RemoteStorageGetPublishedItemVoteDetailsResult_t");
// Dependencies Steamworks.EResult, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageGetPublishedItemVoteDetailsResult_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageGetPublishedItemVoteDetailsResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageGetPublishedItemVoteDetailsResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_unPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }, CppParam { name: "m_nVotesFor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nVotesAgainst", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nReports", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_fScore", ty: "float_t", modifiers: "", def_value: None }]
constexpr RemoteStorageGetPublishedItemVoteDetailsResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_unPublishedFileId, int32_t  m_nVotesFor, int32_t  m_nVotesAgainst, int32_t  m_nReports, float_t  m_fScore) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16166};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x528)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_unPublishedFileId, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_unPublishedFileId;

/// @brief Field m_nVotesFor, offset: 0x10, size: 0x4, def value: None
 int32_t  m_nVotesFor;

/// @brief Field m_nVotesAgainst, offset: 0x14, size: 0x4, def value: None
 int32_t  m_nVotesAgainst;

/// @brief Field m_nReports, offset: 0x18, size: 0x4, def value: None
 int32_t  m_nReports;

/// @brief Field m_fScore, offset: 0x1c, size: 0x4, def value: None
 float_t  m_fScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, m_unPublishedFileId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, m_nVotesFor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, m_nVotesAgainst) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, m_nReports) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t, m_fScore) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
