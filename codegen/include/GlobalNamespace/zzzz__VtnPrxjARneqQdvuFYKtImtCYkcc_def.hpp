#pragma once
// IWYU pragma private; include "GlobalNamespace/VtnPrxjARneqQdvuFYKtImtCYkcc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VtnPrxjARneqQdvuFYKtImtCYkcc)
// Forward declare root types
namespace GlobalNamespace {
struct VtnPrxjARneqQdvuFYKtImtCYkcc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc, "", "VtnPrxjARneqQdvuFYKtImtCYkcc");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VtnPrxjARneqQdvuFYKtImtCYkcc
struct CORDL_TYPE VtnPrxjARneqQdvuFYKtImtCYkcc {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VtnPrxjARneqQdvuFYKtImtCYkcc_Unwrapped
enum struct __VtnPrxjARneqQdvuFYKtImtCYkcc_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_ConstantForce = static_cast<int32_t>(0x1),
__E_RampForce = static_cast<int32_t>(0x2),
__E_Periodic = static_cast<int32_t>(0x3),
__E_Condition = static_cast<int32_t>(0x4),
__E_CustomForce = static_cast<int32_t>(0x5),
__E_Hardware = static_cast<int32_t>(0xff),
__E_Attack = static_cast<int32_t>(0x200),
__E_Fade = static_cast<int32_t>(0x400),
__E_Saturation = static_cast<int32_t>(0x800),
__E_TwoCoefficients = static_cast<int32_t>(0x1000),
__E_TwoSaturations = static_cast<int32_t>(0x2000),
__E_DeadBand = static_cast<int32_t>(0x4000),
__E_StartDelay = static_cast<int32_t>(0x8000),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VtnPrxjARneqQdvuFYKtImtCYkcc_Unwrapped () const noexcept {
return static_cast<__VtnPrxjARneqQdvuFYKtImtCYkcc_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VtnPrxjARneqQdvuFYKtImtCYkcc() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VtnPrxjARneqQdvuFYKtImtCYkcc(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const All;

/// @brief Field Attack value: I32(512)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const Attack;

/// @brief Field Condition value: I32(4)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const Condition;

/// @brief Field ConstantForce value: I32(1)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const ConstantForce;

/// @brief Field CustomForce value: I32(5)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const CustomForce;

/// @brief Field DeadBand value: I32(16384)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const DeadBand;

/// @brief Field Fade value: I32(1024)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const Fade;

/// @brief Field Hardware value: I32(255)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const Hardware;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const None;

/// @brief Field Periodic value: I32(3)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const Periodic;

/// @brief Field RampForce value: I32(2)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const RampForce;

/// @brief Field Saturation value: I32(2048)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const Saturation;

/// @brief Field StartDelay value: I32(32768)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const StartDelay;

/// @brief Field TwoCoefficients value: I32(4096)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const TwoCoefficients;

/// @brief Field TwoSaturations value: I32(8192)
static ::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc const TwoSaturations;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VtnPrxjARneqQdvuFYKtImtCYkcc) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
