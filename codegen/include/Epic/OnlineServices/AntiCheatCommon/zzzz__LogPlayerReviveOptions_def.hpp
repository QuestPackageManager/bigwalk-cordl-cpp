#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerReviveOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogPlayerReviveOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerReviveOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerReviveOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerReviveOptions
struct CORDL_TYPE LogPlayerReviveOptions {
public:
// Declarations
 __declspec(property(get=get_RevivedPlayerHandle, put=set_RevivedPlayerHandle)) ::System::IntPtr  RevivedPlayerHandle;

 __declspec(property(get=get_ReviverPlayerHandle, put=set_ReviverPlayerHandle)) ::System::IntPtr  ReviverPlayerHandle;

/// @brief Method get_RevivedPlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_RevivedPlayerHandle() ;

/// @brief Method get_ReviverPlayerHandle, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ReviverPlayerHandle() ;

/// @brief Method set_RevivedPlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_RevivedPlayerHandle(::System::IntPtr  value) ;

/// @brief Method set_ReviverPlayerHandle, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_ReviverPlayerHandle(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerReviveOptions() ;

// Ctor Parameters [CppParam { name: "_RevivedPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ReviverPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LogPlayerReviveOptions(::System::IntPtr  _RevivedPlayerHandle_k__BackingField, ::System::IntPtr  _ReviverPlayerHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <RevivedPlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _RevivedPlayerHandle_k__BackingField;

/// @brief Field <ReviverPlayerHandle>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _ReviverPlayerHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions, _RevivedPlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions, _ReviverPlayerHandle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
