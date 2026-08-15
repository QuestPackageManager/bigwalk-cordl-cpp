#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ReallocateMemoryFunc.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ReallocateMemoryFunc_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReallocateMemoryFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::ReallocateMemoryFunc::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Platform::ReallocateMemoryFunc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805022c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReallocateMemoryFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::ReallocateMemoryFunc::*)(::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr)>(&::Epic::OnlineServices::Platform::ReallocateMemoryFunc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReallocateMemoryFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Platform::ReallocateMemoryFunc::*)(::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Platform::ReallocateMemoryFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805021a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReallocateMemoryFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Platform::ReallocateMemoryFunc::*)(::System::IAsyncResult*)>(&::Epic::OnlineServices::Platform::ReallocateMemoryFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::ReallocateMemoryFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::ReallocateMemoryFunc::Invoke(::System::IntPtr  pointer, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, pointer, sizeInBytes, alignment);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Platform::ReallocateMemoryFunc::BeginInvoke(::System::IntPtr  pointer, ::System::UIntPtr  sizeInBytes, ::System::UIntPtr  alignment, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pointer, sizeInBytes, alignment, callback, object);
}
inline ::System::IntPtr Epic::OnlineServices::Platform::ReallocateMemoryFunc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::Epic::OnlineServices::Platform::ReallocateMemoryFunc* Epic::OnlineServices::Platform::ReallocateMemoryFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Platform::ReallocateMemoryFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::ReallocateMemoryFunc::ReallocateMemoryFunc()   {
}
