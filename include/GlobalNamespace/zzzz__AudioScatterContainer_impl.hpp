#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioScatterContainer.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_impl.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape::AudioScatterContainer_ScatterShape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape::AudioScatterContainer_ScatterShape()   {
}
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape  GlobalNamespace::AudioScatterContainer_ScatterShape::Sphere{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape  GlobalNamespace::AudioScatterContainer_ScatterShape::Hemisphere{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape  GlobalNamespace::AudioScatterContainer_ScatterShape::RoundPlane{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape  GlobalNamespace::AudioScatterContainer_ScatterShape::Custom{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MinInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MinInterval)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MaxInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MaxInterval)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MinDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MinDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MaxDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_Shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioScatterContainer_ScatterShape (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_Shape)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803becf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_Shape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MinHorizontalAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MinHorizontalAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinHorizontalAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MaxHorizontalAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MaxHorizontalAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxHorizontalAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MinVerticalAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MinVerticalAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinVerticalAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_MaxVerticalAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_MaxVerticalAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxVerticalAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.get_HibernationDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::get_HibernationDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_HibernationDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.GetNextPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AudioScatterContainer::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::AudioScatterContainer::GetNextPosition)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x18048f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"GetNextPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.GetNextInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::GetNextInterval)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"GetNextInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer.DrawScatterGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioScatterContainer::*)(::UnityEngine::Transform*, bool)>(&::GlobalNamespace::AudioScatterContainer::DrawScatterGizmos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"DrawScatterGizmos", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioScatterContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioScatterContainer::*)()>(&::GlobalNamespace::AudioScatterContainer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048fdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minInterval;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minInterval;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__minInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minInterval = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInterval;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInterval;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__maxInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxInterval = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistance = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shape;
}
constexpr ::GlobalNamespace::AudioScatterContainer_ScatterShape const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shape;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__shape(::GlobalNamespace::AudioScatterContainer_ScatterShape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shape = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minHorizontalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minHorizontalAngle;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minHorizontalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minHorizontalAngle;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__minHorizontalAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minHorizontalAngle = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxHorizontalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHorizontalAngle;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxHorizontalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHorizontalAngle;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__maxHorizontalAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxHorizontalAngle = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minVerticalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minVerticalAngle;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__minVerticalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minVerticalAngle;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__minVerticalAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minVerticalAngle = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxVerticalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxVerticalAngle;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__maxVerticalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxVerticalAngle;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__maxVerticalAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxVerticalAngle = value;
}
constexpr float_t& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__hibernationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernationDistance;
}
constexpr float_t const& GlobalNamespace::AudioScatterContainer::__cordl_internal_get__hibernationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernationDistance;
}
constexpr void GlobalNamespace::AudioScatterContainer::__cordl_internal_set__hibernationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hibernationDistance = value;
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MinInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MaxInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MinDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MaxDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioScatterContainer_ScatterShape GlobalNamespace::AudioScatterContainer::get_Shape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_Shape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioScatterContainer_ScatterShape>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MinHorizontalAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinHorizontalAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MaxHorizontalAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxHorizontalAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MinVerticalAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MinVerticalAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_MaxVerticalAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_MaxVerticalAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioScatterContainer::get_HibernationDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"get_HibernationDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioScatterContainer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioScatterContainer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioScatterContainer::GetNextPosition(::UnityEngine::Transform*  centerTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"GetNextPosition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, centerTransform);
}
inline float_t GlobalNamespace::AudioScatterContainer::GetNextInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"GetNextInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioScatterContainer::DrawScatterGizmos(::UnityEngine::Transform*  transform, bool  frameOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {"DrawScatterGizmos", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, frameOnly);
}
inline void GlobalNamespace::AudioScatterContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioScatterContainer* GlobalNamespace::AudioScatterContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioScatterContainer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioScatterContainer::AudioScatterContainer()   {
}
