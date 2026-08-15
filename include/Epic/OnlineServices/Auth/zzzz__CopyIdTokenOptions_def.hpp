#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/CopyIdTokenOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopyIdTokenOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct CopyIdTokenOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::CopyIdTokenOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::CopyIdTokenOptions, "Epic.OnlineServices.Auth", "CopyIdTokenOptions");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.CopyIdTokenOptions
struct CORDL_TYPE CopyIdTokenOptions {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::EpicAccountId*  AccountId;

/// @brief Method get_AccountId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_AccountId() ;

/// @brief Method set_AccountId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyIdTokenOptions() ;

// Ctor Parameters [CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }]
constexpr CopyIdTokenOptions(::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <AccountId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::CopyIdTokenOptions, _AccountId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::CopyIdTokenOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
