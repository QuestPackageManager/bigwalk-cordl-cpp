#pragma once
// IWYU pragma private; include "Mirror/TimeSnapshot.hpp"
#include "Mirror/zzzz__TimeSnapshot_def.hpp"
#include "Mirror/zzzz__Snapshot_def.hpp"
//  Writing Method size for method: ::Mirror::TimeSnapshot.get_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::TimeSnapshot::*)()>(&::Mirror::TimeSnapshot::get_remoteTime)> {
  constexpr static std::size_t size = 0x16430;
  constexpr static std::size_t addrs = 0x180862f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"get_remoteTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TimeSnapshot.set_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TimeSnapshot::*)(double_t)>(&::Mirror::TimeSnapshot::set_remoteTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181517da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"set_remoteTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TimeSnapshot.get_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::TimeSnapshot::*)()>(&::Mirror::TimeSnapshot::get_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"get_localTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TimeSnapshot.set_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TimeSnapshot::*)(double_t)>(&::Mirror::TimeSnapshot::set_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"set_localTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TimeSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TimeSnapshot::*)(double_t, double_t)>(&::Mirror::TimeSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815987a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Mirror::TimeSnapshot::get_remoteTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"get_remoteTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Mirror::TimeSnapshot::set_remoteTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"set_remoteTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t Mirror::TimeSnapshot::get_localTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"get_localTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Mirror::TimeSnapshot::set_localTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {"set_localTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Mirror::TimeSnapshot::_ctor(double_t  remoteTime, double_t  localTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSnapshot>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, remoteTime, localTime);
}
/// @brief Convert operator to "::Mirror::Snapshot"
constexpr  Mirror::TimeSnapshot::operator ::Mirror::Snapshot*()  {
return static_cast<::Mirror::Snapshot*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::Snapshot"
constexpr ::Mirror::Snapshot* Mirror::TimeSnapshot::i___Mirror__Snapshot()  {
return static_cast<::Mirror::Snapshot*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_remoteTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_localTime_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::TimeSnapshot::TimeSnapshot(double_t  _remoteTime_k__BackingField, double_t  _localTime_k__BackingField) noexcept  {
this->_remoteTime_k__BackingField = _remoteTime_k__BackingField;
this->_localTime_k__BackingField = _localTime_k__BackingField;
}
// Ctor Parameters []
constexpr ::Mirror::TimeSnapshot::TimeSnapshot()   {
}
