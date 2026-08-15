#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimMoment.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimMoment_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "GlobalNamespace/zzzz__AnimancerFrameHelper_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimMoment.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)()>(&::GlobalNamespace::AnimMoment::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimMoment.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)()>(&::GlobalNamespace::AnimMoment::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f7660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimMoment.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)()>(&::GlobalNamespace::AnimMoment::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803f7160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimMoment.OnFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)()>(&::GlobalNamespace::AnimMoment::OnFinish)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803f7250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"OnFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimMoment.PauseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)()>(&::GlobalNamespace::AnimMoment::PauseState)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803f73c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"PauseState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimMoment.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::AnimMoment::Peck)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803f74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimMoment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimMoment::*)()>(&::GlobalNamespace::AnimMoment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f7670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::AnimMoment::__cordl_internal_get_peckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::AnimMoment::__cordl_internal_get_peckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::AnimMoment::__cordl_internal_get_onClipFinish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClipFinish;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::AnimMoment::__cordl_internal_get_onClipFinish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClipFinish;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_onClipFinish(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClipFinish = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::AnimMoment::__cordl_internal_get_animancerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::AnimMoment::__cordl_internal_get_animancerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerComponent = value;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& GlobalNamespace::AnimMoment::__cordl_internal_get_animancerFrameHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& GlobalNamespace::AnimMoment::__cordl_internal_get_animancerFrameHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerFrameHelper = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::AnimMoment::__cordl_internal_get_mainClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::AnimMoment::__cordl_internal_get_mainClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainClip;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_mainClip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainClip = value;
}
constexpr int32_t& GlobalNamespace::AnimMoment::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr int32_t const& GlobalNamespace::AnimMoment::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& GlobalNamespace::AnimMoment::__cordl_internal_get_animationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr float_t const& GlobalNamespace::AnimMoment::__cordl_internal_get_animationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_animationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSpeed = value;
}
constexpr bool& GlobalNamespace::AnimMoment::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::AnimMoment::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::AnimMoment::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::AnimMoment::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::AnimMoment::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::AnimMoment::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimMoment::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimMoment::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimMoment::OnFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"OnFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimMoment::PauseState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"PauseState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimMoment::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::AnimMoment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimMoment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimMoment* GlobalNamespace::AnimMoment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimMoment*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimMoment::AnimMoment()   {
}
