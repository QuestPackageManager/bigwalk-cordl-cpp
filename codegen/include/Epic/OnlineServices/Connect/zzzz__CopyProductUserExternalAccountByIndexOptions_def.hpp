#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyProductUserExternalAccountByIndexOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions, "Epic.OnlineServices.Connect", "CopyProductUserExternalAccountByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CopyProductUserExternalAccountByIndexOptions
struct CORDL_TYPE CopyProductUserExternalAccountByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_ExternalAccountInfoIndex, put=set_ExternalAccountInfoIndex)) uint32_t  ExternalAccountInfoIndex;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_ExternalAccountInfoIndex, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ExternalAccountInfoIndex() ;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_ExternalAccountInfoIndex, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ExternalAccountInfoIndex(uint32_t  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyProductUserExternalAccountByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_ExternalAccountInfoIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyProductUserExternalAccountByIndexOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, uint32_t  _ExternalAccountInfoIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <ExternalAccountInfoIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _ExternalAccountInfoIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions, _ExternalAccountInfoIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
