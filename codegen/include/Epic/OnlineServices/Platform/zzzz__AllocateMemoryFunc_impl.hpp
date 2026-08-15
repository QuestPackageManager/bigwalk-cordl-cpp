#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/AllocateMemoryFunc.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__AllocateMemoryFunc_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::AllocateMemoryFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::AllocateMemoryFunc::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Platform::AllocateMemoryFunc::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804f6ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::AllocateMemoryFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::AllocateMemoryFunc::*)(::System::UIntPtr, ::System::UIntPtr)>(&::Epic::OnlineServices::Platform::AllocateMemoryFunc::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::AllocateMemoryFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Platform::AllocateMemoryFunc::*)(::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Platform::AllocateMemoryFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f6a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::AllocateMemoryFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::AllocateMemoryFunc::*)(::System::IAsyncResult*)>(&::Epic::OnlineServices::Platform::AllocateMemoryFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::AllocateMemoryFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::AllocateMemoryFunc::Invoke(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, sizeInBytes, alignment);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Platform::AllocateMemoryFunc::BeginInvoke(::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignment, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sizeInBytes, alignment, callback, object);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::AllocateMemoryFunc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::Epic::OnlineServices::Platform::AllocateMemoryFunc* Epic::OnlineServices::Platform::AllocateMemoryFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Platform::AllocateMemoryFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::AllocateMemoryFunc::AllocateMemoryFunc()   {
}
