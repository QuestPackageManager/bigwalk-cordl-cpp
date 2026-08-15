#pragma once
// IWYU pragma private; include "GlobalNamespace/RiverSound.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RiverSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__PolyLine_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RiverSound.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RiverSound::*)()>(&::GlobalNamespace::RiverSound::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)()>(&::GlobalNamespace::RiverSound::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803dd5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)()>(&::GlobalNamespace::RiverSound::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803dd630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)(float_t)>(&::GlobalNamespace::RiverSound::AudioUpdate)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x1803dd0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)(float_t)>(&::GlobalNamespace::RiverSound::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803dceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)()>(&::GlobalNamespace::RiverSound::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)(float_t)>(&::GlobalNamespace::RiverSound::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)(float_t)>(&::GlobalNamespace::RiverSound::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RiverSound::*)()>(&::GlobalNamespace::RiverSound::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803dd6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RiverSound._AudioSlowUpdate_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RiverSound::*)()>(&::GlobalNamespace::RiverSound::_AudioSlowUpdate_b__17_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"<AudioSlowUpdate>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::RiverSound::__cordl_internal_get__asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::RiverSound::__cordl_internal_get__asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asset = value;
}
constexpr ::UnityW<::GlobalNamespace::PolyLine>& GlobalNamespace::RiverSound::__cordl_internal_get__polyline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyline;
}
constexpr ::UnityW<::GlobalNamespace::PolyLine> const& GlobalNamespace::RiverSound::__cordl_internal_get__polyline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyline;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__polyline(::UnityW<::GlobalNamespace::PolyLine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____polyline = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RiverSound::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RiverSound::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
constexpr int32_t& GlobalNamespace::RiverSound::__cordl_internal_get__midPointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____midPointIndex;
}
constexpr int32_t const& GlobalNamespace::RiverSound::__cordl_internal_get__midPointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____midPointIndex;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__midPointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____midPointIndex = value;
}
constexpr float_t& GlobalNamespace::RiverSound::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::RiverSound::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& GlobalNamespace::RiverSound::__cordl_internal_get__lerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpSpeed;
}
constexpr float_t const& GlobalNamespace::RiverSound::__cordl_internal_get__lerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpSpeed;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__lerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpSpeed = value;
}
constexpr bool& GlobalNamespace::RiverSound::__cordl_internal_get__slerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slerp;
}
constexpr bool const& GlobalNamespace::RiverSound::__cordl_internal_get__slerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slerp;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__slerp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slerp = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::RiverSound::__cordl_internal_get__intensities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intensities;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::RiverSound::__cordl_internal_get__intensities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intensities;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__intensities(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intensities = value;
}
constexpr float_t& GlobalNamespace::RiverSound::__cordl_internal_get__maxDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr float_t const& GlobalNamespace::RiverSound::__cordl_internal_get__maxDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__maxDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistanceSquared = value;
}
constexpr float_t& GlobalNamespace::RiverSound::__cordl_internal_get__intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intensity;
}
constexpr float_t const& GlobalNamespace::RiverSound::__cordl_internal_get__intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intensity;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intensity = value;
}
constexpr ::GlobalNamespace::PolyLine_ClosestPoint*& GlobalNamespace::RiverSound::__cordl_internal_get__closest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closest;
}
constexpr ::GlobalNamespace::PolyLine_ClosestPoint* const& GlobalNamespace::RiverSound::__cordl_internal_get__closest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closest;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__closest(::GlobalNamespace::PolyLine_ClosestPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closest = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::RiverSound::__cordl_internal_get__event()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____event;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::RiverSound::__cordl_internal_get__event() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____event;
}
constexpr void GlobalNamespace::RiverSound::__cordl_internal_set__event(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____event = value;
}
inline bool GlobalNamespace::RiverSound::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RiverSound::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RiverSound::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RiverSound::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::RiverSound::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::RiverSound::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RiverSound::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::RiverSound::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::RiverSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::RiverSound::_AudioSlowUpdate_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RiverSound*>(),
                        {"<AudioSlowUpdate>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::RiverSound* GlobalNamespace::RiverSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RiverSound*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::RiverSound::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::RiverSound::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RiverSound::RiverSound()   {
}
