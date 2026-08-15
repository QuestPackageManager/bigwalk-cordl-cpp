#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/EndPlayerSessionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptionsAccountId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EndPlayerSessionOptions)
namespace Epic::OnlineServices::Metrics {
struct EndPlayerSessionOptionsAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
struct EndPlayerSessionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions, "Epic.OnlineServices.Metrics", "EndPlayerSessionOptions");
// Dependencies Epic.OnlineServices.Metrics.EndPlayerSessionOptionsAccountId
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.EndPlayerSessionOptions
struct CORDL_TYPE EndPlayerSessionOptions {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId  AccountId;

/// @brief Method get_AccountId, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId get_AccountId() ;

/// @brief Method set_AccountId, addr 0x180503af0, size 0x20, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EndPlayerSessionOptions() ;

// Ctor Parameters [CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId", modifiers: "", def_value: None }]
constexpr EndPlayerSessionOptions(::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId  _AccountId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8410};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <AccountId>k__BackingField, offset: 0x0, size: 0x18, def value: None
 ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountId  _AccountId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions, _AccountId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Metrics::EndPlayerSessionOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
