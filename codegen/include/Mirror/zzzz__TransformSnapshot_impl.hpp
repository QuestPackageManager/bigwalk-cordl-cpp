#pragma once
// IWYU pragma private; include "Mirror/TransformSnapshot.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/zzzz__TransformSnapshot_def.hpp"
#include "Mirror/zzzz__Snapshot_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::TransformSnapshot.get_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::TransformSnapshot::*)()>(&::Mirror::TransformSnapshot::get_remoteTime)> {
  constexpr static std::size_t size = 0x16430;
  constexpr static std::size_t addrs = 0x180862f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"get_remoteTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TransformSnapshot.set_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TransformSnapshot::*)(double_t)>(&::Mirror::TransformSnapshot::set_remoteTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181517da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"set_remoteTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TransformSnapshot.get_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::TransformSnapshot::*)()>(&::Mirror::TransformSnapshot::get_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"get_localTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TransformSnapshot.set_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TransformSnapshot::*)(double_t)>(&::Mirror::TransformSnapshot::set_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"set_localTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TransformSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TransformSnapshot::*)(double_t, double_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::Mirror::TransformSnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18152fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TransformSnapshot.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::TransformSnapshot (*)(::Mirror::TransformSnapshot, ::Mirror::TransformSnapshot, double_t)>(&::Mirror::TransformSnapshot::Interpolate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18152fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"Interpolate", {}, {::i2c::type_of<::Mirror::TransformSnapshot>(), ::i2c::type_of<::Mirror::TransformSnapshot>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Mirror::TransformSnapshot::get_remoteTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"get_remoteTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Mirror::TransformSnapshot::set_remoteTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"set_remoteTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t Mirror::TransformSnapshot::get_localTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"get_localTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Mirror::TransformSnapshot::set_localTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"set_localTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Mirror::TransformSnapshot::_ctor(double_t  remoteTime, double_t  localTime, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, remoteTime, localTime, position, rotation, scale);
}
inline ::Mirror::TransformSnapshot Mirror::TransformSnapshot::Interpolate(::Mirror::TransformSnapshot  from, ::Mirror::TransformSnapshot  to, double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TransformSnapshot>(),
                        {"Interpolate", {}, {::i2c::type_of<::Mirror::TransformSnapshot>(), ::i2c::type_of<::Mirror::TransformSnapshot>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::TransformSnapshot>(nullptr, ___internal_method, from, to, t);
}
/// @brief Convert operator to "::Mirror::Snapshot"
constexpr  Mirror::TransformSnapshot::operator ::Mirror::Snapshot*()  {
return static_cast<::Mirror::Snapshot*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::Snapshot"
constexpr ::Mirror::Snapshot* Mirror::TransformSnapshot::i___Mirror__Snapshot()  {
return static_cast<::Mirror::Snapshot*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_remoteTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_localTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::TransformSnapshot::TransformSnapshot(double_t  _remoteTime_k__BackingField, double_t  _localTime_k__BackingField, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) noexcept  {
this->_remoteTime_k__BackingField = _remoteTime_k__BackingField;
this->_localTime_k__BackingField = _localTime_k__BackingField;
this->position = position;
this->rotation = rotation;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::Mirror::TransformSnapshot::TransformSnapshot()   {
}
