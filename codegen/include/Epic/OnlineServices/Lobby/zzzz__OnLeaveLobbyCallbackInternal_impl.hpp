#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLeaveLobbyCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveLobbyCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal::OnLeaveLobbyCallbackInternal()   {
}
