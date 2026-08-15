#pragma once
// IWYU pragma private; include "Steamworks/FavoritesListAccountsUpdated_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FavoritesListAccountsUpdated_t)
// Forward declare root types
namespace Steamworks {
struct FavoritesListAccountsUpdated_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FavoritesListAccountsUpdated_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FavoritesListAccountsUpdated_t, "Steamworks", "FavoritesListAccountsUpdated_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FavoritesListAccountsUpdated_t
#pragma pack(push, 8)
struct CORDL_TYPE FavoritesListAccountsUpdated_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FavoritesListAccountsUpdated_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }]
constexpr FavoritesListAccountsUpdated_t(::Steamworks::EResult  m_eResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x204)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::FavoritesListAccountsUpdated_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FavoritesListAccountsUpdated_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
