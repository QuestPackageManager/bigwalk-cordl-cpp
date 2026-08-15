#pragma once
// IWYU pragma private; include "Steamworks/SteamUGCRequestUGCDetailsResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamUGCDetails_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUGCRequestUGCDetailsResult_t)
// Forward declare root types
namespace Steamworks {
struct SteamUGCRequestUGCDetailsResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamUGCRequestUGCDetailsResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUGCRequestUGCDetailsResult_t, "Steamworks", "SteamUGCRequestUGCDetailsResult_t");
// Dependencies Steamworks.SteamUGCDetails_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamUGCRequestUGCDetailsResult_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamUGCRequestUGCDetailsResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamUGCRequestUGCDetailsResult_t() ;

// Ctor Parameters [CppParam { name: "m_details", ty: "::Steamworks::SteamUGCDetails_t", modifiers: "", def_value: None }, CppParam { name: "m_bCachedData", ty: "bool", modifiers: "", def_value: None }]
constexpr SteamUGCRequestUGCDetailsResult_t(::Steamworks::SteamUGCDetails_t  m_details, bool  m_bCachedData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd4a)};

/// @brief Field m_details, offset: 0x0, size: 0x88, def value: None
 ::Steamworks::SteamUGCDetails_t  m_details;

/// @brief Field m_bCachedData, offset: 0x88, size: 0x1, def value: None
 bool  m_bCachedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamUGCRequestUGCDetailsResult_t, m_details) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamUGCRequestUGCDetailsResult_t, m_bCachedData) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamUGCRequestUGCDetailsResult_t) == 0x90, "Size mismatch!");

} // namespace end def Steamworks
