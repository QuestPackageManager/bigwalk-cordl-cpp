#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnDuplicateFileCompleteCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnDuplicateFileCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__DuplicateFileCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DuplicateFileCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnDuplicateFileCompleteCallbackInternal::OnDuplicateFileCompleteCallbackInternal()   {
}
