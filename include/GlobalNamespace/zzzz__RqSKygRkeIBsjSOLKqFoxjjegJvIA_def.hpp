#pragma once
// IWYU pragma private; include "GlobalNamespace/RqSKygRkeIBsjSOLKqFoxjjegJvIA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RqSKygRkeIBsjSOLKqFoxjjegJvIA)
// Forward declare root types
namespace GlobalNamespace {
struct RqSKygRkeIBsjSOLKqFoxjjegJvIA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA, "", "RqSKygRkeIBsjSOLKqFoxjjegJvIA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RqSKygRkeIBsjSOLKqFoxjjegJvIA
struct CORDL_TYPE RqSKygRkeIBsjSOLKqFoxjjegJvIA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RqSKygRkeIBsjSOLKqFoxjjegJvIA_Unwrapped
enum struct __RqSKygRkeIBsjSOLKqFoxjjegJvIA_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Acceleration = static_cast<int32_t>(0x300),
__E_Force = static_cast<int32_t>(0x400),
__E_Position = static_cast<int32_t>(0x100),
__E_Velocity = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RqSKygRkeIBsjSOLKqFoxjjegJvIA_Unwrapped () const noexcept {
return static_cast<__RqSKygRkeIBsjSOLKqFoxjjegJvIA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RqSKygRkeIBsjSOLKqFoxjjegJvIA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RqSKygRkeIBsjSOLKqFoxjjegJvIA(int32_t  value__) noexcept;

/// @brief Field Acceleration value: I32(768)
static ::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA const Acceleration;

/// @brief Field Force value: I32(1024)
static ::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA const Force;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA const None;

/// @brief Field Position value: I32(256)
static ::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA const Position;

/// @brief Field Velocity value: I32(512)
static ::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA const Velocity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RqSKygRkeIBsjSOLKqFoxjjegJvIA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
