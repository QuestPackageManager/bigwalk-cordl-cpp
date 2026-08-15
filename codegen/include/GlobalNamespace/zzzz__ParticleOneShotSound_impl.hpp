#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleOneShotSound.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleOneShotSound_def.hpp"
#include "GlobalNamespace/zzzz__ParticleOneShotSound_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType::ParticleOneShotSound_OneShotType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType::ParticleOneShotSound_OneShotType()   {
}
constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType  GlobalNamespace::ParticleOneShotSound_OneShotType::OnZero{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType  GlobalNamespace::ParticleOneShotSound_OneShotType::OnAny{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::ParticleOneShotSound.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleOneShotSound::*)()>(&::GlobalNamespace::ParticleOneShotSound::Update)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1803daba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleOneShotSound*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleOneShotSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleOneShotSound::*)()>(&::GlobalNamespace::ParticleOneShotSound::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803db150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleOneShotSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_ParticleSys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParticleSys;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_ParticleSys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParticleSys;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set_ParticleSys(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParticleSys = value;
}
constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_Timing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timing;
}
constexpr ::GlobalNamespace::ParticleOneShotSound_OneShotType const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_Timing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timing;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set_Timing(::GlobalNamespace::ParticleOneShotSound_OneShotType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timing = value;
}
constexpr bool& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_DisableAfterPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableAfterPlay;
}
constexpr bool const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_DisableAfterPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableAfterPlay;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set_DisableAfterPlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableAfterPlay = value;
}
constexpr bool& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_DelayByDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayByDistance;
}
constexpr bool const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_DelayByDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayByDistance;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set_DelayByDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayByDistance = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_Assets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Assets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>> const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_Assets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Assets;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set_Assets(::ArrayW<::UnityW<::GlobalNamespace::AudioAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Assets = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_BehavioursToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehavioursToDisable;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get_BehavioursToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BehavioursToDisable;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set_BehavioursToDisable(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BehavioursToDisable = value;
}
constexpr bool& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle>& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get__particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particles;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle> const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get__particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particles;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____particles = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get__lastPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ParticleOneShotSound::__cordl_internal_get__lastPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPos;
}
constexpr void GlobalNamespace::ParticleOneShotSound::__cordl_internal_set__lastPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPos = value;
}
inline void GlobalNamespace::ParticleOneShotSound::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleOneShotSound*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleOneShotSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleOneShotSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleOneShotSound* GlobalNamespace::ParticleOneShotSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleOneShotSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleOneShotSound::ParticleOneShotSound()   {
}
