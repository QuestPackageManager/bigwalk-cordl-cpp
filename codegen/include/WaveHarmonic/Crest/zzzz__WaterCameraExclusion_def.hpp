#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterCameraExclusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterCameraExclusion)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct WaterCameraExclusion;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::WaterCameraExclusion);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterCameraExclusion, "WaveHarmonic.Crest", "WaterCameraExclusion");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.WaterCameraExclusion
struct CORDL_TYPE WaterCameraExclusion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterCameraExclusion_Unwrapped
enum struct __WaterCameraExclusion_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Hidden = static_cast<int32_t>(0x2),
__E_Reflection = static_cast<int32_t>(0x4),
__E_NonMainCamera = static_cast<int32_t>(0x8),
__E_Everything = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterCameraExclusion_Unwrapped () const noexcept {
return static_cast<__WaterCameraExclusion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterCameraExclusion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaterCameraExclusion(int32_t  value__) noexcept;

/// @brief Field Everything value: I32(-1)
static ::WaveHarmonic::Crest::WaterCameraExclusion const Everything;

/// @brief Field Hidden value: I32(2)
static ::WaveHarmonic::Crest::WaterCameraExclusion const Hidden;

/// @brief Field NonMainCamera value: I32(8)
static ::WaveHarmonic::Crest::WaterCameraExclusion const NonMainCamera;

/// @brief Field Nothing value: I32(0)
static ::WaveHarmonic::Crest::WaterCameraExclusion const Nothing;

/// @brief Field Reflection value: I32(4)
static ::WaveHarmonic::Crest::WaterCameraExclusion const Reflection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16710};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterCameraExclusion, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterCameraExclusion) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
