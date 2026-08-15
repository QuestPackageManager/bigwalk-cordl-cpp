#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMessagesSessionFailed_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingMessagesSessionFailed_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingMessagesSessionFailed_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingMessagesSessionFailed_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingMessagesSessionFailed_t, "Steamworks", "SteamNetworkingMessagesSessionFailed_t");
// Dependencies Steamworks.SteamNetConnectionInfo_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingMessagesSessionFailed_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetworkingMessagesSessionFailed_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingMessagesSessionFailed_t() ;

// Ctor Parameters [CppParam { name: "m_info", ty: "::Steamworks::SteamNetConnectionInfo_t", modifiers: "", def_value: None }]
constexpr SteamNetworkingMessagesSessionFailed_t(::Steamworks::SteamNetConnectionInfo_t  m_info) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4e4)};

/// @brief Field m_info, offset: 0x0, size: 0x68, def value: None
 ::Steamworks::SteamNetConnectionInfo_t  m_info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingMessagesSessionFailed_t, m_info) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingMessagesSessionFailed_t) == 0x68, "Size mismatch!");

} // namespace end def Steamworks
