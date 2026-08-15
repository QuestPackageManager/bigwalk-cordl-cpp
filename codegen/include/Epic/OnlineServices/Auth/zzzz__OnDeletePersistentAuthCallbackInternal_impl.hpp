#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnDeletePersistentAuthCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnDeletePersistentAuthCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__DeletePersistentAuthCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805279d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal* Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallbackInternal::OnDeletePersistentAuthCallbackInternal()   {
}
