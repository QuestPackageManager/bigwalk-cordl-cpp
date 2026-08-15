#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorSound.hpp"
#include "GlobalNamespace/zzzz__AnimatorLoopSound_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorOneshotSound_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorSoundEvent_impl.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorSound_def.hpp"
#include "GlobalNamespace/zzzz__AnimatorLoopSound_def.hpp"
#include "GlobalNamespace/zzzz__AnimatorSoundEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatorSound.OnStateEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorSound::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::AnimatorSound::OnStateEnter)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18046d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                    {::i2c::class_of<::GlobalNamespace::AnimatorSound*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorSound.OnStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorSound::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::AnimatorSound::OnStateUpdate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18046d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                    {::i2c::class_of<::GlobalNamespace::AnimatorSound*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorSound.OnStateExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorSound::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::AnimatorSound::OnStateExit)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18046d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                    {::i2c::class_of<::GlobalNamespace::AnimatorSound*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorSound::*)()>(&::GlobalNamespace::AnimatorSound::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorSound._OnStateEnter_g___clearRef_6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AnimatorLoopSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AnimatorSound::_OnStateEnter_g___clearRef_6_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18046dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                        {"<OnStateEnter>g___clearRef|6_0", {}, {::i2c::type_of<::GlobalNamespace::AnimatorLoopSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatorSound._OnStateUpdate_g___clearRef_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AnimatorSoundEvent*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AnimatorSound::_OnStateUpdate_g___clearRef_7_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f5b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                        {"<OnStateUpdate>g___clearRef|7_0", {}, {::i2c::type_of<::GlobalNamespace::AnimatorSoundEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundsOnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsOnEnter;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*> const& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundsOnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsOnEnter;
}
constexpr void GlobalNamespace::AnimatorSound::__cordl_internal_set_soundsOnEnter(::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundsOnEnter = value;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundsOnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsOnExit;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*> const& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundsOnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsOnExit;
}
constexpr void GlobalNamespace::AnimatorSound::__cordl_internal_set_soundsOnExit(::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundsOnExit = value;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorLoopSound*>& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundsOnLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsOnLoop;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorLoopSound*> const& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundsOnLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundsOnLoop;
}
constexpr void GlobalNamespace::AnimatorSound::__cordl_internal_set_soundsOnLoop(::ArrayW<::GlobalNamespace::AnimatorLoopSound*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundsOnLoop = value;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorSoundEvent*>& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEvents;
}
constexpr ::ArrayW<::GlobalNamespace::AnimatorSoundEvent*> const& GlobalNamespace::AnimatorSound::__cordl_internal_get_soundEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundEvents;
}
constexpr void GlobalNamespace::AnimatorSound::__cordl_internal_set_soundEvents(::ArrayW<::GlobalNamespace::AnimatorSoundEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundEvents = value;
}
constexpr bool& GlobalNamespace::AnimatorSound::__cordl_internal_get_stopAllOnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopAllOnExit;
}
constexpr bool const& GlobalNamespace::AnimatorSound::__cordl_internal_get_stopAllOnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopAllOnExit;
}
constexpr void GlobalNamespace::AnimatorSound::__cordl_internal_set_stopAllOnExit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopAllOnExit = value;
}
constexpr int32_t& GlobalNamespace::AnimatorSound::__cordl_internal_get__loopCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopCount;
}
constexpr int32_t const& GlobalNamespace::AnimatorSound::__cordl_internal_get__loopCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopCount;
}
constexpr void GlobalNamespace::AnimatorSound::__cordl_internal_set__loopCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopCount = value;
}
inline void GlobalNamespace::AnimatorSound::OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimatorSound*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::AnimatorSound::OnStateUpdate(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimatorSound*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::AnimatorSound::OnStateExit(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimatorSound*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::AnimatorSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimatorSound::_OnStateEnter_g___clearRef_6_0(::GlobalNamespace::AnimatorLoopSound*  s, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                        {"<OnStateEnter>g___clearRef|6_0", {}, {::i2c::type_of<::GlobalNamespace::AnimatorLoopSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, c);
}
inline void GlobalNamespace::AnimatorSound::_OnStateUpdate_g___clearRef_7_0(::GlobalNamespace::AnimatorSoundEvent*  s, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorSound*>(),
                        {"<OnStateUpdate>g___clearRef|7_0", {}, {::i2c::type_of<::GlobalNamespace::AnimatorSoundEvent*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, c);
}
inline ::GlobalNamespace::AnimatorSound* GlobalNamespace::AnimatorSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimatorSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatorSound::AnimatorSound()   {
}
