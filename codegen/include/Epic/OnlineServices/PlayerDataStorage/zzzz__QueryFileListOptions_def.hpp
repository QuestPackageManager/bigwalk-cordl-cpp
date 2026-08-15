#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/QueryFileListOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(QueryFileListOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileListOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions, "Epic.OnlineServices.PlayerDataStorage", "QueryFileListOptions");
// Dependencies 
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.QueryFileListOptions
struct CORDL_TYPE QueryFileListOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryFileListOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr QueryFileListOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
