#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappingScaling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontMappingScaling)
namespace GlobalNamespace {
struct FontMappingScaling_UseCase;
}
// Forward declare root types
namespace GlobalNamespace {
struct FontMappingScaling_UseCase;
}
namespace GlobalNamespace {
struct FontMappingScaling;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FontMappingScaling_UseCase);
MARK_VAL_T(::GlobalNamespace::FontMappingScaling);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontMappingScaling_UseCase, "", "FontMappingScaling/UseCase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontMappingScaling, "", "FontMappingScaling");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FontMappingScaling/UseCase
struct CORDL_TYPE FontMappingScaling_UseCase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FontMappingScaling_UseCase_Unwrapped
enum struct __FontMappingScaling_UseCase_Unwrapped : int32_t {
__E_GoalsMenu = static_cast<int32_t>(0x0),
__E_ControlsDiagram = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FontMappingScaling_UseCase_Unwrapped () const noexcept {
return static_cast<__FontMappingScaling_UseCase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FontMappingScaling_UseCase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontMappingScaling_UseCase(int32_t  value__) noexcept;

/// @brief Field ControlsDiagram value: I32(1)
static ::GlobalNamespace::FontMappingScaling_UseCase const ControlsDiagram;

/// @brief Field GoalsMenu value: I32(0)
static ::GlobalNamespace::FontMappingScaling_UseCase const GoalsMenu;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontMappingScaling_UseCase, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontMappingScaling_UseCase) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FontMappingScaling::UseCase
namespace GlobalNamespace {
// Is value type: true
// CS Name: FontMappingScaling
struct CORDL_TYPE FontMappingScaling {
public:
// Declarations
using UseCase = ::GlobalNamespace::FontMappingScaling_UseCase;

// Ctor Parameters []
// @brief default ctor
constexpr FontMappingScaling() ;

// Ctor Parameters [CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "useCase", ty: "::GlobalNamespace::FontMappingScaling_UseCase", modifiers: "", def_value: None }]
constexpr FontMappingScaling(float_t  scale, ::GlobalNamespace::FontMappingScaling_UseCase  useCase) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field scale, offset: 0x0, size: 0x4, def value: None
 float_t  scale;

/// @brief Field useCase, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::FontMappingScaling_UseCase  useCase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontMappingScaling, scale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingScaling, useCase) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontMappingScaling) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
