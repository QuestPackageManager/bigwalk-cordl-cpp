#pragma once
// IWYU pragma private; include "Animancer/Examples/OrbitControls.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/zzzz__OrbitControls_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::OrbitControls.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::OrbitControls::*)()>(&::Animancer::Examples::OrbitControls::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802ffc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::OrbitControls.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::OrbitControls::*)()>(&::Animancer::Examples::OrbitControls::Update)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1802ffe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::OrbitControls.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::OrbitControls::*)()>(&::Animancer::Examples::OrbitControls::UpdatePosition)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802ffd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"UpdatePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::OrbitControls.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::OrbitControls::*)()>(&::Animancer::Examples::OrbitControls::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ffd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::OrbitControls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::OrbitControls::*)()>(&::Animancer::Examples::OrbitControls::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180300110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Animancer::Examples::OrbitControls::__cordl_internal_get__FocalPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FocalPoint;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::OrbitControls::__cordl_internal_get__FocalPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FocalPoint;
}
constexpr void Animancer::Examples::OrbitControls::__cordl_internal_set__FocalPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FocalPoint = value;
}
constexpr ::UnityEngine::Vector3& Animancer::Examples::OrbitControls::__cordl_internal_get__Sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sensitivity;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::OrbitControls::__cordl_internal_get__Sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sensitivity;
}
constexpr void Animancer::Examples::OrbitControls::__cordl_internal_set__Sensitivity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sensitivity = value;
}
constexpr float_t& Animancer::Examples::OrbitControls::__cordl_internal_get__MinZoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinZoom;
}
constexpr float_t const& Animancer::Examples::OrbitControls::__cordl_internal_get__MinZoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinZoom;
}
constexpr void Animancer::Examples::OrbitControls::__cordl_internal_set__MinZoom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinZoom = value;
}
constexpr float_t& Animancer::Examples::OrbitControls::__cordl_internal_get__Distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Distance;
}
constexpr float_t const& Animancer::Examples::OrbitControls::__cordl_internal_get__Distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Distance;
}
constexpr void Animancer::Examples::OrbitControls::__cordl_internal_set__Distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Distance = value;
}
inline void Animancer::Examples::OrbitControls::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::OrbitControls::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::OrbitControls::UpdatePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"UpdatePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::OrbitControls::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::OrbitControls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::OrbitControls*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::OrbitControls* Animancer::Examples::OrbitControls::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::OrbitControls*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::OrbitControls::OrbitControls()   {
}
