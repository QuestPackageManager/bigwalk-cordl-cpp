#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectParticle.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectParticle_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectParticle_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectParticle_ParticleSetting::PeckEffectParticle_ParticleSetting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectParticle_ParticleSetting::PeckEffectParticle_ParticleSetting()   {
}
constexpr ::GlobalNamespace::PeckEffectParticle_ParticleSetting  GlobalNamespace::PeckEffectParticle_ParticleSetting::Ignore{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectParticle_ParticleSetting  GlobalNamespace::PeckEffectParticle_ParticleSetting::Play{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckEffectParticle_ParticleSetting  GlobalNamespace::PeckEffectParticle_ParticleSetting::Stop{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticle::*)()>(&::GlobalNamespace::PeckEffectParticle::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18044af90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticle.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticle::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckEffectParticle::Peck)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18044b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticle::*)()>(&::GlobalNamespace::PeckEffectParticle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticle._Peck_g___clearRef_13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PeckEffectParticle*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PeckEffectParticle::_Peck_g___clearRef_13_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18031db50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {"<Peck>g___clearRef|13_0", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectParticle*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_targetParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_targetParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParticleSystem;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_targetParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetParticleSystem = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting>& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting> const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_settings(::ArrayW<::GlobalNamespace::PeckEffectParticle_ParticleSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr bool& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_emitOneBeforePlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitOneBeforePlaying;
}
constexpr bool const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_emitOneBeforePlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitOneBeforePlaying;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_emitOneBeforePlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitOneBeforePlaying = value;
}
constexpr bool& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_unparentAndLeave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unparentAndLeave;
}
constexpr bool const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_unparentAndLeave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unparentAndLeave;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_unparentAndLeave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unparentAndLeave = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_sound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_customAudioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customAudioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_customAudioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customAudioTransform;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_customAudioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customAudioTransform = value;
}
constexpr bool& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_isLooping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLooping;
}
constexpr bool const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_isLooping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLooping;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_isLooping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLooping = value;
}
constexpr bool& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_originalParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get_originalParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalParent;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set_originalParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalParent = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::PeckEffectParticle::__cordl_internal_get__asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::PeckEffectParticle::__cordl_internal_get__asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr void GlobalNamespace::PeckEffectParticle::__cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asc = value;
}
inline void GlobalNamespace::PeckEffectParticle::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectParticle::Peck(::GlobalNamespace::PeckContext  context, ::GlobalNamespace::TrackedPeckState*  peckSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, peckSystem);
}
inline void GlobalNamespace::PeckEffectParticle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectParticle::_Peck_g___clearRef_13_0(::GlobalNamespace::PeckEffectParticle*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticle*>(),
                        {"<Peck>g___clearRef|13_0", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectParticle*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::PeckEffectParticle* GlobalNamespace::PeckEffectParticle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectParticle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectParticle::PeckEffectParticle()   {
}
