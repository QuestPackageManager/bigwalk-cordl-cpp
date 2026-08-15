#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappedText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FontMappedText)
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class FontMappedText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FontMappedText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontMappedText*, "", "FontMappedText");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FontMappedText
class CORDL_TYPE FontMappedText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _initialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _inputField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputField, put=__cordl_internal_set__inputField)) ::UnityW<::TMPro::TMP_InputField>  _inputField;

/// @brief Field _originalFont, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalFont, put=__cordl_internal_set__originalFont)) ::UnityW<::TMPro::TMP_FontAsset>  _originalFont;

/// @brief Field _textElement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textElement, put=__cordl_internal_set__textElement)) ::UnityW<::TMPro::TMP_Text>  _textElement;

/// @brief Method Initialize, addr 0x1803e6be0, size 0xc0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::FontMappedText* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803e6ca0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803e6d90, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x1803e6e80, size 0x280, virtual false, abstract: false, final false
inline void Refresh() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__inputField() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get__originalFont() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get__originalFont() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__textElement() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__textElement() ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__originalFont(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set__textElement(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FontMappedText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FontMappedText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FontMappedText(FontMappedText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FontMappedText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FontMappedText(FontMappedText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4989};

/// @brief Field _textElement, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____textElement;

/// @brief Field _inputField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____inputField;

/// @brief Field _originalFont, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ____originalFont;

/// @brief Field _initialized, offset: 0x38, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontMappedText, ____textElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappedText, ____inputField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappedText, ____originalFont) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappedText, ____initialized) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontMappedText) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
