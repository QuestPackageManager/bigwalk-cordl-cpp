#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonInterface)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
class AntiCheatCommonInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonInterface*, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonInterface");
// Dependencies System.Object
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonInterface
class CORDL_TYPE AntiCheatCommonInterface : public ::System::Object {
public:
// Declarations
static inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonInterface* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AntiCheatCommonInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AntiCheatCommonInterface(AntiCheatCommonInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AntiCheatCommonInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AntiCheatCommonInterface(AntiCheatCommonInterface const& ) = delete;

/// @brief Field LOGEVENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGEVENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGEVENT_STRING_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  LOGEVENT_STRING_MAX_LENGTH{static_cast<int32_t>(0x27)};

/// @brief Field LOGGAMEROUNDEND_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGGAMEROUNDEND_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGGAMEROUNDSTART_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGGAMEROUNDSTART_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field LOGPLAYERDESPAWN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERDESPAWN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGPLAYERREVIVE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERREVIVE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGPLAYERSPAWN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERSPAWN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGPLAYERTAKEDAMAGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERTAKEDAMAGE_API_LATEST{static_cast<int32_t>(0x4)};

/// @brief Field LOGPLAYERTICK_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERTICK_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field LOGPLAYERUSEABILITY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERUSEABILITY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGPLAYERUSEWEAPON_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERUSEWEAPON_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field LOGPLAYERUSEWEAPON_WEAPONNAME_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  LOGPLAYERUSEWEAPON_WEAPONNAME_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field REGISTEREVENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REGISTEREVENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REGISTEREVENT_CUSTOMEVENTBASE offset 0xffffffff size 0x4
static constexpr int32_t  REGISTEREVENT_CUSTOMEVENTBASE{static_cast<int32_t>(0x10000000)};

/// @brief Field REGISTEREVENT_MAX_PARAMDEFSCOUNT offset 0xffffffff size 0x4
static constexpr int32_t  REGISTEREVENT_MAX_PARAMDEFSCOUNT{static_cast<int32_t>(0xc)};

/// @brief Field SETCLIENTDETAILS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETCLIENTDETAILS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETGAMESESSIONID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETGAMESESSIONID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9343};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonInterface) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
