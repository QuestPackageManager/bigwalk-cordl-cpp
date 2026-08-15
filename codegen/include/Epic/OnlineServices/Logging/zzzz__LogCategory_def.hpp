#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogCategory)
// Forward declare root types
namespace Epic::OnlineServices::Logging {
struct LogCategory;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Logging::LogCategory);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Logging::LogCategory, "Epic.OnlineServices.Logging", "LogCategory");
// Dependencies 
namespace Epic::OnlineServices::Logging {
// Is value type: true
// CS Name: Epic.OnlineServices.Logging.LogCategory
struct CORDL_TYPE LogCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogCategory_Unwrapped
enum struct __LogCategory_Unwrapped : int32_t {
__E_Core = static_cast<int32_t>(0x0),
__E_Auth = static_cast<int32_t>(0x1),
__E_Friends = static_cast<int32_t>(0x2),
__E_Presence = static_cast<int32_t>(0x3),
__E_UserInfo = static_cast<int32_t>(0x4),
__E_HttpSerialization = static_cast<int32_t>(0x5),
__E_Ecom = static_cast<int32_t>(0x6),
__E_P2P = static_cast<int32_t>(0x7),
__E_Sessions = static_cast<int32_t>(0x8),
__E_RateLimiter = static_cast<int32_t>(0x9),
__E_PlayerDataStorage = static_cast<int32_t>(0xa),
__E_Analytics = static_cast<int32_t>(0xb),
__E_Messaging = static_cast<int32_t>(0xc),
__E_Connect = static_cast<int32_t>(0xd),
__E_Overlay = static_cast<int32_t>(0xe),
__E_Achievements = static_cast<int32_t>(0xf),
__E_Stats = static_cast<int32_t>(0x10),
__E_Ui = static_cast<int32_t>(0x11),
__E_Lobby = static_cast<int32_t>(0x12),
__E_Leaderboards = static_cast<int32_t>(0x13),
__E_Keychain = static_cast<int32_t>(0x14),
__E_IntegratedPlatform = static_cast<int32_t>(0x15),
__E_TitleStorage = static_cast<int32_t>(0x16),
__E_Mods = static_cast<int32_t>(0x17),
__E_AntiCheat = static_cast<int32_t>(0x18),
__E_Reports = static_cast<int32_t>(0x19),
__E_Sanctions = static_cast<int32_t>(0x1a),
__E_ProgressionSnapshots = static_cast<int32_t>(0x1b),
__E_Kws = static_cast<int32_t>(0x1c),
__E_Rtc = static_cast<int32_t>(0x1d),
__E_RTCAdmin = static_cast<int32_t>(0x1e),
__E_CustomInvites = static_cast<int32_t>(0x1f),
__E_Http = static_cast<int32_t>(0x29),
__E_AllCategories = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogCategory_Unwrapped () const noexcept {
return static_cast<__LogCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogCategory(int32_t  value__) noexcept;

/// @brief Field Achievements value: I32(15)
static ::Epic::OnlineServices::Logging::LogCategory const Achievements;

/// @brief Field AllCategories value: I32(2147483647)
static ::Epic::OnlineServices::Logging::LogCategory const AllCategories;

/// @brief Field Analytics value: I32(11)
static ::Epic::OnlineServices::Logging::LogCategory const Analytics;

/// @brief Field AntiCheat value: I32(24)
static ::Epic::OnlineServices::Logging::LogCategory const AntiCheat;

/// @brief Field Auth value: I32(1)
static ::Epic::OnlineServices::Logging::LogCategory const Auth;

/// @brief Field Connect value: I32(13)
static ::Epic::OnlineServices::Logging::LogCategory const Connect;

/// @brief Field Core value: I32(0)
static ::Epic::OnlineServices::Logging::LogCategory const Core;

/// @brief Field CustomInvites value: I32(31)
static ::Epic::OnlineServices::Logging::LogCategory const CustomInvites;

/// @brief Field Ecom value: I32(6)
static ::Epic::OnlineServices::Logging::LogCategory const Ecom;

/// @brief Field Friends value: I32(2)
static ::Epic::OnlineServices::Logging::LogCategory const Friends;

/// @brief Field Http value: I32(41)
static ::Epic::OnlineServices::Logging::LogCategory const Http;

/// @brief Field HttpSerialization value: I32(5)
static ::Epic::OnlineServices::Logging::LogCategory const HttpSerialization;

/// @brief Field IntegratedPlatform value: I32(21)
static ::Epic::OnlineServices::Logging::LogCategory const IntegratedPlatform;

/// @brief Field Keychain value: I32(20)
static ::Epic::OnlineServices::Logging::LogCategory const Keychain;

/// @brief Field Kws value: I32(28)
static ::Epic::OnlineServices::Logging::LogCategory const Kws;

/// @brief Field Leaderboards value: I32(19)
static ::Epic::OnlineServices::Logging::LogCategory const Leaderboards;

/// @brief Field Lobby value: I32(18)
static ::Epic::OnlineServices::Logging::LogCategory const Lobby;

/// @brief Field Messaging value: I32(12)
static ::Epic::OnlineServices::Logging::LogCategory const Messaging;

/// @brief Field Mods value: I32(23)
static ::Epic::OnlineServices::Logging::LogCategory const Mods;

/// @brief Field Overlay value: I32(14)
static ::Epic::OnlineServices::Logging::LogCategory const Overlay;

/// @brief Field P2P value: I32(7)
static ::Epic::OnlineServices::Logging::LogCategory const P2P;

/// @brief Field PlayerDataStorage value: I32(10)
static ::Epic::OnlineServices::Logging::LogCategory const PlayerDataStorage;

/// @brief Field Presence value: I32(3)
static ::Epic::OnlineServices::Logging::LogCategory const Presence;

/// @brief Field ProgressionSnapshots value: I32(27)
static ::Epic::OnlineServices::Logging::LogCategory const ProgressionSnapshots;

/// @brief Field RTCAdmin value: I32(30)
static ::Epic::OnlineServices::Logging::LogCategory const RTCAdmin;

/// @brief Field RateLimiter value: I32(9)
static ::Epic::OnlineServices::Logging::LogCategory const RateLimiter;

/// @brief Field Reports value: I32(25)
static ::Epic::OnlineServices::Logging::LogCategory const Reports;

/// @brief Field Rtc value: I32(29)
static ::Epic::OnlineServices::Logging::LogCategory const Rtc;

/// @brief Field Sanctions value: I32(26)
static ::Epic::OnlineServices::Logging::LogCategory const Sanctions;

/// @brief Field Sessions value: I32(8)
static ::Epic::OnlineServices::Logging::LogCategory const Sessions;

/// @brief Field Stats value: I32(16)
static ::Epic::OnlineServices::Logging::LogCategory const Stats;

/// @brief Field TitleStorage value: I32(22)
static ::Epic::OnlineServices::Logging::LogCategory const TitleStorage;

/// @brief Field Ui value: I32(17)
static ::Epic::OnlineServices::Logging::LogCategory const Ui;

/// @brief Field UserInfo value: I32(4)
static ::Epic::OnlineServices::Logging::LogCategory const UserInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Logging::LogCategory, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Logging::LogCategory) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Logging
