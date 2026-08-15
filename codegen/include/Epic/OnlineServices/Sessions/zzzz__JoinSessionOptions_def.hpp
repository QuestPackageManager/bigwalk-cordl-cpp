#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/JoinSessionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(JoinSessionOptions)
namespace Epic::OnlineServices::Sessions {
class SessionDetails;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct JoinSessionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::JoinSessionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::JoinSessionOptions, "Epic.OnlineServices.Sessions", "JoinSessionOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.JoinSessionOptions
struct CORDL_TYPE JoinSessionOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_PresenceEnabled, put=set_PresenceEnabled)) bool  PresenceEnabled;

 __declspec(property(get=get_SessionHandle, put=set_SessionHandle)) ::Epic::OnlineServices::Sessions::SessionDetails*  SessionHandle;

 __declspec(property(get=get_SessionName, put=set_SessionName)) ::Epic::OnlineServices::Utf8String*  SessionName;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_PresenceEnabled, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_PresenceEnabled() ;

/// @brief Method get_SessionHandle, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::SessionDetails* get_SessionHandle() ;

/// @brief Method get_SessionName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionName() ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_PresenceEnabled, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_PresenceEnabled(bool  value) ;

/// @brief Method set_SessionHandle, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionHandle(::Epic::OnlineServices::Sessions::SessionDetails*  value) ;

/// @brief Method set_SessionName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinSessionOptions() ;

// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SessionHandle_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionDetails*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr JoinSessionOptions(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::Epic::OnlineServices::Sessions::SessionDetails*  _SessionHandle_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, bool  _PresenceEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7722};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <SessionName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField;

/// @brief Field <SessionHandle>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionDetails*  _SessionHandle_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <PresenceEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  _PresenceEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptions, _SessionName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptions, _SessionHandle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptions, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::JoinSessionOptions, _PresenceEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::JoinSessionOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
