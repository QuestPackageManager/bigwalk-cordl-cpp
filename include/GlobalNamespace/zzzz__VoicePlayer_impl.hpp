#pragma once
// IWYU pragma private; include "GlobalNamespace/VoicePlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoicePlayer_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SamplePlaybackComponent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__BitCrusher_def.hpp"
#include "GlobalNamespace/zzzz__IAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__IVoiceDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__LocalVoiceProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__VoicePlayer_def.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType::VoicePlayer_VoicePlayerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType::VoicePlayer_VoicePlayerType()   {
}
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType  GlobalNamespace::VoicePlayer_VoicePlayerType::Clean{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType  GlobalNamespace::VoicePlayer_VoicePlayerType::Radio{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType  GlobalNamespace::VoicePlayer_VoicePlayerType::SelfVoice{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType  GlobalNamespace::VoicePlayer_VoicePlayerType::Megaphone{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType  GlobalNamespace::VoicePlayer_VoicePlayerType::WalkieTalkie{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer___c::*)()>(&::GlobalNamespace::VoicePlayer___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer___c._Awake_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer___c::*)(::ArrayW<float_t>)>(&::GlobalNamespace::VoicePlayer___c::_Awake_b__58_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18038e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer___c*>(),
                        {"<Awake>b__58_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoicePlayer___c::setStaticF___9(::GlobalNamespace::VoicePlayer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VoicePlayer___c*, "<>9", ::GlobalNamespace::VoicePlayer___c*>(std::forward<::GlobalNamespace::VoicePlayer___c*>(value));
}
inline ::GlobalNamespace::VoicePlayer___c* GlobalNamespace::VoicePlayer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VoicePlayer___c*, "<>9", ::GlobalNamespace::VoicePlayer___c*>();
}
inline void GlobalNamespace::VoicePlayer___c::setStaticF___9__58_0(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__58_0", ::GlobalNamespace::VoicePlayer___c*>(std::forward<::UnityEngine::AudioClip_PCMReaderCallback*>(value));
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* GlobalNamespace::VoicePlayer___c::getStaticF___9__58_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__58_0", ::GlobalNamespace::VoicePlayer___c*>();
}
inline void GlobalNamespace::VoicePlayer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer___c::_Awake_b__58_0(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer___c*>(),
                        {"<Awake>b__58_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::GlobalNamespace::VoicePlayer___c* GlobalNamespace::VoicePlayer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoicePlayer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoicePlayer___c::VoicePlayer___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_InternalBypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(bool)>(&::GlobalNamespace::VoicePlayer::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_InternalBypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_Bypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(bool)>(&::GlobalNamespace::VoicePlayer::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_SampleProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IVoiceDataProvider* (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_SampleProvider)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f5320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_SampleProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.set_SampleProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(::GlobalNamespace::IVoiceDataProvider*)>(&::GlobalNamespace::VoicePlayer::set_SampleProvider)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803f5430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_SampleProvider", {}, {::i2c::type_of<::GlobalNamespace::IVoiceDataProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_Controller)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_SourcePlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_SourcePlayerCharacter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_SourcePlayerCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.set_SourcePlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::VoicePlayer::set_SourcePlayerCharacter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f5690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_SourcePlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_LocalVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_LocalVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_LocalVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.set_LocalVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::VoicePlayer::set_LocalVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_LocalVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.add_OnVoicePlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::VoicePlayer::add_OnVoicePlayed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f5280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"add_OnVoicePlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.remove_OnVoicePlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::VoicePlayer::remove_OnVoicePlayed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f5380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"remove_OnVoicePlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::Awake)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1803f3450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::OnEnable)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x1803f3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803f3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::Update)> {
  constexpr static std::size_t size = 0xde0;
  constexpr static std::size_t addrs = 0x1803f4240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.UpdateReadHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(int32_t)>(&::GlobalNamespace::VoicePlayer::UpdateReadHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"UpdateReadHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(float_t)>(&::GlobalNamespace::VoicePlayer::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"UpdateVariables", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::VoicePlayer::ProcessSamples)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803f3f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoicePlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::VoicePlayer::GetX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803f5170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer._set_SampleProvider_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoicePlayer::*)()>(&::GlobalNamespace::VoicePlayer::_set_SampleProvider_b__15_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f41d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"<set_SampleProvider>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoicePlayer._OnEnable_g___clearRef_59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoicePlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::VoicePlayer::_OnEnable_g___clearRef_59_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803f40d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"<OnEnable>g___clearRef|59_0", {}, {::i2c::type_of<::GlobalNamespace::VoicePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::VoicePlayer::__cordl_internal_get_Cue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::VoicePlayer::__cordl_internal_get_Cue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cue = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider>& GlobalNamespace::VoicePlayer::__cordl_internal_get_LocalVoiceProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalVoiceProvider;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider> const& GlobalNamespace::VoicePlayer::__cordl_internal_get_LocalVoiceProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalVoiceProvider;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_LocalVoiceProvider(::UnityW<::GlobalNamespace::LocalVoiceProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalVoiceProvider = value;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& GlobalNamespace::VoicePlayer::__cordl_internal_get_SamplePlaybackComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SamplePlaybackComponent;
}
constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& GlobalNamespace::VoicePlayer::__cordl_internal_get_SamplePlaybackComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SamplePlaybackComponent;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_SamplePlaybackComponent(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SamplePlaybackComponent = value;
}
constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& GlobalNamespace::VoicePlayer::__cordl_internal_get_WaterDepthData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterDepthData;
}
constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& GlobalNamespace::VoicePlayer::__cordl_internal_get_WaterDepthData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterDepthData;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterDepthData = value;
}
constexpr bool& GlobalNamespace::VoicePlayer::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::VoicePlayer::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::VoicePlayer::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::VoicePlayer::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoicePlayer::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoicePlayer::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_Volume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType& GlobalNamespace::VoicePlayer::__cordl_internal_get_PlayerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerType;
}
constexpr ::GlobalNamespace::VoicePlayer_VoicePlayerType const& GlobalNamespace::VoicePlayer::__cordl_internal_get_PlayerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerType;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_PlayerType(::GlobalNamespace::VoicePlayer_VoicePlayerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::VoicePlayer::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__controller(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::VoicePlayer::__cordl_internal_get__sourcePlayerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourcePlayerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__sourcePlayerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourcePlayerCharacter;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__sourcePlayerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourcePlayerCharacter = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoicePlayer::__cordl_internal_get__speechlessVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoicePlayer::__cordl_internal_get__speechlessVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speechlessVol;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__speechlessVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speechlessVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoicePlayer::__cordl_internal_get__muteVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muteVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoicePlayer::__cordl_internal_get__muteVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muteVol;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__muteVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____muteVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoicePlayer::__cordl_internal_get__LocalVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoicePlayer::__cordl_internal_get__LocalVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalVol_k__BackingField;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__LocalVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalVol_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::VoicePlayer::__cordl_internal_get__cachedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__cachedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedClip = value;
}
constexpr int32_t& GlobalNamespace::VoicePlayer::__cordl_internal_get__readHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
constexpr int32_t const& GlobalNamespace::VoicePlayer::__cordl_internal_get__readHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__readHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readHead = value;
}
constexpr ::UnityW<::GlobalNamespace::BitCrusher>& GlobalNamespace::VoicePlayer::__cordl_internal_get__bitCrusher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitCrusher;
}
constexpr ::UnityW<::GlobalNamespace::BitCrusher> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__bitCrusher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitCrusher;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__bitCrusher(::UnityW<::GlobalNamespace::BitCrusher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitCrusher = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::VoicePlayer::__cordl_internal_get__megaphoneMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____megaphoneMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__megaphoneMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____megaphoneMixer;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__megaphoneMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____megaphoneMixer = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::VoicePlayer::__cordl_internal_get__megaphoneMasterMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____megaphoneMasterMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__megaphoneMasterMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____megaphoneMasterMixer;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__megaphoneMasterMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____megaphoneMasterMixer = value;
}
constexpr int32_t& GlobalNamespace::VoicePlayer::__cordl_internal_get__megaphoneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____megaphoneIndex;
}
constexpr int32_t const& GlobalNamespace::VoicePlayer::__cordl_internal_get__megaphoneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____megaphoneIndex;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__megaphoneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____megaphoneIndex = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::VoicePlayer::__cordl_internal_get__walkietalkieMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____walkietalkieMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::VoicePlayer::__cordl_internal_get__walkietalkieMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____walkietalkieMixer;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set__walkietalkieMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____walkietalkieMixer = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::VoicePlayer::__cordl_internal_get_OnVoicePlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoicePlayed;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::VoicePlayer::__cordl_internal_get_OnVoicePlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoicePlayed;
}
constexpr void GlobalNamespace::VoicePlayer::__cordl_internal_set_OnVoicePlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnVoicePlayed = value;
}
inline void GlobalNamespace::VoicePlayer::setStaticF_MEGAPHONE_WET(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "MEGAPHONE_WET", ::GlobalNamespace::VoicePlayer*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::VoicePlayer::getStaticF_MEGAPHONE_WET()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "MEGAPHONE_WET", ::GlobalNamespace::VoicePlayer*>();
}
inline void GlobalNamespace::VoicePlayer::setStaticF_MEGAPHONE_DRY(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "MEGAPHONE_DRY", ::GlobalNamespace::VoicePlayer*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::VoicePlayer::getStaticF_MEGAPHONE_DRY()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "MEGAPHONE_DRY", ::GlobalNamespace::VoicePlayer*>();
}
inline bool GlobalNamespace::VoicePlayer::get_InternalBypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_InternalBypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::set_InternalBypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_InternalBypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::VoicePlayer::get_Bypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_Bypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::set_Bypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IVoiceDataProvider* GlobalNamespace::VoicePlayer::get_SampleProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_SampleProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IVoiceDataProvider*>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::set_SampleProvider(::GlobalNamespace::IVoiceDataProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_SampleProvider", {}, {::i2c::type_of<::GlobalNamespace::IVoiceDataProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::VoicePlayer::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::VoicePlayer::get_SourcePlayerCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_SourcePlayerCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::set_SourcePlayerCharacter(::GlobalNamespace::PlayerCharacter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_SourcePlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::VoicePlayer::get_LocalVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_LocalVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::set_LocalVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"set_LocalVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VoicePlayer::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::add_OnVoicePlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"add_OnVoicePlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VoicePlayer::remove_OnVoicePlayed(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"remove_OnVoicePlayed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VoicePlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::UpdateReadHead(int32_t  newReadHead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"UpdateReadHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newReadHead);
}
inline void GlobalNamespace::VoicePlayer::UpdateVariables(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"UpdateVariables", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::VoicePlayer::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline bool GlobalNamespace::VoicePlayer::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::VoicePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::_set_SampleProvider_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"<set_SampleProvider>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoicePlayer::_OnEnable_g___clearRef_59_0(::GlobalNamespace::VoicePlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoicePlayer*>(),
                        {"<OnEnable>g___clearRef|59_0", {}, {::i2c::type_of<::GlobalNamespace::VoicePlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::VoicePlayer* GlobalNamespace::VoicePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoicePlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr  GlobalNamespace::VoicePlayer::operator ::GlobalNamespace::IAudioFilter*() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* GlobalNamespace::VoicePlayer::i___GlobalNamespace__IAudioFilter() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoicePlayer::VoicePlayer()   {
}
