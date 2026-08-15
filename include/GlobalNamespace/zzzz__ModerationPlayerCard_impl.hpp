#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationPlayerCard.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationPlayerCard_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__ModerationPlayerCardButtons_def.hpp"
#include "GlobalNamespace/zzzz__ModerationPlayerCard_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard_IndicatorPair.SetIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard_IndicatorPair::*)(bool)>(&::GlobalNamespace::ModerationPlayerCard_IndicatorPair::SetIndicator)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180434130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard_IndicatorPair>(),
                        {"SetIndicator", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModerationPlayerCard_IndicatorPair::SetIndicator(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard_IndicatorPair>(),
                        {"SetIndicator", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "indicatorOn", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indicatorOff", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_state", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair::ModerationPlayerCard_IndicatorPair(::UnityW<::UnityEngine::Transform>  indicatorOn, ::UnityW<::UnityEngine::Transform>  indicatorOff, ::System::Nullable_1<bool>  _state) noexcept  {
this->indicatorOn = indicatorOn;
this->indicatorOff = indicatorOff;
this->_state = _state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair::ModerationPlayerCard_IndicatorPair()   {
}
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.set_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::ModerationPlayerCard::set_player)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180438990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"set_player", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180438270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180438980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.RefreshCardState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::RefreshCardState)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x1804382f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"RefreshCardState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.ToMenuColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ModerationPlayerCard::*)(::GlobalNamespace::PlayerLookSet_LookColor)>(&::GlobalNamespace::ModerationPlayerCard::ToMenuColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180438960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ToMenuColor", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.ActionSilenceButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::ActionSilenceButton)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180438130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ActionSilenceButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.ActionKickButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::ActionKickButton)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180437f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ActionKickButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard.ActionReportButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::ActionReportButton)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180438050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ActionReportButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCard::*)()>(&::GlobalNamespace::ModerationPlayerCard::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_defaultButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultButtons;
}
constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_defaultButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultButtons;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_defaultButtons(::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_ps5Buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5Buttons;
}
constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_ps5Buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5Buttons;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_ps5Buttons(::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps5Buttons = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_nameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_nameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameText;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_nameText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_hostIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostIcon;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_hostIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostIcon;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_hostIcon(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostIcon = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_unencounteredContents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredContents;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_unencounteredContents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredContents;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_unencounteredContents(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unencounteredContents = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_encounteredContents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredContents;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_encounteredContents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredContents;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_encounteredContents(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encounteredContents = value;
}
constexpr ::StringW& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_keyMute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyMute;
}
constexpr ::StringW const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_keyMute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyMute;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_keyMute(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyMute = value;
}
constexpr ::StringW& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_keyUnmute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyUnmute;
}
constexpr ::StringW const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_keyUnmute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyUnmute;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_keyUnmute(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyUnmute = value;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_talkingIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkingIndicator;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_talkingIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___talkingIndicator;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_talkingIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___talkingIndicator = value;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_textingIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textingIndicator;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_textingIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textingIndicator;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_textingIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textingIndicator = value;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_crossplayIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crossplayIndicator;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_crossplayIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crossplayIndicator;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_crossplayIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crossplayIndicator = value;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_muteIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteIndicator;
}
constexpr ::GlobalNamespace::ModerationPlayerCard_IndicatorPair const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_muteIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteIndicator;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_muteIndicator(::GlobalNamespace::ModerationPlayerCard_IndicatorPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteIndicator = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_head(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_torso()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torso;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_torso() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torso;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_torso(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torso = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_legs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legs;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_legs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legs;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_legs(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legs = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_activeButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeButtons;
}
constexpr ::UnityW<::GlobalNamespace::ModerationPlayerCardButtons> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get_activeButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeButtons;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set_activeButtons(::UnityW<::GlobalNamespace::ModerationPlayerCardButtons>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::ModerationPlayerCard::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void GlobalNamespace::ModerationPlayerCard::__cordl_internal_set__player(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
inline void GlobalNamespace::ModerationPlayerCard::set_player(::GlobalNamespace::PlayerCharacter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"set_player", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ModerationPlayerCard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationPlayerCard::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationPlayerCard::RefreshCardState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"RefreshCardState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ModerationPlayerCard::ToMenuColor(::GlobalNamespace::PlayerLookSet_LookColor  lookColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ToMenuColor", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookSet_LookColor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, lookColor);
}
inline void GlobalNamespace::ModerationPlayerCard::ActionSilenceButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ActionSilenceButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationPlayerCard::ActionKickButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ActionKickButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationPlayerCard::ActionReportButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {"ActionReportButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationPlayerCard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationPlayerCard* GlobalNamespace::ModerationPlayerCard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationPlayerCard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationPlayerCard::ModerationPlayerCard()   {
}
