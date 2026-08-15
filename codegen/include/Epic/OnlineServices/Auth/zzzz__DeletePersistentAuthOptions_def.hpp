#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/DeletePersistentAuthOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DeletePersistentAuthOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct DeletePersistentAuthOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions, "Epic.OnlineServices.Auth", "DeletePersistentAuthOptions");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.DeletePersistentAuthOptions
struct CORDL_TYPE DeletePersistentAuthOptions {
public:
// Declarations
 __declspec(property(get=get_RefreshToken, put=set_RefreshToken)) ::Epic::OnlineServices::Utf8String*  RefreshToken;

/// @brief Method get_RefreshToken, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RefreshToken() ;

/// @brief Method set_RefreshToken, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_RefreshToken(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DeletePersistentAuthOptions() ;

// Ctor Parameters [CppParam { name: "_RefreshToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr DeletePersistentAuthOptions(::Epic::OnlineServices::Utf8String*  _RefreshToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9238};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <RefreshToken>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RefreshToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions, _RefreshToken_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
