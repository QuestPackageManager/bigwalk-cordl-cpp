#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/RegisterPlayersOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RegisterPlayersOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::RegisterPlayersOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::RegisterPlayersOptions, "Epic.OnlineServices.Sessions", "RegisterPlayersOptions");
// Dependencies Epic.OnlineServices.ProductUserId
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.RegisterPlayersOptions
struct CORDL_TYPE RegisterPlayersOptions {
public:
// Declarations
 __declspec(property(get=get_PlayersToRegister, put=set_PlayersToRegister)) ::ArrayW<::Epic::OnlineServices::ProductUserId*>  PlayersToRegister;

 __declspec(property(get=get_SessionName, put=set_SessionName)) ::Epic::OnlineServices::Utf8String*  SessionName;

/// @brief Method get_PlayersToRegister, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> get_PlayersToRegister() ;

/// @brief Method get_SessionName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionName() ;

/// @brief Method set_PlayersToRegister, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayersToRegister(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value) ;

/// @brief Method set_SessionName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterPlayersOptions() ;

// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_PlayersToRegister_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: None }]
constexpr RegisterPlayersOptions(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _PlayersToRegister_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <SessionName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField;

/// @brief Field <PlayersToRegister>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _PlayersToRegister_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersOptions, _SessionName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::RegisterPlayersOptions, _PlayersToRegister_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::RegisterPlayersOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
