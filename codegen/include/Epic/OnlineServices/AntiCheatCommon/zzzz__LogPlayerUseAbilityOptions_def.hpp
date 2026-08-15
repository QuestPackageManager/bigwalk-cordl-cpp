#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseAbilityOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerUseAbilityOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseAbilityOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerUseAbilityOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerUseAbilityOptions
struct CORDL_TYPE LogPlayerUseAbilityOptions {
public:
// Declarations
 __declspec(property(get=get_AbilityCooldownMs, put=set_AbilityCooldownMs)) uint32_t  AbilityCooldownMs;

 __declspec(property(get=get_AbilityDurationMs, put=set_AbilityDurationMs)) uint32_t  AbilityDurationMs;

 __declspec(property(get=get_AbilityId, put=set_AbilityId)) uint32_t  AbilityId;

 __declspec(property(get=get_PlayerHandle, put=set_PlayerHandle)) ::System::IntPtr  PlayerHandle;

/// @brief Method get_AbilityCooldownMs, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AbilityCooldownMs() ;

/// @brief Method get_AbilityDurationMs, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AbilityDurationMs() ;

/// @brief Method get_AbilityId, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AbilityId() ;

/// @brief Method get_PlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PlayerHandle() ;

/// @brief Method set_AbilityCooldownMs, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_AbilityCooldownMs(uint32_t  value) ;

/// @brief Method set_AbilityDurationMs, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_AbilityDurationMs(uint32_t  value) ;

/// @brief Method set_AbilityId, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_AbilityId(uint32_t  value) ;

/// @brief Method set_PlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerHandle(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerUseAbilityOptions() ;

// Ctor Parameters [CppParam { name: "_PlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_AbilityId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_AbilityDurationMs_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_AbilityCooldownMs_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LogPlayerUseAbilityOptions(::System::IntPtr  _PlayerHandle_k__BackingField, uint32_t  _AbilityId_k__BackingField, uint32_t  _AbilityDurationMs_k__BackingField, uint32_t  _AbilityCooldownMs_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <PlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PlayerHandle_k__BackingField;

/// @brief Field <AbilityId>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _AbilityId_k__BackingField;

/// @brief Field <AbilityDurationMs>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _AbilityDurationMs_k__BackingField;

/// @brief Field <AbilityCooldownMs>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _AbilityCooldownMs_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions, _PlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions, _AbilityId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions, _AbilityDurationMs_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions, _AbilityCooldownMs_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
