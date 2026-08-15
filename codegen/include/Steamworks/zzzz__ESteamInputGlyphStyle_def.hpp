#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputGlyphStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamInputGlyphStyle)
// Forward declare root types
namespace Steamworks {
struct ESteamInputGlyphStyle;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamInputGlyphStyle);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamInputGlyphStyle, "Steamworks", "ESteamInputGlyphStyle");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamInputGlyphStyle
struct CORDL_TYPE ESteamInputGlyphStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamInputGlyphStyle_Unwrapped
enum struct __ESteamInputGlyphStyle_Unwrapped : int32_t {
__E_ESteamInputGlyphStyle_Knockout = static_cast<int32_t>(0x0),
__E_ESteamInputGlyphStyle_Light = static_cast<int32_t>(0x1),
__E_ESteamInputGlyphStyle_Dark = static_cast<int32_t>(0x2),
__E_ESteamInputGlyphStyle_NeutralColorABXY = static_cast<int32_t>(0x10),
__E_ESteamInputGlyphStyle_SolidABXY = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamInputGlyphStyle_Unwrapped () const noexcept {
return static_cast<__ESteamInputGlyphStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamInputGlyphStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamInputGlyphStyle(int32_t  value__) noexcept;

/// @brief Field ESteamInputGlyphStyle_Dark value: I32(2)
static ::Steamworks::ESteamInputGlyphStyle const ESteamInputGlyphStyle_Dark;

/// @brief Field ESteamInputGlyphStyle_Knockout value: I32(0)
static ::Steamworks::ESteamInputGlyphStyle const ESteamInputGlyphStyle_Knockout;

/// @brief Field ESteamInputGlyphStyle_Light value: I32(1)
static ::Steamworks::ESteamInputGlyphStyle const ESteamInputGlyphStyle_Light;

/// @brief Field ESteamInputGlyphStyle_NeutralColorABXY value: I32(16)
static ::Steamworks::ESteamInputGlyphStyle const ESteamInputGlyphStyle_NeutralColorABXY;

/// @brief Field ESteamInputGlyphStyle_SolidABXY value: I32(32)
static ::Steamworks::ESteamInputGlyphStyle const ESteamInputGlyphStyle_SolidABXY;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamInputGlyphStyle, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamInputGlyphStyle) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
