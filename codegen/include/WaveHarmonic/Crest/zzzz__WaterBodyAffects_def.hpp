#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterBodyAffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterBodyAffects)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct WaterBodyAffects;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::WaterBodyAffects);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterBodyAffects, "WaveHarmonic.Crest", "WaterBodyAffects");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.WaterBodyAffects
struct CORDL_TYPE WaterBodyAffects {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterBodyAffects_Unwrapped
enum struct __WaterBodyAffects_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Surface = static_cast<int32_t>(0x2),
__E_Volume = static_cast<int32_t>(0x4),
__E_Physics = static_cast<int32_t>(0x8),
__E_Everything = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterBodyAffects_Unwrapped () const noexcept {
return static_cast<__WaterBodyAffects_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterBodyAffects() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaterBodyAffects(int32_t  value__) noexcept;

/// @brief Field Everything value: I32(-1)
static ::WaveHarmonic::Crest::WaterBodyAffects const Everything;

/// @brief Field Nothing value: I32(0)
static ::WaveHarmonic::Crest::WaterBodyAffects const Nothing;

/// @brief Field Physics value: I32(8)
static ::WaveHarmonic::Crest::WaterBodyAffects const Physics;

/// @brief Field Surface value: I32(2)
static ::WaveHarmonic::Crest::WaterBodyAffects const Surface;

/// @brief Field Volume value: I32(4)
static ::WaveHarmonic::Crest::WaterBodyAffects const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterBodyAffects, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterBodyAffects) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
