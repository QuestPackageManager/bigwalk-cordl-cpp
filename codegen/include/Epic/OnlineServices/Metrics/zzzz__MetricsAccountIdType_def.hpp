#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/MetricsAccountIdType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsAccountIdType)
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
struct MetricsAccountIdType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::MetricsAccountIdType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::MetricsAccountIdType, "Epic.OnlineServices.Metrics", "MetricsAccountIdType");
// Dependencies 
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.MetricsAccountIdType
struct CORDL_TYPE MetricsAccountIdType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MetricsAccountIdType_Unwrapped
enum struct __MetricsAccountIdType_Unwrapped : int32_t {
__E_Epic = static_cast<int32_t>(0x0),
__E_External = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetricsAccountIdType_Unwrapped () const noexcept {
return static_cast<__MetricsAccountIdType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetricsAccountIdType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MetricsAccountIdType(int32_t  value__) noexcept;

/// @brief Field Epic value: I32(0)
static ::Epic::OnlineServices::Metrics::MetricsAccountIdType const Epic;

/// @brief Field External value: I32(1)
static ::Epic::OnlineServices::Metrics::MetricsAccountIdType const External;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Metrics::MetricsAccountIdType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Metrics::MetricsAccountIdType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
