#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/LinkAccountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LinkAccountOptions)
namespace Epic::OnlineServices {
class ContinuanceToken;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct LinkAccountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::LinkAccountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::LinkAccountOptions, "Epic.OnlineServices.Connect", "LinkAccountOptions");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.LinkAccountOptions
struct CORDL_TYPE LinkAccountOptions {
public:
// Declarations
 __declspec(property(get=get_ContinuanceToken, put=set_ContinuanceToken)) ::Epic::OnlineServices::ContinuanceToken*  ContinuanceToken;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Method get_ContinuanceToken, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method set_ContinuanceToken, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LinkAccountOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: None }]
constexpr LinkAccountOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <ContinuanceToken>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::LinkAccountOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LinkAccountOptions, _ContinuanceToken_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::LinkAccountOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
