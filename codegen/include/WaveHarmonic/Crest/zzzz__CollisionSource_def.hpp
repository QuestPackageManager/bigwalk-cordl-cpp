#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionSource)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct CollisionSource;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::CollisionSource);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CollisionSource, "WaveHarmonic.Crest", "CollisionSource");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.CollisionSource
struct CORDL_TYPE CollisionSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollisionSource_Unwrapped
enum struct __CollisionSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_GPU = static_cast<int32_t>(0x2),
__E_CPU = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionSource_Unwrapped () const noexcept {
return static_cast<__CollisionSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CollisionSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionSource(int32_t  value__) noexcept;

/// @brief Field CPU value: I32(3)
static ::WaveHarmonic::Crest::CollisionSource const CPU;

/// @brief Field GPU value: I32(2)
static ::WaveHarmonic::Crest::CollisionSource const GPU;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::CollisionSource const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CollisionSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CollisionSource) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
