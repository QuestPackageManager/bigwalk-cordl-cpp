#pragma once
// IWYU pragma private; include "Dissonance/LogCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogCategory)
// Forward declare root types
namespace Dissonance {
struct LogCategory;
}
// Write type traits
MARK_VAL_T(::Dissonance::LogCategory);
DEFINE_IL2CPP_CLASS(::Dissonance::LogCategory, "Dissonance", "LogCategory");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.LogCategory
struct CORDL_TYPE LogCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogCategory_Unwrapped
enum struct __LogCategory_Unwrapped : int32_t {
__E_Core = static_cast<int32_t>(0x0),
__E_Recording = static_cast<int32_t>(0x1),
__E_Network = static_cast<int32_t>(0x2),
__E_Playback = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogCategory_Unwrapped () const noexcept {
return static_cast<__LogCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogCategory(int32_t  value__) noexcept;

/// @brief Field Core value: I32(0)
static ::Dissonance::LogCategory const Core;

/// @brief Field Network value: I32(2)
static ::Dissonance::LogCategory const Network;

/// @brief Field Playback value: I32(3)
static ::Dissonance::LogCategory const Playback;

/// @brief Field Recording value: I32(1)
static ::Dissonance::LogCategory const Recording;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::LogCategory, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::LogCategory) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
