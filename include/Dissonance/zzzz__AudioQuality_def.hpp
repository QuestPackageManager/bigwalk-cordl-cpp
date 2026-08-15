#pragma once
// IWYU pragma private; include "Dissonance/AudioQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioQuality)
// Forward declare root types
namespace Dissonance {
struct AudioQuality;
}
// Write type traits
MARK_VAL_T(::Dissonance::AudioQuality);
DEFINE_IL2CPP_CLASS(::Dissonance::AudioQuality, "Dissonance", "AudioQuality");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.AudioQuality
struct CORDL_TYPE AudioQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioQuality_Unwrapped
enum struct __AudioQuality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioQuality_Unwrapped () const noexcept {
return static_cast<__AudioQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioQuality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::Dissonance::AudioQuality const High;

/// @brief Field Low value: I32(0)
static ::Dissonance::AudioQuality const Low;

/// @brief Field Medium value: I32(1)
static ::Dissonance::AudioQuality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16776};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::AudioQuality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::AudioQuality) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
