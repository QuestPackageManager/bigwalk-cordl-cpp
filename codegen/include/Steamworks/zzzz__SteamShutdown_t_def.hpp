#pragma once
// IWYU pragma private; include "Steamworks/SteamShutdown_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamShutdown_t)
// Forward declare root types
namespace Steamworks {
struct SteamShutdown_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamShutdown_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamShutdown_t, "Steamworks", "SteamShutdown_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamShutdown_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamShutdown_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamShutdown_t() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x2c0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamShutdown_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
