#pragma once
// IWYU pragma private; include "Mirror/Examples/CCU/Monster.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Examples/CCU/zzzz__Monster_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::CCU::Monster.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Monster::*)()>(&::Mirror::Examples::CCU::Monster::OnStartServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18155d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                    {::i2c::class_of<::Mirror::Examples::CCU::Monster*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Monster.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Monster::*)()>(&::Mirror::Examples::CCU::Monster::Update)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18155d960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Monster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Monster::*)()>(&::Mirror::Examples::CCU::Monster::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18155d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Monster.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Monster::*)()>(&::Mirror::Examples::CCU::Monster::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Mirror::Examples::CCU::Monster::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& Mirror::Examples::CCU::Monster::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& Mirror::Examples::CCU::Monster::__cordl_internal_get_movementProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementProbability;
}
constexpr float_t const& Mirror::Examples::CCU::Monster::__cordl_internal_get_movementProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementProbability;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_movementProbability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementProbability = value;
}
constexpr float_t& Mirror::Examples::CCU::Monster::__cordl_internal_get_movementDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementDistance;
}
constexpr float_t const& Mirror::Examples::CCU::Monster::__cordl_internal_get_movementDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementDistance;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_movementDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementDistance = value;
}
constexpr bool& Mirror::Examples::CCU::Monster::__cordl_internal_get_moving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moving;
}
constexpr bool const& Mirror::Examples::CCU::Monster::__cordl_internal_get_moving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moving;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_moving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moving = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Examples::CCU::Monster::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::CCU::Monster::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_start(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Examples::CCU::Monster::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::CCU::Monster::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_destination(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destination = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::Examples::CCU::Monster::__cordl_internal_get_tf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::Examples::CCU::Monster::__cordl_internal_get_tf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tf;
}
constexpr void Mirror::Examples::CCU::Monster::__cordl_internal_set_tf(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tf = value;
}
inline void Mirror::Examples::CCU::Monster::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::CCU::Monster*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Monster::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Monster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Monster::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Monster*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::CCU::Monster* Mirror::Examples::CCU::Monster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::CCU::Monster*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::CCU::Monster::Monster()   {
}
