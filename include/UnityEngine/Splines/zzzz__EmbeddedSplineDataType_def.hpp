#pragma once
// IWYU pragma private; include "UnityEngine/Splines/EmbeddedSplineDataType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmbeddedSplineDataType)
// Forward declare root types
namespace UnityEngine::Splines {
struct EmbeddedSplineDataType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::EmbeddedSplineDataType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::EmbeddedSplineDataType, "UnityEngine.Splines", "EmbeddedSplineDataType");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.EmbeddedSplineDataType
struct CORDL_TYPE EmbeddedSplineDataType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EmbeddedSplineDataType_Unwrapped
enum struct __EmbeddedSplineDataType_Unwrapped : int32_t {
__E_Int = static_cast<int32_t>(0x0),
__E_Float = static_cast<int32_t>(0x1),
__E_Float4 = static_cast<int32_t>(0x2),
__E_Object = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EmbeddedSplineDataType_Unwrapped () const noexcept {
return static_cast<__EmbeddedSplineDataType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedSplineDataType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EmbeddedSplineDataType(int32_t  value__) noexcept;

/// @brief Field Float value: I32(1)
static ::UnityEngine::Splines::EmbeddedSplineDataType const Float;

/// @brief Field Float4 value: I32(2)
static ::UnityEngine::Splines::EmbeddedSplineDataType const Float4;

/// @brief Field Int value: I32(0)
static ::UnityEngine::Splines::EmbeddedSplineDataType const Int;

/// @brief Field Object value: I32(3)
static ::UnityEngine::Splines::EmbeddedSplineDataType const Object;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18687};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineDataType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::EmbeddedSplineDataType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
