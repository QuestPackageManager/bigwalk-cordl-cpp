#pragma once
// IWYU pragma private; include "UnityEngine/Splines/TangentMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TangentMode)
// Forward declare root types
namespace UnityEngine::Splines {
struct TangentMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::TangentMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::TangentMode, "UnityEngine.Splines", "TangentMode");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.TangentMode
struct CORDL_TYPE TangentMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TangentMode_Unwrapped
enum struct __TangentMode_Unwrapped : int32_t {
__E_AutoSmooth = static_cast<int32_t>(0x0),
__E_Linear = static_cast<int32_t>(0x1),
__E_Mirrored = static_cast<int32_t>(0x2),
__E_Continuous = static_cast<int32_t>(0x3),
__E_Broken = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TangentMode_Unwrapped () const noexcept {
return static_cast<__TangentMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TangentMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TangentMode(int32_t  value__) noexcept;

/// @brief Field AutoSmooth value: I32(0)
static ::UnityEngine::Splines::TangentMode const AutoSmooth;

/// @brief Field Broken value: I32(4)
static ::UnityEngine::Splines::TangentMode const Broken;

/// @brief Field Continuous value: I32(3)
static ::UnityEngine::Splines::TangentMode const Continuous;

/// @brief Field Linear value: I32(1)
static ::UnityEngine::Splines::TangentMode const Linear;

/// @brief Field Mirrored value: I32(2)
static ::UnityEngine::Splines::TangentMode const Mirrored;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::TangentMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::TangentMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
