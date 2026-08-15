#pragma once
// IWYU pragma private; include "Steamworks/SteamUGCQueryCompleted_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__UGCQueryHandle_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUGCQueryCompleted_t)
// Forward declare root types
namespace Steamworks {
struct SteamUGCQueryCompleted_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamUGCQueryCompleted_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUGCQueryCompleted_t, "Steamworks", "SteamUGCQueryCompleted_t");
// Dependencies Steamworks.EResult, Steamworks.UGCQueryHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamUGCQueryCompleted_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamUGCQueryCompleted_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchNextCursor, put=set_m_rgchNextCursor)) ::StringW  m_rgchNextCursor;

/// @brief Method get_m_rgchNextCursor, addr 0x180552c10, size 0x1e0, virtual false, abstract: false, final false
inline ::StringW get_m_rgchNextCursor() ;

/// @brief Method set_m_rgchNextCursor, addr 0x18054f680, size 0x1d0, virtual false, abstract: false, final false
inline void set_m_rgchNextCursor(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamUGCQueryCompleted_t() ;

// Ctor Parameters [CppParam { name: "m_handle", ty: "::Steamworks::UGCQueryHandle_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_unNumResultsReturned", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_unTotalMatchingResults", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_bCachedData", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_rgchNextCursor_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamUGCQueryCompleted_t(::Steamworks::UGCQueryHandle_t  m_handle, ::Steamworks::EResult  m_eResult, uint32_t  m_unNumResultsReturned, uint32_t  m_unTotalMatchingResults, bool  m_bCachedData, ::ArrayW<uint8_t>  m_rgchNextCursor_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd49)};

/// @brief Field m_handle, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::UGCQueryHandle_t  m_handle;

/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_unNumResultsReturned, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_unNumResultsReturned;

/// @brief Field m_unTotalMatchingResults, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_unTotalMatchingResults;

/// @brief Field m_bCachedData, offset: 0x14, size: 0x1, def value: None
 bool  m_bCachedData;

/// @brief Field m_rgchNextCursor_, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchNextCursor_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamUGCQueryCompleted_t, m_handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamUGCQueryCompleted_t, m_eResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamUGCQueryCompleted_t, m_unNumResultsReturned) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamUGCQueryCompleted_t, m_unTotalMatchingResults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamUGCQueryCompleted_t, m_bCachedData) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamUGCQueryCompleted_t, m_rgchNextCursor_) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamUGCQueryCompleted_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
