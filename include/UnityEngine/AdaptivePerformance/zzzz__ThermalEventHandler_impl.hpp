#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ThermalEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalEventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalMetrics_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::ThermalEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AdaptivePerformance::ThermalEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xdbf0;
  constexpr static std::size_t addrs = 0x1812852e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::ThermalEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::ThermalEventHandler::*)(::UnityEngine::AdaptivePerformance::ThermalMetrics)>(&::UnityEngine::AdaptivePerformance::ThermalEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180ccc4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::ThermalEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AdaptivePerformance::ThermalEventHandler::Invoke(::UnityEngine::AdaptivePerformance::ThermalMetrics  thermalMetrics)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thermalMetrics);
}
inline ::UnityEngine::AdaptivePerformance::ThermalEventHandler* UnityEngine::AdaptivePerformance::ThermalEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::ThermalEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::ThermalEventHandler::ThermalEventHandler()   {
}
