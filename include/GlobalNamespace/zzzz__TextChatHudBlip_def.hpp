#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatHudBlip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TextChatHud_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextChatHudBlip)
namespace GlobalNamespace {
struct TextChatHud_BlipIcon;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class TextChatHudBlip;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextChatHudBlip*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatHudBlip*, "", "TextChatHudBlip");
// Dependencies TextChatHud::BlipIcon, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextChatHudBlip
class CORDL_TYPE TextChatHudBlip : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _blipIcon, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__blipIcon, put=__cordl_internal_set__blipIcon)) ::GlobalNamespace::TextChatHud_BlipIcon  _blipIcon;

/// @brief Field _color, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

 __declspec(property(put=set_blipIcon)) ::GlobalNamespace::TextChatHud_BlipIcon  blipIcon;

 __declspec(property(put=set_color)) ::UnityEngine::Color  color;

/// @brief Field logVerbose, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerImage, put=__cordl_internal_set_playerImage)) ::UnityW<::UnityEngine::UI::Image>  playerImage;

/// @brief Field radioImage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_radioImage, put=__cordl_internal_set_radioImage)) ::UnityW<::UnityEngine::UI::Image>  radioImage;

/// @brief Field typingImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_typingImage, put=__cordl_internal_set_typingImage)) ::UnityW<::UnityEngine::UI::Image>  typingImage;

static inline ::GlobalNamespace::TextChatHudBlip* New_ctor() ;

constexpr ::GlobalNamespace::TextChatHud_BlipIcon const& __cordl_internal_get__blipIcon() const;

constexpr ::GlobalNamespace::TextChatHud_BlipIcon& __cordl_internal_get__blipIcon() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_playerImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_playerImage() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_radioImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_radioImage() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_typingImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_typingImage() ;

constexpr void __cordl_internal_set__blipIcon(::GlobalNamespace::TextChatHud_BlipIcon  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_radioImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_typingImage(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_blipIcon, addr 0x1804561a0, size 0x1e0, virtual false, abstract: false, final false
inline void set_blipIcon(::GlobalNamespace::TextChatHud_BlipIcon  value) ;

/// @brief Method set_color, addr 0x180456380, size 0x150, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextChatHudBlip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextChatHudBlip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextChatHudBlip(TextChatHudBlip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextChatHudBlip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextChatHudBlip(TextChatHudBlip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5329};

/// @brief Field playerImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___playerImage;

/// @brief Field radioImage, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___radioImage;

/// @brief Field typingImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___typingImage;

/// @brief Field logVerbose, offset: 0x38, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _color, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _blipIcon, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::TextChatHud_BlipIcon  ____blipIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatHudBlip, ___playerImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHudBlip, ___radioImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHudBlip, ___typingImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHudBlip, ___logVerbose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHudBlip, ____color) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatHudBlip, ____blipIcon) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatHudBlip) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
