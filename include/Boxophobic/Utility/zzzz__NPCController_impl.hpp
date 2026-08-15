#pragma once
// IWYU pragma private; include "Boxophobic/Utility/NPCController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Boxophobic/Utility/zzzz__NPCController_def.hpp"
//  Writing Method size for method: ::Boxophobic::Utility::NPCController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::NPCController::*)()>(&::Boxophobic::Utility::NPCController::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bc8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::NPCController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::NPCController::*)()>(&::Boxophobic::Utility::NPCController::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804bc8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::NPCController.ChangeDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::NPCController::*)()>(&::Boxophobic::Utility::NPCController::ChangeDirection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804bc810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {"ChangeDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::NPCController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::NPCController::*)()>(&::Boxophobic::Utility::NPCController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Boxophobic::Utility::NPCController::__cordl_internal_get_timeToChangeDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToChangeDirection;
}
constexpr float_t const& Boxophobic::Utility::NPCController::__cordl_internal_get_timeToChangeDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToChangeDirection;
}
constexpr void Boxophobic::Utility::NPCController::__cordl_internal_set_timeToChangeDirection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToChangeDirection = value;
}
constexpr ::UnityEngine::Vector3& Boxophobic::Utility::NPCController::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& Boxophobic::Utility::NPCController::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void Boxophobic::Utility::NPCController::__cordl_internal_set_direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
inline void Boxophobic::Utility::NPCController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::NPCController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::NPCController::ChangeDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {"ChangeDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::NPCController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::NPCController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::NPCController* Boxophobic::Utility::NPCController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::NPCController*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::NPCController::NPCController()   {
}
