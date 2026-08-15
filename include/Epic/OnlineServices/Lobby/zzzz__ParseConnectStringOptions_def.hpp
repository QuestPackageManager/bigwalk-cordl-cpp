#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/ParseConnectStringOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParseConnectStringOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct ParseConnectStringOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::ParseConnectStringOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::ParseConnectStringOptions, "Epic.OnlineServices.Lobby", "ParseConnectStringOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.ParseConnectStringOptions
struct CORDL_TYPE ParseConnectStringOptions {
public:
// Declarations
 __declspec(property(get=get_ConnectString, put=set_ConnectString)) ::Epic::OnlineServices::Utf8String*  ConnectString;

/// @brief Method get_ConnectString, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ConnectString() ;

/// @brief Method set_ConnectString, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ConnectString(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParseConnectStringOptions() ;

// Ctor Parameters [CppParam { name: "_ConnectString_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr ParseConnectStringOptions(::Epic::OnlineServices::Utf8String*  _ConnectString_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <ConnectString>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ConnectString_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::ParseConnectStringOptions, _ConnectString_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::ParseConnectStringOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
