#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterInjectionPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterInjectionPoint)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct WaterInjectionPoint;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::WaterInjectionPoint);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterInjectionPoint, "WaveHarmonic.Crest", "WaterInjectionPoint");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.WaterInjectionPoint
struct CORDL_TYPE WaterInjectionPoint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterInjectionPoint_Unwrapped
enum struct __WaterInjectionPoint_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_BeforeTransparent = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterInjectionPoint_Unwrapped () const noexcept {
return static_cast<__WaterInjectionPoint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterInjectionPoint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaterInjectionPoint(int32_t  value__) noexcept;

/// @brief Field BeforeTransparent value: I32(1)
static ::WaveHarmonic::Crest::WaterInjectionPoint const BeforeTransparent;

/// @brief Field Default value: I32(0)
static ::WaveHarmonic::Crest::WaterInjectionPoint const Default;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterInjectionPoint, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterInjectionPoint) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
