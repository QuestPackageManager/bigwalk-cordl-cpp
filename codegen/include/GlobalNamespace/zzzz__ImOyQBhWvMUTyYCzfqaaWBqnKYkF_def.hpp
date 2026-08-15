#pragma once
// IWYU pragma private; include "GlobalNamespace/ImOyQBhWvMUTyYCzfqaaWBqnKYkF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImOyQBhWvMUTyYCzfqaaWBqnKYkF)
// Forward declare root types
namespace GlobalNamespace {
struct ImOyQBhWvMUTyYCzfqaaWBqnKYkF;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF, "", "ImOyQBhWvMUTyYCzfqaaWBqnKYkF");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ImOyQBhWvMUTyYCzfqaaWBqnKYkF
struct CORDL_TYPE ImOyQBhWvMUTyYCzfqaaWBqnKYkF {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __ImOyQBhWvMUTyYCzfqaaWBqnKYkF_Unwrapped
enum struct __ImOyQBhWvMUTyYCzfqaaWBqnKYkF_Unwrapped : int16_t {
__E_KeyDown = static_cast<int16_t>(0x1),
__E_KeyUp = static_cast<int16_t>(0x2),
__E_Repeat = static_cast<int16_t>(0x4),
__E_None = static_cast<int16_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImOyQBhWvMUTyYCzfqaaWBqnKYkF_Unwrapped () const noexcept {
return static_cast<__ImOyQBhWvMUTyYCzfqaaWBqnKYkF_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImOyQBhWvMUTyYCzfqaaWBqnKYkF() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr ImOyQBhWvMUTyYCzfqaaWBqnKYkF(int16_t  value__) noexcept;

/// @brief Field KeyDown value: I16(1)
static ::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF const KeyDown;

/// @brief Field KeyUp value: I16(2)
static ::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF const KeyUp;

/// @brief Field None value: I16(0)
static ::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF const None;

/// @brief Field Repeat value: I16(4)
static ::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF const Repeat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImOyQBhWvMUTyYCzfqaaWBqnKYkF) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
