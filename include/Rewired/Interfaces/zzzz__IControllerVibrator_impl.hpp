#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerVibrator.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.get_vibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Interfaces::IControllerVibrator::*)()>(&::Rewired::Interfaces::IControllerVibrator::get_vibrationMotorCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerVibrator::*)(int32_t, float_t)>(&::Rewired::Interfaces::IControllerVibrator::SetVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerVibrator::*)(int32_t, float_t, float_t)>(&::Rewired::Interfaces::IControllerVibrator::SetVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerVibrator::*)(int32_t, float_t, bool)>(&::Rewired::Interfaces::IControllerVibrator::SetVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerVibrator::*)(int32_t, float_t, float_t, bool)>(&::Rewired::Interfaces::IControllerVibrator::SetVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Interfaces::IControllerVibrator::*)(int32_t)>(&::Rewired::Interfaces::IControllerVibrator::GetVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerVibrator.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerVibrator::*)()>(&::Rewired::Interfaces::IControllerVibrator::StopVibration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 6}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::Interfaces::IControllerVibrator::get_vibrationMotorCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Interfaces::IControllerVibrator::SetVibration(int32_t  motorIndex, float_t  motorLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel);
}
inline void Rewired::Interfaces::IControllerVibrator::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration);
}
inline void Rewired::Interfaces::IControllerVibrator::SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, stopOtherMotors);
}
inline void Rewired::Interfaces::IControllerVibrator::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration, stopOtherMotors);
}
inline float_t Rewired::Interfaces::IControllerVibrator::GetVibration(int32_t  motorIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motorIndex);
}
inline void Rewired::Interfaces::IControllerVibrator::StopVibration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerVibrator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
