#pragma once
// IWYU pragma private; include "HouseHouse/Dream/Dream.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseHouse/Dream/zzzz__Dream_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__CorpseLooks_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "HouseHouse/Dream/zzzz__DreamCameraSet_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::HouseHouse::Dream::Dream.get_activeCameraGuide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::HouseHouse::Dream::Dream::*)()>(&::HouseHouse::Dream::Dream::get_activeCameraGuide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c0fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"get_activeCameraGuide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::Dream.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::Dream::*)()>(&::HouseHouse::Dream::Dream::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803c0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::Dream.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::Dream::*)()>(&::HouseHouse::Dream::Dream::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803c0c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::Dream.PlayDreamSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::Dream::*)(::GlobalNamespace::PlayerCharacter*)>(&::HouseHouse::Dream::Dream::PlayDreamSound)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803c0d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"PlayDreamSound", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::Dream.StopDreamSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::Dream::*)(::GlobalNamespace::PlayerCharacter*)>(&::HouseHouse::Dream::Dream::StopDreamSound)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803c0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"StopDreamSound", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Dream::Dream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::Dream::*)()>(&::HouseHouse::Dream::Dream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HouseHouse::Dream::DreamCameraSet>& HouseHouse::Dream::Dream::__cordl_internal_get_cameraSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraSet;
}
constexpr ::UnityW<::HouseHouse::Dream::DreamCameraSet> const& HouseHouse::Dream::Dream::__cordl_internal_get_cameraSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraSet;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_cameraSet(::UnityW<::HouseHouse::Dream::DreamCameraSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraSet = value;
}
constexpr int32_t& HouseHouse::Dream::Dream::__cordl_internal_get_currentCameraIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCameraIndex;
}
constexpr int32_t const& HouseHouse::Dream::Dream::__cordl_internal_get_currentCameraIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCameraIndex;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_currentCameraIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCameraIndex = value;
}
constexpr float_t& HouseHouse::Dream::Dream::__cordl_internal_get_blinkness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blinkness;
}
constexpr float_t const& HouseHouse::Dream::Dream::__cordl_internal_get_blinkness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blinkness;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_blinkness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blinkness = value;
}
constexpr float_t& HouseHouse::Dream::Dream::__cordl_internal_get_clearness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearness;
}
constexpr float_t const& HouseHouse::Dream::Dream::__cordl_internal_get_clearness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearness;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_clearness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearness = value;
}
constexpr float_t& HouseHouse::Dream::Dream::__cordl_internal_get_lighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lighting;
}
constexpr float_t const& HouseHouse::Dream::Dream::__cordl_internal_get_lighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lighting;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_lighting(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lighting = value;
}
constexpr float_t& HouseHouse::Dream::Dream::__cordl_internal_get_hudAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hudAlpha;
}
constexpr float_t const& HouseHouse::Dream::Dream::__cordl_internal_get_hudAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hudAlpha;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_hudAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hudAlpha = value;
}
constexpr ::UnityW<::GlobalNamespace::CorpseLooks>& HouseHouse::Dream::Dream::__cordl_internal_get_corpseLooks1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpseLooks1;
}
constexpr ::UnityW<::GlobalNamespace::CorpseLooks> const& HouseHouse::Dream::Dream::__cordl_internal_get_corpseLooks1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpseLooks1;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_corpseLooks1(::UnityW<::GlobalNamespace::CorpseLooks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corpseLooks1 = value;
}
constexpr ::UnityW<::GlobalNamespace::CorpseLooks>& HouseHouse::Dream::Dream::__cordl_internal_get_corpseLooks2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpseLooks2;
}
constexpr ::UnityW<::GlobalNamespace::CorpseLooks> const& HouseHouse::Dream::Dream::__cordl_internal_get_corpseLooks2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpseLooks2;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_corpseLooks2(::UnityW<::GlobalNamespace::CorpseLooks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corpseLooks2 = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& HouseHouse::Dream::Dream::__cordl_internal_get_dreamStartSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamStartSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamStartSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamStartSound;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamStartSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamStartSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& HouseHouse::Dream::Dream::__cordl_internal_get_dreamStopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamStopSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamStopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamStopSound;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamStopSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamStopSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbLoop;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamAmbLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamAmbLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& HouseHouse::Dream::Dream::__cordl_internal_get_dreamSpotLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamSpotLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamSpotLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamSpotLoop;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamSpotLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamSpotLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbFriendsLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbFriendsLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbFriendsLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbFriendsLoop;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamAmbFriendsLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamAmbFriendsLoop = value;
}
constexpr bool& HouseHouse::Dream::Dream::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& HouseHouse::Dream::Dream::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::AudioEvent*& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbEvent;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamAmbEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamAmbEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& HouseHouse::Dream::Dream::__cordl_internal_get_dreamSpotEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamSpotEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamSpotEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamSpotEvent;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamSpotEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamSpotEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbFriendsEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbFriendsEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& HouseHouse::Dream::Dream::__cordl_internal_get_dreamAmbFriendsEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamAmbFriendsEvent;
}
constexpr void HouseHouse::Dream::Dream::__cordl_internal_set_dreamAmbFriendsEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamAmbFriendsEvent = value;
}
inline void HouseHouse::Dream::Dream::setStaticF_Instance(::UnityW<::HouseHouse::Dream::Dream>  value)  {
::cordl_internals::setStaticField<::UnityW<::HouseHouse::Dream::Dream>, "Instance", ::HouseHouse::Dream::Dream*>(std::forward<::UnityW<::HouseHouse::Dream::Dream>>(value));
}
inline ::UnityW<::HouseHouse::Dream::Dream> HouseHouse::Dream::Dream::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::HouseHouse::Dream::Dream>, "Instance", ::HouseHouse::Dream::Dream*>();
}
inline ::UnityW<::UnityEngine::Transform> HouseHouse::Dream::Dream::get_activeCameraGuide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"get_activeCameraGuide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void HouseHouse::Dream::Dream::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Dream::Dream::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Dream::Dream::PlayDreamSound(::GlobalNamespace::PlayerCharacter*  pc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"PlayDreamSound", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pc);
}
inline void HouseHouse::Dream::Dream::StopDreamSound(::GlobalNamespace::PlayerCharacter*  pc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {"StopDreamSound", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pc);
}
inline void HouseHouse::Dream::Dream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::Dream*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Dream::Dream* HouseHouse::Dream::Dream::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Dream::Dream*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Dream::Dream::Dream()   {
}
