#pragma once
// IWYU pragma private; include "Mirror/Examples/RigidbodyPhysics/AddForce.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/RigidbodyPhysics/zzzz__AddForce_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::RigidbodyPhysics::AddForce.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::RigidbodyPhysics::AddForce::*)()>(&::Mirror::Examples::RigidbodyPhysics::AddForce::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181553310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                    {::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::RigidbodyPhysics::AddForce.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::RigidbodyPhysics::AddForce::*)()>(&::Mirror::Examples::RigidbodyPhysics::AddForce::OnStartServer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815532e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                    {::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::RigidbodyPhysics::AddForce.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::RigidbodyPhysics::AddForce::*)()>(&::Mirror::Examples::RigidbodyPhysics::AddForce::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181553360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::RigidbodyPhysics::AddForce._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::RigidbodyPhysics::AddForce::*)()>(&::Mirror::Examples::RigidbodyPhysics::AddForce::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815533f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::RigidbodyPhysics::AddForce.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::RigidbodyPhysics::AddForce::*)()>(&::Mirror::Examples::RigidbodyPhysics::AddForce::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Mirror::Examples::RigidbodyPhysics::AddForce::__cordl_internal_get_rigidbody3d()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody3d;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Mirror::Examples::RigidbodyPhysics::AddForce::__cordl_internal_get_rigidbody3d() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody3d;
}
constexpr void Mirror::Examples::RigidbodyPhysics::AddForce::__cordl_internal_set_rigidbody3d(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody3d = value;
}
constexpr float_t& Mirror::Examples::RigidbodyPhysics::AddForce::__cordl_internal_get_force()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force;
}
constexpr float_t const& Mirror::Examples::RigidbodyPhysics::AddForce::__cordl_internal_get_force() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force;
}
constexpr void Mirror::Examples::RigidbodyPhysics::AddForce::__cordl_internal_set_force(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___force = value;
}
inline void Mirror::Examples::RigidbodyPhysics::AddForce::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::RigidbodyPhysics::AddForce::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::RigidbodyPhysics::AddForce::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::RigidbodyPhysics::AddForce::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::RigidbodyPhysics::AddForce::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::RigidbodyPhysics::AddForce*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::RigidbodyPhysics::AddForce* Mirror::Examples::RigidbodyPhysics::AddForce::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::RigidbodyPhysics::AddForce*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::RigidbodyPhysics::AddForce::AddForce()   {
}
