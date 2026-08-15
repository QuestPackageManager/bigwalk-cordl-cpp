#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceLevelChangeHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceLevelChangeHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceLevelChangeEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805420d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::*)(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs)>(&::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180541ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::Invoke(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs  levelChangeEventArgs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelChangeEventArgs);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler* UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler::PerformanceLevelChangeHandler()   {
}
