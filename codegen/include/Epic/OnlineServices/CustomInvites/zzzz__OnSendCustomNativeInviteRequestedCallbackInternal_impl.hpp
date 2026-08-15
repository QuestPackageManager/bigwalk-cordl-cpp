#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendCustomNativeInviteRequestedCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomNativeInviteRequestedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomNativeInviteRequestedCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052a320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal::OnSendCustomNativeInviteRequestedCallbackInternal()   {
}
