#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetTransactionCountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GetTransactionCountOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct GetTransactionCountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::GetTransactionCountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::GetTransactionCountOptions, "Epic.OnlineServices.Ecom", "GetTransactionCountOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.GetTransactionCountOptions
struct CORDL_TYPE GetTransactionCountOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetTransactionCountOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }]
constexpr GetTransactionCountOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::GetTransactionCountOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::GetTransactionCountOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
