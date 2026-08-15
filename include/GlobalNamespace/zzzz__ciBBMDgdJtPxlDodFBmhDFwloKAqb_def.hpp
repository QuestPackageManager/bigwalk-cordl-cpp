#pragma once
// IWYU pragma private; include "GlobalNamespace/ciBBMDgdJtPxlDodFBmhDFwloKAqb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ciBBMDgdJtPxlDodFBmhDFwloKAqb)
// Forward declare root types
namespace GlobalNamespace {
struct ciBBMDgdJtPxlDodFBmhDFwloKAqb;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb, "", "ciBBMDgdJtPxlDodFBmhDFwloKAqb");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ciBBMDgdJtPxlDodFBmhDFwloKAqb
struct CORDL_TYPE ciBBMDgdJtPxlDodFBmhDFwloKAqb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ciBBMDgdJtPxlDodFBmhDFwloKAqb_Unwrapped
enum struct __ciBBMDgdJtPxlDodFBmhDFwloKAqb_Unwrapped : uint8_t {
__E_Button = static_cast<uint8_t>(0x0u),
__E_Axis = static_cast<uint8_t>(0x1u),
__E_Hat = static_cast<uint8_t>(0x2u),
__E_Ball = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ciBBMDgdJtPxlDodFBmhDFwloKAqb_Unwrapped () const noexcept {
return static_cast<__ciBBMDgdJtPxlDodFBmhDFwloKAqb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ciBBMDgdJtPxlDodFBmhDFwloKAqb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ciBBMDgdJtPxlDodFBmhDFwloKAqb(uint8_t  value__) noexcept;

/// @brief Field Axis value: U8(1)
static ::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb const Axis;

/// @brief Field Ball value: U8(3)
static ::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb const Ball;

/// @brief Field Button value: U8(0)
static ::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb const Button;

/// @brief Field Hat value: U8(2)
static ::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb const Hat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ciBBMDgdJtPxlDodFBmhDFwloKAqb) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
