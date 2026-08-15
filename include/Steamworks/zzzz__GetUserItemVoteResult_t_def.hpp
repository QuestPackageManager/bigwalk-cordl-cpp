#pragma once
// IWYU pragma private; include "Steamworks/GetUserItemVoteResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetUserItemVoteResult_t)
// Forward declare root types
namespace Steamworks {
struct GetUserItemVoteResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GetUserItemVoteResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GetUserItemVoteResult_t, "Steamworks", "GetUserItemVoteResult_t");
// Dependencies Steamworks.EResult, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GetUserItemVoteResult_t
#pragma pack(push, 8)
struct CORDL_TYPE GetUserItemVoteResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GetUserItemVoteResult_t() ;

// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_bVotedUp", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bVotedDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bVoteSkipped", ty: "bool", modifiers: "", def_value: None }]
constexpr GetUserItemVoteResult_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EResult  m_eResult, bool  m_bVotedUp, bool  m_bVotedDown, bool  m_bVoteSkipped) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd51)};

/// @brief Field m_nPublishedFileId, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_nPublishedFileId;

/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_bVotedUp, offset: 0xc, size: 0x1, def value: None
 bool  m_bVotedUp;

/// @brief Field m_bVotedDown, offset: 0xd, size: 0x1, def value: None
 bool  m_bVotedDown;

/// @brief Field m_bVoteSkipped, offset: 0xe, size: 0x1, def value: None
 bool  m_bVoteSkipped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GetUserItemVoteResult_t, m_nPublishedFileId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetUserItemVoteResult_t, m_eResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetUserItemVoteResult_t, m_bVotedUp) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetUserItemVoteResult_t, m_bVotedDown) == 0xd, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetUserItemVoteResult_t, m_bVoteSkipped) == 0xe, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GetUserItemVoteResult_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
