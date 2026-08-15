#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchSetSessionIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SessionSearchSetSessionIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetSessionIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions, "Epic.OnlineServices.Sessions", "SessionSearchSetSessionIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchSetSessionIdOptions
struct CORDL_TYPE SessionSearchSetSessionIdOptions {
public:
// Declarations
 __declspec(property(get=get_SessionId, put=set_SessionId)) ::Epic::OnlineServices::Utf8String*  SessionId;

/// @brief Method get_SessionId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionId() ;

/// @brief Method set_SessionId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchSetSessionIdOptions() ;

// Ctor Parameters [CppParam { name: "_SessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SessionSearchSetSessionIdOptions(::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <SessionId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions, _SessionId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
