#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ComparisonOp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComparisonOp)
// Forward declare root types
namespace Epic::OnlineServices {
struct ComparisonOp;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ComparisonOp);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ComparisonOp, "Epic.OnlineServices", "ComparisonOp");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.ComparisonOp
struct CORDL_TYPE ComparisonOp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ComparisonOp_Unwrapped
enum struct __ComparisonOp_Unwrapped : int32_t {
__E_Equal = static_cast<int32_t>(0x0),
__E_Notequal = static_cast<int32_t>(0x1),
__E_Greaterthan = static_cast<int32_t>(0x2),
__E_Greaterthanorequal = static_cast<int32_t>(0x3),
__E_Lessthan = static_cast<int32_t>(0x4),
__E_Lessthanorequal = static_cast<int32_t>(0x5),
__E_Distance = static_cast<int32_t>(0x6),
__E_Anyof = static_cast<int32_t>(0x7),
__E_Notanyof = static_cast<int32_t>(0x8),
__E_Oneof = static_cast<int32_t>(0x9),
__E_Notoneof = static_cast<int32_t>(0xa),
__E_Contains = static_cast<int32_t>(0xb),
__E_Regexmatch = static_cast<int32_t>(0xc),
__E_Size = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ComparisonOp_Unwrapped () const noexcept {
return static_cast<__ComparisonOp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ComparisonOp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ComparisonOp(int32_t  value__) noexcept;

/// @brief Field Anyof value: I32(7)
static ::Epic::OnlineServices::ComparisonOp const Anyof;

/// @brief Field Contains value: I32(11)
static ::Epic::OnlineServices::ComparisonOp const Contains;

/// @brief Field Distance value: I32(6)
static ::Epic::OnlineServices::ComparisonOp const Distance;

/// @brief Field Equal value: I32(0)
static ::Epic::OnlineServices::ComparisonOp const Equal;

/// @brief Field Greaterthan value: I32(2)
static ::Epic::OnlineServices::ComparisonOp const Greaterthan;

/// @brief Field Greaterthanorequal value: I32(3)
static ::Epic::OnlineServices::ComparisonOp const Greaterthanorequal;

/// @brief Field Lessthan value: I32(4)
static ::Epic::OnlineServices::ComparisonOp const Lessthan;

/// @brief Field Lessthanorequal value: I32(5)
static ::Epic::OnlineServices::ComparisonOp const Lessthanorequal;

/// @brief Field Notanyof value: I32(8)
static ::Epic::OnlineServices::ComparisonOp const Notanyof;

/// @brief Field Notequal value: I32(1)
static ::Epic::OnlineServices::ComparisonOp const Notequal;

/// @brief Field Notoneof value: I32(10)
static ::Epic::OnlineServices::ComparisonOp const Notoneof;

/// @brief Field Oneof value: I32(9)
static ::Epic::OnlineServices::ComparisonOp const Oneof;

/// @brief Field Regexmatch value: I32(12)
static ::Epic::OnlineServices::ComparisonOp const Regexmatch;

/// @brief Field Size value: I32(13)
static ::Epic::OnlineServices::ComparisonOp const Size;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7446};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ComparisonOp, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ComparisonOp) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices
