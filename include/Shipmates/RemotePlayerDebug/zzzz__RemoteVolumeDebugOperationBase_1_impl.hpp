#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemoteVolumeDebugOperationBase_1.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemoteVolumeDebugOperationBase_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
template<typename T>
constexpr ::UnityW<::UnityEngine::Rendering::Volume>& Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_get__createdVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdVolume;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_get__createdVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdVolume;
}
template<typename T>
constexpr void Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_set__createdVolume(::UnityW<::UnityEngine::Rendering::Volume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createdVolume = value;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_get__createdProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdProfile;
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_get__createdProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdProfile;
}
template<typename T>
constexpr void Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_set__createdProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createdProfile = value;
}
template<typename T>
constexpr T& Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_get__effectComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectComponent;
}
template<typename T>
constexpr T const& Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_get__effectComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectComponent;
}
template<typename T>
constexpr void Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::__cordl_internal_set__effectComponent(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____effectComponent = value;
}
template<typename T>
inline void Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::EnsureVolumeCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>*>(),
                        {"EnsureVolumeCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::GetEffectComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>*>(),
                        {"GetEffectComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>* Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmates::RemotePlayerDebug::RemoteVolumeDebugOperationBase_1<T>::RemoteVolumeDebugOperationBase_1()   {
}
