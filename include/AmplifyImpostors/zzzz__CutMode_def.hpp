#pragma once
// IWYU pragma private; include "AmplifyImpostors/CutMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CutMode)
// Forward declare root types
namespace AmplifyImpostors {
struct CutMode;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::CutMode);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::CutMode, "AmplifyImpostors", "CutMode");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.CutMode
struct CORDL_TYPE CutMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CutMode_Unwrapped
enum struct __CutMode_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_Manual = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CutMode_Unwrapped () const noexcept {
return static_cast<__CutMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CutMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CutMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::AmplifyImpostors::CutMode const Automatic;

/// @brief Field Manual value: I32(1)
static ::AmplifyImpostors::CutMode const Manual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::CutMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::CutMode) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
