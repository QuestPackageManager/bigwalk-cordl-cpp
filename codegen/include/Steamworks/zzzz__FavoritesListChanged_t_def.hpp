#pragma once
// IWYU pragma private; include "Steamworks/FavoritesListChanged_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AccountID_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FavoritesListChanged_t)
// Forward declare root types
namespace Steamworks {
struct FavoritesListChanged_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FavoritesListChanged_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FavoritesListChanged_t, "Steamworks", "FavoritesListChanged_t");
// Dependencies Steamworks.AccountID_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FavoritesListChanged_t
#pragma pack(push, 8)
struct CORDL_TYPE FavoritesListChanged_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FavoritesListChanged_t() ;

// Ctor Parameters [CppParam { name: "m_nIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nQueryPort", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nConnPort", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_bAdd", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_unAccountId", ty: "::Steamworks::AccountID_t", modifiers: "", def_value: None }]
constexpr FavoritesListChanged_t(uint32_t  m_nIP, uint32_t  m_nQueryPort, uint32_t  m_nConnPort, uint32_t  m_nAppID, uint32_t  m_nFlags, bool  m_bAdd, ::Steamworks::AccountID_t  m_unAccountId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1f6)};

/// @brief Field m_nIP, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_nIP;

/// @brief Field m_nQueryPort, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_nQueryPort;

/// @brief Field m_nConnPort, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_nConnPort;

/// @brief Field m_nAppID, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_nAppID;

/// @brief Field m_nFlags, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_nFlags;

/// @brief Field m_bAdd, offset: 0x14, size: 0x1, def value: None
 bool  m_bAdd;

/// @brief Field m_unAccountId, offset: 0x18, size: 0x4, def value: None
 ::Steamworks::AccountID_t  m_unAccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_nIP) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_nQueryPort) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_nConnPort) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_nAppID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_nFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_bAdd) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FavoritesListChanged_t, m_unAccountId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FavoritesListChanged_t) == 0x1c, "Size mismatch!");

} // namespace end def Steamworks
