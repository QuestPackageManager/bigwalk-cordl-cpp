#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleFollower.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleFollower_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleFollower.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleFollower::*)()>(&::GlobalNamespace::ParticleFollower::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleFollower*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleFollower.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleFollower::*)()>(&::GlobalNamespace::ParticleFollower::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803daa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleFollower*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleFollower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleFollower::*)()>(&::GlobalNamespace::ParticleFollower::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleFollower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ParticleFollower::__cordl_internal_get_ParticleSys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParticleSys;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ParticleFollower::__cordl_internal_get_ParticleSys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParticleSys;
}
constexpr void GlobalNamespace::ParticleFollower::__cordl_internal_set_ParticleSys(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParticleSys = value;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle>& GlobalNamespace::ParticleFollower::__cordl_internal_get__particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particles;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle> const& GlobalNamespace::ParticleFollower::__cordl_internal_get__particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particles;
}
constexpr void GlobalNamespace::ParticleFollower::__cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____particles = value;
}
inline void GlobalNamespace::ParticleFollower::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleFollower*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleFollower::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleFollower*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleFollower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleFollower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleFollower* GlobalNamespace::ParticleFollower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleFollower*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleFollower::ParticleFollower()   {
}
