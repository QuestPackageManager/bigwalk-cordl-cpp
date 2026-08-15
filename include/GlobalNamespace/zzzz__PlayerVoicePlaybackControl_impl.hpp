#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerVoicePlaybackControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerVoicePlaybackControl_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SamplePlaybackComponent_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__VoicePlayback_def.hpp"
#include "GlobalNamespace/zzzz__AudibilityDebug_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVoicePlaybackControl_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl___c::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl___c._RebuildCachedClip_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl___c::*)(::ArrayW<float_t>)>(&::GlobalNamespace::PlayerVoicePlaybackControl___c::_RebuildCachedClip_b__50_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18038e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl___c*>(),
                        {"<RebuildCachedClip>b__50_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerVoicePlaybackControl___c::setStaticF___9(::GlobalNamespace::PlayerVoicePlaybackControl___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlayerVoicePlaybackControl___c*, "<>9", ::GlobalNamespace::PlayerVoicePlaybackControl___c*>(std::forward<::GlobalNamespace::PlayerVoicePlaybackControl___c*>(value));
}
inline ::GlobalNamespace::PlayerVoicePlaybackControl___c* GlobalNamespace::PlayerVoicePlaybackControl___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerVoicePlaybackControl___c*, "<>9", ::GlobalNamespace::PlayerVoicePlaybackControl___c*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl___c::setStaticF___9__50_0(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__50_0", ::GlobalNamespace::PlayerVoicePlaybackControl___c*>(std::forward<::UnityEngine::AudioClip_PCMReaderCallback*>(value));
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* GlobalNamespace::PlayerVoicePlaybackControl___c::getStaticF___9__50_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__50_0", ::GlobalNamespace::PlayerVoicePlaybackControl___c*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl___c::_RebuildCachedClip_b__50_0(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl___c*>(),
                        {"<RebuildCachedClip>b__50_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::GlobalNamespace::PlayerVoicePlaybackControl___c* GlobalNamespace::PlayerVoicePlaybackControl___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerVoicePlaybackControl___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerVoicePlaybackControl___c::PlayerVoicePlaybackControl___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.get_SourceController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::get_SourceController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_SourceController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.get_SmoothedARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::get_SmoothedARV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803826d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_SmoothedARV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.get_PeakARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::get_PeakARV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_PeakARV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.get_TwoDMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::get_TwoDMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803826e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_TwoDMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.set_TwoDMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)(bool)>(&::GlobalNamespace::PlayerVoicePlaybackControl::set_TwoDMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180382820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"set_TwoDMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18037a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.get_GibberishMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::get_GibberishMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180382690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_GibberishMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.set_GibberishMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PlayerVoicePlaybackControl::set_GibberishMode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803826f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"set_GibberishMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::Initialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180380370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180380130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180380550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::OnEnable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180380710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.RebuildCachedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::RebuildCachedClip)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803811d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"RebuildCachedClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::OnDisable)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803805a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::Update)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x180381600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.FindByPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> (*)(::StringW)>(&::GlobalNamespace::PlayerVoicePlaybackControl::FindByPlayerName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803801b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"FindByPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerVoicePlaybackControl::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerVoicePlaybackControl::GetX)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180380280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.PlayVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::PlayVoice)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x180380d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"PlayVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.PlayGibberish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::PlayGibberish)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1803808e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"PlayGibberish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.OnAudioDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)(bool)>(&::GlobalNamespace::PlayerVoicePlaybackControl::OnAudioDeviceChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803804d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnAudioDeviceChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl.SetBlindFoldMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)(bool)>(&::GlobalNamespace::PlayerVoicePlaybackControl::SetBlindFoldMode)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180381400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"SetBlindFoldMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVoicePlaybackControl::*)()>(&::GlobalNamespace::PlayerVoicePlaybackControl::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803825b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl._PlayVoice_g___clearRef_55_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerVoicePlaybackControl*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PlayerVoicePlaybackControl::_PlayVoice_g___clearRef_55_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803815a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"<PlayVoice>g___clearRef|55_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVoicePlaybackControl._PlayGibberish_g___clearRef_56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerVoicePlaybackControl*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PlayerVoicePlaybackControl::_PlayGibberish_g___clearRef_56_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803815a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"<PlayGibberish>g___clearRef|56_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_voicePlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voicePlayback;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_voicePlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voicePlayback;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_voicePlayback(::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voicePlayback = value;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_dissonanceSampleProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dissonanceSampleProvider;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_dissonanceSampleProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dissonanceSampleProvider;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_dissonanceSampleProvider(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dissonanceSampleProvider = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_voiceBlockingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceBlockingMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_voiceBlockingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceBlockingMask;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_voiceBlockingMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceBlockingMask = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_FilterDistanceCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterDistanceCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_FilterDistanceCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterDistanceCurve;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_FilterDistanceCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterDistanceCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_FilterAngleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterAngleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_FilterAngleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterAngleCurve;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_FilterAngleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterAngleCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_AttenuationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttenuationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_AttenuationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttenuationCurve;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_AttenuationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttenuationCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_SpatialVolCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialVolCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_SpatialVolCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialVolCurve;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_SpatialVolCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpatialVolCurve = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_GibberishCue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GibberishCue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get_GibberishCue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GibberishCue;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set_GibberishCue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GibberishCue = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__cue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__cue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cue;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__cue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cue = value;
}
constexpr int32_t& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixer;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixer = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__cachedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__cachedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedClip = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__sourceController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceController;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__sourceController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceController;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__sourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceController = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__eqFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eqFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__eqFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eqFilter;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__eqFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eqFilter = value;
}
constexpr float_t& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__attenuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuation;
}
constexpr float_t const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__attenuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuation;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__attenuation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attenuation = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__outdoornessVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__outdoornessVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessVol;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__outdoornessVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outdoornessVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__amplitudeVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__amplitudeVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeVol;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__amplitudeVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitudeVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__speechlessVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__speechlessVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessVol;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__speechlessVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speechlessVol = value;
}
constexpr float_t& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__fallWetLvl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallWetLvl;
}
constexpr float_t const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__fallWetLvl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallWetLvl;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__fallWetLvl(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallWetLvl = value;
}
constexpr float_t& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__smoothedARV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothedARV;
}
constexpr float_t const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__smoothedARV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothedARV;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__smoothedARV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothedARV = value;
}
constexpr float_t& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__peakARV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakARV;
}
constexpr float_t const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__peakARV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakARV;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__peakARV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peakARV = value;
}
constexpr bool& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__TwoDMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TwoDMode_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__TwoDMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TwoDMode_k__BackingField;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__TwoDMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TwoDMode_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__blindFoldFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blindFoldFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_get__blindFoldFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blindFoldFilter;
}
constexpr void GlobalNamespace::PlayerVoicePlaybackControl::__cordl_internal_set__blindFoldFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blindFoldFilter = value;
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_controls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>*, "controls", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>* GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_controls()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>*, "controls", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_cueStack(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>*, "cueStack", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>* GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_cueStack()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>*, "cueStack", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_AudibilityDebugGUI(::GlobalNamespace::AudibilityDebug*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AudibilityDebug*, "AudibilityDebugGUI", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::GlobalNamespace::AudibilityDebug*>(value));
}
inline ::GlobalNamespace::AudibilityDebug* GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_AudibilityDebugGUI()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AudibilityDebug*, "AudibilityDebugGUI", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_PARAM_DRY(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "PARAM_DRY", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_PARAM_DRY()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "PARAM_DRY", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_PARAM_HIGH(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "PARAM_HIGH", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_PARAM_HIGH()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "PARAM_HIGH", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_PARAM_REVERB_FALL_WET(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "PARAM_REVERB_FALL_WET", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_PARAM_REVERB_FALL_WET()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "PARAM_REVERB_FALL_WET", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF_PARAM_REVERB_BOOST_WET(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "PARAM_REVERB_BOOST_WET", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PlayerVoicePlaybackControl::getStaticF_PARAM_REVERB_BOOST_WET()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "PARAM_REVERB_BOOST_WET", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::setStaticF__gibberishMode(bool  value)  {
::cordl_internals::setStaticField<bool, "_gibberishMode", ::GlobalNamespace::PlayerVoicePlaybackControl*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::PlayerVoicePlaybackControl::getStaticF__gibberishMode()  {
return ::cordl_internals::getStaticField<bool, "_gibberishMode", ::GlobalNamespace::PlayerVoicePlaybackControl*>();
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::PlayerVoicePlaybackControl::get_SourceController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_SourceController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerVoicePlaybackControl::get_SmoothedARV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_SmoothedARV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerVoicePlaybackControl::get_PeakARV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_PeakARV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerVoicePlaybackControl::get_TwoDMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_TwoDMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::set_TwoDMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"set_TwoDMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerVoicePlaybackControl::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerVoicePlaybackControl::get_GibberishMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"get_GibberishMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::set_GibberishMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"set_GibberishMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::RebuildCachedClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"RebuildCachedClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> GlobalNamespace::PlayerVoicePlaybackControl::FindByPlayerName(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"FindByPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>(nullptr, ___internal_method, playerName);
}
inline bool GlobalNamespace::PlayerVoicePlaybackControl::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::PlayVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"PlayVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::PlayGibberish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"PlayGibberish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::OnAudioDeviceChange(bool  deviceChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"OnAudioDeviceChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceChanged);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::SetBlindFoldMode(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"SetBlindFoldMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::_PlayVoice_g___clearRef_55_0(::GlobalNamespace::PlayerVoicePlaybackControl*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"<PlayVoice>g___clearRef|55_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::PlayerVoicePlaybackControl::_PlayGibberish_g___clearRef_56_0(::GlobalNamespace::PlayerVoicePlaybackControl*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(),
                        {"<PlayGibberish>g___clearRef|56_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerVoicePlaybackControl*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::PlayerVoicePlaybackControl* GlobalNamespace::PlayerVoicePlaybackControl::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerVoicePlaybackControl*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::PlayerVoicePlaybackControl::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::PlayerVoicePlaybackControl::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerVoicePlaybackControl::PlayerVoicePlaybackControl()   {
}
