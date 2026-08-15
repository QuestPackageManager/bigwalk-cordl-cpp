#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingFakeIPResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingFakeIPResult_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingFakeIPResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingFakeIPResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingFakeIPResult_t, "Steamworks", "SteamNetworkingFakeIPResult_t");
// Dependencies Steamworks.EResult, Steamworks.SteamNetworkingIdentity
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingFakeIPResult_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetworkingFakeIPResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingFakeIPResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_identity", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: None }, CppParam { name: "m_unIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_unPorts", ty: "::ArrayW<uint16_t>", modifiers: "", def_value: None }]
constexpr SteamNetworkingFakeIPResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::SteamNetworkingIdentity  m_identity, uint32_t  m_unIP, ::ArrayW<uint16_t>  m_unPorts) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16237};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x4c7)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_identity, offset: 0x8, size: 0x10, def value: None
 ::Steamworks::SteamNetworkingIdentity  m_identity;

/// @brief Field m_unIP, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_unIP;

/// @brief Field m_unPorts, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint16_t>  m_unPorts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingFakeIPResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingFakeIPResult_t, m_identity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingFakeIPResult_t, m_unIP) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetworkingFakeIPResult_t, m_unPorts) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingFakeIPResult_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
