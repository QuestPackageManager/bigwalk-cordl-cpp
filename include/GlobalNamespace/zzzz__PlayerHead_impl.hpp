#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHead.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHead_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHead.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHead::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerHead::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18034ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHead.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHead::*)()>(&::GlobalNamespace::PlayerHead::Update)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x18034f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHead.SetHeadStateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHead::*)()>(&::GlobalNamespace::PlayerHead::SetHeadStateLocal)> {
  constexpr static std::size_t size = 0xd80;
  constexpr static std::size_t addrs = 0x18034ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"SetHeadStateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHead.PlayTelescopeMoveSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHead::*)(::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::PlayerHead::PlayTelescopeMoveSound)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18034ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"PlayTelescopeMoveSound", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHead.StopTelescopeMoveSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHead::*)()>(&::GlobalNamespace::PlayerHead::StopTelescopeMoveSound)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18034f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"StopTelescopeMoveSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHead._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHead::*)()>(&::GlobalNamespace::PlayerHead::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034fdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHead._PlayTelescopeMoveSound_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerHead::*)()>(&::GlobalNamespace::PlayerHead::_PlayTelescopeMoveSound_b__25_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"<PlayTelescopeMoveSound>b__25_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_limitLowerCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitLowerCorners;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_limitLowerCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitLowerCorners;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_limitLowerCorners(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitLowerCorners = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_smoothMouseMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothMouseMovement;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_smoothMouseMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothMouseMovement;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_smoothMouseMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothMouseMovement = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_smoothStickMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothStickMovement;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_smoothStickMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothStickMovement;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_smoothStickMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothStickMovement = value;
}
constexpr int32_t& GlobalNamespace::PlayerHead::__cordl_internal_get_mouseSmoothingFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseSmoothingFrames;
}
constexpr int32_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_mouseSmoothingFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseSmoothingFrames;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_mouseSmoothingFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouseSmoothingFrames = value;
}
constexpr int32_t& GlobalNamespace::PlayerHead::__cordl_internal_get_stickSmoothingFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickSmoothingFrames;
}
constexpr int32_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_stickSmoothingFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickSmoothingFrames;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_stickSmoothingFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickSmoothingFrames = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_logRawMouseInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logRawMouseInput;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_logRawMouseInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logRawMouseInput;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_logRawMouseInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logRawMouseInput = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_bypassUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassUpdate;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_bypassUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassUpdate;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_bypassUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassUpdate = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerHead::__cordl_internal_get_pc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerHead::__cordl_internal_get_pc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerHead::__cordl_internal_get_headState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headState;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerHead::__cordl_internal_get_headState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headState;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_headState(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headState = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerHead::__cordl_internal_get_lastSentHeadState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSentHeadState;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerHead::__cordl_internal_get_lastSentHeadState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSentHeadState;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_lastSentHeadState(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSentHeadState = value;
}
constexpr float_t& GlobalNamespace::PlayerHead::__cordl_internal_get_timeAtLastHeadSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastHeadSync;
}
constexpr float_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_timeAtLastHeadSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastHeadSync;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_timeAtLastHeadSync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtLastHeadSync = value;
}
constexpr float_t& GlobalNamespace::PlayerHead::__cordl_internal_get_runningTotalLookSpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runningTotalLookSpin;
}
constexpr float_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_runningTotalLookSpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runningTotalLookSpin;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_runningTotalLookSpin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runningTotalLookSpin = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::PlayerHead::__cordl_internal_get_mouseSpinBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseSpinBuffer;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::PlayerHead::__cordl_internal_get_mouseSpinBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseSpinBuffer;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_mouseSpinBuffer(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouseSpinBuffer = value;
}
constexpr int32_t& GlobalNamespace::PlayerHead::__cordl_internal_get_mouseSpinBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseSpinBufferIndex;
}
constexpr int32_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_mouseSpinBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouseSpinBufferIndex;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_mouseSpinBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouseSpinBufferIndex = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::PlayerHead::__cordl_internal_get_stickSpinBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickSpinBuffer;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::PlayerHead::__cordl_internal_get_stickSpinBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickSpinBuffer;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_stickSpinBuffer(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickSpinBuffer = value;
}
constexpr int32_t& GlobalNamespace::PlayerHead::__cordl_internal_get_stickSpinBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickSpinBufferIndex;
}
constexpr int32_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_stickSpinBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickSpinBufferIndex;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_stickSpinBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickSpinBufferIndex = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_increasedNetworkAccuracy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___increasedNetworkAccuracy;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_increasedNetworkAccuracy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___increasedNetworkAccuracy;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_increasedNetworkAccuracy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___increasedNetworkAccuracy = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerHead::__cordl_internal_get_telescopeMoveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telescopeMoveSound;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerHead::__cordl_internal_get_telescopeMoveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telescopeMoveSound;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_telescopeMoveSound(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___telescopeMoveSound = value;
}
constexpr float_t& GlobalNamespace::PlayerHead::__cordl_internal_get_telescopeMoveSoundSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telescopeMoveSoundSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerHead::__cordl_internal_get_telescopeMoveSoundSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telescopeMoveSoundSpeed;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_telescopeMoveSoundSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___telescopeMoveSoundSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerHead::__cordl_internal_get_cameraUprighter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraUprighter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerHead::__cordl_internal_get_cameraUprighter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraUprighter;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_cameraUprighter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraUprighter = value;
}
constexpr bool& GlobalNamespace::PlayerHead::__cordl_internal_get_applyPlatformRotationToLookSpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPlatformRotationToLookSpin;
}
constexpr bool const& GlobalNamespace::PlayerHead::__cordl_internal_get_applyPlatformRotationToLookSpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPlatformRotationToLookSpin;
}
constexpr void GlobalNamespace::PlayerHead::__cordl_internal_set_applyPlatformRotationToLookSpin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyPlatformRotationToLookSpin = value;
}
inline void GlobalNamespace::PlayerHead::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerHead::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHead::SetHeadStateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"SetHeadStateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHead::PlayTelescopeMoveSound(::GlobalNamespace::AudioAsset*  sound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"PlayTelescopeMoveSound", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sound);
}
inline void GlobalNamespace::PlayerHead::StopTelescopeMoveSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"StopTelescopeMoveSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHead::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerHead::_PlayTelescopeMoveSound_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerHead*>(),
                        {"<PlayTelescopeMoveSound>b__25_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHead* GlobalNamespace::PlayerHead::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHead*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHead::PlayerHead()   {
}
