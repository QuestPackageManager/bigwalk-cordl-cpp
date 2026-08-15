#pragma once
// IWYU pragma private; include "Mirror/SpawnHandlerDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mirror/zzzz__SpawnHandlerDelegate_def.hpp"
#include "Mirror/zzzz__SpawnMessage_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::SpawnHandlerDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SpawnHandlerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Mirror::SpawnHandlerDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815983a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpawnHandlerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::SpawnHandlerDelegate::*)(::Mirror::SpawnMessage)>(&::Mirror::SpawnHandlerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x2c90;
  constexpr static std::size_t addrs = 0x180ccc5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(),
                    {::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpawnHandlerDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Mirror::SpawnHandlerDelegate::*)(::Mirror::SpawnMessage, ::System::AsyncCallback*, ::System::Object*)>(&::Mirror::SpawnHandlerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815982a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(),
                    {::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpawnHandlerDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::SpawnHandlerDelegate::*)(::System::IAsyncResult*)>(&::Mirror::SpawnHandlerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(),
                    {::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Mirror::SpawnHandlerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::SpawnHandlerDelegate::Invoke(::Mirror::SpawnMessage  msg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, msg);
}
inline ::System::IAsyncResult* Mirror::SpawnHandlerDelegate::BeginInvoke(::Mirror::SpawnMessage  msg, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, msg, callback, object);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::SpawnHandlerDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SpawnHandlerDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, result);
}
inline ::Mirror::SpawnHandlerDelegate* Mirror::SpawnHandlerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SpawnHandlerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Mirror::SpawnHandlerDelegate::SpawnHandlerDelegate()   {
}
