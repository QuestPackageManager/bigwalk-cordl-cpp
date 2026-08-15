#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthTokenType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Token)
namespace Epic::OnlineServices::Auth {
struct AuthTokenType;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct Token;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::Token);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::Token, "Epic.OnlineServices.Auth", "Token");
// Dependencies Epic.OnlineServices.Auth.AuthTokenType
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.Token
struct CORDL_TYPE Token {
public:
// Declarations
 __declspec(property(get=get_AccessToken, put=set_AccessToken)) ::Epic::OnlineServices::Utf8String*  AccessToken;

 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::EpicAccountId*  AccountId;

 __declspec(property(get=get_App, put=set_App)) ::Epic::OnlineServices::Utf8String*  App;

 __declspec(property(get=get_AuthType, put=set_AuthType)) ::Epic::OnlineServices::Auth::AuthTokenType  AuthType;

 __declspec(property(get=get_ClientId, put=set_ClientId)) ::Epic::OnlineServices::Utf8String*  ClientId;

 __declspec(property(get=get_ExpiresAt, put=set_ExpiresAt)) ::Epic::OnlineServices::Utf8String*  ExpiresAt;

 __declspec(property(get=get_ExpiresIn, put=set_ExpiresIn)) double_t  ExpiresIn;

 __declspec(property(get=get_RefreshExpiresAt, put=set_RefreshExpiresAt)) ::Epic::OnlineServices::Utf8String*  RefreshExpiresAt;

 __declspec(property(get=get_RefreshExpiresIn, put=set_RefreshExpiresIn)) double_t  RefreshExpiresIn;

 __declspec(property(get=get_RefreshToken, put=set_RefreshToken)) ::Epic::OnlineServices::Utf8String*  RefreshToken;

/// @brief Method get_AccessToken, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AccessToken() ;

/// @brief Method get_AccountId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_AccountId() ;

/// @brief Method get_App, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_App() ;

/// @brief Method get_AuthType, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::AuthTokenType get_AuthType() ;

/// @brief Method get_ClientId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ClientId() ;

/// @brief Method get_ExpiresAt, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ExpiresAt() ;

/// @brief Method get_ExpiresIn, addr 0x18051eb00, size 0x10, virtual false, abstract: false, final false
inline double_t get_ExpiresIn() ;

/// @brief Method get_RefreshExpiresAt, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RefreshExpiresAt() ;

/// @brief Method get_RefreshExpiresIn, addr 0x18051eb10, size 0x10, virtual false, abstract: false, final false
inline double_t get_RefreshExpiresIn() ;

/// @brief Method get_RefreshToken, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RefreshToken() ;

/// @brief Method set_AccessToken, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_AccessToken(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_AccountId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_App, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_App(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_AuthType, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_AuthType(::Epic::OnlineServices::Auth::AuthTokenType  value) ;

/// @brief Method set_ClientId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ExpiresAt, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ExpiresAt(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ExpiresIn, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void set_ExpiresIn(double_t  value) ;

/// @brief Method set_RefreshExpiresAt, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_RefreshExpiresAt(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_RefreshExpiresIn, addr 0x18051eb30, size 0x10, virtual false, abstract: false, final false
inline void set_RefreshExpiresIn(double_t  value) ;

/// @brief Method set_RefreshToken, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_RefreshToken(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Token() ;

// Ctor Parameters [CppParam { name: "_App_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ClientId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_AccessToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ExpiresIn_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_ExpiresAt_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AuthType_k__BackingField", ty: "::Epic::OnlineServices::Auth::AuthTokenType", modifiers: "", def_value: None }, CppParam { name: "_RefreshToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_RefreshExpiresIn_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_RefreshExpiresAt_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr Token(::Epic::OnlineServices::Utf8String*  _App_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccessToken_k__BackingField, double_t  _ExpiresIn_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ExpiresAt_k__BackingField, ::Epic::OnlineServices::Auth::AuthTokenType  _AuthType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RefreshToken_k__BackingField, double_t  _RefreshExpiresIn_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RefreshExpiresAt_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9289};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <App>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _App_k__BackingField;

/// @brief Field <ClientId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField;

/// @brief Field <AccountId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField;

/// @brief Field <AccessToken>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AccessToken_k__BackingField;

/// @brief Field <ExpiresIn>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  _ExpiresIn_k__BackingField;

/// @brief Field <ExpiresAt>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ExpiresAt_k__BackingField;

/// @brief Field <AuthType>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthTokenType  _AuthType_k__BackingField;

/// @brief Field <RefreshToken>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RefreshToken_k__BackingField;

/// @brief Field <RefreshExpiresIn>k__BackingField, offset: 0x40, size: 0x8, def value: None
 double_t  _RefreshExpiresIn_k__BackingField;

/// @brief Field <RefreshExpiresAt>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RefreshExpiresAt_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _App_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _ClientId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _AccountId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _AccessToken_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _ExpiresIn_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _ExpiresAt_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _AuthType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _RefreshToken_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _RefreshExpiresIn_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Token, _RefreshExpiresAt_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::Token) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
