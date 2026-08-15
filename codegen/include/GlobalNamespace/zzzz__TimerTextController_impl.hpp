#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerTextController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimerTextController_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTimerNetworked_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimerTextController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerTextController::*)()>(&::GlobalNamespace::TimerTextController::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803f2180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerTextController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerTextController::*)()>(&::GlobalNamespace::TimerTextController::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803f20c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerTextController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerTextController::*)()>(&::GlobalNamespace::TimerTextController::Update)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803f23d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerTextController.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerTextController::*)()>(&::GlobalNamespace::TimerTextController::OnStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f2340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerTextController.OnFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerTextController::*)()>(&::GlobalNamespace::TimerTextController::OnFinish)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f22b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerTextController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerTextController::*)()>(&::GlobalNamespace::TimerTextController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>& GlobalNamespace::TimerTextController::__cordl_internal_get_peckEffectTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffectTimer;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked> const& GlobalNamespace::TimerTextController::__cordl_internal_get_peckEffectTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffectTimer;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_peckEffectTimer(::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckEffectTimer = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::TimerTextController::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::TimerTextController::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TimerTextController::__cordl_internal_get_StartSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TimerTextController::__cordl_internal_get_StartSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartSound;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_StartSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TimerTextController::__cordl_internal_get_StopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TimerTextController::__cordl_internal_get_StopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopSound;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_StopSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TimerTextController::__cordl_internal_get_RunSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TimerTextController::__cordl_internal_get_RunSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunSound;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_RunSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunSound = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TimerTextController::__cordl_internal_get_AudioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TimerTextController::__cordl_internal_get_AudioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransform;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_AudioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioTransform = value;
}
constexpr int32_t& GlobalNamespace::TimerTextController::__cordl_internal_get_displayedSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedSeconds;
}
constexpr int32_t const& GlobalNamespace::TimerTextController::__cordl_internal_get_displayedSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedSeconds;
}
constexpr void GlobalNamespace::TimerTextController::__cordl_internal_set_displayedSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayedSeconds = value;
}
inline void GlobalNamespace::TimerTextController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerTextController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerTextController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerTextController::OnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerTextController::OnFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {"OnFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerTextController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerTextController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimerTextController* GlobalNamespace::TimerTextController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimerTextController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimerTextController::TimerTextController()   {
}
