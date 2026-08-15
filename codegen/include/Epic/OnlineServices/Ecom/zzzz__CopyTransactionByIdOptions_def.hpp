#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyTransactionByIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopyTransactionByIdOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyTransactionByIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions, "Epic.OnlineServices.Ecom", "CopyTransactionByIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyTransactionByIdOptions
struct CORDL_TYPE CopyTransactionByIdOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_TransactionId, put=set_TransactionId)) ::Epic::OnlineServices::Utf8String*  TransactionId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_TransactionId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TransactionId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_TransactionId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_TransactionId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyTransactionByIdOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TransactionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CopyTransactionByIdOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TransactionId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <TransactionId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TransactionId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions, _TransactionId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
