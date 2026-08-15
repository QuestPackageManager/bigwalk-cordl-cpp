#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnPermissionsUpdateReceivedCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnPermissionsUpdateReceivedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionsUpdateReceivedCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal* Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal::OnPermissionsUpdateReceivedCallbackInternal()   {
}
