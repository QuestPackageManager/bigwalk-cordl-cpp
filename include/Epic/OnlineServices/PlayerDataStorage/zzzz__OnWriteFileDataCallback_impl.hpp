#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileDataCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnWriteFileDataCallback_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileDataCallbackInfo_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteResult_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804fbec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::WriteResult (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>, ::by_ref<::System::ArraySegment_1<uint8_t>>)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>, ::by_ref<::System::ArraySegment_1<uint8_t>>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804fbdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::WriteResult (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>, ::by_ref<::System::ArraySegment_1<uint8_t>>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804fbc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  data, ::by_ref<::System::ArraySegment_1<uint8_t>>  outDataBuffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::WriteResult>(this, ___internal_method, data, outDataBuffer);
}
inline ::System::IAsyncResult* Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  data, ::by_ref<::System::ArraySegment_1<uint8_t>>  outDataBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, outDataBuffer, callback, object);
}
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  data, ::by_ref<::System::ArraySegment_1<uint8_t>>  outDataBuffer, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::WriteResult>(this, ___internal_method, data, outDataBuffer, result);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback::OnWriteFileDataCallback()   {
}
