#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginFlags_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginOptions)
namespace Epic::OnlineServices::Auth {
struct AuthScopeFlags;
}
namespace Epic::OnlineServices::Auth {
struct Credentials;
}
namespace Epic::OnlineServices::Auth {
struct LoginFlags;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct LoginOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginOptions, "Epic.OnlineServices.Auth", "LoginOptions");
// Dependencies Epic.OnlineServices.Auth.AuthScopeFlags, Epic.OnlineServices.Auth.Credentials, Epic.OnlineServices.Auth.LoginFlags, System.Nullable`1<T>
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginOptions
struct CORDL_TYPE LoginOptions {
public:
// Declarations
 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>  Credentials;

 __declspec(property(get=get_LoginFlags, put=set_LoginFlags)) ::Epic::OnlineServices::Auth::LoginFlags  LoginFlags;

 __declspec(property(get=get_ScopeFlags, put=set_ScopeFlags)) ::Epic::OnlineServices::Auth::AuthScopeFlags  ScopeFlags;

/// @brief Method get_Credentials, addr 0x18051ea60, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials> get_Credentials() ;

/// @brief Method get_LoginFlags, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::LoginFlags get_LoginFlags() ;

/// @brief Method get_ScopeFlags, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::AuthScopeFlags get_ScopeFlags() ;

/// @brief Method set_Credentials, addr 0x180379000, size 0x30, virtual false, abstract: false, final false
inline void set_Credentials(::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>  value) ;

/// @brief Method set_LoginFlags, addr 0x1803c8fb0, size 0x10, virtual false, abstract: false, final false
inline void set_LoginFlags(::Epic::OnlineServices::Auth::LoginFlags  value) ;

/// @brief Method set_ScopeFlags, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginOptions() ;

// Ctor Parameters [CppParam { name: "_Credentials_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>", modifiers: "", def_value: None }, CppParam { name: "_ScopeFlags_k__BackingField", ty: "::Epic::OnlineServices::Auth::AuthScopeFlags", modifiers: "", def_value: None }, CppParam { name: "_LoginFlags_k__BackingField", ty: "::Epic::OnlineServices::Auth::LoginFlags", modifiers: "", def_value: None }]
constexpr LoginOptions(::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>  _Credentials_k__BackingField, ::Epic::OnlineServices::Auth::AuthScopeFlags  _ScopeFlags_k__BackingField, ::Epic::OnlineServices::Auth::LoginFlags  _LoginFlags_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <Credentials>k__BackingField, offset: 0x0, size: 0x30, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>  _Credentials_k__BackingField;

/// @brief Field <ScopeFlags>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthScopeFlags  _ScopeFlags_k__BackingField;

/// @brief Field <LoginFlags>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Auth::LoginFlags  _LoginFlags_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptions, _Credentials_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptions, _ScopeFlags_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginOptions, _LoginFlags_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginOptions) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
