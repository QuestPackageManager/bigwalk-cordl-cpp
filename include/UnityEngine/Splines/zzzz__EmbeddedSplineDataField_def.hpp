#pragma once
// IWYU pragma private; include "UnityEngine/Splines/EmbeddedSplineDataField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmbeddedSplineDataField)
// Forward declare root types
namespace UnityEngine::Splines {
struct EmbeddedSplineDataField;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::EmbeddedSplineDataField);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::EmbeddedSplineDataField, "UnityEngine.Splines", "EmbeddedSplineDataField");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.EmbeddedSplineDataField
struct CORDL_TYPE EmbeddedSplineDataField {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EmbeddedSplineDataField_Unwrapped
enum struct __EmbeddedSplineDataField_Unwrapped : int32_t {
__E_Container = static_cast<int32_t>(0x1),
__E_SplineIndex = static_cast<int32_t>(0x2),
__E_Key = static_cast<int32_t>(0x4),
__E_Type = static_cast<int32_t>(0x8),
__E_All = static_cast<int32_t>(0xff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EmbeddedSplineDataField_Unwrapped () const noexcept {
return static_cast<__EmbeddedSplineDataField_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedSplineDataField() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EmbeddedSplineDataField(int32_t  value__) noexcept;

/// @brief Field All value: I32(255)
static ::UnityEngine::Splines::EmbeddedSplineDataField const All;

/// @brief Field Container value: I32(1)
static ::UnityEngine::Splines::EmbeddedSplineDataField const Container;

/// @brief Field Key value: I32(4)
static ::UnityEngine::Splines::EmbeddedSplineDataField const Key;

/// @brief Field SplineIndex value: I32(2)
static ::UnityEngine::Splines::EmbeddedSplineDataField const SplineIndex;

/// @brief Field Type value: I32(8)
static ::UnityEngine::Splines::EmbeddedSplineDataField const Type;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineDataField, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::EmbeddedSplineDataField) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
