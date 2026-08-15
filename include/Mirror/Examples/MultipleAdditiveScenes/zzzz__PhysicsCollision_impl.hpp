#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/PhysicsCollision.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleAdditiveScenes/zzzz__PhysicsCollision_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18155e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                    {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18155e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::*)(::UnityEngine::Collision*)>(&::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::OnCollisionStay)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18155e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18155e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::__cordl_internal_get_force()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force;
}
constexpr float_t const& Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::__cordl_internal_get_force() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::__cordl_internal_set_force(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___force = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::__cordl_internal_get_rigidbody3D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody3D;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::__cordl_internal_get_rigidbody3D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody3D;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::__cordl_internal_set_rigidbody3D(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody3D = value;
}
inline void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::OnCollisionStay(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision* Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision::PhysicsCollision()   {
}
