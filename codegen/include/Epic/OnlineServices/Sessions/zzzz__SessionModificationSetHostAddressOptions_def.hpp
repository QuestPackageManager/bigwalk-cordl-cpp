#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetHostAddressOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SessionModificationSetHostAddressOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetHostAddressOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions, "Epic.OnlineServices.Sessions", "SessionModificationSetHostAddressOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationSetHostAddressOptions
struct CORDL_TYPE SessionModificationSetHostAddressOptions {
public:
// Declarations
 __declspec(property(get=get_HostAddress, put=set_HostAddress)) ::Epic::OnlineServices::Utf8String*  HostAddress;

/// @brief Method get_HostAddress, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_HostAddress() ;

/// @brief Method set_HostAddress, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_HostAddress(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationSetHostAddressOptions() ;

// Ctor Parameters [CppParam { name: "_HostAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SessionModificationSetHostAddressOptions(::Epic::OnlineServices::Utf8String*  _HostAddress_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <HostAddress>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _HostAddress_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions, _HostAddress_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
