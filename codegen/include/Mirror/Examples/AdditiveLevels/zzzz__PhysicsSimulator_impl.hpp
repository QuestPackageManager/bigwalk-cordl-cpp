#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/PhysicsSimulator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "Mirror/Examples/AdditiveLevels/zzzz__PhysicsSimulator_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PhysicsSimulator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PhysicsSimulator::*)()>(&::Mirror::Examples::AdditiveLevels::PhysicsSimulator::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18155e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PhysicsSimulator.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PhysicsSimulator::*)()>(&::Mirror::Examples::AdditiveLevels::PhysicsSimulator::FixedUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18155e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PhysicsSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PhysicsSimulator::*)()>(&::Mirror::Examples::AdditiveLevels::PhysicsSimulator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::PhysicsScene& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_physicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_physicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsScene;
}
constexpr void Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_set_physicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physicsScene = value;
}
constexpr ::UnityEngine::PhysicsScene2D& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_physicsScene2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsScene2D;
}
constexpr ::UnityEngine::PhysicsScene2D const& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_physicsScene2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsScene2D;
}
constexpr void Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_set_physicsScene2D(::UnityEngine::PhysicsScene2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physicsScene2D = value;
}
constexpr bool& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_simulatePhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatePhysicsScene;
}
constexpr bool const& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_simulatePhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatePhysicsScene;
}
constexpr void Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_set_simulatePhysicsScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulatePhysicsScene = value;
}
constexpr bool& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_simulatePhysicsScene2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatePhysicsScene2D;
}
constexpr bool const& Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_get_simulatePhysicsScene2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatePhysicsScene2D;
}
constexpr void Mirror::Examples::AdditiveLevels::PhysicsSimulator::__cordl_internal_set_simulatePhysicsScene2D(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulatePhysicsScene2D = value;
}
inline void Mirror::Examples::AdditiveLevels::PhysicsSimulator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PhysicsSimulator::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PhysicsSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::AdditiveLevels::PhysicsSimulator* Mirror::Examples::AdditiveLevels::PhysicsSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveLevels::PhysicsSimulator*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveLevels::PhysicsSimulator::PhysicsSimulator()   {
}
