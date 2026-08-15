#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyTransactionByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyTransactionByIndexOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyTransactionByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions, "Epic.OnlineServices.Ecom", "CopyTransactionByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyTransactionByIndexOptions
struct CORDL_TYPE CopyTransactionByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_TransactionIndex, put=set_TransactionIndex)) uint32_t  TransactionIndex;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_TransactionIndex, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_TransactionIndex() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_TransactionIndex, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_TransactionIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyTransactionByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TransactionIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyTransactionByIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, uint32_t  _TransactionIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8926};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <TransactionIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _TransactionIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions, _TransactionIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
