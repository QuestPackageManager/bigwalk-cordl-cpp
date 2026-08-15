#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerDespawnOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogPlayerDespawnOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerDespawnOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerDespawnOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerDespawnOptions
struct CORDL_TYPE LogPlayerDespawnOptions {
public:
// Declarations
 __declspec(property(get=get_DespawnedPlayerHandle, put=set_DespawnedPlayerHandle)) ::System::IntPtr  DespawnedPlayerHandle;

/// @brief Method get_DespawnedPlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_DespawnedPlayerHandle() ;

/// @brief Method set_DespawnedPlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_DespawnedPlayerHandle(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerDespawnOptions() ;

// Ctor Parameters [CppParam { name: "_DespawnedPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LogPlayerDespawnOptions(::System::IntPtr  _DespawnedPlayerHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <DespawnedPlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _DespawnedPlayerHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions, _DespawnedPlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
