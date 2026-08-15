#pragma once
// IWYU pragma private; include "Steamworks/SteamItemDetails_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamItemDef_t_def.hpp"
#include "Steamworks/zzzz__SteamItemInstanceID_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamItemDetails_t)
// Forward declare root types
namespace Steamworks {
struct SteamItemDetails_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamItemDetails_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamItemDetails_t, "Steamworks", "SteamItemDetails_t");
// Dependencies Steamworks.SteamItemDef_t, Steamworks.SteamItemInstanceID_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamItemDetails_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamItemDetails_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamItemDetails_t() ;

// Ctor Parameters [CppParam { name: "m_itemId", ty: "::Steamworks::SteamItemInstanceID_t", modifiers: "", def_value: None }, CppParam { name: "m_iDefinition", ty: "::Steamworks::SteamItemDef_t", modifiers: "", def_value: None }, CppParam { name: "m_unQuantity", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_unFlags", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr SteamItemDetails_t(::Steamworks::SteamItemInstanceID_t  m_itemId, ::Steamworks::SteamItemDef_t  m_iDefinition, uint16_t  m_unQuantity, uint16_t  m_unFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_itemId, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::SteamItemInstanceID_t  m_itemId;

/// @brief Field m_iDefinition, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::SteamItemDef_t  m_iDefinition;

/// @brief Field m_unQuantity, offset: 0xc, size: 0x2, def value: None
 uint16_t  m_unQuantity;

/// @brief Field m_unFlags, offset: 0xe, size: 0x2, def value: None
 uint16_t  m_unFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamItemDetails_t, m_itemId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamItemDetails_t, m_iDefinition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamItemDetails_t, m_unQuantity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamItemDetails_t, m_unFlags) == 0xe, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamItemDetails_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
