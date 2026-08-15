#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceModeEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceModeEventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::*)(::UnityEngine::AdaptivePerformance::PerformanceMode)>(&::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::Invoke(::UnityEngine::AdaptivePerformance::PerformanceMode  performanceMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performanceMode);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler* UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler::PerformanceModeEventHandler()   {
}
