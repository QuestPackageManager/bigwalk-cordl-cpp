#pragma once
// IWYU pragma private; include "GlobalNamespace/BeakPosture.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_def.hpp"
#include "GlobalNamespace/zzzz__BeakPostureMask_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeakPosture.get_rotationAsQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::BeakPosture::*)()>(&::GlobalNamespace::BeakPosture::get_rotationAsQuaternion)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18037c3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"get_rotationAsQuaternion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeakPosture.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeakPosture::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::BeakPosture::DrawGizmos)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18037b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeakPosture.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeakPosture (*)(::GlobalNamespace::BeakPosture, ::GlobalNamespace::BeakPosture, float_t)>(&::GlobalNamespace::BeakPosture::Lerp)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x18037bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeakPosture.LerpPreservingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeakPosture (*)(::GlobalNamespace::BeakPosture, ::GlobalNamespace::BeakPosture, float_t)>(&::GlobalNamespace::BeakPosture::LerpPreservingDistance)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x18037b600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"LerpPreservingDistance", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeakPosture.OverrideUsingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeakPosture (*)(::GlobalNamespace::BeakPosture, ::GlobalNamespace::BeakPosture, ::GlobalNamespace::BeakPostureMask)>(&::GlobalNamespace::BeakPosture::OverrideUsingMask)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18037c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"OverrideUsingMask", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPostureMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeakPosture.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeakPosture (*)(::GlobalNamespace::BeakPosture, ::GlobalNamespace::BeakPosture)>(&::GlobalNamespace::BeakPosture::Add)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18037afa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion GlobalNamespace::BeakPosture::get_rotationAsQuaternion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"get_rotationAsQuaternion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void GlobalNamespace::BeakPosture::DrawGizmos(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop);
}
inline ::GlobalNamespace::BeakPosture GlobalNamespace::BeakPosture::Lerp(::GlobalNamespace::BeakPosture  a, ::GlobalNamespace::BeakPosture  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeakPosture>(nullptr, ___internal_method, a, b, t);
}
inline ::GlobalNamespace::BeakPosture GlobalNamespace::BeakPosture::LerpPreservingDistance(::GlobalNamespace::BeakPosture  a, ::GlobalNamespace::BeakPosture  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"LerpPreservingDistance", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeakPosture>(nullptr, ___internal_method, a, b, t);
}
inline ::GlobalNamespace::BeakPosture GlobalNamespace::BeakPosture::OverrideUsingMask(::GlobalNamespace::BeakPosture  source, ::GlobalNamespace::BeakPosture  destination, ::GlobalNamespace::BeakPostureMask  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"OverrideUsingMask", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPostureMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeakPosture>(nullptr, ___internal_method, source, destination, mask);
}
inline ::GlobalNamespace::BeakPosture GlobalNamespace::BeakPosture::Add(::GlobalNamespace::BeakPosture  a, ::GlobalNamespace::BeakPosture  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPosture>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::BeakPosture>(), ::i2c::type_of<::GlobalNamespace::BeakPosture>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeakPosture>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "propPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "propRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "grasperPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "upperAngleLimit", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowerAngleLimit", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftGripPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightGripPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "showGizmos", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeakPosture::BeakPosture(::UnityEngine::Vector3  propPosition, ::UnityEngine::Vector3  propRotation, ::UnityEngine::Vector3  grasperPosition, float_t  upperAngleLimit, float_t  lowerAngleLimit, ::UnityEngine::Vector3  leftGripPosition, ::UnityEngine::Vector3  rightGripPosition, bool  showGizmos) noexcept  {
this->propPosition = propPosition;
this->propRotation = propRotation;
this->grasperPosition = grasperPosition;
this->upperAngleLimit = upperAngleLimit;
this->lowerAngleLimit = lowerAngleLimit;
this->leftGripPosition = leftGripPosition;
this->rightGripPosition = rightGripPosition;
this->showGizmos = showGizmos;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeakPosture::BeakPosture()   {
}
