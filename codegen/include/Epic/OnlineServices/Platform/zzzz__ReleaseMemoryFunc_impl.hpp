#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/ReleaseMemoryFunc.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ReleaseMemoryFunc_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReleaseMemoryFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::ReleaseMemoryFunc::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Platform::ReleaseMemoryFunc::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReleaseMemoryFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::ReleaseMemoryFunc::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::ReleaseMemoryFunc::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReleaseMemoryFunc.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Platform::ReleaseMemoryFunc::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Platform::ReleaseMemoryFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::ReleaseMemoryFunc.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::ReleaseMemoryFunc::*)(::System::IAsyncResult*)>(&::Epic::OnlineServices::Platform::ReleaseMemoryFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::ReleaseMemoryFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Platform::ReleaseMemoryFunc::Invoke(::System::IntPtr  pointer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Platform::ReleaseMemoryFunc::BeginInvoke(::System::IntPtr  pointer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pointer, callback, object);
}
inline void Epic::OnlineServices::Platform::ReleaseMemoryFunc::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Epic::OnlineServices::Platform::ReleaseMemoryFunc* Epic::OnlineServices::Platform::ReleaseMemoryFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Platform::ReleaseMemoryFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::ReleaseMemoryFunc::ReleaseMemoryFunc()   {
}
