#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendRequestToJoinCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendRequestToJoinCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendRequestToJoinCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052a560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal::OnSendRequestToJoinCallbackInternal()   {
}
