#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionRealTimeStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetConnectionRealTimeStatus_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetConnectionRealTimeStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetConnectionRealTimeStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetConnectionRealTimeStatus_t, "Steamworks", "SteamNetConnectionRealTimeStatus_t");
// Dependencies Steamworks.ESteamNetworkingConnectionState, Steamworks.SteamNetworkingMicroseconds
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetConnectionRealTimeStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetConnectionRealTimeStatus_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetConnectionRealTimeStatus_t() ;

// Ctor Parameters [CppParam { name: "m_eState", ty: "::Steamworks::ESteamNetworkingConnectionState", modifiers: "", def_value: None }, CppParam { name: "m_nPing", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_flConnectionQualityLocal", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flConnectionQualityRemote", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flOutPacketsPerSec", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flOutBytesPerSec", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flInPacketsPerSec", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flInBytesPerSec", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_nSendRateBytesPerSecond", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cbPendingUnreliable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cbPendingReliable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cbSentUnackedReliable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_usecQueueTime", ty: "::Steamworks::SteamNetworkingMicroseconds", modifiers: "", def_value: None }, CppParam { name: "reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr SteamNetConnectionRealTimeStatus_t(::Steamworks::ESteamNetworkingConnectionState  m_eState, int32_t  m_nPing, float_t  m_flConnectionQualityLocal, float_t  m_flConnectionQualityRemote, float_t  m_flOutPacketsPerSec, float_t  m_flOutBytesPerSec, float_t  m_flInPacketsPerSec, float_t  m_flInBytesPerSec, int32_t  m_nSendRateBytesPerSecond, int32_t  m_cbPendingUnreliable, int32_t  m_cbPendingReliable, int32_t  m_cbSentUnackedReliable, ::Steamworks::SteamNetworkingMicroseconds  m_usecQueueTime, ::ArrayW<uint32_t>  reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_eState, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamNetworkingConnectionState  m_eState;

/// @brief Field m_nPing, offset: 0x4, size: 0x4, def value: None
 int32_t  m_nPing;

/// @brief Field m_flConnectionQualityLocal, offset: 0x8, size: 0x4, def value: None
 float_t  m_flConnectionQualityLocal;

/// @brief Field m_flConnectionQualityRemote, offset: 0xc, size: 0x4, def value: None
 float_t  m_flConnectionQualityRemote;

/// @brief Field m_flOutPacketsPerSec, offset: 0x10, size: 0x4, def value: None
 float_t  m_flOutPacketsPerSec;

/// @brief Field m_flOutBytesPerSec, offset: 0x14, size: 0x4, def value: None
 float_t  m_flOutBytesPerSec;

/// @brief Field m_flInPacketsPerSec, offset: 0x18, size: 0x4, def value: None
 float_t  m_flInPacketsPerSec;

/// @brief Field m_flInBytesPerSec, offset: 0x1c, size: 0x4, def value: None
 float_t  m_flInBytesPerSec;

/// @brief Field m_nSendRateBytesPerSecond, offset: 0x20, size: 0x4, def value: None
 int32_t  m_nSendRateBytesPerSecond;

/// @brief Field m_cbPendingUnreliable, offset: 0x24, size: 0x4, def value: None
 int32_t  m_cbPendingUnreliable;

/// @brief Field m_cbPendingReliable, offset: 0x28, size: 0x4, def value: None
 int32_t  m_cbPendingReliable;

/// @brief Field m_cbSentUnackedReliable, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_cbSentUnackedReliable;

/// @brief Field m_usecQueueTime, offset: 0x30, size: 0x8, def value: None
 ::Steamworks::SteamNetworkingMicroseconds  m_usecQueueTime;

/// @brief Field reserved, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint32_t>  reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_eState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_nPing) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_flConnectionQualityLocal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_flConnectionQualityRemote) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_flOutPacketsPerSec) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_flOutBytesPerSec) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_flInPacketsPerSec) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_flInBytesPerSec) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_nSendRateBytesPerSecond) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_cbPendingUnreliable) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_cbPendingReliable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_cbSentUnackedReliable) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, m_usecQueueTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeStatus_t, reserved) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetConnectionRealTimeStatus_t) == 0x40, "Size mismatch!");

} // namespace end def Steamworks
