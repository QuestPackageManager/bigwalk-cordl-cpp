#pragma once
// IWYU pragma private; include "MA/Flora/FloraMinimumScreenSizeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraMinimumScreenSizeMode)
// Forward declare root types
namespace MA::Flora {
struct FloraMinimumScreenSizeMode;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraMinimumScreenSizeMode);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraMinimumScreenSizeMode, "MA.Flora", "FloraMinimumScreenSizeMode");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraMinimumScreenSizeMode
struct CORDL_TYPE FloraMinimumScreenSizeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraMinimumScreenSizeMode_Unwrapped
enum struct __FloraMinimumScreenSizeMode_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_RenderersOnly = static_cast<int32_t>(0x1),
__E_RenderersAndLODGroups = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraMinimumScreenSizeMode_Unwrapped () const noexcept {
return static_cast<__FloraMinimumScreenSizeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraMinimumScreenSizeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraMinimumScreenSizeMode(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::MA::Flora::FloraMinimumScreenSizeMode const Disabled;

/// @brief Field RenderersAndLODGroups value: I32(2)
static ::MA::Flora::FloraMinimumScreenSizeMode const RenderersAndLODGroups;

/// @brief Field RenderersOnly value: I32(1)
static ::MA::Flora::FloraMinimumScreenSizeMode const RenderersOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13289};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraMinimumScreenSizeMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraMinimumScreenSizeMode) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
