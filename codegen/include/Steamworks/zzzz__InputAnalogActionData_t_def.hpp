#pragma once
// IWYU pragma private; include "Steamworks/InputAnalogActionData_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EInputSourceMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAnalogActionData_t)
// Forward declare root types
namespace Steamworks {
struct InputAnalogActionData_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::InputAnalogActionData_t);
DEFINE_IL2CPP_CLASS(::Steamworks::InputAnalogActionData_t, "Steamworks", "InputAnalogActionData_t");
// Dependencies Steamworks.EInputSourceMode
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.InputAnalogActionData_t
#pragma pack(push, 1)
struct CORDL_TYPE InputAnalogActionData_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputAnalogActionData_t() ;

// Ctor Parameters [CppParam { name: "eMode", ty: "::Steamworks::EInputSourceMode", modifiers: "", def_value: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bActive", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr InputAnalogActionData_t(::Steamworks::EInputSourceMode  eMode, float_t  x, float_t  y, uint8_t  bActive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd};

/// @brief Field eMode, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EInputSourceMode  eMode;

/// @brief Field x, offset: 0x4, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x8, size: 0x4, def value: None
 float_t  y;

/// @brief Field bActive, offset: 0xc, size: 0x1, def value: None
 uint8_t  bActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::InputAnalogActionData_t, eMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputAnalogActionData_t, x) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputAnalogActionData_t, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputAnalogActionData_t, bActive) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::InputAnalogActionData_t) == 0xd, "Size mismatch!");

} // namespace end def Steamworks
