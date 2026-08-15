#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnRemoteConnectionClosedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::*)(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>)>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::*)(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805313c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::*)(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::Invoke(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback* Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback::OnRemoteConnectionClosedCallback()   {
}
