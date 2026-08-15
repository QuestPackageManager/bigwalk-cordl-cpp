#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/AdaptivePerformanceSubsystemBase_3.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemWithProvider_3_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystemBase_3_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IApplicationLifecycle_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IDevicePerformanceLevelControl_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__PerformanceDataRecord_def.hpp"
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::UnityEngine::AdaptivePerformance::Provider::Feature UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_Capabilities()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::Feature>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_ApplicationLifecycle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_PerformanceLevelControl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::System::Version* UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::StringW UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_Stats()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline bool UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_Initialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline void UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>* UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>*>());
}
// Ctor Parameters []
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>::AdaptivePerformanceSubsystemBase_3()   {
}
