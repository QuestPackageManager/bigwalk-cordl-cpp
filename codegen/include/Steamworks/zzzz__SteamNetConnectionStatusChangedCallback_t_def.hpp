#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionStatusChangedCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetConnectionStatusChangedCallback_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetConnectionStatusChangedCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetConnectionStatusChangedCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetConnectionStatusChangedCallback_t, "Steamworks", "SteamNetConnectionStatusChangedCallback_t");
// Dependencies Steamworks.ESteamNetworkingConnectionState, Steamworks.HSteamNetConnection, Steamworks.SteamNetConnectionInfo_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetConnectionStatusChangedCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetConnectionStatusChangedCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetConnectionStatusChangedCallback_t() ;

// Ctor Parameters [CppParam { name: "m_hConn", ty: "::Steamworks::HSteamNetConnection", modifiers: "", def_value: None }, CppParam { name: "m_info", ty: "::Steamworks::SteamNetConnectionInfo_t", modifiers: "", def_value: None }, CppParam { name: "m_eOldState", ty: "::Steamworks::ESteamNetworkingConnectionState", modifiers: "", def_value: None }]
constexpr SteamNetConnectionStatusChangedCallback_t(::Steamworks::HSteamNetConnection  m_hConn, ::Steamworks::SteamNetConnectionInfo_t  m_info, ::Steamworks::ESteamNetworkingConnectionState  m_eOldState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16149};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4c5)};

/// @brief Field m_hConn, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HSteamNetConnection  m_hConn;

/// @brief Field m_info, offset: 0x8, size: 0x68, def value: None
 ::Steamworks::SteamNetConnectionInfo_t  m_info;

/// @brief Field m_eOldState, offset: 0x70, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingConnectionState  m_eOldState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetConnectionStatusChangedCallback_t, m_hConn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionStatusChangedCallback_t, m_info) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionStatusChangedCallback_t, m_eOldState) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetConnectionStatusChangedCallback_t) == 0x78, "Size mismatch!");

} // namespace end def Steamworks
