#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/TransferDeviceIdAccountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TransferDeviceIdAccountOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct TransferDeviceIdAccountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions, "Epic.OnlineServices.Connect", "TransferDeviceIdAccountOptions");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.TransferDeviceIdAccountOptions
struct CORDL_TYPE TransferDeviceIdAccountOptions {
public:
// Declarations
 __declspec(property(get=get_LocalDeviceUserId, put=set_LocalDeviceUserId)) ::Epic::OnlineServices::ProductUserId*  LocalDeviceUserId;

 __declspec(property(get=get_PrimaryLocalUserId, put=set_PrimaryLocalUserId)) ::Epic::OnlineServices::ProductUserId*  PrimaryLocalUserId;

 __declspec(property(get=get_ProductUserIdToPreserve, put=set_ProductUserIdToPreserve)) ::Epic::OnlineServices::ProductUserId*  ProductUserIdToPreserve;

/// @brief Method get_LocalDeviceUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalDeviceUserId() ;

/// @brief Method get_PrimaryLocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_PrimaryLocalUserId() ;

/// @brief Method get_ProductUserIdToPreserve, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ProductUserIdToPreserve() ;

/// @brief Method set_LocalDeviceUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalDeviceUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_PrimaryLocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_PrimaryLocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ProductUserIdToPreserve, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ProductUserIdToPreserve(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransferDeviceIdAccountOptions() ;

// Ctor Parameters [CppParam { name: "_PrimaryLocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_LocalDeviceUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_ProductUserIdToPreserve_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr TransferDeviceIdAccountOptions(::Epic::OnlineServices::ProductUserId*  _PrimaryLocalUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalDeviceUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ProductUserIdToPreserve_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <PrimaryLocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _PrimaryLocalUserId_k__BackingField;

/// @brief Field <LocalDeviceUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalDeviceUserId_k__BackingField;

/// @brief Field <ProductUserIdToPreserve>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ProductUserIdToPreserve_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions, _PrimaryLocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions, _LocalDeviceUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions, _ProductUserIdToPreserve_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
