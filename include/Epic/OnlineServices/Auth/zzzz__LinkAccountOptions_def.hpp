#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LinkAccountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LinkAccountOptions)
namespace Epic::OnlineServices::Auth {
struct LinkAccountFlags;
}
namespace Epic::OnlineServices {
class ContinuanceToken;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct LinkAccountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LinkAccountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LinkAccountOptions, "Epic.OnlineServices.Auth", "LinkAccountOptions");
// Dependencies Epic.OnlineServices.Auth.LinkAccountFlags
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LinkAccountOptions
struct CORDL_TYPE LinkAccountOptions {
public:
// Declarations
 __declspec(property(get=get_ContinuanceToken, put=set_ContinuanceToken)) ::Epic::OnlineServices::ContinuanceToken*  ContinuanceToken;

 __declspec(property(get=get_LinkAccountFlags, put=set_LinkAccountFlags)) ::Epic::OnlineServices::Auth::LinkAccountFlags  LinkAccountFlags;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_ContinuanceToken, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken() ;

/// @brief Method get_LinkAccountFlags, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::LinkAccountFlags get_LinkAccountFlags() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_ContinuanceToken, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value) ;

/// @brief Method set_LinkAccountFlags, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_LinkAccountFlags(::Epic::OnlineServices::Auth::LinkAccountFlags  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LinkAccountOptions() ;

// Ctor Parameters [CppParam { name: "_LinkAccountFlags_k__BackingField", ty: "::Epic::OnlineServices::Auth::LinkAccountFlags", modifiers: "", def_value: None }, CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }]
constexpr LinkAccountOptions(::Epic::OnlineServices::Auth::LinkAccountFlags  _LinkAccountFlags_k__BackingField, ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9245};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LinkAccountFlags>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::LinkAccountFlags  _LinkAccountFlags_k__BackingField;

/// @brief Field <ContinuanceToken>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptions, _LinkAccountFlags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptions, _ContinuanceToken_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountOptions, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LinkAccountOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
