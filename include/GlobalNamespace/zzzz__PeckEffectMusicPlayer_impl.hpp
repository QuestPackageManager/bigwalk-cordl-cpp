#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectMusicPlayer.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_impl.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectMusicPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMusicPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMusicPlayer::*)()>(&::GlobalNamespace::PeckEffectMusicPlayer::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044a570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMusicPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMusicPlayer.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMusicPlayer::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectMusicPlayer::OnPeck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18044a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMusicPlayer*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectMusicPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectMusicPlayer::*)()>(&::GlobalNamespace::PeckEffectMusicPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMusicPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_set_targets(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targets = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>& GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_get_musicGroupsPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroupsPerState;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>> const& GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_get_musicGroupsPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroupsPerState;
}
constexpr void GlobalNamespace::PeckEffectMusicPlayer::__cordl_internal_set_musicGroupsPerState(::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicGroupsPerState = value;
}
inline void GlobalNamespace::PeckEffectMusicPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMusicPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectMusicPlayer::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMusicPlayer*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectMusicPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectMusicPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectMusicPlayer* GlobalNamespace::PeckEffectMusicPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectMusicPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectMusicPlayer::PeckEffectMusicPlayer()   {
}
