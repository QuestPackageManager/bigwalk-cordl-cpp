#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureChannels)
// Forward declare root types
namespace AmplifyImpostors {
struct TextureChannels;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::TextureChannels);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::TextureChannels, "AmplifyImpostors", "TextureChannels");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.TextureChannels
struct CORDL_TYPE TextureChannels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureChannels_Unwrapped
enum struct __TextureChannels_Unwrapped : int32_t {
__E_RGBA = static_cast<int32_t>(0x0),
__E_RGB = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureChannels_Unwrapped () const noexcept {
return static_cast<__TextureChannels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureChannels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureChannels(int32_t  value__) noexcept;

/// @brief Field RGB value: I32(1)
static ::AmplifyImpostors::TextureChannels const RGB;

/// @brief Field RGBA value: I32(0)
static ::AmplifyImpostors::TextureChannels const RGBA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::TextureChannels, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::TextureChannels) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
