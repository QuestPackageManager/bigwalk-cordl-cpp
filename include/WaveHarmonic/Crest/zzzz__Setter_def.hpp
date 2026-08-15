#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Setter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Setter)
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Setter;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Setter);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Setter, "WaveHarmonic.Crest", "Setter");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Setter
struct CORDL_TYPE Setter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Setter_Unwrapped
enum struct __Setter_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
__E_Internal = static_cast<int32_t>(0x2),
__E_Dirty = static_cast<int32_t>(0x3),
__E_None = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Setter_Unwrapped () const noexcept {
return static_cast<__Setter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Setter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Setter(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(1)
static ::WaveHarmonic::Crest::Setter const Custom;

/// @brief Field Default value: I32(0)
static ::WaveHarmonic::Crest::Setter const Default;

/// @brief Field Dirty value: I32(3)
static ::WaveHarmonic::Crest::Setter const Dirty;

/// @brief Field Internal value: I32(2)
static ::WaveHarmonic::Crest::Setter const Internal;

/// @brief Field None value: I32(4)
static ::WaveHarmonic::Crest::Setter const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20079};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Setter, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Setter) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
