#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineType)
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineType, "UnityEngine.Splines", "SplineType");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineType
struct CORDL_TYPE SplineType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SplineType_Unwrapped
enum struct __SplineType_Unwrapped : uint8_t {
__E_CatmullRom = static_cast<uint8_t>(0x0u),
__E_Bezier = static_cast<uint8_t>(0x1u),
__E_Linear = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineType_Unwrapped () const noexcept {
return static_cast<__SplineType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SplineType(uint8_t  value__) noexcept;

/// @brief Field Bezier value: U8(1)
static ::UnityEngine::Splines::SplineType const Bezier;

/// @brief Field CatmullRom value: U8(0)
static ::UnityEngine::Splines::SplineType const CatmullRom;

/// @brief Field Linear value: U8(2)
static ::UnityEngine::Splines::SplineType const Linear;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineType, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineType) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Splines
