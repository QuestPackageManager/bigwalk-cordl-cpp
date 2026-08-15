#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInputMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LodInputMode)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::LodInputMode);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodInputMode, "WaveHarmonic.Crest", "LodInputMode");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.LodInputMode
struct CORDL_TYPE LodInputMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LodInputMode_Unwrapped
enum struct __LodInputMode_Unwrapped : int32_t {
__E_Unset = static_cast<int32_t>(0x0),
__E_Paint = static_cast<int32_t>(0x1),
__E_Spline = static_cast<int32_t>(0x2),
__E_Renderer = static_cast<int32_t>(0x3),
__E_Primitive = static_cast<int32_t>(0x4),
__E_Global = static_cast<int32_t>(0x5),
__E_Texture = static_cast<int32_t>(0x6),
__E_Geometry = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LodInputMode_Unwrapped () const noexcept {
return static_cast<__LodInputMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LodInputMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LodInputMode(int32_t  value__) noexcept;

/// @brief Field Geometry value: I32(7)
static ::WaveHarmonic::Crest::LodInputMode const Geometry;

/// @brief Field Global value: I32(5)
static ::WaveHarmonic::Crest::LodInputMode const Global;

/// @brief Field Paint value: I32(1)
static ::WaveHarmonic::Crest::LodInputMode const Paint;

/// @brief Field Primitive value: I32(4)
static ::WaveHarmonic::Crest::LodInputMode const Primitive;

/// @brief Field Renderer value: I32(3)
static ::WaveHarmonic::Crest::LodInputMode const Renderer;

/// @brief Field Spline value: I32(2)
static ::WaveHarmonic::Crest::LodInputMode const Spline;

/// @brief Field Texture value: I32(6)
static ::WaveHarmonic::Crest::LodInputMode const Texture;

/// @brief Field Unset value: I32(0)
static ::WaveHarmonic::Crest::LodInputMode const Unset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LodInputMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LodInputMode) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
