#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryFullUpdate_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamInventoryResult_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInventoryFullUpdate_t)
// Forward declare root types
namespace Steamworks {
struct SteamInventoryFullUpdate_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInventoryFullUpdate_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInventoryFullUpdate_t, "Steamworks", "SteamInventoryFullUpdate_t");
// Dependencies Steamworks.SteamInventoryResult_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInventoryFullUpdate_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInventoryFullUpdate_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInventoryFullUpdate_t() ;

// Ctor Parameters [CppParam { name: "m_handle", ty: "::Steamworks::SteamInventoryResult_t", modifiers: "", def_value: None }]
constexpr SteamInventoryFullUpdate_t(::Steamworks::SteamInventoryResult_t  m_handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x125d)};

/// @brief Field m_handle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::SteamInventoryResult_t  m_handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInventoryFullUpdate_t, m_handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInventoryFullUpdate_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
