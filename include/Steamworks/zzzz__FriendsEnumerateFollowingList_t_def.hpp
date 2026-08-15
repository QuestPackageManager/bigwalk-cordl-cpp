#pragma once
// IWYU pragma private; include "Steamworks/FriendsEnumerateFollowingList_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsEnumerateFollowingList_t)
namespace Steamworks {
struct CSteamID;
}
// Forward declare root types
namespace Steamworks {
struct FriendsEnumerateFollowingList_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FriendsEnumerateFollowingList_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FriendsEnumerateFollowingList_t, "Steamworks", "FriendsEnumerateFollowingList_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FriendsEnumerateFollowingList_t
#pragma pack(push, 4)
struct CORDL_TYPE FriendsEnumerateFollowingList_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendsEnumerateFollowingList_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_rgSteamID", ty: "::ArrayW<::Steamworks::CSteamID>", modifiers: "", def_value: None }, CppParam { name: "m_nResultsReturned", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nTotalResultCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FriendsEnumerateFollowingList_t(::Steamworks::EResult  m_eResult, ::ArrayW<::Steamworks::CSteamID>  m_rgSteamID, int32_t  m_nResultsReturned, int32_t  m_nTotalResultCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x15a)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_rgSteamID, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Steamworks::CSteamID>  m_rgSteamID;

/// @brief Field m_nResultsReturned, offset: 0x10, size: 0x4, def value: None
 int32_t  m_nResultsReturned;

/// @brief Field m_nTotalResultCount, offset: 0x14, size: 0x4, def value: None
 int32_t  m_nTotalResultCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::FriendsEnumerateFollowingList_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendsEnumerateFollowingList_t, m_rgSteamID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendsEnumerateFollowingList_t, m_nResultsReturned) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendsEnumerateFollowingList_t, m_nTotalResultCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FriendsEnumerateFollowingList_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
