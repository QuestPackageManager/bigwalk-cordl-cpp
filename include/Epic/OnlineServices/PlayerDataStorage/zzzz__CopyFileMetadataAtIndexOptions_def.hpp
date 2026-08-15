#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/CopyFileMetadataAtIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyFileMetadataAtIndexOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct CopyFileMetadataAtIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions, "Epic.OnlineServices.PlayerDataStorage", "CopyFileMetadataAtIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.CopyFileMetadataAtIndexOptions
struct CORDL_TYPE CopyFileMetadataAtIndexOptions {
public:
// Declarations
 __declspec(property(get=get_Index, put=set_Index)) uint32_t  Index;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Method get_Index, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Index() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method set_Index, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Index(uint32_t  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyFileMetadataAtIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Index_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyFileMetadataAtIndexOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, uint32_t  _Index_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Index>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _Index_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions, _Index_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::CopyFileMetadataAtIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
