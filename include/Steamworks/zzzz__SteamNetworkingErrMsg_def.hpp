#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingErrMsg.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingErrMsg)
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingErrMsg;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingErrMsg);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingErrMsg, "Steamworks", "SteamNetworkingErrMsg");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingErrMsg
struct CORDL_TYPE SteamNetworkingErrMsg {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingErrMsg() ;

// Ctor Parameters [CppParam { name: "m_SteamNetworkingErrMsg", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamNetworkingErrMsg(::ArrayW<uint8_t>  m_SteamNetworkingErrMsg) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_SteamNetworkingErrMsg, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_SteamNetworkingErrMsg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingErrMsg, m_SteamNetworkingErrMsg) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingErrMsg) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
