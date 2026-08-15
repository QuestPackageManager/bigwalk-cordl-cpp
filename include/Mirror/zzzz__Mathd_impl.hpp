#pragma once
// IWYU pragma private; include "Mirror/Mathd.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Mathd_def.hpp"
//  Writing Method size for method: ::Mirror::Mathd.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Mirror::Mathd::Clamp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181594500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"Clamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Mathd.Clamp01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::Mirror::Mathd::Clamp01)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815944e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"Clamp01", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Mathd.InverseLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Mirror::Mathd::InverseLerp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181594520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"InverseLerp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Mathd.LerpUnclamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Mirror::Mathd::LerpUnclamped)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181594560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"LerpUnclamped", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Mirror::Mathd::Clamp(double_t  value, double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"Clamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, min, max);
}
inline double_t Mirror::Mathd::Clamp01(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"Clamp01", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t Mirror::Mathd::InverseLerp(double_t  a, double_t  b, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"InverseLerp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, b, value);
}
inline double_t Mirror::Mathd::LerpUnclamped(double_t  a, double_t  b, double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Mathd*>(),
                        {"LerpUnclamped", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, b, t);
}
// Ctor Parameters []
constexpr ::Mirror::Mathd::Mathd()   {
}
