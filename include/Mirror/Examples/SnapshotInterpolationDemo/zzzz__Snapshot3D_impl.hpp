#pragma once
// IWYU pragma private; include "Mirror/Examples/SnapshotInterpolationDemo/Snapshot3D.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__Snapshot3D_def.hpp"
#include "Mirror/zzzz__Snapshot_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D.get_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::get_remoteTime)> {
  constexpr static std::size_t size = 0x16430;
  constexpr static std::size_t addrs = 0x180862f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"get_remoteTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D.set_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::*)(double_t)>(&::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::set_remoteTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181517da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"set_remoteTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D.get_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::get_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"get_localTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D.set_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::*)(double_t)>(&::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::set_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"set_localTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::*)(double_t, double_t, ::UnityEngine::Vector3)>(&::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181563e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D (*)(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D, ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D, double_t)>(&::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::Interpolate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181563d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"Interpolate", {}, {::i2c::type_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(), ::i2c::type_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::get_remoteTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"get_remoteTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::set_remoteTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"set_remoteTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::get_localTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"get_localTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::set_localTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"set_localTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::_ctor(double_t  remoteTime, double_t  localTime, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, remoteTime, localTime, position);
}
inline ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::Interpolate(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D  from, ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D  to, double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(),
                        {"Interpolate", {}, {::i2c::type_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(), ::i2c::type_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>(nullptr, ___internal_method, from, to, t);
}
/// @brief Convert operator to "::Mirror::Snapshot"
constexpr  Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::operator ::Mirror::Snapshot*()  {
return static_cast<::Mirror::Snapshot*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::Snapshot"
constexpr ::Mirror::Snapshot* Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::i___Mirror__Snapshot()  {
return static_cast<::Mirror::Snapshot*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_remoteTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_localTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::Snapshot3D(double_t  _remoteTime_k__BackingField, double_t  _localTime_k__BackingField, ::UnityEngine::Vector3  position) noexcept  {
this->_remoteTime_k__BackingField = _remoteTime_k__BackingField;
this->_localTime_k__BackingField = _localTime_k__BackingField;
this->position = position;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D::Snapshot3D()   {
}
