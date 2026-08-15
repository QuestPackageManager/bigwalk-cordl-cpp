#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/Transaction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Transaction)
namespace Epic::OnlineServices::Ecom {
struct Entitlement;
}
namespace Epic::OnlineServices::Ecom {
struct TransactionCopyEntitlementByIndexOptions;
}
namespace Epic::OnlineServices::Ecom {
struct TransactionGetEntitlementsCountOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
class Transaction;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Ecom::Transaction*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::Transaction*, "Epic.OnlineServices.Ecom", "Transaction");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Ecom {
// Is value type: false
// CS Name: Epic.OnlineServices.Ecom.Transaction
class CORDL_TYPE Transaction : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyEntitlementByIndex, addr 0x18051e030, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyEntitlementByIndex(::by_ref<::Epic::OnlineServices::Ecom::TransactionCopyEntitlementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement) ;

/// @brief Method GetEntitlementsCount, addr 0x18051e0b0, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetEntitlementsCount(::by_ref<::Epic::OnlineServices::Ecom::TransactionGetEntitlementsCountOptions>  options) ;

/// @brief Method GetTransactionId, addr 0x18051e0f0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetTransactionId(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

static inline ::Epic::OnlineServices::Ecom::Transaction* New_ctor() ;

static inline ::Epic::OnlineServices::Ecom::Transaction* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x18051e170, size 0x70, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transaction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transaction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transaction(Transaction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transaction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transaction(Transaction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Ecom::Transaction) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
