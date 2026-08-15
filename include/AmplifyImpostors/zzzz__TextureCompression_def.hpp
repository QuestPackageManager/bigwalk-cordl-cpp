#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureCompression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureCompression)
// Forward declare root types
namespace AmplifyImpostors {
struct TextureCompression;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::TextureCompression);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::TextureCompression, "AmplifyImpostors", "TextureCompression");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.TextureCompression
struct CORDL_TYPE TextureCompression {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureCompression_Unwrapped
enum struct __TextureCompression_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
__E_Low = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureCompression_Unwrapped () const noexcept {
return static_cast<__TextureCompression_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureCompression() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureCompression(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::AmplifyImpostors::TextureCompression const High;

/// @brief Field Low value: I32(3)
static ::AmplifyImpostors::TextureCompression const Low;

/// @brief Field None value: I32(0)
static ::AmplifyImpostors::TextureCompression const None;

/// @brief Field Normal value: I32(1)
static ::AmplifyImpostors::TextureCompression const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::TextureCompression, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::TextureCompression) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
