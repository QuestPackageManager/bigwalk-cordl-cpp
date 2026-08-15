#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Holder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__Holder_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformance_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__LifecycleEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Holder.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::IAdaptivePerformance* (*)()>(&::UnityEngine::AdaptivePerformance::Holder::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182221420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Holder*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Holder.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*)>(&::UnityEngine::AdaptivePerformance::Holder::set_Instance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182221440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Holder*>(),
                        {"set_Instance", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::Holder::setStaticF_m_Instance(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*, "m_Instance", ::UnityEngine::AdaptivePerformance::Holder*>(std::forward<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(value));
}
inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformance* UnityEngine::AdaptivePerformance::Holder::getStaticF_m_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*, "m_Instance", ::UnityEngine::AdaptivePerformance::Holder*>();
}
inline void UnityEngine::AdaptivePerformance::Holder::setStaticF_LifecycleEventHandler(::UnityEngine::AdaptivePerformance::LifecycleEventHandler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*, "LifecycleEventHandler", ::UnityEngine::AdaptivePerformance::Holder*>(std::forward<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*>(value));
}
inline ::UnityEngine::AdaptivePerformance::LifecycleEventHandler* UnityEngine::AdaptivePerformance::Holder::getStaticF_LifecycleEventHandler()  {
return ::cordl_internals::getStaticField<::UnityEngine::AdaptivePerformance::LifecycleEventHandler*, "LifecycleEventHandler", ::UnityEngine::AdaptivePerformance::Holder*>();
}
inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformance* UnityEngine::AdaptivePerformance::Holder::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Holder*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>(nullptr, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Holder::set_Instance(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Holder*>(),
                        {"set_Instance", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Holder::Holder()   {
}
