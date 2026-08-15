#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OnUserPreLogoutCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__OnUserPreLogoutCallbackInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformPreLogoutAction_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserPreLogoutCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804de8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction (::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>)>(&::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction (::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804de840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal::OnUserPreLogoutCallbackInternal()   {
}
