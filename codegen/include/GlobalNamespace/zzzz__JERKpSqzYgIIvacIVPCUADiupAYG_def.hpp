#pragma once
// IWYU pragma private; include "GlobalNamespace/JERKpSqzYgIIvacIVPCUADiupAYG.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JERKpSqzYgIIvacIVPCUADiupAYG)
// Forward declare root types
namespace GlobalNamespace {
struct JERKpSqzYgIIvacIVPCUADiupAYG;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG, "", "JERKpSqzYgIIvacIVPCUADiupAYG");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: JERKpSqzYgIIvacIVPCUADiupAYG
struct CORDL_TYPE JERKpSqzYgIIvacIVPCUADiupAYG {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JERKpSqzYgIIvacIVPCUADiupAYG_Unwrapped
enum struct __JERKpSqzYgIIvacIVPCUADiupAYG_Unwrapped : int32_t {
__E_Userpacked = static_cast<int32_t>(0x1),
__E_Used = static_cast<int32_t>(0x2),
__E_InterfacePointer = static_cast<int32_t>(0x4),
__E_InterfaceParameter = static_cast<int32_t>(0x8),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JERKpSqzYgIIvacIVPCUADiupAYG_Unwrapped () const noexcept {
return static_cast<__JERKpSqzYgIIvacIVPCUADiupAYG_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JERKpSqzYgIIvacIVPCUADiupAYG() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JERKpSqzYgIIvacIVPCUADiupAYG(int32_t  value__) noexcept;

/// @brief Field InterfaceParameter value: I32(8)
static ::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG const InterfaceParameter;

/// @brief Field InterfacePointer value: I32(4)
static ::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG const InterfacePointer;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG const None;

/// @brief Field Used value: I32(2)
static ::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG const Used;

/// @brief Field Userpacked value: I32(1)
static ::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG const Userpacked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JERKpSqzYgIIvacIVPCUADiupAYG) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
