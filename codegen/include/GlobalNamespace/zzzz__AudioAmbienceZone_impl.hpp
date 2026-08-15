#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAmbienceZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioAmbienceZone_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AudioAmbienceZone::*)()>(&::GlobalNamespace::AudioAmbienceZone::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046e3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAmbienceZone::*)()>(&::GlobalNamespace::AudioAmbienceZone::Awake)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18046dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAmbienceZone::*)()>(&::GlobalNamespace::AudioAmbienceZone::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18046e160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAmbienceZone::*)()>(&::GlobalNamespace::AudioAmbienceZone::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18046e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAmbienceZone::*)()>(&::GlobalNamespace::AudioAmbienceZone::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18046e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioAmbienceZone::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AudioAmbienceZone::GetValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18046df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioAmbienceZone::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AudioAmbienceZone::GetX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAmbienceZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAmbienceZone::*)()>(&::GlobalNamespace::AudioAmbienceZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_Sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_Sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sound = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_FalloffMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_FalloffMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffMap;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set_FalloffMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FalloffMap = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_PlayCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_PlayCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayCenter;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set_PlayCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayCenter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_BottomLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_BottomLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomLeft;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set_BottomLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BottomLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_TopRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TopRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_TopRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TopRight;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set_TopRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TopRight = value;
}
constexpr bool& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_DebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMode;
}
constexpr bool const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get_DebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMode;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set_DebugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugMode = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__values(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
constexpr float_t& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__worldWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldWidth;
}
constexpr float_t const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__worldWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldWidth;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__worldWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldWidth = value;
}
constexpr float_t& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__worldHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldHeight;
}
constexpr float_t const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__worldHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldHeight;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__worldHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldHeight = value;
}
constexpr float_t& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__mapWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapWidth;
}
constexpr float_t const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__mapWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapWidth;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__mapWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapWidth = value;
}
constexpr float_t& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__mapHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapHeight;
}
constexpr float_t const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__mapHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapHeight;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__mapHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapHeight = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__ambienceEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ambienceEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__ambienceEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ambienceEvent;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__ambienceEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ambienceEvent = value;
}
constexpr float_t& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__currentVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVal;
}
constexpr float_t const& GlobalNamespace::AudioAmbienceZone::__cordl_internal_get__currentVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVal;
}
constexpr void GlobalNamespace::AudioAmbienceZone::__cordl_internal_set__currentVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentVal = value;
}
inline ::StringW GlobalNamespace::AudioAmbienceZone::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAmbienceZone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAmbienceZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAmbienceZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAmbienceZone::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioAmbienceZone::GetValue(::UnityEngine::Vector3  testPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, testPos);
}
inline bool GlobalNamespace::AudioAmbienceZone::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AudioAmbienceZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAmbienceZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioAmbienceZone* GlobalNamespace::AudioAmbienceZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioAmbienceZone*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::AudioAmbienceZone::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::AudioAmbienceZone::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioAmbienceZone::AudioAmbienceZone()   {
}
