#pragma once
// IWYU pragma private; include "Dissonance/PlaybackPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__PlaybackPool_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlaybackInternal_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlayback_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Datastructures/zzzz__Pool_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Dissonance::PlaybackPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlaybackPool::*)(::Dissonance::Audio::Playback::IPriorityManager*, ::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::PlaybackPool::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805cd080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IPriorityManager*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlaybackPool.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlaybackPool::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::Dissonance::PlaybackPool::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cd010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"Start", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlaybackPool.CreatePlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal* (::Dissonance::PlaybackPool::*)()>(&::Dissonance::PlaybackPool::CreatePlayback)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805ccc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"CreatePlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlaybackPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal* (::Dissonance::PlaybackPool::*)(::StringW)>(&::Dissonance::PlaybackPool::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805ccdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlaybackPool.Put
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlaybackPool::*)(::Dissonance::Audio::Playback::IVoicePlayback*)>(&::Dissonance::PlaybackPool::Put)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805cced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"Put", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVoicePlayback*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>*& Dissonance::PlaybackPool::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>* const& Dissonance::PlaybackPool::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void Dissonance::PlaybackPool::__cordl_internal_set__pool(::Dissonance::Datastructures::Pool_1<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
constexpr ::Dissonance::Audio::Playback::IPriorityManager*& Dissonance::PlaybackPool::__cordl_internal_get__priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priority;
}
constexpr ::Dissonance::Audio::Playback::IPriorityManager* const& Dissonance::PlaybackPool::__cordl_internal_get__priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priority;
}
constexpr void Dissonance::PlaybackPool::__cordl_internal_set__priority(::Dissonance::Audio::Playback::IPriorityManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____priority = value;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& Dissonance::PlaybackPool::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& Dissonance::PlaybackPool::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void Dissonance::PlaybackPool::__cordl_internal_set__volume(::Dissonance::Audio::Playback::IVolumeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Dissonance::PlaybackPool::__cordl_internal_get__prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Dissonance::PlaybackPool::__cordl_internal_get__prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr void Dissonance::PlaybackPool::__cordl_internal_set__prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Dissonance::PlaybackPool::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Dissonance::PlaybackPool::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Dissonance::PlaybackPool::__cordl_internal_set__parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
inline void Dissonance::PlaybackPool::_ctor(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IPriorityManager*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority, volume);
}
inline void Dissonance::PlaybackPool::Start(::UnityEngine::GameObject*  playbackPrefab, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"Start", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playbackPrefab, transform);
}
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Dissonance::PlaybackPool::CreatePlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"CreatePlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Dissonance::PlaybackPool::Get(::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(this, ___internal_method, playerId);
}
inline void Dissonance::PlaybackPool::Put(::Dissonance::Audio::Playback::IVoicePlayback*  playback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlaybackPool*>(),
                        {"Put", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVoicePlayback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playback);
}
inline ::Dissonance::PlaybackPool* Dissonance::PlaybackPool::New_ctor(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::PlaybackPool*>(priority, volume));
}
// Ctor Parameters []
constexpr ::Dissonance::PlaybackPool::PlaybackPool()   {
}
