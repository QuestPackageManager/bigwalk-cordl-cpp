#pragma once
// IWYU pragma private; include "AmplifyImpostors/ImageFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageFormat)
// Forward declare root types
namespace AmplifyImpostors {
struct ImageFormat;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::ImageFormat);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::ImageFormat, "AmplifyImpostors", "ImageFormat");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.ImageFormat
struct CORDL_TYPE ImageFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImageFormat_Unwrapped
enum struct __ImageFormat_Unwrapped : int32_t {
__E_PNG = static_cast<int32_t>(0x0),
__E_TGA = static_cast<int32_t>(0x1),
__E_EXR = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImageFormat_Unwrapped () const noexcept {
return static_cast<__ImageFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImageFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImageFormat(int32_t  value__) noexcept;

/// @brief Field EXR value: I32(2)
static ::AmplifyImpostors::ImageFormat const EXR;

/// @brief Field PNG value: I32(0)
static ::AmplifyImpostors::ImageFormat const PNG;

/// @brief Field TGA value: I32(1)
static ::AmplifyImpostors::ImageFormat const TGA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::ImageFormat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::ImageFormat) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
