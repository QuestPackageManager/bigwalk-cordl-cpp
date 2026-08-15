#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsRow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsRow)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class ISettingsHanger;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class SettingsMenu;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
class Slider;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsRow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingsRow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsRow*, "", "SettingsRow");
// Dependencies SettingsType, UnityEngine.MonoBehaviour, UnityEngine.UI.Selectable
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsRow
class CORDL_TYPE SettingsRow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allSelectables, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_allSelectables, put=__cordl_internal_set_allSelectables)) ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  allSelectables;

/// @brief Field arrayLabel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_arrayLabel, put=__cordl_internal_set_arrayLabel)) ::UnityW<::GlobalNamespace::LocalizedText>  arrayLabel;

/// @brief Field boringButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_boringButton, put=__cordl_internal_set_boringButton)) ::UnityW<::UnityEngine::UI::Button>  boringButton;

 __declspec(property(get=get_firstSelectable)) ::UnityW<::UnityEngine::UI::Selectable>  firstSelectable;

/// @brief Field hanger, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_hanger, put=__cordl_internal_set_hanger)) ::GlobalNamespace::ISettingsHanger*  hanger;

/// @brief Field label0, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_label0, put=__cordl_internal_set_label0)) ::UnityW<::TMPro::TMP_Text>  label0;

/// @brief Field label1, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_label1, put=__cordl_internal_set_label1)) ::UnityW<::TMPro::TMP_Text>  label1;

/// @brief Field label2, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_label2, put=__cordl_internal_set_label2)) ::UnityW<::TMPro::TMP_Text>  label2;

/// @brief Field leftButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftButton, put=__cordl_internal_set_leftButton)) ::UnityW<::UnityEngine::UI::Button>  leftButton;

/// @brief Field logVerbose, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field rightButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightButton, put=__cordl_internal_set_rightButton)) ::UnityW<::UnityEngine::UI::Button>  rightButton;

/// @brief Field saveSelf, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveSelf, put=__cordl_internal_set_saveSelf)) bool  saveSelf;

/// @brief Field settingsMenu, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsMenu, put=__cordl_internal_set_settingsMenu)) ::UnityW<::GlobalNamespace::SettingsMenu>  settingsMenu;

/// @brief Field settingsType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_settingsType, put=__cordl_internal_set_settingsType)) ::GlobalNamespace::SettingsType  settingsType;

/// @brief Field slider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_slider, put=__cordl_internal_set_slider)) ::UnityW<::UnityEngine::UI::Slider>  slider;

/// @brief Field sliderLabel, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_sliderLabel, put=__cordl_internal_set_sliderLabel)) ::UnityW<::GlobalNamespace::LocalizedText>  sliderLabel;

/// @brief Field switchSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_switchSound, put=__cordl_internal_set_switchSound)) ::UnityW<::GlobalNamespace::AudioAsset>  switchSound;

/// @brief Field title, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::UnityW<::GlobalNamespace::LocalizedText>  title;

/// @brief Field wrap, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_wrap, put=__cordl_internal_set_wrap)) bool  wrap;

/// @brief Method ActionBack, addr 0x18043ec60, size 0x110, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method ActionCycle, addr 0x18043ed70, size 0x1b0, virtual false, abstract: false, final false
inline void ActionCycle(int32_t  delta) ;

/// @brief Method ActionLeft, addr 0x18043ef20, size 0x10, virtual false, abstract: false, final false
inline void ActionLeft() ;

/// @brief Method ActionNavigate, addr 0x18043efc0, size 0x40, virtual false, abstract: false, final false
inline void ActionNavigate(int32_t  value) ;

/// @brief Method ActionNavigateTo0, addr 0x18043ef30, size 0x30, virtual false, abstract: false, final false
inline void ActionNavigateTo0() ;

/// @brief Method ActionNavigateTo1, addr 0x18043ef60, size 0x30, virtual false, abstract: false, final false
inline void ActionNavigateTo1() ;

/// @brief Method ActionNavigateTo2, addr 0x18043ef90, size 0x30, virtual false, abstract: false, final false
inline void ActionNavigateTo2() ;

/// @brief Method ActionRight, addr 0x18043f000, size 0x10, virtual false, abstract: false, final false
inline void ActionRight() ;

/// @brief Method ActionSelect, addr 0x18043f040, size 0x150, virtual false, abstract: false, final false
inline void ActionSelect(int32_t  valueIndex) ;

/// @brief Method ActionSelect0, addr 0x18043f010, size 0x10, virtual false, abstract: false, final false
inline void ActionSelect0() ;

/// @brief Method ActionSelect1, addr 0x18043f020, size 0x10, virtual false, abstract: false, final false
inline void ActionSelect1() ;

/// @brief Method ActionSelect2, addr 0x18043f030, size 0x10, virtual false, abstract: false, final false
inline void ActionSelect2() ;

/// @brief Method ActionSetFromSlider, addr 0x18043f190, size 0x160, virtual false, abstract: false, final false
inline void ActionSetFromSlider() ;

static inline ::GlobalNamespace::SettingsRow* New_ctor() ;

/// @brief Method OnEnable, addr 0x18043f2f0, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x18043f310, size 0x400, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method SetNavigation, addr 0x18043f710, size 0x1f0, virtual false, abstract: false, final false
inline void SetNavigation(::GlobalNamespace::SettingsRow*  previousRow, ::GlobalNamespace::SettingsRow*  nextRow) ;

/// @brief Method SetUnderlineSingle, addr 0x18043f900, size 0x80, virtual false, abstract: false, final false
inline void SetUnderlineSingle(::TMPro::TMP_Text*  textComponent, bool  hasUnderline) ;

/// @brief Method Start, addr 0x18043f980, size 0xd0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>> const& __cordl_internal_get_allSelectables() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>& __cordl_internal_get_allSelectables() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_arrayLabel() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_arrayLabel() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_boringButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_boringButton() ;

constexpr ::GlobalNamespace::ISettingsHanger* const& __cordl_internal_get_hanger() const;

constexpr ::GlobalNamespace::ISettingsHanger*& __cordl_internal_get_hanger() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_label0() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_label0() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_label1() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_label1() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_label2() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_label2() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_leftButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_leftButton() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_rightButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_rightButton() ;

constexpr bool const& __cordl_internal_get_saveSelf() const;

constexpr bool& __cordl_internal_get_saveSelf() ;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& __cordl_internal_get_settingsMenu() const;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& __cordl_internal_get_settingsMenu() ;

constexpr ::GlobalNamespace::SettingsType const& __cordl_internal_get_settingsType() const;

constexpr ::GlobalNamespace::SettingsType& __cordl_internal_get_settingsType() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_slider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_slider() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_sliderLabel() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_sliderLabel() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_switchSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_switchSound() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_title() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_title() ;

constexpr bool const& __cordl_internal_get_wrap() const;

constexpr bool& __cordl_internal_get_wrap() ;

constexpr void __cordl_internal_set_allSelectables(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  value) ;

constexpr void __cordl_internal_set_arrayLabel(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_boringButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_hanger(::GlobalNamespace::ISettingsHanger*  value) ;

constexpr void __cordl_internal_set_label0(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_label1(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_label2(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_leftButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_rightButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_saveSelf(bool  value) ;

constexpr void __cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value) ;

constexpr void __cordl_internal_set_settingsType(::GlobalNamespace::SettingsType  value) ;

constexpr void __cordl_internal_set_slider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set_sliderLabel(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_switchSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_title(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_wrap(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_firstSelectable, addr 0x18043fa50, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> get_firstSelectable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsRow(SettingsRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsRow(SettingsRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5312};

/// @brief Field settingsType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SettingsType  ___settingsType;

/// @brief Field wrap, offset: 0x24, size: 0x1, def value: None
 bool  ___wrap;

/// @brief Field saveSelf, offset: 0x25, size: 0x1, def value: None
 bool  ___saveSelf;

/// @brief Field title, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___title;

/// @brief Field leftButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___leftButton;

/// @brief Field rightButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___rightButton;

/// @brief Field arrayLabel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___arrayLabel;

/// @brief Field label0, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___label0;

/// @brief Field label1, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___label1;

/// @brief Field label2, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___label2;

/// @brief Field slider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___slider;

/// @brief Field sliderLabel, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___sliderLabel;

/// @brief Field allSelectables, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  ___allSelectables;

/// @brief Field boringButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___boringButton;

/// @brief Field switchSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___switchSound;

/// @brief Field logVerbose, offset: 0x88, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field hanger, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::ISettingsHanger*  ___hanger;

/// @brief Field settingsMenu, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsMenu>  ___settingsMenu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsRow, ___settingsType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___wrap) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___saveSelf) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___title) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___leftButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___rightButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___arrayLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___label0) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___label1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___label2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___slider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___sliderLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___allSelectables) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___boringButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___switchSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___logVerbose) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___hanger) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsRow, ___settingsMenu) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsRow) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
