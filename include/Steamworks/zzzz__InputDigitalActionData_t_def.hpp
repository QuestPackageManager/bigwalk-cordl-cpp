#pragma once
// IWYU pragma private; include "Steamworks/InputDigitalActionData_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDigitalActionData_t)
// Forward declare root types
namespace Steamworks {
struct InputDigitalActionData_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::InputDigitalActionData_t);
DEFINE_IL2CPP_CLASS(::Steamworks::InputDigitalActionData_t, "Steamworks", "InputDigitalActionData_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.InputDigitalActionData_t
#pragma pack(push, 1)
struct CORDL_TYPE InputDigitalActionData_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputDigitalActionData_t() ;

// Ctor Parameters [CppParam { name: "bState", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "bActive", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr InputDigitalActionData_t(uint8_t  bState, uint8_t  bActive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field bState, offset: 0x0, size: 0x1, def value: None
 uint8_t  bState;

/// @brief Field bActive, offset: 0x1, size: 0x1, def value: None
 uint8_t  bActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::InputDigitalActionData_t, bState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputDigitalActionData_t, bActive) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Steamworks::InputDigitalActionData_t) == 0x2, "Size mismatch!");

} // namespace end def Steamworks
