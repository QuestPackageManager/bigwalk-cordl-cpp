#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInputPrimitive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LodInputPrimitive)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct LodInputPrimitive;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::LodInputPrimitive);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodInputPrimitive, "WaveHarmonic.Crest", "LodInputPrimitive");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.LodInputPrimitive
struct CORDL_TYPE LodInputPrimitive {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LodInputPrimitive_Unwrapped
enum struct __LodInputPrimitive_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_Cube = static_cast<int32_t>(0x3),
__E_Quad = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LodInputPrimitive_Unwrapped () const noexcept {
return static_cast<__LodInputPrimitive_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LodInputPrimitive() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LodInputPrimitive(int32_t  value__) noexcept;

/// @brief Field Cube value: I32(3)
static ::WaveHarmonic::Crest::LodInputPrimitive const Cube;

/// @brief Field Quad value: I32(5)
static ::WaveHarmonic::Crest::LodInputPrimitive const Quad;

/// @brief Field Sphere value: I32(0)
static ::WaveHarmonic::Crest::LodInputPrimitive const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LodInputPrimitive, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LodInputPrimitive) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
