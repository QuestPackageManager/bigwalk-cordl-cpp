#pragma once
// IWYU pragma private; include "GlobalNamespace/GBwhFDHCimlDRZUHQGLeIDLmTaPs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GBwhFDHCimlDRZUHQGLeIDLmTaPs)
// Forward declare root types
namespace GlobalNamespace {
struct GBwhFDHCimlDRZUHQGLeIDLmTaPs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs, "", "GBwhFDHCimlDRZUHQGLeIDLmTaPs");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GBwhFDHCimlDRZUHQGLeIDLmTaPs
struct CORDL_TYPE GBwhFDHCimlDRZUHQGLeIDLmTaPs {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GBwhFDHCimlDRZUHQGLeIDLmTaPs_Unwrapped
enum struct __GBwhFDHCimlDRZUHQGLeIDLmTaPs_Unwrapped : int32_t {
__E_Reset = static_cast<int32_t>(0x1),
__E_StopAll = static_cast<int32_t>(0x2),
__E_Pause = static_cast<int32_t>(0x4),
__E_Continue = static_cast<int32_t>(0x8),
__E_SetActuatorsOn = static_cast<int32_t>(0x10),
__E_SetActuatorsOff = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GBwhFDHCimlDRZUHQGLeIDLmTaPs_Unwrapped () const noexcept {
return static_cast<__GBwhFDHCimlDRZUHQGLeIDLmTaPs_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GBwhFDHCimlDRZUHQGLeIDLmTaPs() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GBwhFDHCimlDRZUHQGLeIDLmTaPs(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(8)
static ::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs const Continue;

/// @brief Field Pause value: I32(4)
static ::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs const Pause;

/// @brief Field Reset value: I32(1)
static ::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs const Reset;

/// @brief Field SetActuatorsOff value: I32(32)
static ::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs const SetActuatorsOff;

/// @brief Field SetActuatorsOn value: I32(16)
static ::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs const SetActuatorsOn;

/// @brief Field StopAll value: I32(2)
static ::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs const StopAll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GBwhFDHCimlDRZUHQGLeIDLmTaPs) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
