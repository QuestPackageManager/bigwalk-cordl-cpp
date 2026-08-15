#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerSpawnOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerSpawnOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerSpawnOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerSpawnOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerSpawnOptions
struct CORDL_TYPE LogPlayerSpawnOptions {
public:
// Declarations
 __declspec(property(get=get_CharacterId, put=set_CharacterId)) uint32_t  CharacterId;

 __declspec(property(get=get_SpawnedPlayerHandle, put=set_SpawnedPlayerHandle)) ::System::IntPtr  SpawnedPlayerHandle;

 __declspec(property(get=get_TeamId, put=set_TeamId)) uint32_t  TeamId;

/// @brief Method get_CharacterId, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_CharacterId() ;

/// @brief Method get_SpawnedPlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_SpawnedPlayerHandle() ;

/// @brief Method get_TeamId, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_TeamId() ;

/// @brief Method set_CharacterId, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_CharacterId(uint32_t  value) ;

/// @brief Method set_SpawnedPlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_SpawnedPlayerHandle(::System::IntPtr  value) ;

/// @brief Method set_TeamId, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_TeamId(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerSpawnOptions() ;

// Ctor Parameters [CppParam { name: "_SpawnedPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_TeamId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_CharacterId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LogPlayerSpawnOptions(::System::IntPtr  _SpawnedPlayerHandle_k__BackingField, uint32_t  _TeamId_k__BackingField, uint32_t  _CharacterId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9362};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <SpawnedPlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _SpawnedPlayerHandle_k__BackingField;

/// @brief Field <TeamId>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _TeamId_k__BackingField;

/// @brief Field <CharacterId>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _CharacterId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions, _SpawnedPlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions, _TeamId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions, _CharacterId_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
