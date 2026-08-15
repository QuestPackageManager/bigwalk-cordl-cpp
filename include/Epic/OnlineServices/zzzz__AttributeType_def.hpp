#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AttributeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeType)
// Forward declare root types
namespace Epic::OnlineServices {
struct AttributeType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AttributeType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AttributeType, "Epic.OnlineServices", "AttributeType");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.AttributeType
struct CORDL_TYPE AttributeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AttributeType_Unwrapped
enum struct __AttributeType_Unwrapped : int32_t {
__E_Boolean = static_cast<int32_t>(0x0),
__E_Int64 = static_cast<int32_t>(0x1),
__E_Double = static_cast<int32_t>(0x2),
__E_String = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeType_Unwrapped () const noexcept {
return static_cast<__AttributeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AttributeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AttributeType(int32_t  value__) noexcept;

/// @brief Field Boolean value: I32(0)
static ::Epic::OnlineServices::AttributeType const Boolean;

/// @brief Field Double value: I32(2)
static ::Epic::OnlineServices::AttributeType const Double;

/// @brief Field Int64 value: I32(1)
static ::Epic::OnlineServices::AttributeType const Int64;

/// @brief Field String value: I32(3)
static ::Epic::OnlineServices::AttributeType const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AttributeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AttributeType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices
