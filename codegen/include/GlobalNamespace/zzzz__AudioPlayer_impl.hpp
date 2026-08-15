#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180489af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)(bool)>(&::GlobalNamespace::AudioPlayer::set_Enabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180489b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.get_LastCullingUpdateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::get_LastCullingUpdateFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"get_LastCullingUpdateFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.set_LastCullingUpdateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)(int32_t)>(&::GlobalNamespace::AudioPlayer::set_LastCullingUpdateFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"set_LastCullingUpdateFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.get_AudioEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent* (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::get_AudioEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"get_AudioEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::Awake)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180489480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::OnDestroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180489650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180489750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804896f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::Play)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180489820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::Stop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180489a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180489ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPlayer._Awake_g__RegisterStatic_20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPlayer::*)()>(&::GlobalNamespace::AudioPlayer::_Awake_g__RegisterStatic_20_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180489a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"<Awake>g__RegisterStatic|20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioPlayer::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioPlayer::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::AudioPlayer::__cordl_internal_get_RTPCXProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPCXProvider;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::AudioPlayer::__cordl_internal_get_RTPCXProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPCXProvider;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_RTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RTPCXProvider = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_PlayOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayOnEnable;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_PlayOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayOnEnable;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_PlayOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayOnEnable = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_StopOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopOnDisable;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_StopOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopOnDisable;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_StopOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopOnDisable = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_FollowTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTransform;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_FollowTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTransform;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_FollowTransform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowTransform = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_StopHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopHead;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_StopHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopHead;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_StopHead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopHead = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_CancelTail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancelTail;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_CancelTail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancelTail;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_CancelTail(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancelTail = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_Static()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Static;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_Static() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Static;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_Static(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Static = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get_StopBeforePlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopBeforePlay;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get_StopBeforePlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopBeforePlay;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set_StopBeforePlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopBeforePlay = value;
}
constexpr bool& GlobalNamespace::AudioPlayer::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& GlobalNamespace::AudioPlayer::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr int32_t& GlobalNamespace::AudioPlayer::__cordl_internal_get__LastCullingUpdateFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCullingUpdateFrame_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AudioPlayer::__cordl_internal_get__LastCullingUpdateFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCullingUpdateFrame_k__BackingField;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set__LastCullingUpdateFrame_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastCullingUpdateFrame_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::AudioPlayer::__cordl_internal_get__audioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::AudioPlayer::__cordl_internal_get__audioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEvent;
}
constexpr void GlobalNamespace::AudioPlayer::__cordl_internal_set__audioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioEvent = value;
}
inline bool GlobalNamespace::AudioPlayer::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::AudioPlayer::get_LastCullingUpdateFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"get_LastCullingUpdateFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::set_LastCullingUpdateFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"set_LastCullingUpdateFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::AudioPlayer::get_AudioEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"get_AudioEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPlayer::_Awake_g__RegisterStatic_20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPlayer*>(),
                        {"<Awake>g__RegisterStatic|20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioPlayer* GlobalNamespace::AudioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPlayer::AudioPlayer()   {
}
