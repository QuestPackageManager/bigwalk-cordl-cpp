#pragma once
// IWYU pragma private; include "AmplifyImpostors/ImpostorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImpostorType)
// Forward declare root types
namespace AmplifyImpostors {
struct ImpostorType;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::ImpostorType);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::ImpostorType, "AmplifyImpostors", "ImpostorType");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.ImpostorType
struct CORDL_TYPE ImpostorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImpostorType_Unwrapped
enum struct __ImpostorType_Unwrapped : int32_t {
__E_Spherical = static_cast<int32_t>(0x0),
__E_Octahedron = static_cast<int32_t>(0x1),
__E_HemiOctahedron = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImpostorType_Unwrapped () const noexcept {
return static_cast<__ImpostorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImpostorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImpostorType(int32_t  value__) noexcept;

/// @brief Field HemiOctahedron value: I32(2)
static ::AmplifyImpostors::ImpostorType const HemiOctahedron;

/// @brief Field Octahedron value: I32(1)
static ::AmplifyImpostors::ImpostorType const Octahedron;

/// @brief Field Spherical value: I32(0)
static ::AmplifyImpostors::ImpostorType const Spherical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::ImpostorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::ImpostorType) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
