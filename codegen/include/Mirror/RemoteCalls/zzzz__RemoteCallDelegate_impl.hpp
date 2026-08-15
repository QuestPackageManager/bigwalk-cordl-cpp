#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/RemoteCallDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallDelegate_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteCallDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteCalls::RemoteCallDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Mirror::RemoteCalls::RemoteCallDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180382c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteCallDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteCalls::RemoteCallDelegate::*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::RemoteCalls::RemoteCallDelegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(),
                    {::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteCallDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Mirror::RemoteCalls::RemoteCallDelegate::*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*, ::System::AsyncCallback*, ::System::Object*)>(&::Mirror::RemoteCalls::RemoteCallDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180382860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(),
                    {::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteCallDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteCalls::RemoteCallDelegate::*)(::System::IAsyncResult*)>(&::Mirror::RemoteCalls::RemoteCallDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(),
                    {::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Mirror::RemoteCalls::RemoteCallDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mirror::RemoteCalls::RemoteCallDelegate::Invoke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, reader, senderConnection);
}
inline ::System::IAsyncResult* Mirror::RemoteCalls::RemoteCallDelegate::BeginInvoke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj, reader, senderConnection, callback, object);
}
inline void Mirror::RemoteCalls::RemoteCallDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Mirror::RemoteCalls::RemoteCallDelegate* Mirror::RemoteCalls::RemoteCallDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::RemoteCalls::RemoteCallDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Mirror::RemoteCalls::RemoteCallDelegate::RemoteCallDelegate()   {
}
