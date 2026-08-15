#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CopyPlayerSanctionByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyPlayerSanctionByIndexOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
struct CopyPlayerSanctionByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions, "Epic.OnlineServices.Sanctions", "CopyPlayerSanctionByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Sanctions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sanctions.CopyPlayerSanctionByIndexOptions
struct CORDL_TYPE CopyPlayerSanctionByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_SanctionIndex, put=set_SanctionIndex)) uint32_t  SanctionIndex;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_SanctionIndex, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SanctionIndex() ;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_SanctionIndex, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_SanctionIndex(uint32_t  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyPlayerSanctionByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_SanctionIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyPlayerSanctionByIndexOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, uint32_t  _SanctionIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <SanctionIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _SanctionIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions, _SanctionIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
