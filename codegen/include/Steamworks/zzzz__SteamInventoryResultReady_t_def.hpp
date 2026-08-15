#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryResultReady_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__SteamInventoryResult_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInventoryResultReady_t)
// Forward declare root types
namespace Steamworks {
struct SteamInventoryResultReady_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInventoryResultReady_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInventoryResultReady_t, "Steamworks", "SteamInventoryResultReady_t");
// Dependencies Steamworks.EResult, Steamworks.SteamInventoryResult_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInventoryResultReady_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInventoryResultReady_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInventoryResultReady_t() ;

// Ctor Parameters [CppParam { name: "m_handle", ty: "::Steamworks::SteamInventoryResult_t", modifiers: "", def_value: None }, CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: None }]
constexpr SteamInventoryResultReady_t(::Steamworks::SteamInventoryResult_t  m_handle, ::Steamworks::EResult  m_result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x125c)};

/// @brief Field m_handle, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::SteamInventoryResult_t  m_handle;

/// @brief Field m_result, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::EResult  m_result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInventoryResultReady_t, m_handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryResultReady_t, m_result) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInventoryResultReady_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
