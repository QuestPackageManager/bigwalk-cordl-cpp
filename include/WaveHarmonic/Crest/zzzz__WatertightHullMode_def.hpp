#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WatertightHullMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WatertightHullMode)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct WatertightHullMode;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::WatertightHullMode);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WatertightHullMode, "WaveHarmonic.Crest", "WatertightHullMode");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.WatertightHullMode
struct CORDL_TYPE WatertightHullMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WatertightHullMode_Unwrapped
enum struct __WatertightHullMode_Unwrapped : int32_t {
__E_Displacement = static_cast<int32_t>(0x0),
__E_Clip = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WatertightHullMode_Unwrapped () const noexcept {
return static_cast<__WatertightHullMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WatertightHullMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WatertightHullMode(int32_t  value__) noexcept;

/// @brief Field Clip value: I32(1)
static ::WaveHarmonic::Crest::WatertightHullMode const Clip;

/// @brief Field Displacement value: I32(0)
static ::WaveHarmonic::Crest::WatertightHullMode const Displacement;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WatertightHullMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WatertightHullMode) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
