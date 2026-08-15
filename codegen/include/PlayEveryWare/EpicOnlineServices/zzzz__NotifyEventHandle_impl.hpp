#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/NotifyEventHandle.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__GenericSafeHandle_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__NotifyEventHandle_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__NotifyEventHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::*)(uint64_t)>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180546360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::Invoke(uint64_t  aHandle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aHandle);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::BeginInvoke(uint64_t  aHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, aHandle, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate* PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate::NotifyEventHandle_RemoveDelegate()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::*)(uint64_t, ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*)>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180541ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::*)()>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180541a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::*)()>(&::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180541a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*& PlayEveryWare::EpicOnlineServices::NotifyEventHandle::__cordl_internal_get_removeDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeDelegate;
}
constexpr ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate* const& PlayEveryWare::EpicOnlineServices::NotifyEventHandle::__cordl_internal_get_removeDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeDelegate;
}
constexpr void PlayEveryWare::EpicOnlineServices::NotifyEventHandle::__cordl_internal_set_removeDelegate(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeDelegate = value;
}
inline void PlayEveryWare::EpicOnlineServices::NotifyEventHandle::_ctor(uint64_t  aLong, ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  aRemoveDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aLong, aRemoveDelegate);
}
inline void PlayEveryWare::EpicOnlineServices::NotifyEventHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::NotifyEventHandle::IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* PlayEveryWare::EpicOnlineServices::NotifyEventHandle::New_ctor(uint64_t  aLong, ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  aRemoveDelegate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(aLong, aRemoveDelegate));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle::NotifyEventHandle()   {
}
