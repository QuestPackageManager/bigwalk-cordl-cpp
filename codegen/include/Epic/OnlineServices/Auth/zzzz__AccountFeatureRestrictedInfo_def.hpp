#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AccountFeatureRestrictedInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AccountFeatureRestrictedInfo)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct AccountFeatureRestrictedInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo, "Epic.OnlineServices.Auth", "AccountFeatureRestrictedInfo");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.AccountFeatureRestrictedInfo
struct CORDL_TYPE AccountFeatureRestrictedInfo {
public:
// Declarations
 __declspec(property(get=get_VerificationURI, put=set_VerificationURI)) ::Epic::OnlineServices::Utf8String*  VerificationURI;

/// @brief Method get_VerificationURI, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_VerificationURI() ;

/// @brief Method set_VerificationURI, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_VerificationURI(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccountFeatureRestrictedInfo() ;

// Ctor Parameters [CppParam { name: "_VerificationURI_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr AccountFeatureRestrictedInfo(::Epic::OnlineServices::Utf8String*  _VerificationURI_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <VerificationURI>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _VerificationURI_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo, _VerificationURI_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
