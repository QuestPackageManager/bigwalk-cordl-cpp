#pragma once
// IWYU pragma private; include "Boxophobic/Utility/FPSController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Boxophobic/Utility/zzzz__FPSController_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Boxophobic::Utility::FPSController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::FPSController::*)()>(&::Boxophobic::Utility::FPSController::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bc300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::FPSController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::FPSController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::FPSController::*)()>(&::Boxophobic::Utility::FPSController::Update)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1804bc340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::FPSController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::FPSController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::FPSController::*)()>(&::Boxophobic::Utility::FPSController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bc7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::FPSController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Boxophobic::Utility::FPSController::__cordl_internal_get_walkingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkingSpeed;
}
constexpr float_t const& Boxophobic::Utility::FPSController::__cordl_internal_get_walkingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkingSpeed;
}
constexpr void Boxophobic::Utility::FPSController::__cordl_internal_set_walkingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walkingSpeed = value;
}
constexpr float_t& Boxophobic::Utility::FPSController::__cordl_internal_get_lookSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSpeed;
}
constexpr float_t const& Boxophobic::Utility::FPSController::__cordl_internal_get_lookSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSpeed;
}
constexpr void Boxophobic::Utility::FPSController::__cordl_internal_set_lookSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSpeed = value;
}
constexpr float_t& Boxophobic::Utility::FPSController::__cordl_internal_get_lookXLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookXLimit;
}
constexpr float_t const& Boxophobic::Utility::FPSController::__cordl_internal_get_lookXLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookXLimit;
}
constexpr void Boxophobic::Utility::FPSController::__cordl_internal_set_lookXLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookXLimit = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Boxophobic::Utility::FPSController::__cordl_internal_get_playerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Boxophobic::Utility::FPSController::__cordl_internal_get_playerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr void Boxophobic::Utility::FPSController::__cordl_internal_set_playerCamera(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCamera = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& Boxophobic::Utility::FPSController::__cordl_internal_get_characterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& Boxophobic::Utility::FPSController::__cordl_internal_get_characterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterController;
}
constexpr void Boxophobic::Utility::FPSController::__cordl_internal_set_characterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterController = value;
}
constexpr float_t& Boxophobic::Utility::FPSController::__cordl_internal_get_rotationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationX;
}
constexpr float_t const& Boxophobic::Utility::FPSController::__cordl_internal_get_rotationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationX;
}
constexpr void Boxophobic::Utility::FPSController::__cordl_internal_set_rotationX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationX = value;
}
inline void Boxophobic::Utility::FPSController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::FPSController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::FPSController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::FPSController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::Utility::FPSController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::FPSController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::FPSController* Boxophobic::Utility::FPSController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::FPSController*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::FPSController::FPSController()   {
}
