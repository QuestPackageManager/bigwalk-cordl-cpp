#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/IdToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(IdToken)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct IdToken;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::IdToken);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::IdToken, "Epic.OnlineServices.Auth", "IdToken");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.IdToken
struct CORDL_TYPE IdToken {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::EpicAccountId*  AccountId;

 __declspec(property(get=get_JsonWebToken, put=set_JsonWebToken)) ::Epic::OnlineServices::Utf8String*  JsonWebToken;

/// @brief Method get_AccountId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_AccountId() ;

/// @brief Method get_JsonWebToken, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_JsonWebToken() ;

/// @brief Method set_AccountId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_JsonWebToken, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_JsonWebToken(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IdToken() ;

// Ctor Parameters [CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_JsonWebToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr IdToken(::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _JsonWebToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <AccountId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField;

/// @brief Field <JsonWebToken>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _JsonWebToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::IdToken, _AccountId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::IdToken, _JsonWebToken_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::IdToken) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
