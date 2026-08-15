#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnQueryFileCompleteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnQueryFileCompleteCallback_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__QueryFileCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo>)>(&::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dd820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::*)(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::Invoke(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::EndInvoke(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback* Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallback::OnQueryFileCompleteCallback()   {
}
