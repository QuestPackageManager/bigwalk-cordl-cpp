#pragma once
// IWYU pragma private; include "GlobalNamespace/GlyphText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphText)
namespace GlobalNamespace {
struct GlyphText_FontType;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlyphText_FontType;
}
namespace GlobalNamespace {
struct GlyphText;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GlyphText_FontType);
MARK_VAL_T(::GlobalNamespace::GlyphText);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlyphText_FontType, "", "GlyphText/FontType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlyphText, "", "GlyphText");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GlyphText/FontType
struct CORDL_TYPE GlyphText_FontType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlyphText_FontType_Unwrapped
enum struct __GlyphText_FontType_Unwrapped : int32_t {
__E_GlyphFont = static_cast<int32_t>(0x0),
__E_FallbackFont = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphText_FontType_Unwrapped () const noexcept {
return static_cast<__GlyphText_FontType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlyphText_FontType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphText_FontType(int32_t  value__) noexcept;

/// @brief Field FallbackFont value: I32(1)
static ::GlobalNamespace::GlyphText_FontType const FallbackFont;

/// @brief Field GlyphFont value: I32(0)
static ::GlobalNamespace::GlyphText_FontType const GlyphFont;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlyphText_FontType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlyphText_FontType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GlyphText::FontType
namespace GlobalNamespace {
// Is value type: true
// CS Name: GlyphText
struct CORDL_TYPE GlyphText {
public:
// Declarations
using FontType = ::GlobalNamespace::GlyphText_FontType;

/// @brief Method .ctor, addr 0x1802f17c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  glyphString, ::GlobalNamespace::GlyphText_FontType  fontType) ;

// Ctor Parameters []
// @brief default ctor
constexpr GlyphText() ;

// Ctor Parameters [CppParam { name: "glyphString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fontType", ty: "::GlobalNamespace::GlyphText_FontType", modifiers: "", def_value: None }]
constexpr GlyphText(::StringW  glyphString, ::GlobalNamespace::GlyphText_FontType  fontType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field glyphString, offset: 0x0, size: 0x8, def value: None
 ::StringW  glyphString;

/// @brief Field fontType, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::GlyphText_FontType  fontType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlyphText, glyphString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlyphText, fontType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlyphText) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
