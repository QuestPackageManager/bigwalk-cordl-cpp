#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/Credentials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Credentials)
namespace Epic::OnlineServices::Auth {
struct LoginCredentialType;
}
namespace Epic::OnlineServices {
struct ExternalCredentialType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct Credentials;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::Credentials);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::Credentials, "Epic.OnlineServices.Auth", "Credentials");
// Dependencies Epic.OnlineServices.Auth.LoginCredentialType, Epic.OnlineServices.ExternalCredentialType, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.Credentials
struct CORDL_TYPE Credentials {
public:
// Declarations
 __declspec(property(get=get_ExternalType, put=set_ExternalType)) ::Epic::OnlineServices::ExternalCredentialType  ExternalType;

 __declspec(property(get=get_Id, put=set_Id)) ::Epic::OnlineServices::Utf8String*  Id;

 __declspec(property(get=get_SystemAuthCredentialsOptions, put=set_SystemAuthCredentialsOptions)) ::System::IntPtr  SystemAuthCredentialsOptions;

 __declspec(property(get=get_Token, put=set_Token)) ::Epic::OnlineServices::Utf8String*  Token;

 __declspec(property(get=get_Type, put=set_Type)) ::Epic::OnlineServices::Auth::LoginCredentialType  Type;

/// @brief Method get_ExternalType, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalCredentialType get_ExternalType() ;

/// @brief Method get_Id, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Id() ;

/// @brief Method get_SystemAuthCredentialsOptions, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_SystemAuthCredentialsOptions() ;

/// @brief Method get_Token, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Token() ;

/// @brief Method get_Type, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::LoginCredentialType get_Type() ;

/// @brief Method set_ExternalType, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_ExternalType(::Epic::OnlineServices::ExternalCredentialType  value) ;

/// @brief Method set_Id, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Id(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SystemAuthCredentialsOptions, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_SystemAuthCredentialsOptions(::System::IntPtr  value) ;

/// @brief Method set_Token, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Token(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Type, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::Epic::OnlineServices::Auth::LoginCredentialType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Credentials() ;

// Ctor Parameters [CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Token_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Auth::LoginCredentialType", modifiers: "", def_value: None }, CppParam { name: "_SystemAuthCredentialsOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ExternalType_k__BackingField", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: None }]
constexpr Credentials(::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Token_k__BackingField, ::Epic::OnlineServices::Auth::LoginCredentialType  _Type_k__BackingField, ::System::IntPtr  _SystemAuthCredentialsOptions_k__BackingField, ::Epic::OnlineServices::ExternalCredentialType  _ExternalType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <Id>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField;

/// @brief Field <Token>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Token_k__BackingField;

/// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::LoginCredentialType  _Type_k__BackingField;

/// @brief Field <SystemAuthCredentialsOptions>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  _SystemAuthCredentialsOptions_k__BackingField;

/// @brief Field <ExternalType>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalCredentialType  _ExternalType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::Credentials, _Id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Credentials, _Token_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Credentials, _Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Credentials, _SystemAuthCredentialsOptions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::Credentials, _ExternalType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::Credentials) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
