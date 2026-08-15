#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPair_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEventOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPair;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions, "Epic.OnlineServices.AntiCheatCommon", "LogEventOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.LogEventParamPair, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogEventOptions
struct CORDL_TYPE LogEventOptions {
public:
// Declarations
 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

 __declspec(property(get=get_EventId, put=set_EventId)) uint32_t  EventId;

 __declspec(property(get=get_Params, put=set_Params)) ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>  Params;

/// @brief Method get_ClientHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Method get_EventId, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_EventId() ;

/// @brief Method get_Params, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair> get_Params() ;

/// @brief Method set_ClientHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

/// @brief Method set_EventId, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_EventId(uint32_t  value) ;

/// @brief Method set_Params, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Params(::ArrayW<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEventOptions() ;

// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_EventId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Params_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>", modifiers: "", def_value: None }]
constexpr LogEventOptions(::System::IntPtr  _ClientHandle_k__BackingField, uint32_t  _EventId_k__BackingField, ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>  _Params_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <ClientHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <EventId>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _EventId_k__BackingField;

/// @brief Field <Params>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>  _Params_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions, _ClientHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions, _EventId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions, _Params_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
