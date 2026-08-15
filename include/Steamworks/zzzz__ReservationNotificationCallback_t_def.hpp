#pragma once
// IWYU pragma private; include "Steamworks/ReservationNotificationCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReservationNotificationCallback_t)
// Forward declare root types
namespace Steamworks {
struct ReservationNotificationCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::ReservationNotificationCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::ReservationNotificationCallback_t, "Steamworks", "ReservationNotificationCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.PartyBeaconID_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ReservationNotificationCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE ReservationNotificationCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ReservationNotificationCallback_t() ;

// Ctor Parameters [CppParam { name: "m_ulBeaconID", ty: "::Steamworks::PartyBeaconID_t", modifiers: "", def_value: None }, CppParam { name: "m_steamIDJoiner", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr ReservationNotificationCallback_t(::Steamworks::PartyBeaconID_t  m_ulBeaconID, ::Steamworks::CSteamID  m_steamIDJoiner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14b7)};

/// @brief Field m_ulBeaconID, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::PartyBeaconID_t  m_ulBeaconID;

/// @brief Field m_steamIDJoiner, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDJoiner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::ReservationNotificationCallback_t, m_ulBeaconID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ReservationNotificationCallback_t, m_steamIDJoiner) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ReservationNotificationCallback_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
