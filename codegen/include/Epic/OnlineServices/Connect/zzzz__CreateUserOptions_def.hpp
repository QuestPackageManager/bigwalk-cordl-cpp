#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CreateUserOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CreateUserOptions)
namespace Epic::OnlineServices {
class ContinuanceToken;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct CreateUserOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CreateUserOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CreateUserOptions, "Epic.OnlineServices.Connect", "CreateUserOptions");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CreateUserOptions
struct CORDL_TYPE CreateUserOptions {
public:
// Declarations
 __declspec(property(get=get_ContinuanceToken, put=set_ContinuanceToken)) ::Epic::OnlineServices::ContinuanceToken*  ContinuanceToken;

/// @brief Method get_ContinuanceToken, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken() ;

/// @brief Method set_ContinuanceToken, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateUserOptions() ;

// Ctor Parameters [CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: None }]
constexpr CreateUserOptions(::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <ContinuanceToken>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CreateUserOptions, _ContinuanceToken_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CreateUserOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
