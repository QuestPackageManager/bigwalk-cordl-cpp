#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/RotateAroundAxis.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Space_impl.hpp"
#include "Rewired/ComponentControls/Effects/zzzz__RotateAroundAxis_def.hpp"
#include "Rewired/ComponentControls/Effects/zzzz__RotateAroundAxis_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed::RotateAroundAxis_Speed(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed::RotateAroundAxis_Speed()   {
}
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  Rewired::ComponentControls::Effects::RotateAroundAxis_Speed::Stopped{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  Rewired::ComponentControls::Effects::RotateAroundAxis_Speed::Slow{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  Rewired::ComponentControls::Effects::RotateAroundAxis_Speed::Fast{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis::RotateAroundAxis_RotationAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis::RotateAroundAxis_RotationAxis()   {
}
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis::X{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis::Y{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis::Z{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.get_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::get_speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.set_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::set_speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_speed", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.get_slowRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::get_slowRotationSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_slowRotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.set_slowRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(float_t)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::set_slowRotationSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f81c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_slowRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.get_fastRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::get_fastRotationSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_fastRotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.set_fastRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(float_t)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::set_fastRotationSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_fastRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.get_rotateAroundAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::get_rotateAroundAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_rotateAroundAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.set_rotateAroundAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::set_rotateAroundAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_rotateAroundAxis", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.get_relativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Space (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::get_relativeTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_relativeTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.set_relativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(::UnityEngine::Space)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::set_relativeTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_relativeTo", {}, {::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.get_reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::get_reverse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_reverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.set_reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(bool)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::set_reverse)> {
  constexpr static std::size_t size = 0x2090;
  constexpr static std::size_t addrs = 0x180c29b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_reverse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818f3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.oUOpAvwVnLngqoFfiLcKwvTnOgec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::oUOpAvwVnLngqoFfiLcKwvTnOgec)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f3ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"oUOpAvwVnLngqoFfiLcKwvTnOgec", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.SetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::SetSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"SetSpeed", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis.SetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)(int32_t)>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::SetSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"SetSpeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::RotateAroundAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::RotateAroundAxis::*)()>(&::Rewired::ComponentControls::Effects::RotateAroundAxis::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f3c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed const& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_set__speed(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
constexpr float_t& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__slowRotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowRotationSpeed;
}
constexpr float_t const& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__slowRotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowRotationSpeed;
}
constexpr void Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_set__slowRotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowRotationSpeed = value;
}
constexpr float_t& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__fastRotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fastRotationSpeed;
}
constexpr float_t const& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__fastRotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fastRotationSpeed;
}
constexpr void Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_set__fastRotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fastRotationSpeed = value;
}
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__rotateAroundAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateAroundAxis;
}
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis const& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__rotateAroundAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateAroundAxis;
}
constexpr void Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_set__rotateAroundAxis(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotateAroundAxis = value;
}
constexpr ::UnityEngine::Space& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityEngine::Space const& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_set__relativeTo(::UnityEngine::Space  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr bool& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__reverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverse;
}
constexpr bool const& Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_get__reverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverse;
}
constexpr void Rewired::ComponentControls::Effects::RotateAroundAxis::__cordl_internal_set__reverse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverse = value;
}
inline ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed Rewired::ComponentControls::Effects::RotateAroundAxis::get_speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::set_speed(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_speed", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::Effects::RotateAroundAxis::get_slowRotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_slowRotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::set_slowRotationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_slowRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::Effects::RotateAroundAxis::get_fastRotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_fastRotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::set_fastRotationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_fastRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis Rewired::ComponentControls::Effects::RotateAroundAxis::get_rotateAroundAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_rotateAroundAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::set_rotateAroundAxis(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_rotateAroundAxis", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Space Rewired::ComponentControls::Effects::RotateAroundAxis::get_relativeTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_relativeTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Space>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::set_relativeTo(::UnityEngine::Space  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_relativeTo", {}, {::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Effects::RotateAroundAxis::get_reverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"get_reverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::set_reverse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"set_reverse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ComponentControls::Effects::RotateAroundAxis::oUOpAvwVnLngqoFfiLcKwvTnOgec(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"oUOpAvwVnLngqoFfiLcKwvTnOgec", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::SetSpeed(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"SetSpeed", {}, {::i2c::type_of<::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::SetSpeed(int32_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {"SetSpeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void Rewired::ComponentControls::Effects::RotateAroundAxis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::RotateAroundAxis*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Effects::RotateAroundAxis* Rewired::ComponentControls::Effects::RotateAroundAxis::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Effects::RotateAroundAxis*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis::RotateAroundAxis()   {
}
