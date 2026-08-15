#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyUserAuthOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__Token_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VerifyUserAuthOptions)
namespace Epic::OnlineServices::Auth {
struct Token;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct VerifyUserAuthOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::VerifyUserAuthOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::VerifyUserAuthOptions, "Epic.OnlineServices.Auth", "VerifyUserAuthOptions");
// Dependencies Epic.OnlineServices.Auth.Token, System.Nullable`1<T>
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.VerifyUserAuthOptions
struct CORDL_TYPE VerifyUserAuthOptions {
public:
// Declarations
 __declspec(property(get=get_AuthToken, put=set_AuthToken)) ::System::Nullable_1<::Epic::OnlineServices::Auth::Token>  AuthToken;

/// @brief Method get_AuthToken, addr 0x18051eb40, size 0x40, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::Token> get_AuthToken() ;

/// @brief Method set_AuthToken, addr 0x18051eb80, size 0x40, virtual false, abstract: false, final false
inline void set_AuthToken(::System::Nullable_1<::Epic::OnlineServices::Auth::Token>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyUserAuthOptions() ;

// Ctor Parameters [CppParam { name: "_AuthToken_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::Token>", modifiers: "", def_value: None }]
constexpr VerifyUserAuthOptions(::System::Nullable_1<::Epic::OnlineServices::Auth::Token>  _AuthToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <AuthToken>k__BackingField, offset: 0x0, size: 0x58, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Auth::Token>  _AuthToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyUserAuthOptions, _AuthToken_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::VerifyUserAuthOptions) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
