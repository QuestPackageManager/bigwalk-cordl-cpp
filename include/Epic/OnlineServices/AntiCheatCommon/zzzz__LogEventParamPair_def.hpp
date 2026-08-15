#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValue_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogEventParamPair)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPairParamValue;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPair;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair, "Epic.OnlineServices.AntiCheatCommon", "LogEventParamPair");
// Dependencies Epic.OnlineServices.AntiCheatCommon.LogEventParamPairParamValue
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogEventParamPair
struct CORDL_TYPE LogEventParamPair {
public:
// Declarations
 __declspec(property(get=get_ParamValue, put=set_ParamValue)) ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue  ParamValue;

/// @brief Method get_ParamValue, addr 0x18051e7b0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue get_ParamValue() ;

/// @brief Method set_ParamValue, addr 0x18051e800, size 0x50, virtual false, abstract: false, final false
inline void set_ParamValue(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEventParamPair() ;

// Ctor Parameters [CppParam { name: "_ParamValue_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue", modifiers: "", def_value: None }]
constexpr LogEventParamPair(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue  _ParamValue_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <ParamValue>k__BackingField, offset: 0x0, size: 0x78, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue  _ParamValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair, _ParamValue_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair) == 0x78, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
