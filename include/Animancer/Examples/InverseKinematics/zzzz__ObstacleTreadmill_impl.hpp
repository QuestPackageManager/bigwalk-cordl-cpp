#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/ObstacleTreadmill.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__ObstacleTreadmill_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::ObstacleTreadmill.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::ObstacleTreadmill::*)()>(&::Animancer::Examples::InverseKinematics::ObstacleTreadmill::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802ff720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::ObstacleTreadmill.ScrambleObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::ObstacleTreadmill::*)()>(&::Animancer::Examples::InverseKinematics::ObstacleTreadmill::ScrambleObjects)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1802ff9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"ScrambleObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::ObstacleTreadmill.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::ObstacleTreadmill::*)()>(&::Animancer::Examples::InverseKinematics::ObstacleTreadmill::FixedUpdate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802ff850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::ObstacleTreadmill.get_Slope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Examples::InverseKinematics::ObstacleTreadmill::*)()>(&::Animancer::Examples::InverseKinematics::ObstacleTreadmill::get_Slope)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ffbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"get_Slope", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::ObstacleTreadmill.set_Slope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::ObstacleTreadmill::*)(float_t)>(&::Animancer::Examples::InverseKinematics::ObstacleTreadmill::set_Slope)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802ffbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"set_Slope", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::ObstacleTreadmill._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::ObstacleTreadmill::*)()>(&::Animancer::Examples::InverseKinematics::ObstacleTreadmill::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ffb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__SpawnCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnCount;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__SpawnCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnCount;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__SpawnCount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpawnCount = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__ObstacleMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObstacleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__ObstacleMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObstacleMaterial;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__ObstacleMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObstacleMaterial = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__Length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Length = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__RotationVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RotationVariance;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__RotationVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RotationVariance;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__RotationVariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RotationVariance = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__BaseScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseScale;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__BaseScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseScale;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__BaseScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseScale = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__ScaleVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleVariance;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__ScaleVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScaleVariance;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__ScaleVariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScaleVariance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Target = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get_Obstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Obstacles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get_Obstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Obstacles;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set_Obstacles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Obstacles = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__Ground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ground;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_get__Ground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ground;
}
constexpr void Animancer::Examples::InverseKinematics::ObstacleTreadmill::__cordl_internal_set__Ground(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ground = value;
}
inline void Animancer::Examples::InverseKinematics::ObstacleTreadmill::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::ObstacleTreadmill::ScrambleObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"ScrambleObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::ObstacleTreadmill::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::Examples::InverseKinematics::ObstacleTreadmill::get_Slope()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"get_Slope", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::ObstacleTreadmill::set_Slope(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {"set_Slope", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::InverseKinematics::ObstacleTreadmill::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::ObstacleTreadmill* Animancer::Examples::InverseKinematics::ObstacleTreadmill::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::ObstacleTreadmill*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::ObstacleTreadmill::ObstacleTreadmill()   {
}
