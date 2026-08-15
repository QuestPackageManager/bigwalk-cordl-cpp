#pragma once
// IWYU pragma private; include "Mirror/PlayerSpawnMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSpawnMethod)
// Forward declare root types
namespace Mirror {
struct PlayerSpawnMethod;
}
// Write type traits
MARK_VAL_T(::Mirror::PlayerSpawnMethod);
DEFINE_IL2CPP_CLASS(::Mirror::PlayerSpawnMethod, "Mirror", "PlayerSpawnMethod");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.PlayerSpawnMethod
struct CORDL_TYPE PlayerSpawnMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerSpawnMethod_Unwrapped
enum struct __PlayerSpawnMethod_Unwrapped : int32_t {
__E_Random = static_cast<int32_t>(0x0),
__E_RoundRobin = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerSpawnMethod_Unwrapped () const noexcept {
return static_cast<__PlayerSpawnMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerSpawnMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerSpawnMethod(int32_t  value__) noexcept;

/// @brief Field Random value: I32(0)
static ::Mirror::PlayerSpawnMethod const Random;

/// @brief Field RoundRobin value: I32(1)
static ::Mirror::PlayerSpawnMethod const RoundRobin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::PlayerSpawnMethod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::PlayerSpawnMethod) == 0x4, "Size mismatch!");

} // namespace end def Mirror
