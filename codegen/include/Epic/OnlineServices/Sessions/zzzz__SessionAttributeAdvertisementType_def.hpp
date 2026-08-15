#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionAttributeAdvertisementType)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionAttributeAdvertisementType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType, "Epic.OnlineServices.Sessions", "SessionAttributeAdvertisementType");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionAttributeAdvertisementType
struct CORDL_TYPE SessionAttributeAdvertisementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionAttributeAdvertisementType_Unwrapped
enum struct __SessionAttributeAdvertisementType_Unwrapped : int32_t {
__E_DontAdvertise = static_cast<int32_t>(0x0),
__E_Advertise = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionAttributeAdvertisementType_Unwrapped () const noexcept {
return static_cast<__SessionAttributeAdvertisementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionAttributeAdvertisementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionAttributeAdvertisementType(int32_t  value__) noexcept;

/// @brief Field Advertise value: I32(1)
static ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType const Advertise;

/// @brief Field DontAdvertise value: I32(0)
static ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType const DontAdvertise;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
