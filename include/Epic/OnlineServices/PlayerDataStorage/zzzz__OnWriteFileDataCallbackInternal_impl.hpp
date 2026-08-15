#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileDataCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnWriteFileDataCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileDataCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804fbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::WriteResult (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>, ::System::IntPtr, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>, ::System::IntPtr, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804fbbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::WriteResult (::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804fbc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::System::IntPtr  outDataBuffer, ::by_ref<uint32_t>  outDataWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::WriteResult>(this, ___internal_method, data, outDataBuffer, outDataWritten);
}
inline ::System::IAsyncResult* Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::System::IntPtr  outDataBuffer, ::by_ref<uint32_t>  outDataWritten, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, outDataBuffer, outDataWritten, callback, object);
}
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::by_ref<uint32_t>  outDataWritten, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::WriteResult>(this, ___internal_method, data, outDataWritten, result);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal::OnWriteFileDataCallbackInternal()   {
}
