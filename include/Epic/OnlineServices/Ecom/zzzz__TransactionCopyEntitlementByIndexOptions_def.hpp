#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/TransactionCopyEntitlementByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransactionCopyEntitlementByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct TransactionCopyEntitlementByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions, "Epic.OnlineServices.Ecom", "TransactionCopyEntitlementByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.TransactionCopyEntitlementByIndexOptions
struct CORDL_TYPE TransactionCopyEntitlementByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_EntitlementIndex, put=set_EntitlementIndex)) uint32_t  EntitlementIndex;

/// @brief Method get_EntitlementIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_EntitlementIndex() ;

/// @brief Method set_EntitlementIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_EntitlementIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransactionCopyEntitlementByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_EntitlementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TransactionCopyEntitlementByIndexOptions(uint32_t  _EntitlementIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <EntitlementIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _EntitlementIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions, _EntitlementIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
