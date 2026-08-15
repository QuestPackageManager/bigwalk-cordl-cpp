#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSoundBasic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CollisionSoundBasic_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CollisionSoundBasic::*)()>(&::GlobalNamespace::CollisionSoundBasic::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)()>(&::GlobalNamespace::CollisionSoundBasic::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18032cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)()>(&::GlobalNamespace::CollisionSoundBasic::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)(float_t)>(&::GlobalNamespace::CollisionSoundBasic::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)(float_t)>(&::GlobalNamespace::CollisionSoundBasic::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)(float_t)>(&::GlobalNamespace::CollisionSoundBasic::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)(float_t)>(&::GlobalNamespace::CollisionSoundBasic::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18032c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CollisionSoundBasic::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18032cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic.CalculateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)()>(&::GlobalNamespace::CollisionSoundBasic::CalculateDistance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18032ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"CalculateDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSoundBasic::*)()>(&::GlobalNamespace::CollisionSoundBasic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSoundBasic._OnCollisionEnter_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CollisionSoundBasic::*)()>(&::GlobalNamespace::CollisionSoundBasic::_OnCollisionEnter_b__14_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18032cca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"<OnCollisionEnter>b__14_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get_Rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get_Rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rb;
}
constexpr void GlobalNamespace::CollisionSoundBasic::__cordl_internal_set_Rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rb = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get_Sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get_Sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr void GlobalNamespace::CollisionSoundBasic::__cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sound = value;
}
constexpr bool& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get_DebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMode;
}
constexpr bool const& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get_DebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMode;
}
constexpr void GlobalNamespace::CollisionSoundBasic::__cordl_internal_set_DebugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugMode = value;
}
constexpr bool& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get__tooFar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooFar;
}
constexpr bool const& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get__tooFar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooFar;
}
constexpr void GlobalNamespace::CollisionSoundBasic::__cordl_internal_set__tooFar(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tooFar = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get__audioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::CollisionSoundBasic::__cordl_internal_get__audioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEvent;
}
constexpr void GlobalNamespace::CollisionSoundBasic::__cordl_internal_set__audioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioEvent = value;
}
inline bool GlobalNamespace::CollisionSoundBasic::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundBasic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundBasic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundBasic::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSoundBasic::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSoundBasic::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSoundBasic::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSoundBasic::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CollisionSoundBasic::CalculateDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"CalculateDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSoundBasic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::CollisionSoundBasic::_OnCollisionEnter_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSoundBasic*>(),
                        {"<OnCollisionEnter>b__14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::CollisionSoundBasic* GlobalNamespace::CollisionSoundBasic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CollisionSoundBasic*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::CollisionSoundBasic::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::CollisionSoundBasic::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionSoundBasic::CollisionSoundBasic()   {
}
