#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationPlayerCard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModerationPlayerCard)
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class ModerationPlayerCardButtons;
}
namespace GlobalNamespace {
struct ModerationPlayerCard_IndicatorPair;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerLookSet_LookColor;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ModerationPlayerCard;
}
namespace GlobalNamespace {
struct ModerationPlayerCard_IndicatorPair;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModerationPlayerCard*);
MARK_VAL_T(::GlobalNamespace::ModerationPlayerCard_IndicatorPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationPlayerCard*, "", "ModerationPlayerCard");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationPlayerCard_IndicatorPair, "", "ModerationPlayerCard/IndicatorPair");
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModerationPlayerCard/IndicatorPair
struct CORDL_TYPE ModerationPlayerCard_IndicatorPair {
public:
// Declarations
/// @brief Method SetIndicator, addr 0x180434130, size 0x120, virtual false, abstract: false, final false
inline void SetIndicator(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModerationPlayerCard_IndicatorPair() ;

// Ctor Parameters [CppParam { name: "indicatorOn", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "indicatorOff", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "_state", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None }]
constexpr ModerationPlayerCard_IndicatorPair(::UnityW<::UnityEngine::Transform>  indicatorOn, ::UnityW<::UnityEngine::Transform>  indicatorOff, ::System::Nullable_1<bool>  _state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5263};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field indicatorOn, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  indicatorOn;

/// @brief Field indicatorOff, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  indicatorOff;

/// @brief Field _state, offset: 0x10, size: 0x2, def value: None
 ::System::Nullable_1<bool>  _state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard_IndicatorPair, indicatorOn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard_IndicatorPair, indicatorOff) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard_IndicatorPair, _state) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationPlayerCard_IndicatorPair) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ModerationPlayerCard::IndicatorPair, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModerationPlayerCard
class CORDL_TYPE ModerationPlayerCard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IndicatorPair = ::GlobalNamespace::ModerationPlayerCard_IndicatorPair;

/// @brief Field _player, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _player;

/// @brief Field activeButtons, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeButtons, put=__cordl_internal_set_activeButtons)) ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  activeButtons;

/// @brief Field crossplayIndicator, offset 0x90, size 0x18 
 __declspec(property(get=__cordl_internal_get_crossplayIndicator, put=__cordl_internal_set_crossplayIndicator)) ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  crossplayIndicator;

/// @brief Field defaultButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultButtons, put=__cordl_internal_set_defaultButtons)) ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  defaultButtons;

/// @brief Field encounteredContents, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_encounteredContents, put=__cordl_internal_set_encounteredContents)) ::UnityW<::UnityEngine::Transform>  encounteredContents;

/// @brief Field head, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::UnityW<::UnityEngine::UI::Image>  head;

/// @brief Field hostIcon, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostIcon, put=__cordl_internal_set_hostIcon)) ::UnityW<::UnityEngine::Transform>  hostIcon;

/// @brief Field keyMute, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyMute, put=__cordl_internal_set_keyMute)) ::StringW  keyMute;

/// @brief Field keyUnmute, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyUnmute, put=__cordl_internal_set_keyUnmute)) ::StringW  keyUnmute;

/// @brief Field legs, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_legs, put=__cordl_internal_set_legs)) ::UnityW<::UnityEngine::UI::Image>  legs;

/// @brief Field muteIndicator, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get_muteIndicator, put=__cordl_internal_set_muteIndicator)) ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  muteIndicator;

/// @brief Field nameText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameText, put=__cordl_internal_set_nameText)) ::UnityW<::GlobalNamespace::LocalizedText>  nameText;

 __declspec(property(put=set_player)) ::UnityW<::GlobalNamespace::PlayerCharacter>  player;

/// @brief Field ps5Buttons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps5Buttons, put=__cordl_internal_set_ps5Buttons)) ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  ps5Buttons;

/// @brief Field talkingIndicator, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_talkingIndicator, put=__cordl_internal_set_talkingIndicator)) ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  talkingIndicator;

/// @brief Field textingIndicator, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_textingIndicator, put=__cordl_internal_set_textingIndicator)) ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  textingIndicator;

/// @brief Field torso, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_torso, put=__cordl_internal_set_torso)) ::UnityW<::UnityEngine::UI::Image>  torso;

/// @brief Field unencounteredContents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_unencounteredContents, put=__cordl_internal_set_unencounteredContents)) ::UnityW<::UnityEngine::Transform>  unencounteredContents;

/// @brief Method ActionKickButton, addr 0x180437f70, size 0xe0, virtual false, abstract: false, final false
inline void ActionKickButton() ;

/// @brief Method ActionReportButton, addr 0x180438050, size 0xe0, virtual false, abstract: false, final false
inline void ActionReportButton() ;

/// @brief Method ActionSilenceButton, addr 0x180438130, size 0x140, virtual false, abstract: false, final false
inline void ActionSilenceButton() ;

static inline ::GlobalNamespace::ModerationPlayerCard* New_ctor() ;

/// @brief Method OnEnable, addr 0x180438270, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshCardState, addr 0x1804382f0, size 0x670, virtual false, abstract: false, final false
inline void RefreshCardState() ;

/// @brief Method ToMenuColor, addr 0x180438960, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color ToMenuColor(::GlobalNamespace::PlayerLookSet_LookColor  lookColor) ;

/// @brief Method Update, addr 0x180438980, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__player() ;

constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons> const& __cordl_internal_get_activeButtons() const;

constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>& __cordl_internal_get_activeButtons() ;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& __cordl_internal_get_crossplayIndicator() const;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& __cordl_internal_get_crossplayIndicator() ;

constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons> const& __cordl_internal_get_defaultButtons() const;

constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>& __cordl_internal_get_defaultButtons() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_encounteredContents() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_encounteredContents() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_head() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_head() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hostIcon() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hostIcon() ;

constexpr ::StringW const& __cordl_internal_get_keyMute() const;

constexpr ::StringW& __cordl_internal_get_keyMute() ;

constexpr ::StringW const& __cordl_internal_get_keyUnmute() const;

constexpr ::StringW& __cordl_internal_get_keyUnmute() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_legs() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_legs() ;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& __cordl_internal_get_muteIndicator() const;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& __cordl_internal_get_muteIndicator() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_nameText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_nameText() ;

constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons> const& __cordl_internal_get_ps5Buttons() const;

constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>& __cordl_internal_get_ps5Buttons() ;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& __cordl_internal_get_talkingIndicator() const;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& __cordl_internal_get_talkingIndicator() ;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& __cordl_internal_get_textingIndicator() const;

constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& __cordl_internal_get_textingIndicator() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_torso() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_torso() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_unencounteredContents() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_unencounteredContents() ;

constexpr void __cordl_internal_set__player(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_activeButtons(::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  value) ;

constexpr void __cordl_internal_set_crossplayIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value) ;

constexpr void __cordl_internal_set_defaultButtons(::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  value) ;

constexpr void __cordl_internal_set_encounteredContents(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_hostIcon(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_keyMute(::StringW  value) ;

constexpr void __cordl_internal_set_keyUnmute(::StringW  value) ;

constexpr void __cordl_internal_set_legs(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_muteIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value) ;

constexpr void __cordl_internal_set_nameText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_ps5Buttons(::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  value) ;

constexpr void __cordl_internal_set_talkingIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value) ;

constexpr void __cordl_internal_set_textingIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value) ;

constexpr void __cordl_internal_set_torso(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_unencounteredContents(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_player, addr 0x180438990, size 0x60, virtual false, abstract: false, final false
inline void set_player(::GlobalNamespace::PlayerCharacter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModerationPlayerCard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModerationPlayerCard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModerationPlayerCard(ModerationPlayerCard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModerationPlayerCard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModerationPlayerCard(ModerationPlayerCard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5264};

/// @brief Field defaultButtons, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  ___defaultButtons;

/// @brief Field ps5Buttons, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  ___ps5Buttons;

/// @brief Field nameText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___nameText;

/// @brief Field hostIcon, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hostIcon;

/// @brief Field unencounteredContents, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___unencounteredContents;

/// @brief Field encounteredContents, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___encounteredContents;

/// @brief Field keyMute, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___keyMute;

/// @brief Field keyUnmute, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___keyUnmute;

/// @brief Field talkingIndicator, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  ___talkingIndicator;

/// @brief Field textingIndicator, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  ___textingIndicator;

/// @brief Field crossplayIndicator, offset: 0x90, size: 0x18, def value: None
 ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  ___crossplayIndicator;

/// @brief Field muteIndicator, offset: 0xa8, size: 0x18, def value: None
 ::GlobalNamespace::ModerationPlayerCard_IndicatorPair  ___muteIndicator;

/// @brief Field head, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___head;

/// @brief Field torso, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___torso;

/// @brief Field legs, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___legs;

/// @brief Field activeButtons, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  ___activeButtons;

/// @brief Field _player, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___defaultButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___ps5Buttons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___nameText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___hostIcon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___unencounteredContents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___encounteredContents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___keyMute) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___keyUnmute) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___talkingIndicator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___textingIndicator) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___crossplayIndicator) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___muteIndicator) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___head) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___torso) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___legs) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ___activeButtons) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCard, ____player) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationPlayerCard) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
