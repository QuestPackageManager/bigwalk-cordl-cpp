#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectParticleNetworked.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectParticleNetworked_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectParticleNetworked_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting::PeckEffectParticleNetworked_ParticleSetting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting::PeckEffectParticleNetworked_ParticleSetting()   {
}
constexpr ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting  GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting::Ignore{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting  GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting::Play{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticleNetworked::*)()>(&::GlobalNamespace::PeckEffectParticleNetworked::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18044a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticleNetworked::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectParticleNetworked::Peck)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18044ab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked.RpcFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticleNetworked::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::PeckEffectParticleNetworked::RpcFire)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18044ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"RpcFire", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticleNetworked::*)()>(&::GlobalNamespace::PeckEffectParticleNetworked::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticleNetworked::*)()>(&::GlobalNamespace::PeckEffectParticleNetworked::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked.UserCode_RpcFire__Vector3__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectParticleNetworked::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::PeckEffectParticleNetworked::UserCode_RpcFire__Vector3__Quaternion)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18044ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"UserCode_RpcFire__Vector3__Quaternion", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectParticleNetworked.InvokeUserCode_RpcFire__Vector3__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PeckEffectParticleNetworked::InvokeUserCode_RpcFire__Vector3__Quaternion)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18044a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"InvokeUserCode_RpcFire__Vector3__Quaternion", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_targetParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_targetParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetParticleSystem;
}
constexpr void GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_set_targetParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetParticleSystem = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_guideTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guideTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_guideTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guideTransform;
}
constexpr void GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_set_guideTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guideTransform = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting>& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting> const& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_set_settings(::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr bool& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_emitOneBeforePlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitOneBeforePlaying;
}
constexpr bool const& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_emitOneBeforePlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitOneBeforePlaying;
}
constexpr void GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_set_emitOneBeforePlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitOneBeforePlaying = value;
}
constexpr bool& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectParticleNetworked::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectParticleNetworked::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectParticleNetworked::Peck(::GlobalNamespace::PeckContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::PeckEffectParticleNetworked::RpcFire(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"RpcFire", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void GlobalNamespace::PeckEffectParticleNetworked::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectParticleNetworked::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectParticleNetworked::UserCode_RpcFire__Vector3__Quaternion(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"UserCode_RpcFire__Vector3__Quaternion", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void GlobalNamespace::PeckEffectParticleNetworked::InvokeUserCode_RpcFire__Vector3__Quaternion(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectParticleNetworked*>(),
                        {"InvokeUserCode_RpcFire__Vector3__Quaternion", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline ::GlobalNamespace::PeckEffectParticleNetworked* GlobalNamespace::PeckEffectParticleNetworked::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectParticleNetworked*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectParticleNetworked::PeckEffectParticleNetworked()   {
}
