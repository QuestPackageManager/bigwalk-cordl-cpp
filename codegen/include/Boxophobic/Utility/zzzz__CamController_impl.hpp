#pragma once
// IWYU pragma private; include "Boxophobic/Utility/CamController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Boxophobic/Utility/zzzz__CamController_def.hpp"
//  Writing Method size for method: ::Boxophobic::Utility::CamController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::CamController::*)()>(&::Boxophobic::Utility::CamController::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::CamController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::CamController::*)()>(&::Boxophobic::Utility::CamController::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::CamController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::CamController::*)()>(&::Boxophobic::Utility::CamController::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bc090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::CamController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::CamController::*)()>(&::Boxophobic::Utility::CamController::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804bc100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::CamController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::CamController::*)()>(&::Boxophobic::Utility::CamController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Boxophobic::Utility::CamController::__cordl_internal_get_movementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSpeed;
}
constexpr float_t const& Boxophobic::Utility::CamController::__cordl_internal_get_movementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSpeed;
}
constexpr void Boxophobic::Utility::CamController::__cordl_internal_set_movementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementSpeed = value;
}
constexpr float_t& Boxophobic::Utility::CamController::__cordl_internal_get_accelerationMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerationMultiplier;
}
constexpr float_t const& Boxophobic::Utility::CamController::__cordl_internal_get_accelerationMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerationMultiplier;
}
constexpr void Boxophobic::Utility::CamController::__cordl_internal_set_accelerationMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accelerationMultiplier = value;
}
constexpr float_t& Boxophobic::Utility::CamController::__cordl_internal_get_sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr float_t const& Boxophobic::Utility::CamController::__cordl_internal_get_sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr void Boxophobic::Utility::CamController::__cordl_internal_set_sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivity = value;
}
constexpr float_t& Boxophobic::Utility::CamController::__cordl_internal_get_yaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yaw;
}
constexpr float_t const& Boxophobic::Utility::CamController::__cordl_internal_get_yaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yaw;
}
constexpr void Boxophobic::Utility::CamController::__cordl_internal_set_yaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yaw = value;
}
constexpr float_t& Boxophobic::Utility::CamController::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr float_t const& Boxophobic::Utility::CamController::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void Boxophobic::Utility::CamController::__cordl_internal_set_pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
inline void Boxophobic::Utility::CamController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::CamController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::CamController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::CamController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::CamController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::CamController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::CamController* Boxophobic::Utility::CamController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::CamController*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::CamController::CamController()   {
}
