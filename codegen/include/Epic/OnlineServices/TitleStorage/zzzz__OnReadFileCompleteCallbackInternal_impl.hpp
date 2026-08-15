#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnReadFileCompleteCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__OnReadFileCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadFileCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>)>(&::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804de590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal* Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal::OnReadFileCompleteCallbackInternal()   {
}
