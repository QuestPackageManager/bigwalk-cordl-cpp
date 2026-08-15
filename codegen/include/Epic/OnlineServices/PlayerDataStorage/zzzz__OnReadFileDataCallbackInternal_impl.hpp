#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnReadFileDataCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnReadFileDataCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadFileDataCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804de8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::ReadResult (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::ReadResult (::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804de840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::ReadResult>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::ReadResult>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal::OnReadFileDataCallbackInternal()   {
}
