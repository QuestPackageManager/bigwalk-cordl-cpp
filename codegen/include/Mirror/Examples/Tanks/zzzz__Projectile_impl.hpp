#pragma once
// IWYU pragma private; include "Mirror/Examples/Tanks/Projectile.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/Tanks/zzzz__Projectile_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Tanks::Projectile.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Projectile::*)()>(&::Mirror::Examples::Tanks::Projectile::OnStartServer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181562490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                    {::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Projectile.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Projectile::*)()>(&::Mirror::Examples::Tanks::Projectile::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181562540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Projectile.DestroySelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Projectile::*)()>(&::Mirror::Examples::Tanks::Projectile::DestroySelf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181562430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"DestroySelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Projectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Projectile::*)(::UnityEngine::Collider*)>(&::Mirror::Examples::Tanks::Projectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815624b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Projectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Projectile::*)()>(&::Mirror::Examples::Tanks::Projectile::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815625d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::Projectile.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::Projectile::*)()>(&::Mirror::Examples::Tanks::Projectile::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Mirror::Examples::Tanks::Projectile::__cordl_internal_get_destroyAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyAfter;
}
constexpr float_t const& Mirror::Examples::Tanks::Projectile::__cordl_internal_get_destroyAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyAfter;
}
constexpr void Mirror::Examples::Tanks::Projectile::__cordl_internal_set_destroyAfter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyAfter = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Mirror::Examples::Tanks::Projectile::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Mirror::Examples::Tanks::Projectile::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void Mirror::Examples::Tanks::Projectile::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr float_t& Mirror::Examples::Tanks::Projectile::__cordl_internal_get_force()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force;
}
constexpr float_t const& Mirror::Examples::Tanks::Projectile::__cordl_internal_get_force() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force;
}
constexpr void Mirror::Examples::Tanks::Projectile::__cordl_internal_set_force(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___force = value;
}
inline void Mirror::Examples::Tanks::Projectile::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Projectile::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Projectile::DestroySelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"DestroySelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Projectile::OnTriggerEnter(::UnityEngine::Collider*  co)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, co);
}
inline void Mirror::Examples::Tanks::Projectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::Projectile::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::Projectile*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Tanks::Projectile* Mirror::Examples::Tanks::Projectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Tanks::Projectile*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Tanks::Projectile::Projectile()   {
}
