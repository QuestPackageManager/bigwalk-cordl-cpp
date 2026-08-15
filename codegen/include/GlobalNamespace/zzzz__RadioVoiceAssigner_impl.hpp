#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioVoiceAssigner.hpp"
#include "GlobalNamespace/zzzz__VoicePlayer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RadioVoiceAssigner_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__RadioDisplay_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__TextChatMessage_def.hpp"
#include "GlobalNamespace/zzzz__TextChatSource_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "GlobalNamespace/zzzz__VoicePlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180412a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::OnEnable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180413210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804130f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.StartReceiving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)(::GlobalNamespace::RadioVoiceAssigner*)>(&::GlobalNamespace::RadioVoiceAssigner::StartReceiving)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180413b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"StartReceiving", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.StopRecieving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::StopRecieving)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180413e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"StopRecieving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.OnAssign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)(::GlobalNamespace::RadioVoiceAssigner*)>(&::GlobalNamespace::RadioVoiceAssigner::OnAssign)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x180412d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"OnAssign", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::RadioVoiceAssigner::Peck)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804133e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.BroadcastTextChatOverThisChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)(::GlobalNamespace::TextChatMessage)>(&::GlobalNamespace::RadioVoiceAssigner::BroadcastTextChatOverThisChannel)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180412ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"BroadcastTextChatOverThisChannel", {}, {::i2c::type_of<::GlobalNamespace::TextChatMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.SetIsInDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)(bool)>(&::GlobalNamespace::RadioVoiceAssigner::SetIsInDeadZone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180413b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"SetIsInDeadZone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804141d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.RefreshDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::RefreshDisplay)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180413a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"RefreshDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.PlayFeedbackSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::PlayFeedbackSound)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180413840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"PlayFeedbackSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner.PlayFeedbackSimulSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::PlayFeedbackSimulSound)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180413690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"PlayFeedbackSimulSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioVoiceAssigner::*)()>(&::GlobalNamespace::RadioVoiceAssigner::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804142f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner._PlayFeedbackSound_g__GetX_37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RadioVoiceAssigner::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::RadioVoiceAssigner::_PlayFeedbackSound_g__GetX_37_0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180414010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"<PlayFeedbackSound>g__GetX|37_0", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner._PlayFeedbackSound_g___clearRef_37_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RadioVoiceAssigner*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::RadioVoiceAssigner::_PlayFeedbackSound_g___clearRef_37_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803d2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"<PlayFeedbackSound>g___clearRef|37_1", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioVoiceAssigner._PlayFeedbackSimulSound_g___clearRef_38_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RadioVoiceAssigner*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::RadioVoiceAssigner::_PlayFeedbackSimulSound_g___clearRef_38_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180413fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"<PlayFeedbackSimulSound>g___clearRef|38_0", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_roomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomName;
}
constexpr ::StringW const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_roomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomName;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_roomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomName = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_onWhenReceiving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWhenReceiving;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_onWhenReceiving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWhenReceiving;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_onWhenReceiving(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onWhenReceiving = value;
}
constexpr ::UnityW<::GlobalNamespace::RadioDisplay>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_radioDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioDisplay;
}
constexpr ::UnityW<::GlobalNamespace::RadioDisplay> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_radioDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioDisplay;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_radioDisplay(::UnityW<::GlobalNamespace::RadioDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radioDisplay = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_onStartReceiveing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartReceiveing;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_onStartReceiveing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartReceiveing;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_onStartReceiveing(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStartReceiveing = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_onEndReceiveing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEndReceiveing;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_onEndReceiveing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEndReceiveing;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_onEndReceiveing(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEndReceiveing = value;
}
constexpr ::UnityW<::GlobalNamespace::TextChatSource>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_textChatSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textChatSource;
}
constexpr ::UnityW<::GlobalNamespace::TextChatSource> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_textChatSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textChatSource;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_textChatSource(::UnityW<::GlobalNamespace::TextChatSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textChatSource = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_feedbackSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feedbackSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_feedbackSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feedbackSound;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_feedbackSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___feedbackSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_feedbackSimulSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feedbackSimulSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_feedbackSimulSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feedbackSimulSound;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_feedbackSimulSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___feedbackSimulSound = value;
}
constexpr ::UnityW<::GlobalNamespace::VoicePlayer>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_voicePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voicePlayer;
}
constexpr ::UnityW<::GlobalNamespace::VoicePlayer> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_voicePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voicePlayer;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_voicePlayer(::UnityW<::GlobalNamespace::VoicePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voicePlayer = value;
}
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get__cachedVoiceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVoiceType;
}
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get__cachedVoiceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVoiceType;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set__cachedVoiceType(::GlobalNamespace::VoicePlayer_VoicePlayerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedVoiceType = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_localSpecialVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpecialVoice;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_localSpecialVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpecialVoice;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_localSpecialVoice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localSpecialVoice = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_textSentSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSentSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_textSentSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSentSound;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_textSentSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textSentSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_textReceiveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textReceiveSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_textReceiveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textReceiveSound;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_textReceiveSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textReceiveSound = value;
}
constexpr float_t& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_localVoiceVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoiceVol;
}
constexpr float_t const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_localVoiceVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoiceVol;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_localVoiceVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoiceVol = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_fullDuplex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullDuplex;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_fullDuplex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullDuplex;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_fullDuplex(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullDuplex = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_latestBroadcastPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestBroadcastPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_latestBroadcastPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestBroadcastPlayer;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_latestBroadcastPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestBroadcastPlayer = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isReceiveing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReceiveing;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isReceiveing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReceiveing;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_isReceiveing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReceiveing = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isWaitingForMessageEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isWaitingForMessageEnd;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isWaitingForMessageEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isWaitingForMessageEnd;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_isWaitingForMessageEnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isWaitingForMessageEnd = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isInDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInDeadZone;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isInDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInDeadZone;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_isInDeadZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInDeadZone = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get__feedbackSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feedbackSource;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get__feedbackSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feedbackSource;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set__feedbackSource(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feedbackSource = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get__feedbackSimulSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feedbackSimulSource;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get__feedbackSimulSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feedbackSimulSource;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set__feedbackSimulSource(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feedbackSimulSource = value;
}
constexpr bool& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isBroadcasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBroadcasting;
}
constexpr bool const& GlobalNamespace::RadioVoiceAssigner::__cordl_internal_get_isBroadcasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBroadcasting;
}
constexpr void GlobalNamespace::RadioVoiceAssigner::__cordl_internal_set_isBroadcasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBroadcasting = value;
}
inline void GlobalNamespace::RadioVoiceAssigner::setStaticF_onChange(::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*, "onChange", ::GlobalNamespace::RadioVoiceAssigner*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>* GlobalNamespace::RadioVoiceAssigner::getStaticF_onChange()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*, "onChange", ::GlobalNamespace::RadioVoiceAssigner*>();
}
inline void GlobalNamespace::RadioVoiceAssigner::setStaticF_allRadios(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*, "allRadios", ::GlobalNamespace::RadioVoiceAssigner*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>* GlobalNamespace::RadioVoiceAssigner::getStaticF_allRadios()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RadioVoiceAssigner>>*, "allRadios", ::GlobalNamespace::RadioVoiceAssigner*>();
}
inline void GlobalNamespace::RadioVoiceAssigner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::StartReceiving(::GlobalNamespace::RadioVoiceAssigner*  broadcaster)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"StartReceiving", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, broadcaster);
}
inline void GlobalNamespace::RadioVoiceAssigner::StopRecieving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"StopRecieving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::OnAssign(::GlobalNamespace::RadioVoiceAssigner*  changedRadio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"OnAssign", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedRadio);
}
inline void GlobalNamespace::RadioVoiceAssigner::Peck(::GlobalNamespace::PeckContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::RadioVoiceAssigner::BroadcastTextChatOverThisChannel(::GlobalNamespace::TextChatMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"BroadcastTextChatOverThisChannel", {}, {::i2c::type_of<::GlobalNamespace::TextChatMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::RadioVoiceAssigner::SetIsInDeadZone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"SetIsInDeadZone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RadioVoiceAssigner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::RefreshDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"RefreshDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::PlayFeedbackSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"PlayFeedbackSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::PlayFeedbackSimulSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"PlayFeedbackSimulSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioVoiceAssigner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RadioVoiceAssigner::_PlayFeedbackSound_g__GetX_37_0(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"<PlayFeedbackSound>g__GetX|37_0", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::RadioVoiceAssigner::_PlayFeedbackSound_g___clearRef_37_1(::GlobalNamespace::RadioVoiceAssigner*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"<PlayFeedbackSound>g___clearRef|37_1", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::RadioVoiceAssigner::_PlayFeedbackSimulSound_g___clearRef_38_0(::GlobalNamespace::RadioVoiceAssigner*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioVoiceAssigner*>(),
                        {"<PlayFeedbackSimulSound>g___clearRef|38_0", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::RadioVoiceAssigner* GlobalNamespace::RadioVoiceAssigner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadioVoiceAssigner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioVoiceAssigner::RadioVoiceAssigner()   {
}
