#pragma once
// IWYU pragma private; include "Steamworks/ComputeNewPlayerCompatibilityResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeNewPlayerCompatibilityResult_t)
// Forward declare root types
namespace Steamworks {
struct ComputeNewPlayerCompatibilityResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::ComputeNewPlayerCompatibilityResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::ComputeNewPlayerCompatibilityResult_t, "Steamworks", "ComputeNewPlayerCompatibilityResult_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ComputeNewPlayerCompatibilityResult_t
#pragma pack(push, 8)
struct CORDL_TYPE ComputeNewPlayerCompatibilityResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ComputeNewPlayerCompatibilityResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_cPlayersThatDontLikeCandidate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cPlayersThatCandidateDoesntLike", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cClanPlayersThatDontLikeCandidate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SteamIDCandidate", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr ComputeNewPlayerCompatibilityResult_t(::Steamworks::EResult  m_eResult, int32_t  m_cPlayersThatDontLikeCandidate, int32_t  m_cPlayersThatCandidateDoesntLike, int32_t  m_cClanPlayersThatDontLikeCandidate, ::Steamworks::CSteamID  m_SteamIDCandidate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd3)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_cPlayersThatDontLikeCandidate, offset: 0x4, size: 0x4, def value: None
 int32_t  m_cPlayersThatDontLikeCandidate;

/// @brief Field m_cPlayersThatCandidateDoesntLike, offset: 0x8, size: 0x4, def value: None
 int32_t  m_cPlayersThatCandidateDoesntLike;

/// @brief Field m_cClanPlayersThatDontLikeCandidate, offset: 0xc, size: 0x4, def value: None
 int32_t  m_cClanPlayersThatDontLikeCandidate;

/// @brief Field m_SteamIDCandidate, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamIDCandidate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::ComputeNewPlayerCompatibilityResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ComputeNewPlayerCompatibilityResult_t, m_cPlayersThatDontLikeCandidate) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ComputeNewPlayerCompatibilityResult_t, m_cPlayersThatCandidateDoesntLike) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ComputeNewPlayerCompatibilityResult_t, m_cClanPlayersThatDontLikeCandidate) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ComputeNewPlayerCompatibilityResult_t, m_SteamIDCandidate) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ComputeNewPlayerCompatibilityResult_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
