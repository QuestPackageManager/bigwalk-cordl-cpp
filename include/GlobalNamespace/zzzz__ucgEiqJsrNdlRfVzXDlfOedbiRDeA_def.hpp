#pragma once
// IWYU pragma private; include "GlobalNamespace/ucgEiqJsrNdlRfVzXDlfOedbiRDeA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ucgEiqJsrNdlRfVzXDlfOedbiRDeA)
// Forward declare root types
namespace GlobalNamespace {
struct ucgEiqJsrNdlRfVzXDlfOedbiRDeA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA, "", "ucgEiqJsrNdlRfVzXDlfOedbiRDeA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ucgEiqJsrNdlRfVzXDlfOedbiRDeA
struct CORDL_TYPE ucgEiqJsrNdlRfVzXDlfOedbiRDeA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ucgEiqJsrNdlRfVzXDlfOedbiRDeA_Unwrapped
enum struct __ucgEiqJsrNdlRfVzXDlfOedbiRDeA_Unwrapped : int32_t {
__E_TwoWay = static_cast<int32_t>(0x0),
__E_FourWay = static_cast<int32_t>(0x1),
__E_EightWay = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ucgEiqJsrNdlRfVzXDlfOedbiRDeA_Unwrapped () const noexcept {
return static_cast<__ucgEiqJsrNdlRfVzXDlfOedbiRDeA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ucgEiqJsrNdlRfVzXDlfOedbiRDeA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ucgEiqJsrNdlRfVzXDlfOedbiRDeA(int32_t  value__) noexcept;

/// @brief Field EightWay value: I32(2)
static ::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA const EightWay;

/// @brief Field FourWay value: I32(1)
static ::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA const FourWay;

/// @brief Field TwoWay value: I32(0)
static ::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA const TwoWay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6027};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ucgEiqJsrNdlRfVzXDlfOedbiRDeA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
