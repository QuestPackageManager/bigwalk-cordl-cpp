#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/TransformResetter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__TransformResetter_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::TransformResetter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::TransformResetter::*)()>(&::Animancer::Examples::InverseKinematics::TransformResetter::Awake)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180302510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::TransformResetter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::TransformResetter.ReturnToStartingValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::TransformResetter::*)()>(&::Animancer::Examples::InverseKinematics::TransformResetter::ReturnToStartingValues)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180302650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::TransformResetter*>(),
                        {"ReturnToStartingValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::TransformResetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::TransformResetter::*)()>(&::Animancer::Examples::InverseKinematics::TransformResetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::TransformResetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_get__Transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_get__Transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transforms;
}
constexpr void Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_set__Transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Transforms = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_get__StartingPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartingPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_get__StartingPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartingPositions;
}
constexpr void Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_set__StartingPositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartingPositions = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_get__StartingRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartingRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_get__StartingRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartingRotations;
}
constexpr void Animancer::Examples::InverseKinematics::TransformResetter::__cordl_internal_set__StartingRotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartingRotations = value;
}
inline void Animancer::Examples::InverseKinematics::TransformResetter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::TransformResetter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::TransformResetter::ReturnToStartingValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::TransformResetter*>(),
                        {"ReturnToStartingValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::TransformResetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::TransformResetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::TransformResetter* Animancer::Examples::InverseKinematics::TransformResetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::TransformResetter*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::TransformResetter::TransformResetter()   {
}
