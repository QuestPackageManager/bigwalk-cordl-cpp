#pragma once
// IWYU pragma private; include "Steamworks/SteamRelayNetworkStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingAvailability_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamRelayNetworkStatus_t)
// Forward declare root types
namespace Steamworks {
struct SteamRelayNetworkStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamRelayNetworkStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamRelayNetworkStatus_t, "Steamworks", "SteamRelayNetworkStatus_t");
// Dependencies Steamworks.ESteamNetworkingAvailability
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamRelayNetworkStatus_t
struct CORDL_TYPE SteamRelayNetworkStatus_t {
public:
// Declarations
 __declspec(property(get=get_m_debugMsg, put=set_m_debugMsg)) ::StringW  m_debugMsg;

/// @brief Method get_m_debugMsg, addr 0x18054afb0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_debugMsg() ;

/// @brief Method set_m_debugMsg, addr 0x18054f680, size 0x1d0, virtual false, abstract: false, final false
inline void set_m_debugMsg(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamRelayNetworkStatus_t() ;

// Ctor Parameters [CppParam { name: "m_eAvail", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: None }, CppParam { name: "m_bPingMeasurementInProgress", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_eAvailNetworkConfig", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: None }, CppParam { name: "m_eAvailAnyRelay", ty: "::Steamworks::ESteamNetworkingAvailability", modifiers: "", def_value: None }, CppParam { name: "m_debugMsg_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamRelayNetworkStatus_t(::Steamworks::ESteamNetworkingAvailability  m_eAvail, int32_t  m_bPingMeasurementInProgress, ::Steamworks::ESteamNetworkingAvailability  m_eAvailNetworkConfig, ::Steamworks::ESteamNetworkingAvailability  m_eAvailAnyRelay, ::ArrayW<uint8_t>  m_debugMsg_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x501)};

/// @brief Field m_eAvail, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingAvailability  m_eAvail;

/// @brief Field m_bPingMeasurementInProgress, offset: 0x4, size: 0x4, def value: None
 int32_t  m_bPingMeasurementInProgress;

/// @brief Field m_eAvailNetworkConfig, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingAvailability  m_eAvailNetworkConfig;

/// @brief Field m_eAvailAnyRelay, offset: 0xc, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingAvailability  m_eAvailAnyRelay;

/// @brief Field m_debugMsg_, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_debugMsg_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamRelayNetworkStatus_t, m_eAvail) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamRelayNetworkStatus_t, m_bPingMeasurementInProgress) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamRelayNetworkStatus_t, m_eAvailNetworkConfig) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamRelayNetworkStatus_t, m_eAvailAnyRelay) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamRelayNetworkStatus_t, m_debugMsg_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamRelayNetworkStatus_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
