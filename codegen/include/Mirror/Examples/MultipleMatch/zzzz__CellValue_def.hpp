#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/CellValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellValue)
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct CellValue;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::CellValue);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::CellValue, "Mirror.Examples.MultipleMatch", "CellValue");
// Dependencies 
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.CellValue
struct CORDL_TYPE CellValue {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __CellValue_Unwrapped
enum struct __CellValue_Unwrapped : uint16_t {
__E_None = static_cast<uint16_t>(0x0u),
__E_A1 = static_cast<uint16_t>(0x1u),
__E_B1 = static_cast<uint16_t>(0x2u),
__E_C1 = static_cast<uint16_t>(0x4u),
__E_A2 = static_cast<uint16_t>(0x8u),
__E_B2 = static_cast<uint16_t>(0x10u),
__E_C2 = static_cast<uint16_t>(0x20u),
__E_A3 = static_cast<uint16_t>(0x40u),
__E_B3 = static_cast<uint16_t>(0x80u),
__E_C3 = static_cast<uint16_t>(0x100u),
__E_TopRow = static_cast<uint16_t>(0x7u),
__E_MidRow = static_cast<uint16_t>(0x38u),
__E_BotRow = static_cast<uint16_t>(0x1c0u),
__E_LeftCol = static_cast<uint16_t>(0x49u),
__E_MidCol = static_cast<uint16_t>(0x92u),
__E_RightCol = static_cast<uint16_t>(0x124u),
__E_Diag1 = static_cast<uint16_t>(0x111u),
__E_Diag2 = static_cast<uint16_t>(0x54u),
__E_Full = static_cast<uint16_t>(0x1ffu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CellValue_Unwrapped () const noexcept {
return static_cast<__CellValue_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CellValue() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr CellValue(uint16_t  value__) noexcept;

/// @brief Field A1 value: U16(1)
static ::Mirror::Examples::MultipleMatch::CellValue const A1;

/// @brief Field A2 value: U16(8)
static ::Mirror::Examples::MultipleMatch::CellValue const A2;

/// @brief Field A3 value: U16(64)
static ::Mirror::Examples::MultipleMatch::CellValue const A3;

/// @brief Field B1 value: U16(2)
static ::Mirror::Examples::MultipleMatch::CellValue const B1;

/// @brief Field B2 value: U16(16)
static ::Mirror::Examples::MultipleMatch::CellValue const B2;

/// @brief Field B3 value: U16(128)
static ::Mirror::Examples::MultipleMatch::CellValue const B3;

/// @brief Field BotRow value: U16(448)
static ::Mirror::Examples::MultipleMatch::CellValue const BotRow;

/// @brief Field C1 value: U16(4)
static ::Mirror::Examples::MultipleMatch::CellValue const C1;

/// @brief Field C2 value: U16(32)
static ::Mirror::Examples::MultipleMatch::CellValue const C2;

/// @brief Field C3 value: U16(256)
static ::Mirror::Examples::MultipleMatch::CellValue const C3;

/// @brief Field Diag1 value: U16(273)
static ::Mirror::Examples::MultipleMatch::CellValue const Diag1;

/// @brief Field Diag2 value: U16(84)
static ::Mirror::Examples::MultipleMatch::CellValue const Diag2;

/// @brief Field Full value: U16(511)
static ::Mirror::Examples::MultipleMatch::CellValue const Full;

/// @brief Field LeftCol value: U16(73)
static ::Mirror::Examples::MultipleMatch::CellValue const LeftCol;

/// @brief Field MidCol value: U16(146)
static ::Mirror::Examples::MultipleMatch::CellValue const MidCol;

/// @brief Field MidRow value: U16(56)
static ::Mirror::Examples::MultipleMatch::CellValue const MidRow;

/// @brief Field None value: U16(0)
static ::Mirror::Examples::MultipleMatch::CellValue const None;

/// @brief Field RightCol value: U16(292)
static ::Mirror::Examples::MultipleMatch::CellValue const RightCol;

/// @brief Field TopRow value: U16(7)
static ::Mirror::Examples::MultipleMatch::CellValue const TopRow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::CellValue, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::CellValue) == 0x2, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
