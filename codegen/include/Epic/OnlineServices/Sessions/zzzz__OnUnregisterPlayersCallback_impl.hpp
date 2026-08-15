#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnUnregisterPlayersCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUnregisterPlayersCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UnregisterPlayersCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::*)(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo>)>(&::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::*)(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ec3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::*)(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::Invoke(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback* Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback::OnUnregisterPlayersCallback()   {
}
