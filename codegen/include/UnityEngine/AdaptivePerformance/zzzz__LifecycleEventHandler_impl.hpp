#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/LifecycleEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__LifecycleEventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformance_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__LifecycleChangeType_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::LifecycleEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::LifecycleEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AdaptivePerformance::LifecycleEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182222020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::LifecycleEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::LifecycleEventHandler::*)(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*, ::UnityEngine::AdaptivePerformance::LifecycleChangeType)>(&::UnityEngine::AdaptivePerformance::LifecycleEventHandler::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::LifecycleEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AdaptivePerformance::LifecycleEventHandler::Invoke(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  instance, ::UnityEngine::AdaptivePerformance::LifecycleChangeType  changeType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, changeType);
}
inline ::UnityEngine::AdaptivePerformance::LifecycleEventHandler* UnityEngine::AdaptivePerformance::LifecycleEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::LifecycleEventHandler::LifecycleEventHandler()   {
}
