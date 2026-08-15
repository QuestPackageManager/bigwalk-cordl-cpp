#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRejectRequestToJoinCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRejectRequestToJoinCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RejectRequestToJoinCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal* Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal::OnRejectRequestToJoinCallbackInternal()   {
}
