#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemDescriptorWithProvider_2.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_2_def.hpp"
template<typename TSubsystem,typename TProvider>
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>::ThrowIfInvalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>*>(),
                        {"ThrowIfInvalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSubsystem,typename TProvider>
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSubsystem,typename TProvider>
inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>*>());
}
// Ctor Parameters []
template<typename TSubsystem,typename TProvider>
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider_2<TSubsystem,TProvider>::SubsystemDescriptorWithProvider_2()   {
}
