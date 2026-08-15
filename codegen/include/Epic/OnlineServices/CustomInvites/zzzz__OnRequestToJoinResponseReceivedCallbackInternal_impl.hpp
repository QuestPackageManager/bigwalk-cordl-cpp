#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinResponseReceivedCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinResponseReceivedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponseReceivedCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal* Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal::OnRequestToJoinResponseReceivedCallbackInternal()   {
}
