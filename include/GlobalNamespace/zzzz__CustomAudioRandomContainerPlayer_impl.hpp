#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomAudioRandomContainerPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomAudioRandomContainerPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioRandomContainerPlayer::*)()>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803324a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioRandomContainerPlayer::*)()>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180332490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioRandomContainerPlayer::*)()>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::Play)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1803324b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioRandomContainerPlayer::*)()>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::Stop)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180332690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer.GetCueDeterministic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomAudioRandomContainerPlayer::*)(::GlobalNamespace::AudioRandomContainer*)>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::GetCueDeterministic)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180332440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"GetCueDeterministic", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioRandomContainerPlayer::*)()>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803327d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioRandomContainerPlayer._Play_g___clearRef_9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CustomAudioRandomContainerPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::CustomAudioRandomContainerPlayer::_Play_g___clearRef_9_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180332750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"<Play>g___clearRef|9_0", {}, {::i2c::type_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Container;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Container;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set_Container(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Container = value;
}
constexpr bool& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_PlayOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayOnEnable;
}
constexpr bool const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_PlayOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayOnEnable;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set_PlayOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayOnEnable = value;
}
constexpr bool& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_StopOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopOnDisable;
}
constexpr bool const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_StopOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopOnDisable;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set_StopOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopOnDisable = value;
}
constexpr bool& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_FollowTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTransform;
}
constexpr bool const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_FollowTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowTransform;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set_FollowTransform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowTransform = value;
}
constexpr bool& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_StopBeforePlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopBeforePlay;
}
constexpr bool const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_StopBeforePlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopBeforePlay;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set_StopBeforePlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopBeforePlay = value;
}
constexpr ::UnityW<::Mirror::NetworkBehaviour>& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_DeterministicSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeterministicSource;
}
constexpr ::UnityW<::Mirror::NetworkBehaviour> const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get_DeterministicSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeterministicSource;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set_DeterministicSource(::UnityW<::Mirror::NetworkBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeterministicSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get__ascList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_get__ascList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ascList;
}
constexpr void GlobalNamespace::CustomAudioRandomContainerPlayer::__cordl_internal_set__ascList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ascList = value;
}
inline void GlobalNamespace::CustomAudioRandomContainerPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomAudioRandomContainerPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomAudioRandomContainerPlayer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomAudioRandomContainerPlayer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomAudioRandomContainerPlayer::GetCueDeterministic(::GlobalNamespace::AudioRandomContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"GetCueDeterministic", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline void GlobalNamespace::CustomAudioRandomContainerPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomAudioRandomContainerPlayer::_Play_g___clearRef_9_0(::GlobalNamespace::CustomAudioRandomContainerPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(),
                        {"<Play>g___clearRef|9_0", {}, {::i2c::type_of<::GlobalNamespace::CustomAudioRandomContainerPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::CustomAudioRandomContainerPlayer* GlobalNamespace::CustomAudioRandomContainerPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomAudioRandomContainerPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomAudioRandomContainerPlayer::CustomAudioRandomContainerPlayer()   {
}
