#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnVerifyIdTokenCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnVerifyIdTokenCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__VerifyIdTokenCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal* Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal::OnVerifyIdTokenCallbackInternal()   {
}
