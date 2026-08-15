#pragma once
// IWYU pragma private; include "GlobalNamespace/GlyphControllerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphControllerType)
// Forward declare root types
namespace GlobalNamespace {
struct GlyphControllerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GlyphControllerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlyphControllerType, "", "GlyphControllerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GlyphControllerType
struct CORDL_TYPE GlyphControllerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlyphControllerType_Unwrapped
enum struct __GlyphControllerType_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0x0),
__E_Xbox360 = static_cast<int32_t>(0x1),
__E_XboxOne = static_cast<int32_t>(0x2),
__E_PS4 = static_cast<int32_t>(0x3),
__E_PS5 = static_cast<int32_t>(0x4),
__E_Switch = static_cast<int32_t>(0x5),
__E_Switch2 = static_cast<int32_t>(0x6),
__E_SingleJoycon = static_cast<int32_t>(0x7),
__E_KeyboardMouse = static_cast<int32_t>(0x8),
__E_Steam = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphControllerType_Unwrapped () const noexcept {
return static_cast<__GlyphControllerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlyphControllerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphControllerType(int32_t  value__) noexcept;

/// @brief Field KeyboardMouse value: I32(8)
static ::GlobalNamespace::GlyphControllerType const KeyboardMouse;

/// @brief Field NotSet value: I32(0)
static ::GlobalNamespace::GlyphControllerType const NotSet;

/// @brief Field PS4 value: I32(3)
static ::GlobalNamespace::GlyphControllerType const PS4;

/// @brief Field PS5 value: I32(4)
static ::GlobalNamespace::GlyphControllerType const PS5;

/// @brief Field SingleJoycon value: I32(7)
static ::GlobalNamespace::GlyphControllerType const SingleJoycon;

/// @brief Field Steam value: I32(9)
static ::GlobalNamespace::GlyphControllerType const Steam;

/// @brief Field Switch value: I32(5)
static ::GlobalNamespace::GlyphControllerType const Switch;

/// @brief Field Switch2 value: I32(6)
static ::GlobalNamespace::GlyphControllerType const Switch2;

/// @brief Field Xbox360 value: I32(1)
static ::GlobalNamespace::GlyphControllerType const Xbox360;

/// @brief Field XboxOne value: I32(2)
static ::GlobalNamespace::GlyphControllerType const XboxOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlyphControllerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlyphControllerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
