#pragma once
// IWYU pragma private; include "UnityEngine/ColorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorUtility)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class ColorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::ColorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ColorUtility*, "UnityEngine", "ColorUtility");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ColorUtility
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
// Declarations
/// @brief Method DoTryParseHtmlColor, addr 0x182261e30, size 0x120, virtual false, abstract: false, final false
static inline bool DoTryParseHtmlColor(::StringW  htmlString, ::by_ref<::UnityEngine::Color32>  color) ;

/// @brief Method DoTryParseHtmlColor_Injected, addr 0x182261e20, size 0x10, virtual false, abstract: false, final false
static inline bool DoTryParseHtmlColor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  htmlString, ::by_ref<::UnityEngine::Color32>  color) ;

/// @brief Method HexDigitValue, addr 0x182261f50, size 0x40, virtual false, abstract: false, final false
static inline int32_t HexDigitValue(char16_t  c) ;

/// @brief Method IsHexString, addr 0x182261f90, size 0x60, virtual false, abstract: false, final false
static inline bool IsHexString(::System::ReadOnlySpan_1<char16_t>  span) ;

/// @brief Method ToHtmlStringRGB, addr 0x182261ff0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW ToHtmlStringRGB(::UnityEngine::Color  color) ;

/// @brief Method ToHtmlStringRGB, addr 0x182261ff0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW ToHtmlStringRGB(::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method TryHexToByte, addr 0x1822620f0, size 0xa0, virtual false, abstract: false, final false
static inline bool TryHexToByte(::System::ReadOnlySpan_1<char16_t>  span, ::by_ref<uint8_t>  result) ;

/// @brief Method TryParseHexColor, addr 0x182262190, size 0x380, virtual false, abstract: false, final false
static inline bool TryParseHexColor(::System::ReadOnlySpan_1<char16_t>  hex, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method TryParseHtmlString, addr 0x182262830, size 0xa0, virtual false, abstract: false, final false
static inline bool TryParseHtmlString(::StringW  htmlString, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method TryParseHtmlString, addr 0x182262510, size 0x320, virtual false, abstract: false, final false
static inline bool TryParseHtmlString(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method get_HtmlColorNames, addr 0x1822628d0, size 0x250, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<::StringW> get_HtmlColorNames() ;

/// @brief Method get_HtmlColorValues, addr 0x182262b20, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<::UnityEngine::Color32> get_HtmlColorValues() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtility(ColorUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtility(ColorUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ColorUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
