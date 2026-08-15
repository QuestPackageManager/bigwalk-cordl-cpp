#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/QueryIdTokenOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(QueryIdTokenOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct QueryIdTokenOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::QueryIdTokenOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::QueryIdTokenOptions, "Epic.OnlineServices.Auth", "QueryIdTokenOptions");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.QueryIdTokenOptions
struct CORDL_TYPE QueryIdTokenOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_TargetAccountId, put=set_TargetAccountId)) ::Epic::OnlineServices::EpicAccountId*  TargetAccountId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_TargetAccountId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_TargetAccountId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_TargetAccountId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetAccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryIdTokenOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TargetAccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }]
constexpr QueryIdTokenOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _TargetAccountId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <TargetAccountId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _TargetAccountId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::QueryIdTokenOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::QueryIdTokenOptions, _TargetAccountId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::QueryIdTokenOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
