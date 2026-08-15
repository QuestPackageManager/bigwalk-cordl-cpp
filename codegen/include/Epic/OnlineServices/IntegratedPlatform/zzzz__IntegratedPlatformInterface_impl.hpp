#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformInterface_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__AddNotifyUserLoginStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__ClearUserPreLogoutCallbackOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__CreateIntegratedPlatformOptionsContainerOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__FinalizeDeferredUserLogoutOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainer_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__OnUserLoginStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__OnUserPreLogoutCallback_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__SetUserLoginStatusOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__SetUserPreLogoutCallbackOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)()>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.AddNotifyUserLoginStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::AddNotifyUserLoginStatusChangedOptions>, ::System::Object*, ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallback*)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::AddNotifyUserLoginStatusChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805170d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"AddNotifyUserLoginStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::AddNotifyUserLoginStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.ClearUserPreLogoutCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::ClearUserPreLogoutCallback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805172c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"ClearUserPreLogoutCallback", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.CreateIntegratedPlatformOptionsContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::CreateIntegratedPlatformOptionsContainerOptions>, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::CreateIntegratedPlatformOptionsContainer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805172f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"CreateIntegratedPlatformOptionsContainer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::CreateIntegratedPlatformOptionsContainerOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.FinalizeDeferredUserLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::FinalizeDeferredUserLogout)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180517350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"FinalizeDeferredUserLogout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.RemoveNotifyUserLoginStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(uint64_t)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::RemoveNotifyUserLoginStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805173f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"RemoveNotifyUserLoginStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.SetUserLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::SetUserLoginStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180517420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"SetUserLoginStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface.SetUserPreLogoutCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserPreLogoutCallbackOptions>, ::System::Object*, ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::SetUserPreLogoutCallback)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805174c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"SetUserPreLogoutCallback", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserPreLogoutCallbackOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::setStaticF_WINDOWS_STEAM_IPT(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "WINDOWS_STEAM_IPT", ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::getStaticF_WINDOWS_STEAM_IPT()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "WINDOWS_STEAM_IPT", ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>();
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::AddNotifyUserLoginStatusChanged(::by_ref<::Epic::OnlineServices::IntegratedPlatform::AddNotifyUserLoginStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallback*  callbackFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"AddNotifyUserLoginStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::AddNotifyUserLoginStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, callbackFunction);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::ClearUserPreLogoutCallback(::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"ClearUserPreLogoutCallback", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::ClearUserPreLogoutCallbackOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::CreateIntegratedPlatformOptionsContainer(::by_ref<::Epic::OnlineServices::IntegratedPlatform::CreateIntegratedPlatformOptionsContainerOptions>  options, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>  outIntegratedPlatformOptionsContainerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"CreateIntegratedPlatformOptionsContainer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::CreateIntegratedPlatformOptionsContainerOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method, options, outIntegratedPlatformOptionsContainerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::FinalizeDeferredUserLogout(::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"FinalizeDeferredUserLogout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::FinalizeDeferredUserLogoutOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::RemoveNotifyUserLoginStatusChanged(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"RemoveNotifyUserLoginStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::SetUserLoginStatus(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"SetUserLoginStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::SetUserPreLogoutCallback(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserPreLogoutCallbackOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*  callbackFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(),
                        {"SetUserPreLogoutCallback", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserPreLogoutCallbackOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, clientData, callbackFunction);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>());
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface::IntegratedPlatformInterface()   {
}
