#pragma once
// IWYU pragma private; include "GlobalNamespace/SelfEcho.hpp"
#include "GlobalNamespace/zzzz__EchoData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SelfEcho_def.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
#include "GlobalNamespace/zzzz__EchoData_def.hpp"
#include "GlobalNamespace/zzzz__LocalVoicePlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SelfEcho> (*)()>(&::GlobalNamespace::SelfEcho::get_Instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803de570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SelfEcho*)>(&::GlobalNamespace::SelfEcho::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803dd700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::SelfEcho*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.get_EchoAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::EchoData> (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::get_EchoAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"get_EchoAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.set_EchoAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)(::ArrayW<::GlobalNamespace::EchoData>)>(&::GlobalNamespace::SelfEcho::set_EchoAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"set_EchoAmount", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::EchoData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.get_EchoOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::get_EchoOn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"get_EchoOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.set_EchoOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)(bool)>(&::GlobalNamespace::SelfEcho::set_EchoOn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803de5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"set_EchoOn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803dd700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::Start)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803de360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::OnEnable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803de140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803de0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::LateUpdate)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x1803dd870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.BroadcastForRemoteEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::SelfEcho::BroadcastForRemoteEcho)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803dd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"BroadcastForRemoteEcho", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho.CalculateEchoAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EchoData (::GlobalNamespace::SelfEcho::*)(int32_t)>(&::GlobalNamespace::SelfEcho::CalculateEchoAmount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803dd790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"CalculateEchoAmount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfEcho._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfEcho::*)()>(&::GlobalNamespace::SelfEcho::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803de520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer>& GlobalNamespace::SelfEcho::__cordl_internal_get_EmitterCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmitterCenter;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer> const& GlobalNamespace::SelfEcho::__cordl_internal_get_EmitterCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmitterCenter;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set_EmitterCenter(::UnityW<::GlobalNamespace::LocalVoicePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmitterCenter = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer>& GlobalNamespace::SelfEcho::__cordl_internal_get_EmitterLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmitterLeft;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer> const& GlobalNamespace::SelfEcho::__cordl_internal_get_EmitterLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmitterLeft;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set_EmitterLeft(::UnityW<::GlobalNamespace::LocalVoicePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmitterLeft = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer>& GlobalNamespace::SelfEcho::__cordl_internal_get_EmitterRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmitterRight;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer> const& GlobalNamespace::SelfEcho::__cordl_internal_get_EmitterRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmitterRight;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set_EmitterRight(::UnityW<::GlobalNamespace::LocalVoicePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmitterRight = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::SelfEcho::__cordl_internal_get_Mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::SelfEcho::__cordl_internal_get_Mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mixer;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mixer = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& GlobalNamespace::SelfEcho::__cordl_internal_get__reverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverb;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& GlobalNamespace::SelfEcho::__cordl_internal_get__reverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverb;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__reverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverb = value;
}
constexpr float_t& GlobalNamespace::SelfEcho::__cordl_internal_get__updateRemoteTimerEcho()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRemoteTimerEcho;
}
constexpr float_t const& GlobalNamespace::SelfEcho::__cordl_internal_get__updateRemoteTimerEcho() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRemoteTimerEcho;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__updateRemoteTimerEcho(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRemoteTimerEcho = value;
}
constexpr float_t& GlobalNamespace::SelfEcho::__cordl_internal_get__updateRemoteTimerOutdoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRemoteTimerOutdoor;
}
constexpr float_t const& GlobalNamespace::SelfEcho::__cordl_internal_get__updateRemoteTimerOutdoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRemoteTimerOutdoor;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__updateRemoteTimerOutdoor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRemoteTimerOutdoor = value;
}
constexpr ::ArrayW<::GlobalNamespace::EchoData>& GlobalNamespace::SelfEcho::__cordl_internal_get__EchoAmount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EchoAmount_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::EchoData> const& GlobalNamespace::SelfEcho::__cordl_internal_get__EchoAmount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EchoAmount_k__BackingField;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__EchoAmount_k__BackingField(::ArrayW<::GlobalNamespace::EchoData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EchoAmount_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SelfEcho::__cordl_internal_get__EchoOn_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EchoOn_k__BackingField;
}
constexpr bool const& GlobalNamespace::SelfEcho::__cordl_internal_get__EchoOn_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EchoOn_k__BackingField;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__EchoOn_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EchoOn_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SelfEcho::__cordl_internal_get__masterVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____masterVol;
}
constexpr float_t const& GlobalNamespace::SelfEcho::__cordl_internal_get__masterVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____masterVol;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__masterVol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____masterVol = value;
}
constexpr float_t& GlobalNamespace::SelfEcho::__cordl_internal_get__lastSyncedOutdoorsness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSyncedOutdoorsness;
}
constexpr float_t const& GlobalNamespace::SelfEcho::__cordl_internal_get__lastSyncedOutdoorsness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSyncedOutdoorsness;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__lastSyncedOutdoorsness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSyncedOutdoorsness = value;
}
constexpr float_t& GlobalNamespace::SelfEcho::__cordl_internal_get__lastSyncedEchoAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSyncedEchoAmount;
}
constexpr float_t const& GlobalNamespace::SelfEcho::__cordl_internal_get__lastSyncedEchoAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSyncedEchoAmount;
}
constexpr void GlobalNamespace::SelfEcho::__cordl_internal_set__lastSyncedEchoAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSyncedEchoAmount = value;
}
inline void GlobalNamespace::SelfEcho::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::SelfEcho>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SelfEcho>, "<Instance>k__BackingField", ::GlobalNamespace::SelfEcho*>(std::forward<::UnityW<::GlobalNamespace::SelfEcho>>(value));
}
inline ::UnityW<::GlobalNamespace::SelfEcho> GlobalNamespace::SelfEcho::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SelfEcho>, "<Instance>k__BackingField", ::GlobalNamespace::SelfEcho*>();
}
inline void GlobalNamespace::SelfEcho::setStaticF__leftDir(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_leftDir", ::GlobalNamespace::SelfEcho*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SelfEcho::getStaticF__leftDir()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_leftDir", ::GlobalNamespace::SelfEcho*>();
}
inline void GlobalNamespace::SelfEcho::setStaticF__rightDir(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_rightDir", ::GlobalNamespace::SelfEcho*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SelfEcho::getStaticF__rightDir()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_rightDir", ::GlobalNamespace::SelfEcho*>();
}
inline ::UnityW<::GlobalNamespace::SelfEcho> GlobalNamespace::SelfEcho::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SelfEcho>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::set_Instance(::GlobalNamespace::SelfEcho*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::SelfEcho*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::EchoData> GlobalNamespace::SelfEcho::get_EchoAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"get_EchoAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EchoData>>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::set_EchoAmount(::ArrayW<::GlobalNamespace::EchoData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"set_EchoAmount", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::EchoData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SelfEcho::get_EchoOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"get_EchoOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::set_EchoOn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"set_EchoOn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelfEcho::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfEcho::BroadcastForRemoteEcho(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"BroadcastForRemoteEcho", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline ::GlobalNamespace::EchoData GlobalNamespace::SelfEcho::CalculateEchoAmount(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {"CalculateEchoAmount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EchoData>(this, ___internal_method, index);
}
inline void GlobalNamespace::SelfEcho::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfEcho*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelfEcho* GlobalNamespace::SelfEcho::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelfEcho*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelfEcho::SelfEcho()   {
}
