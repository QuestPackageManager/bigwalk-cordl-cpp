#pragma once
// IWYU pragma private; include "Steamworks/InputMotionData_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InputMotionData_t)
// Forward declare root types
namespace Steamworks {
struct InputMotionData_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::InputMotionData_t);
DEFINE_IL2CPP_CLASS(::Steamworks::InputMotionData_t, "Steamworks", "InputMotionData_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.InputMotionData_t
#pragma pack(push, 8)
struct CORDL_TYPE InputMotionData_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputMotionData_t() ;

// Ctor Parameters [CppParam { name: "rotQuatX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotQuatY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotQuatZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotQuatW", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posAccelX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posAccelY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posAccelZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotVelX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotVelY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotVelZ", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputMotionData_t(float_t  rotQuatX, float_t  rotQuatY, float_t  rotQuatZ, float_t  rotQuatW, float_t  posAccelX, float_t  posAccelY, float_t  posAccelZ, float_t  rotVelX, float_t  rotVelY, float_t  rotVelZ) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field rotQuatX, offset: 0x0, size: 0x4, def value: None
 float_t  rotQuatX;

/// @brief Field rotQuatY, offset: 0x4, size: 0x4, def value: None
 float_t  rotQuatY;

/// @brief Field rotQuatZ, offset: 0x8, size: 0x4, def value: None
 float_t  rotQuatZ;

/// @brief Field rotQuatW, offset: 0xc, size: 0x4, def value: None
 float_t  rotQuatW;

/// @brief Field posAccelX, offset: 0x10, size: 0x4, def value: None
 float_t  posAccelX;

/// @brief Field posAccelY, offset: 0x14, size: 0x4, def value: None
 float_t  posAccelY;

/// @brief Field posAccelZ, offset: 0x18, size: 0x4, def value: None
 float_t  posAccelZ;

/// @brief Field rotVelX, offset: 0x1c, size: 0x4, def value: None
 float_t  rotVelX;

/// @brief Field rotVelY, offset: 0x20, size: 0x4, def value: None
 float_t  rotVelY;

/// @brief Field rotVelZ, offset: 0x24, size: 0x4, def value: None
 float_t  rotVelZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::InputMotionData_t, rotQuatX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, rotQuatY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, rotQuatZ) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, rotQuatW) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, posAccelX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, posAccelY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, posAccelZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, rotVelX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, rotVelY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InputMotionData_t, rotVelZ) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Steamworks::InputMotionData_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
