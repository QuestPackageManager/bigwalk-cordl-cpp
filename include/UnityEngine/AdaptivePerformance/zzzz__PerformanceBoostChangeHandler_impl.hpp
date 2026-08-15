#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBoostChangeHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBoostChangeHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBoostChangeEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822221d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::*)(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::Invoke(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs  boostEventArgs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boostEventArgs);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler* UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler::PerformanceBoostChangeHandler()   {
}
