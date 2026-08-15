#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemWithProvider_3.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemWithProvider_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemWithProvider_3_def.hpp"
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr TSubsystemDescriptor& UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::__cordl_internal_get__subsystemDescriptor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subsystemDescriptor_k__BackingField;
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr TSubsystemDescriptor const& UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::__cordl_internal_get__subsystemDescriptor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subsystemDescriptor_k__BackingField;
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr void UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::__cordl_internal_set__subsystemDescriptor_k__BackingField(TSubsystemDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subsystemDescriptor_k__BackingField = value;
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr TProvider& UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::__cordl_internal_get__provider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider_k__BackingField;
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr TProvider const& UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::__cordl_internal_get__provider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider_k__BackingField;
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr void UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::__cordl_internal_set__provider_k__BackingField(TProvider  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____provider_k__BackingField = value;
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline TProvider UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::get_provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(),
                        {"get_provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TProvider>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline void UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline void UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline void UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
inline ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>* UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>*>());
}
// Ctor Parameters []
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider>::SubsystemWithProvider_3()   {
}
