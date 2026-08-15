#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformSpecifics_1.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformSpecifics_1_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSCreateOptions_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSInitializeOptions_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSCoroutineOwner_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IPlatformSpecifics_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
template<typename T>
constexpr void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::__cordl_internal_set_Platform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform);
}
template<typename T>
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::GetDynamicLibraryExtension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(),
                        {"GetDynamicLibraryExtension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::GetTempDir()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::InitializeOverlay(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  owner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::InitializeNetworkChecks(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  owner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::AddPluginSearchPaths(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  pluginPaths)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pluginPaths);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::LoadDelegatesWithEOSBindingAPI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::RegisterForPlatformNotifications()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::SetDefaultAudioSession()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::IsApplicationConstrainedWhenOutOfFocus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::ConfigureSystemPlatformCreateOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>  createOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createOptions);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::ConfigureSystemInitOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>  initializeOptionsRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializeOptionsRef);
}
template<typename T>
inline int32_t PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::IsReadyForNetworkActivity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::UpdateNetworkStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::CanShowExitButton()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>* PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::New_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>*>(platform));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics"
template<typename T>
constexpr  PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::operator ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics"
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::i___PlayEveryWare__EpicOnlineServices__IPlatformSpecifics() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>::PlatformSpecifics_1()   {
}
