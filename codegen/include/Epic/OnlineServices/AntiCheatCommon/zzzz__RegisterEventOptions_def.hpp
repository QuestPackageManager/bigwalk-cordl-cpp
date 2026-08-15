#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventParamDef_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterEventOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonEventType;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct RegisterEventParamDef;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct RegisterEventOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions, "Epic.OnlineServices.AntiCheatCommon", "RegisterEventOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonEventType, Epic.OnlineServices.AntiCheatCommon.RegisterEventParamDef
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.RegisterEventOptions
struct CORDL_TYPE RegisterEventOptions {
public:
// Declarations
 __declspec(property(get=get_EventId, put=set_EventId)) uint32_t  EventId;

 __declspec(property(get=get_EventName, put=set_EventName)) ::Epic::OnlineServices::Utf8String*  EventName;

 __declspec(property(get=get_EventType, put=set_EventType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  EventType;

 __declspec(property(get=get_ParamDefs, put=set_ParamDefs)) ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  ParamDefs;

/// @brief Method get_EventId, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_EventId() ;

/// @brief Method get_EventName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_EventName() ;

/// @brief Method get_EventType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType get_EventType() ;

/// @brief Method get_ParamDefs, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef> get_ParamDefs() ;

/// @brief Method set_EventId, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_EventId(uint32_t  value) ;

/// @brief Method set_EventName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_EventName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_EventType, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_EventType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  value) ;

/// @brief Method set_ParamDefs, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ParamDefs(::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterEventOptions() ;

// Ctor Parameters [CppParam { name: "_EventId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_EventName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_EventType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType", modifiers: "", def_value: None }, CppParam { name: "_ParamDefs_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>", modifiers: "", def_value: None }]
constexpr RegisterEventOptions(uint32_t  _EventId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EventName_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  _EventType_k__BackingField, ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  _ParamDefs_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <EventId>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _EventId_k__BackingField;

/// @brief Field <EventName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _EventName_k__BackingField;

/// @brief Field <EventType>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  _EventType_k__BackingField;

/// @brief Field <ParamDefs>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  _ParamDefs_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions, _EventId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions, _EventName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions, _EventType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions, _ParamDefs_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
