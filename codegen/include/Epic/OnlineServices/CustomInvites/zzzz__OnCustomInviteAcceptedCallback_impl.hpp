#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteAcceptedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteAcceptedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180519750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback* Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback::OnCustomInviteAcceptedCallback()   {
}
