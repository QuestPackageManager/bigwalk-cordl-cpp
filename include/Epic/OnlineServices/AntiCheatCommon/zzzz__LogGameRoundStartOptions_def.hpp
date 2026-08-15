#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogGameRoundStartOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonGameRoundCompetitionType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogGameRoundStartOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonGameRoundCompetitionType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogGameRoundStartOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions, "Epic.OnlineServices.AntiCheatCommon", "LogGameRoundStartOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonGameRoundCompetitionType
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogGameRoundStartOptions
struct CORDL_TYPE LogGameRoundStartOptions {
public:
// Declarations
 __declspec(property(get=get_CompetitionType, put=set_CompetitionType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  CompetitionType;

 __declspec(property(get=get_LevelName, put=set_LevelName)) ::Epic::OnlineServices::Utf8String*  LevelName;

 __declspec(property(get=get_ModeName, put=set_ModeName)) ::Epic::OnlineServices::Utf8String*  ModeName;

 __declspec(property(get=get_RoundTimeSeconds, put=set_RoundTimeSeconds)) uint32_t  RoundTimeSeconds;

 __declspec(property(get=get_SessionIdentifier, put=set_SessionIdentifier)) ::Epic::OnlineServices::Utf8String*  SessionIdentifier;

/// @brief Method get_CompetitionType, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType get_CompetitionType() ;

/// @brief Method get_LevelName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LevelName() ;

/// @brief Method get_ModeName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ModeName() ;

/// @brief Method get_RoundTimeSeconds, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_RoundTimeSeconds() ;

/// @brief Method get_SessionIdentifier, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionIdentifier() ;

/// @brief Method set_CompetitionType, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_CompetitionType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  value) ;

/// @brief Method set_LevelName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LevelName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ModeName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ModeName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_RoundTimeSeconds, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_RoundTimeSeconds(uint32_t  value) ;

/// @brief Method set_SessionIdentifier, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionIdentifier(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogGameRoundStartOptions() ;

// Ctor Parameters [CppParam { name: "_SessionIdentifier_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LevelName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ModeName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_RoundTimeSeconds_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_CompetitionType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType", modifiers: "", def_value: None }]
constexpr LogGameRoundStartOptions(::Epic::OnlineServices::Utf8String*  _SessionIdentifier_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LevelName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ModeName_k__BackingField, uint32_t  _RoundTimeSeconds_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  _CompetitionType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <SessionIdentifier>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionIdentifier_k__BackingField;

/// @brief Field <LevelName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LevelName_k__BackingField;

/// @brief Field <ModeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ModeName_k__BackingField;

/// @brief Field <RoundTimeSeconds>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _RoundTimeSeconds_k__BackingField;

/// @brief Field <CompetitionType>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonGameRoundCompetitionType  _CompetitionType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions, _SessionIdentifier_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions, _LevelName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions, _ModeName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions, _RoundTimeSeconds_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions, _CompetitionType_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
