#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnQueryJoinRoomTokenCompleteCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnQueryJoinRoomTokenCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__QueryJoinRoomTokenCompleteCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fa6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal::OnQueryJoinRoomTokenCompleteCallbackInternal()   {
}
