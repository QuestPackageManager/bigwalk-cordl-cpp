#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionEstablishedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedCallback_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180530510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::Invoke(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback::OnPeerConnectionEstablishedCallback()   {
}
