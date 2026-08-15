#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/OnJoinGameAcceptedCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnJoinGameAcceptedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__JoinGameAcceptedCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f94b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal* Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallbackInternal::OnJoinGameAcceptedCallbackInternal()   {
}
