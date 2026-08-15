#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuMusicPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuMusicPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__MenuMusicPlayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode::MenuMusicPlayer_PlayMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode::MenuMusicPlayer_PlayMode()   {
}
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode  GlobalNamespace::MenuMusicPlayer_PlayMode::MenuMusic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode  GlobalNamespace::MenuMusicPlayer_PlayMode::Goodbye{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode  GlobalNamespace::MenuMusicPlayer_PlayMode::MicSelect{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.get_CurrentPlayMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MenuMusicPlayer_PlayMode (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::get_CurrentPlayMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"get_CurrentPlayMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.set_CurrentPlayMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)(::GlobalNamespace::MenuMusicPlayer_PlayMode)>(&::GlobalNamespace::MenuMusicPlayer::set_CurrentPlayMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"set_CurrentPlayMode", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer_PlayMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.get_GoodByeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::get_GoodByeVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"get_GoodByeVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.set_GoodByeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::MenuMusicPlayer::set_GoodByeVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"set_GoodByeVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d4f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d4fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::Play)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803d5620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.OnLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)(double_t)>(&::GlobalNamespace::MenuMusicPlayer::OnLoop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d5000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"OnLoop", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.PlayStinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::PlayStinger)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803d54e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayStinger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.PlayLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::PlayLoop)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803d5200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.PlayGoodbye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::PlayGoodbye)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803d5030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayGoodbye", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::Stop)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803d58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::Disable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer.PlayMicSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::PlayMicSelect)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803d53a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayMicSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuMusicPlayer::*)()>(&::GlobalNamespace::MenuMusicPlayer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803d5a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer._PlayStinger_g___clearRef_23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MenuMusicPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::MenuMusicPlayer::_PlayStinger_g___clearRef_23_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d5a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayStinger>g___clearRef|23_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer._PlayLoop_g___clearRef_24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MenuMusicPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::MenuMusicPlayer::_PlayLoop_g___clearRef_24_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d59b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayLoop>g___clearRef|24_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer._PlayGoodbye_g___clearRef_25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MenuMusicPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::MenuMusicPlayer::_PlayGoodbye_g___clearRef_25_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d5960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayGoodbye>g___clearRef|25_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuMusicPlayer._PlayMicSelect_g___clearRef_28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MenuMusicPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::MenuMusicPlayer::_PlayMicSelect_g___clearRef_28_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayMicSelect>g___clearRef|28_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_Stinger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stinger;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_Stinger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stinger;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set_Stinger(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stinger = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_Loopable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loopable;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_Loopable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loopable;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set_Loopable(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Loopable = value;
}
constexpr float_t& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_LoopTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopTime;
}
constexpr float_t const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_LoopTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopTime;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set_LoopTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoopTime = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_GoodbyeTrack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodbyeTrack;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_GoodbyeTrack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoodbyeTrack;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set_GoodbyeTrack(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoodbyeTrack = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_MicSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicSelect;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get_MicSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicSelect;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set_MicSelect(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicSelect = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__stingerASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stingerASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__stingerASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stingerASC;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set__stingerASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stingerASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__loopASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__loopASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopASC;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set__loopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__goodbyeASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____goodbyeASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__goodbyeASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____goodbyeASC;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set__goodbyeASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____goodbyeASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__micSelectASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSelectASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__micSelectASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSelectASC;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set__micSelectASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micSelectASC = value;
}
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__CurrentPlayMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPlayMode_k__BackingField;
}
constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__CurrentPlayMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPlayMode_k__BackingField;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set__CurrentPlayMode_k__BackingField(::GlobalNamespace::MenuMusicPlayer_PlayMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentPlayMode_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__GoodByeVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GoodByeVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::MenuMusicPlayer::__cordl_internal_get__GoodByeVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GoodByeVol_k__BackingField;
}
constexpr void GlobalNamespace::MenuMusicPlayer::__cordl_internal_set__GoodByeVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GoodByeVol_k__BackingField = value;
}
inline ::GlobalNamespace::MenuMusicPlayer_PlayMode GlobalNamespace::MenuMusicPlayer::get_CurrentPlayMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"get_CurrentPlayMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuMusicPlayer_PlayMode>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::set_CurrentPlayMode(::GlobalNamespace::MenuMusicPlayer_PlayMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"set_CurrentPlayMode", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer_PlayMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::MenuMusicPlayer::get_GoodByeVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"get_GoodByeVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::set_GoodByeVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"set_GoodByeVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuMusicPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::OnLoop(double_t  dspTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"OnLoop", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dspTime);
}
inline void GlobalNamespace::MenuMusicPlayer::PlayStinger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayStinger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::PlayLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::PlayGoodbye()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayGoodbye", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::PlayMicSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"PlayMicSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuMusicPlayer::_PlayStinger_g___clearRef_23_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayStinger>g___clearRef|23_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::MenuMusicPlayer::_PlayLoop_g___clearRef_24_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayLoop>g___clearRef|24_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::MenuMusicPlayer::_PlayGoodbye_g___clearRef_25_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayGoodbye>g___clearRef|25_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline void GlobalNamespace::MenuMusicPlayer::_PlayMicSelect_g___clearRef_28_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuMusicPlayer*>(),
                        {"<PlayMicSelect>g___clearRef|28_0", {}, {::i2c::type_of<::GlobalNamespace::MenuMusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::MenuMusicPlayer* GlobalNamespace::MenuMusicPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuMusicPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuMusicPlayer::MenuMusicPlayer()   {
}
