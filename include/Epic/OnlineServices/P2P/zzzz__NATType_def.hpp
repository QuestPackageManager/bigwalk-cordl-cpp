#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/NATType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NATType)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct NATType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::NATType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::NATType, "Epic.OnlineServices.P2P", "NATType");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.NATType
struct CORDL_TYPE NATType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NATType_Unwrapped
enum struct __NATType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Open = static_cast<int32_t>(0x1),
__E_Moderate = static_cast<int32_t>(0x2),
__E_Strict = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NATType_Unwrapped () const noexcept {
return static_cast<__NATType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NATType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NATType(int32_t  value__) noexcept;

/// @brief Field Moderate value: I32(2)
static ::Epic::OnlineServices::P2P::NATType const Moderate;

/// @brief Field Open value: I32(1)
static ::Epic::OnlineServices::P2P::NATType const Open;

/// @brief Field Strict value: I32(3)
static ::Epic::OnlineServices::P2P::NATType const Strict;

/// @brief Field Unknown value: I32(0)
static ::Epic::OnlineServices::P2P::NATType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::NATType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::NATType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
