#pragma once
// IWYU pragma private; include "Steamworks/SteamRemotePlaySessionConnected_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__RemotePlaySessionID_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamRemotePlaySessionConnected_t)
// Forward declare root types
namespace Steamworks {
struct SteamRemotePlaySessionConnected_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamRemotePlaySessionConnected_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamRemotePlaySessionConnected_t, "Steamworks", "SteamRemotePlaySessionConnected_t");
// Dependencies Steamworks.RemotePlaySessionID_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamRemotePlaySessionConnected_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamRemotePlaySessionConnected_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamRemotePlaySessionConnected_t() ;

// Ctor Parameters [CppParam { name: "m_unSessionID", ty: "::Steamworks::RemotePlaySessionID_t", modifiers: "", def_value: None }]
constexpr SteamRemotePlaySessionConnected_t(::Steamworks::RemotePlaySessionID_t  m_unSessionID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1645)};

/// @brief Field m_unSessionID, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::RemotePlaySessionID_t  m_unSessionID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamRemotePlaySessionConnected_t, m_unSessionID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamRemotePlaySessionConnected_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
