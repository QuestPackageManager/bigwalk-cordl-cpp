#pragma once
// IWYU pragma private; include "Mirror/Examples/CCU/Player.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Examples/CCU/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181560fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::CCU::Player*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.OnStopLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::OnStopLocalPlayer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815613a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::CCU::Player*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.AutoMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::AutoMove)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181560330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"AutoMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.ManualMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::ManualMove)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181560b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"ManualMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.Interrupted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::Examples::CCU::Player::Interrupted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181560ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"Interrupted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181561a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181561c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::CCU::Player.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::CCU::Player::*)()>(&::Mirror::Examples::CCU::Player::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Mirror::Examples::CCU::Player::__cordl_internal_get_cameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffset;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::CCU::Player::__cordl_internal_get_cameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffset;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_cameraOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraOffset = value;
}
constexpr bool& Mirror::Examples::CCU::Player::__cordl_internal_get_autoMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoMove;
}
constexpr bool const& Mirror::Examples::CCU::Player::__cordl_internal_get_autoMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoMove;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_autoMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoMove = value;
}
constexpr float_t& Mirror::Examples::CCU::Player::__cordl_internal_get_autoSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSpeed;
}
constexpr float_t const& Mirror::Examples::CCU::Player::__cordl_internal_get_autoSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSpeed;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_autoSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoSpeed = value;
}
constexpr float_t& Mirror::Examples::CCU::Player::__cordl_internal_get_movementProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementProbability;
}
constexpr float_t const& Mirror::Examples::CCU::Player::__cordl_internal_get_movementProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementProbability;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_movementProbability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementProbability = value;
}
constexpr float_t& Mirror::Examples::CCU::Player::__cordl_internal_get_movementDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementDistance;
}
constexpr float_t const& Mirror::Examples::CCU::Player::__cordl_internal_get_movementDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementDistance;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_movementDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementDistance = value;
}
constexpr bool& Mirror::Examples::CCU::Player::__cordl_internal_get_moving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moving;
}
constexpr bool const& Mirror::Examples::CCU::Player::__cordl_internal_get_moving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moving;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_moving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moving = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Examples::CCU::Player::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::CCU::Player::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_start(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Examples::CCU::Player::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::CCU::Player::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_destination(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destination = value;
}
constexpr float_t& Mirror::Examples::CCU::Player::__cordl_internal_get_manualSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualSpeed;
}
constexpr float_t const& Mirror::Examples::CCU::Player::__cordl_internal_get_manualSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualSpeed;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_manualSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manualSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::Examples::CCU::Player::__cordl_internal_get_tf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::Examples::CCU::Player::__cordl_internal_get_tf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tf;
}
constexpr void Mirror::Examples::CCU::Player::__cordl_internal_set_tf(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tf = value;
}
inline void Mirror::Examples::CCU::Player::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::CCU::Player*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Player::OnStopLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::CCU::Player*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Player::AutoMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"AutoMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Player::ManualMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"ManualMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::Examples::CCU::Player::Interrupted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"Interrupted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::Examples::CCU::Player::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Player::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::CCU::Player::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::CCU::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::CCU::Player* Mirror::Examples::CCU::Player::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::CCU::Player*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::CCU::Player::Player()   {
}
