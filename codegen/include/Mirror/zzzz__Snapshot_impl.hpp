#pragma once
// IWYU pragma private; include "Mirror/Snapshot.hpp"
#include "Mirror/zzzz__Snapshot_def.hpp"
//  Writing Method size for method: ::Mirror::Snapshot.get_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::Snapshot::*)()>(&::Mirror::Snapshot::get_remoteTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Snapshot*>(),
                    {::i2c::class_of<::Mirror::Snapshot*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Snapshot.set_remoteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Snapshot::*)(double_t)>(&::Mirror::Snapshot::set_remoteTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Snapshot*>(),
                    {::i2c::class_of<::Mirror::Snapshot*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Snapshot.get_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::Snapshot::*)()>(&::Mirror::Snapshot::get_localTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Snapshot*>(),
                    {::i2c::class_of<::Mirror::Snapshot*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Snapshot.set_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Snapshot::*)(double_t)>(&::Mirror::Snapshot::set_localTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Snapshot*>(),
                    {::i2c::class_of<::Mirror::Snapshot*>(), 3}
                ));
    return ___internal_method;
  }
};
inline double_t Mirror::Snapshot::get_remoteTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Snapshot*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Mirror::Snapshot::set_remoteTime(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Snapshot*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Mirror::Snapshot::get_localTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Snapshot*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Mirror::Snapshot::set_localTime(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Snapshot*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
