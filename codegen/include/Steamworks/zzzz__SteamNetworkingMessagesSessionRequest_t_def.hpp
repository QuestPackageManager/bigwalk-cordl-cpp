#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMessagesSessionRequest_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingMessagesSessionRequest_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingMessagesSessionRequest_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingMessagesSessionRequest_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingMessagesSessionRequest_t, "Steamworks", "SteamNetworkingMessagesSessionRequest_t");
// Dependencies Steamworks.SteamNetworkingIdentity
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingMessagesSessionRequest_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetworkingMessagesSessionRequest_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingMessagesSessionRequest_t() ;

// Ctor Parameters [CppParam { name: "m_identityRemote", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: None }]
constexpr SteamNetworkingMessagesSessionRequest_t(::Steamworks::SteamNetworkingIdentity  m_identityRemote) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16147};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4e3)};

/// @brief Field m_identityRemote, offset: 0x0, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIdentity  m_identityRemote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingMessagesSessionRequest_t, m_identityRemote) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingMessagesSessionRequest_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
