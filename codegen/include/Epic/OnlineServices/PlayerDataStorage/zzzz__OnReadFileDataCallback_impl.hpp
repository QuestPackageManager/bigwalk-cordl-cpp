#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnReadFileDataCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnReadFileDataCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadFileDataCallbackInfo_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804de8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::ReadResult (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::ReadResult (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804de840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::ReadResult>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::ReadResult>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback* Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback::OnReadFileDataCallback()   {
}
