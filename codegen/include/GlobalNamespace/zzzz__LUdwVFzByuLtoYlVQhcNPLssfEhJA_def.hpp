#pragma once
// IWYU pragma private; include "GlobalNamespace/LUdwVFzByuLtoYlVQhcNPLssfEhJA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LUdwVFzByuLtoYlVQhcNPLssfEhJA)
// Forward declare root types
namespace GlobalNamespace {
struct LUdwVFzByuLtoYlVQhcNPLssfEhJA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA, "", "LUdwVFzByuLtoYlVQhcNPLssfEhJA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LUdwVFzByuLtoYlVQhcNPLssfEhJA
struct CORDL_TYPE LUdwVFzByuLtoYlVQhcNPLssfEhJA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LUdwVFzByuLtoYlVQhcNPLssfEhJA_Unwrapped
enum struct __LUdwVFzByuLtoYlVQhcNPLssfEhJA_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_LocalUser = static_cast<int32_t>(0x0),
__E_RemoteUser = static_cast<int32_t>(0x1),
__E_LocalGuest = static_cast<int32_t>(0x2),
__E_RemoteGuest = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LUdwVFzByuLtoYlVQhcNPLssfEhJA_Unwrapped () const noexcept {
return static_cast<__LUdwVFzByuLtoYlVQhcNPLssfEhJA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LUdwVFzByuLtoYlVQhcNPLssfEhJA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LUdwVFzByuLtoYlVQhcNPLssfEhJA(int32_t  value__) noexcept;

/// @brief Field LocalGuest value: I32(2)
static ::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA const LocalGuest;

/// @brief Field LocalUser value: I32(0)
static ::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA const LocalUser;

/// @brief Field RemoteGuest value: I32(3)
static ::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA const RemoteGuest;

/// @brief Field RemoteUser value: I32(1)
static ::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA const RemoteUser;

/// @brief Field Unknown value: I32(-1)
static ::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LUdwVFzByuLtoYlVQhcNPLssfEhJA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
