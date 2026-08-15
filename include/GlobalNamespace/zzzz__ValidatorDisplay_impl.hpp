#pragma once
// IWYU pragma private; include "GlobalNamespace/ValidatorDisplay.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ValidatorDisplay_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__ValidatorDisplay_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState::ValidatorDisplay_ValidatorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState::ValidatorDisplay_ValidatorState()   {
}
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState  GlobalNamespace::ValidatorDisplay_ValidatorState::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState  GlobalNamespace::ValidatorDisplay_ValidatorState::Blank{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState  GlobalNamespace::ValidatorDisplay_ValidatorState::Success{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState  GlobalNamespace::ValidatorDisplay_ValidatorState::Failure{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState  GlobalNamespace::ValidatorDisplay_ValidatorState::Thinking{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)()>(&::GlobalNamespace::ValidatorDisplay::Awake)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18041a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay.SetDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)(::GlobalNamespace::ValidatorDisplay_ValidatorState)>(&::GlobalNamespace::ValidatorDisplay::SetDisplay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18041ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"SetDisplay", {}, {::i2c::type_of<::GlobalNamespace::ValidatorDisplay_ValidatorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::ValidatorDisplay::OnPeck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18041ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay.SetDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)(::GlobalNamespace::ValidatorDisplay_ValidatorState, bool)>(&::GlobalNamespace::ValidatorDisplay::SetDisplay)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18041ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"SetDisplay", {}, {::i2c::type_of<::GlobalNamespace::ValidatorDisplay_ValidatorState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay.SetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)(::GlobalNamespace::ValidatorDisplay_ValidatorState)>(&::GlobalNamespace::ValidatorDisplay::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x18041ac40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"SetPropertyBlock", {}, {::i2c::type_of<::GlobalNamespace::ValidatorDisplay_ValidatorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)()>(&::GlobalNamespace::ValidatorDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18041ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValidatorDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValidatorDisplay::*)()>(&::GlobalNamespace::ValidatorDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_screenRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_screenRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenRenderer;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_screenRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenRenderer = value;
}
constexpr int32_t& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_submeshIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIndex;
}
constexpr int32_t const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_submeshIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIndex;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_submeshIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_parentDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentDisplay;
}
constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_parentDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentDisplay;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_parentDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentDisplay = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_blankColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blankColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_blankColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blankColor;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_blankColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blankColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_successColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_successColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successColor;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_successColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_failureColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_failureColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureColor;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_failureColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureColor = value;
}
constexpr bool& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_audioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_audioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioTransform;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_staticSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_staticSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticSound;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_staticSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_correctSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_correctSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___correctSound;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_correctSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___correctSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_incorrectSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incorrectSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_incorrectSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incorrectSound;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_incorrectSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incorrectSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_offSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_offSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offSound;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_offSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_thinkingSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thinkingSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_thinkingSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thinkingSound;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_thinkingSound(::UnityW<::GlobalNamespace::AudioScatterContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thinkingSound = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::ValidatorDisplay::__cordl_internal_get__thinkingEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thinkingEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get__thinkingEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thinkingEvent;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set__thinkingEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thinkingEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::ValidatorDisplay::__cordl_internal_get__staticEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get__staticEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticEvent;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set__staticEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____staticEvent = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ValidatorDisplay::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::ValidatorDisplay_ValidatorState const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_state(::GlobalNamespace::ValidatorDisplay_ValidatorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>*& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>* const& GlobalNamespace::ValidatorDisplay::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::ValidatorDisplay::__cordl_internal_set_onChange(::System::Action_1<::GlobalNamespace::ValidatorDisplay_ValidatorState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline void GlobalNamespace::ValidatorDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ValidatorDisplay::SetDisplay(::GlobalNamespace::ValidatorDisplay_ValidatorState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"SetDisplay", {}, {::i2c::type_of<::GlobalNamespace::ValidatorDisplay_ValidatorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::ValidatorDisplay::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::ValidatorDisplay::SetDisplay(::GlobalNamespace::ValidatorDisplay_ValidatorState  newState, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"SetDisplay", {}, {::i2c::type_of<::GlobalNamespace::ValidatorDisplay_ValidatorState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, forceUpdate);
}
inline void GlobalNamespace::ValidatorDisplay::SetPropertyBlock(::GlobalNamespace::ValidatorDisplay_ValidatorState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"SetPropertyBlock", {}, {::i2c::type_of<::GlobalNamespace::ValidatorDisplay_ValidatorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::ValidatorDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ValidatorDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValidatorDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ValidatorDisplay* GlobalNamespace::ValidatorDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValidatorDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValidatorDisplay::ValidatorDisplay()   {
}
