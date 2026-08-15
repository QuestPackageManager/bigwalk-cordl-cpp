#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimLogic.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimLogic_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "GlobalNamespace/zzzz__AnimLogic_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimLogic_ClipSetting.get_speedWithDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AnimLogic_ClipSetting::*)()>(&::GlobalNamespace::AnimLogic_ClipSetting::get_speedWithDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f8190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic_ClipSetting>(),
                        {"get_speedWithDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::AnimLogic_ClipSetting::get_speedWithDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic_ClipSetting>(),
                        {"get_speedWithDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: Some("{}") }, CppParam { name: "backwards", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "forceReplay", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AnimLogic_ClipSetting::AnimLogic_ClipSetting(::UnityW<::UnityEngine::AnimationClip>  clip, bool  backwards, float_t  speed, int32_t  layer, bool  forceReplay) noexcept  {
this->clip = clip;
this->backwards = backwards;
this->speed = speed;
this->layer = layer;
this->forceReplay = forceReplay;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimLogic_ClipSetting::AnimLogic_ClipSetting()   {
}
// Ctor Parameters [CppParam { name: "clipSettings", ty: "::ArrayW<::GlobalNamespace::AnimLogic_ClipSetting>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AnimLogic_StateSetting::AnimLogic_StateSetting(::ArrayW<::GlobalNamespace::AnimLogic_ClipSetting>  clipSettings) noexcept  {
this->clipSettings = clipSettings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimLogic_StateSetting::AnimLogic_StateSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::AnimLogic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimLogic::*)()>(&::GlobalNamespace::AnimLogic::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f6c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimLogic.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimLogic::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::AnimLogic::Peck)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f6cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimLogic.PlayClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimLogic::*)(::GlobalNamespace::AnimLogic_ClipSetting)>(&::GlobalNamespace::AnimLogic::PlayClip)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1803f6d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"PlayClip", {}, {::i2c::type_of<::GlobalNamespace::AnimLogic_ClipSetting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimLogic.OnClipEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimLogic::*)()>(&::GlobalNamespace::AnimLogic::OnClipEnd)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803f6c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"OnClipEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimLogic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimLogic::*)()>(&::GlobalNamespace::AnimLogic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::AnimLogic::__cordl_internal_get_peckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::AnimLogic::__cordl_internal_get_peckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr void GlobalNamespace::AnimLogic::__cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystem = value;
}
constexpr ::ArrayW<::GlobalNamespace::AnimLogic_StateSetting>& GlobalNamespace::AnimLogic::__cordl_internal_get_stateSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSettings;
}
constexpr ::ArrayW<::GlobalNamespace::AnimLogic_StateSetting> const& GlobalNamespace::AnimLogic::__cordl_internal_get_stateSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSettings;
}
constexpr void GlobalNamespace::AnimLogic::__cordl_internal_set_stateSettings(::ArrayW<::GlobalNamespace::AnimLogic_StateSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateSettings = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::AnimLogic::__cordl_internal_get_animancerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::AnimLogic::__cordl_internal_get_animancerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr void GlobalNamespace::AnimLogic::__cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerComponent = value;
}
constexpr bool& GlobalNamespace::AnimLogic::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::AnimLogic::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::AnimLogic::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr int32_t& GlobalNamespace::AnimLogic::__cordl_internal_get_peckState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckState;
}
constexpr int32_t const& GlobalNamespace::AnimLogic::__cordl_internal_get_peckState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckState;
}
constexpr void GlobalNamespace::AnimLogic::__cordl_internal_set_peckState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckState = value;
}
constexpr int32_t& GlobalNamespace::AnimLogic::__cordl_internal_get_clipState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipState;
}
constexpr int32_t const& GlobalNamespace::AnimLogic::__cordl_internal_get_clipState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipState;
}
constexpr void GlobalNamespace::AnimLogic::__cordl_internal_set_clipState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipState = value;
}
inline void GlobalNamespace::AnimLogic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimLogic::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::AnimLogic::PlayClip(::GlobalNamespace::AnimLogic_ClipSetting  clipSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"PlayClip", {}, {::i2c::type_of<::GlobalNamespace::AnimLogic_ClipSetting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipSetting);
}
inline void GlobalNamespace::AnimLogic::OnClipEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {"OnClipEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimLogic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimLogic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimLogic* GlobalNamespace::AnimLogic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimLogic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimLogic::AnimLogic()   {
}
