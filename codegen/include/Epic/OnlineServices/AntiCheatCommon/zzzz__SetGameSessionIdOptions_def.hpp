#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/SetGameSessionIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SetGameSessionIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct SetGameSessionIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions, "Epic.OnlineServices.AntiCheatCommon", "SetGameSessionIdOptions");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.SetGameSessionIdOptions
struct CORDL_TYPE SetGameSessionIdOptions {
public:
// Declarations
 __declspec(property(get=get_GameSessionId, put=set_GameSessionId)) ::Epic::OnlineServices::Utf8String*  GameSessionId;

/// @brief Method get_GameSessionId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_GameSessionId() ;

/// @brief Method set_GameSessionId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_GameSessionId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetGameSessionIdOptions() ;

// Ctor Parameters [CppParam { name: "_GameSessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SetGameSessionIdOptions(::Epic::OnlineServices::Utf8String*  _GameSessionId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <GameSessionId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _GameSessionId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions, _GameSessionId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
