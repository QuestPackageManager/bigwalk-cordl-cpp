#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnFileTransferProgressCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnFileTransferProgressCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__FileTransferProgressCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>)>(&::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnFileTransferProgressCallbackInternal::OnFileTransferProgressCallbackInternal()   {
}
