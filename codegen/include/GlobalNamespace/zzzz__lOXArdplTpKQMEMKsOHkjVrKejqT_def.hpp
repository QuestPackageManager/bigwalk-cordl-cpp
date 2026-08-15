#pragma once
// IWYU pragma private; include "GlobalNamespace/lOXArdplTpKQMEMKsOHkjVrKejqT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(lOXArdplTpKQMEMKsOHkjVrKejqT)
// Forward declare root types
namespace GlobalNamespace {
struct lOXArdplTpKQMEMKsOHkjVrKejqT;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT, "", "lOXArdplTpKQMEMKsOHkjVrKejqT");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: lOXArdplTpKQMEMKsOHkjVrKejqT
struct CORDL_TYPE lOXArdplTpKQMEMKsOHkjVrKejqT {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __lOXArdplTpKQMEMKsOHkjVrKejqT_Unwrapped
enum struct __lOXArdplTpKQMEMKsOHkjVrKejqT_Unwrapped : int32_t {
__E_MinimumPrecisionDefault = static_cast<int32_t>(0x0),
__E_MinimumPrecisionFloat16 = static_cast<int32_t>(0x1),
__E_MinimumPrecisionFloat28 = static_cast<int32_t>(0x2),
__E_MinimumPrecisionReserved = static_cast<int32_t>(0x3),
__E_MinimumPrecisionSInt16 = static_cast<int32_t>(0x4),
__E_MinimumPrecisionUInt16 = static_cast<int32_t>(0x5),
__E_MinimumPrecisionAny16 = static_cast<int32_t>(0xf0),
__E_MinimumPrecisionAny10 = static_cast<int32_t>(0xf1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __lOXArdplTpKQMEMKsOHkjVrKejqT_Unwrapped () const noexcept {
return static_cast<__lOXArdplTpKQMEMKsOHkjVrKejqT_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr lOXArdplTpKQMEMKsOHkjVrKejqT() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr lOXArdplTpKQMEMKsOHkjVrKejqT(int32_t  value__) noexcept;

/// @brief Field MinimumPrecisionAny10 value: I32(241)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionAny10;

/// @brief Field MinimumPrecisionAny16 value: I32(240)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionAny16;

/// @brief Field MinimumPrecisionDefault value: I32(0)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionDefault;

/// @brief Field MinimumPrecisionFloat16 value: I32(1)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionFloat16;

/// @brief Field MinimumPrecisionFloat28 value: I32(2)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionFloat28;

/// @brief Field MinimumPrecisionReserved value: I32(3)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionReserved;

/// @brief Field MinimumPrecisionSInt16 value: I32(4)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionSInt16;

/// @brief Field MinimumPrecisionUInt16 value: I32(5)
static ::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT const MinimumPrecisionUInt16;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::lOXArdplTpKQMEMKsOHkjVrKejqT) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
