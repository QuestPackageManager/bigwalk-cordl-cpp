#pragma once
// IWYU pragma private; include "GlobalNamespace/lnEANUuUvSJgFisTtUNmHySilVNF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(lnEANUuUvSJgFisTtUNmHySilVNF)
// Forward declare root types
namespace GlobalNamespace {
struct lnEANUuUvSJgFisTtUNmHySilVNF;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF, "", "lnEANUuUvSJgFisTtUNmHySilVNF");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: lnEANUuUvSJgFisTtUNmHySilVNF
struct CORDL_TYPE lnEANUuUvSJgFisTtUNmHySilVNF {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __lnEANUuUvSJgFisTtUNmHySilVNF_Unwrapped
enum struct __lnEANUuUvSJgFisTtUNmHySilVNF_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_RelativeAxis = static_cast<int32_t>(0x1),
__E_AbsoluteAxis = static_cast<int32_t>(0x2),
__E_Axis = static_cast<int32_t>(0x3),
__E_PushButton = static_cast<int32_t>(0x4),
__E_ToggleButton = static_cast<int32_t>(0x8),
__E_Button = static_cast<int32_t>(0xc),
__E_PointOfViewController = static_cast<int32_t>(0x10),
__E_Collection = static_cast<int32_t>(0x40),
__E_NoData = static_cast<int32_t>(0x80),
__E_AnyInstance = static_cast<int32_t>(0xffff00),
__E_ForceFeedbackActuator = static_cast<int32_t>(0x1000000),
__E_ForceFeedbackEffectTrigger = static_cast<int32_t>(0x2000000),
__E_Output = static_cast<int32_t>(0x10000000),
__E_VendorDefined = static_cast<int32_t>(0x4000000),
__E_Alias = static_cast<int32_t>(0x8000000),
__E_Optional = static_cast<int32_t>(0x80000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __lnEANUuUvSJgFisTtUNmHySilVNF_Unwrapped () const noexcept {
return static_cast<__lnEANUuUvSJgFisTtUNmHySilVNF_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr lnEANUuUvSJgFisTtUNmHySilVNF() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr lnEANUuUvSJgFisTtUNmHySilVNF(int32_t  value__) noexcept;

/// @brief Field AbsoluteAxis value: I32(2)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const AbsoluteAxis;

/// @brief Field Alias value: I32(134217728)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const Alias;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const All;

/// @brief Field AnyInstance value: I32(16776960)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const AnyInstance;

/// @brief Field Axis value: I32(3)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const Axis;

/// @brief Field Button value: I32(12)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const Button;

/// @brief Field Collection value: I32(64)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const Collection;

/// @brief Field ForceFeedbackActuator value: I32(16777216)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const ForceFeedbackActuator;

/// @brief Field ForceFeedbackEffectTrigger value: I32(33554432)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const ForceFeedbackEffectTrigger;

/// @brief Field NoData value: I32(128)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const NoData;

/// @brief Field Optional value: I32(-2147483648)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const Optional;

/// @brief Field Output value: I32(268435456)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const Output;

/// @brief Field PointOfViewController value: I32(16)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const PointOfViewController;

/// @brief Field PushButton value: I32(4)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const PushButton;

/// @brief Field RelativeAxis value: I32(1)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const RelativeAxis;

/// @brief Field ToggleButton value: I32(8)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const ToggleButton;

/// @brief Field VendorDefined value: I32(67108864)
static ::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF const VendorDefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::lnEANUuUvSJgFisTtUNmHySilVNF) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
