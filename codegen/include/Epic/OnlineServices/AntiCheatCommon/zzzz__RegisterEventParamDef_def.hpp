#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventParamDef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RegisterEventParamDef)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonEventParamType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct RegisterEventParamDef;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef, "Epic.OnlineServices.AntiCheatCommon", "RegisterEventParamDef");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonEventParamType
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.RegisterEventParamDef
struct CORDL_TYPE RegisterEventParamDef {
public:
// Declarations
 __declspec(property(get=get_ParamName, put=set_ParamName)) ::Epic::OnlineServices::Utf8String*  ParamName;

 __declspec(property(get=get_ParamType, put=set_ParamType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  ParamType;

/// @brief Method get_ParamName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ParamName() ;

/// @brief Method get_ParamType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType get_ParamType() ;

/// @brief Method set_ParamName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ParamName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ParamType, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ParamType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterEventParamDef() ;

// Ctor Parameters [CppParam { name: "_ParamName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParamType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: None }]
constexpr RegisterEventParamDef(::Epic::OnlineServices::Utf8String*  _ParamName_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  _ParamType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <ParamName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ParamName_k__BackingField;

/// @brief Field <ParamType>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  _ParamType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef, _ParamName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef, _ParamType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
