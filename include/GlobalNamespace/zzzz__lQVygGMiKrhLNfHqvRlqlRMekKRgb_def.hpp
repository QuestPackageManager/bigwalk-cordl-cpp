#pragma once
// IWYU pragma private; include "GlobalNamespace/lQVygGMiKrhLNfHqvRlqlRMekKRgb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(lQVygGMiKrhLNfHqvRlqlRMekKRgb)
// Forward declare root types
namespace GlobalNamespace {
struct lQVygGMiKrhLNfHqvRlqlRMekKRgb;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb, "", "lQVygGMiKrhLNfHqvRlqlRMekKRgb");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: lQVygGMiKrhLNfHqvRlqlRMekKRgb
struct CORDL_TYPE lQVygGMiKrhLNfHqvRlqlRMekKRgb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __lQVygGMiKrhLNfHqvRlqlRMekKRgb_Unwrapped
enum struct __lQVygGMiKrhLNfHqvRlqlRMekKRgb_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Buffer = static_cast<int32_t>(0x1),
__E_Texture1D = static_cast<int32_t>(0x2),
__E_Texture1DArray = static_cast<int32_t>(0x3),
__E_Texture2D = static_cast<int32_t>(0x4),
__E_Texture2DArray = static_cast<int32_t>(0x5),
__E_Texture2DMultisampled = static_cast<int32_t>(0x6),
__E_Texture2DMultisampledArray = static_cast<int32_t>(0x7),
__E_Texture3D = static_cast<int32_t>(0x8),
__E_TextureCube = static_cast<int32_t>(0x9),
__E_TextureCubeArray = static_cast<int32_t>(0xa),
__E_ExtendedBuffer = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __lQVygGMiKrhLNfHqvRlqlRMekKRgb_Unwrapped () const noexcept {
return static_cast<__lQVygGMiKrhLNfHqvRlqlRMekKRgb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr lQVygGMiKrhLNfHqvRlqlRMekKRgb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr lQVygGMiKrhLNfHqvRlqlRMekKRgb(int32_t  value__) noexcept;

/// @brief Field Buffer value: I32(1)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Buffer;

/// @brief Field ExtendedBuffer value: I32(11)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const ExtendedBuffer;

/// @brief Field Texture1D value: I32(2)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture1D;

/// @brief Field Texture1DArray value: I32(3)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture1DArray;

/// @brief Field Texture2D value: I32(4)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture2D;

/// @brief Field Texture2DArray value: I32(5)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture2DArray;

/// @brief Field Texture2DMultisampled value: I32(6)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture2DMultisampled;

/// @brief Field Texture2DMultisampledArray value: I32(7)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture2DMultisampledArray;

/// @brief Field Texture3D value: I32(8)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Texture3D;

/// @brief Field TextureCube value: I32(9)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const TextureCube;

/// @brief Field TextureCubeArray value: I32(10)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const TextureCubeArray;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::lQVygGMiKrhLNfHqvRlqlRMekKRgb) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
