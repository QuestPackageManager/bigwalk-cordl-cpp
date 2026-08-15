#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionRealTimeLaneStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetConnectionRealTimeLaneStatus_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetConnectionRealTimeLaneStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, "Steamworks", "SteamNetConnectionRealTimeLaneStatus_t");
// Dependencies Steamworks.SteamNetworkingMicroseconds
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetConnectionRealTimeLaneStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetConnectionRealTimeLaneStatus_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetConnectionRealTimeLaneStatus_t() ;

// Ctor Parameters [CppParam { name: "m_cbPendingUnreliable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cbPendingReliable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cbSentUnackedReliable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_reservePad1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_usecQueueTime", ty: "::Steamworks::SteamNetworkingMicroseconds", modifiers: "", def_value: None }, CppParam { name: "reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr SteamNetConnectionRealTimeLaneStatus_t(int32_t  m_cbPendingUnreliable, int32_t  m_cbPendingReliable, int32_t  m_cbSentUnackedReliable, int32_t  _reservePad1, ::Steamworks::SteamNetworkingMicroseconds  m_usecQueueTime, ::ArrayW<uint32_t>  reserved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_cbPendingUnreliable, offset: 0x0, size: 0x4, def value: None
 int32_t  m_cbPendingUnreliable;

/// @brief Field m_cbPendingReliable, offset: 0x4, size: 0x4, def value: None
 int32_t  m_cbPendingReliable;

/// @brief Field m_cbSentUnackedReliable, offset: 0x8, size: 0x4, def value: None
 int32_t  m_cbSentUnackedReliable;

/// @brief Field _reservePad1, offset: 0xc, size: 0x4, def value: None
 int32_t  _reservePad1;

/// @brief Field m_usecQueueTime, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::SteamNetworkingMicroseconds  m_usecQueueTime;

/// @brief Field reserved, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  reserved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, m_cbPendingUnreliable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, m_cbPendingReliable) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, m_cbSentUnackedReliable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, _reservePad1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, m_usecQueueTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t, reserved) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetConnectionRealTimeLaneStatus_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
