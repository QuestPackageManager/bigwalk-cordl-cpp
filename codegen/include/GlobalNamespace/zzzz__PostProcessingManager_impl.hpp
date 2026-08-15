#pragma once
// IWYU pragma private; include "GlobalNamespace/PostProcessingManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PostProcessingManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PostProcessingManager* (*)()>(&::GlobalNamespace::PostProcessingManager::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180428240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetSleepiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::PostProcessingManager::SetSleepiness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180428100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetSleepiness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetLobbyVision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PostProcessingManager::SetLobbyVision)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180428090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetLobbyVision", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetNightVision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PostProcessingManager::SetNightVision)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetNightVision", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetDazed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PostProcessingManager::SetDazed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetDazed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetBlindfold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PostProcessingManager::SetBlindfold)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180427f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetBlindfold", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetXray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PostProcessingManager::SetXray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804281d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetXray", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetSpeechless
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PostProcessingManager::SetSpeechless)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180428160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetSpeechless", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.ToggleMotionSicknessVignette
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PostProcessingManager::ToggleMotionSicknessVignette)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"ToggleMotionSicknessVignette", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetDreamness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::PostProcessingManager::SetDreamness)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180428050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetDreamness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetDreamClearness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::PostProcessingManager::SetDreamClearness)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180428010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetDreamClearness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager.SetBlinkness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::PostProcessingManager::SetBlinkness)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180427fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetBlinkness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostProcessingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostProcessingManager::*)()>(&::GlobalNamespace::PostProcessingManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_basePPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basePPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_basePPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basePPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_basePPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___basePPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_sleepingPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepingPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_sleepingPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepingPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_sleepingPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepingPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_dreamingPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamingPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_dreamingPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamingPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_dreamingPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamingPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_dreamClearnessPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamClearnessPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_dreamClearnessPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamClearnessPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_dreamClearnessPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamClearnessPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_blinkingPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blinkingPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_blinkingPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blinkingPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_blinkingPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blinkingPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_blindfoldPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blindfoldPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_blindfoldPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blindfoldPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_blindfoldPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blindfoldPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_xRayPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xRayPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_xRayPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xRayPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_xRayPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xRayPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_speechlessPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speechlessPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_speechlessPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speechlessPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_speechlessPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speechlessPPVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& GlobalNamespace::PostProcessingManager::__cordl_internal_get_lobbyVisionPPVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyVisionPPVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& GlobalNamespace::PostProcessingManager::__cordl_internal_get_lobbyVisionPPVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyVisionPPVolume;
}
constexpr void GlobalNamespace::PostProcessingManager::__cordl_internal_set_lobbyVisionPPVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyVisionPPVolume = value;
}
inline ::GlobalNamespace::PostProcessingManager* GlobalNamespace::PostProcessingManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PostProcessingManager*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PostProcessingManager::SetSleepiness(float_t  sleepiness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetSleepiness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sleepiness);
}
inline void GlobalNamespace::PostProcessingManager::SetLobbyVision(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetLobbyVision", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::PostProcessingManager::SetNightVision(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetNightVision", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::PostProcessingManager::SetDazed(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetDazed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::PostProcessingManager::SetBlindfold(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetBlindfold", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::PostProcessingManager::SetXray(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetXray", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::PostProcessingManager::SetSpeechless(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetSpeechless", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::PostProcessingManager::ToggleMotionSicknessVignette()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"ToggleMotionSicknessVignette", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PostProcessingManager::SetDreamness(float_t  dreamness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetDreamness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dreamness);
}
inline void GlobalNamespace::PostProcessingManager::SetDreamClearness(float_t  dreamClearness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetDreamClearness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dreamClearness);
}
inline void GlobalNamespace::PostProcessingManager::SetBlinkness(float_t  blinkness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {"SetBlinkness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blinkness);
}
inline void GlobalNamespace::PostProcessingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PostProcessingManager* GlobalNamespace::PostProcessingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PostProcessingManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PostProcessingManager::PostProcessingManager()   {
}
