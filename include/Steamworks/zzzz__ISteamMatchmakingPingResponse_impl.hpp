#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingPingResponse.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingPingResponse_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingPingResponse_def.hpp"
#include "Steamworks/zzzz__gameserveritem_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805829b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::*)(::Steamworks::gameserveritem_t*)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::*)(::Steamworks::gameserveritem_t*, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPingResponse_ServerResponded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPingResponse_ServerResponded::Invoke(::Steamworks::gameserveritem_t*  server)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, server);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPingResponse_ServerResponded::BeginInvoke(::Steamworks::gameserveritem_t*  server, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, server, callback, object);
}
inline void Steamworks::ISteamMatchmakingPingResponse_ServerResponded::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded* Steamworks::ISteamMatchmakingPingResponse_ServerResponded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded::ISteamMatchmakingPingResponse_ServerResponded()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::*)()>(&::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::*)(::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond* Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond::ISteamMatchmakingPingResponse_ServerFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::*)(::System::IntPtr, ::Steamworks::gameserveritem_t*)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::*)(::System::IntPtr, ::Steamworks::gameserveritem_t*, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180552810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::Invoke(::System::IntPtr  thisptr, ::Steamworks::gameserveritem_t*  server)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, server);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::gameserveritem_t*  server, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, server, callback, object);
}
inline void Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded* Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded::ISteamMatchmakingPingResponse_InternalServerResponded()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::Invoke(::System::IntPtr  thisptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, callback, object);
}
inline void Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond::ISteamMatchmakingPingResponse_InternalServerFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse_VTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse_VTable::*)()>(&::Steamworks::ISteamMatchmakingPingResponse_VTable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*& Steamworks::ISteamMatchmakingPingResponse_VTable::__cordl_internal_get_m_VTServerResponded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerResponded;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded* const& Steamworks::ISteamMatchmakingPingResponse_VTable::__cordl_internal_get_m_VTServerResponded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerResponded;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse_VTable::__cordl_internal_set_m_VTServerResponded(::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTServerResponded = value;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*& Steamworks::ISteamMatchmakingPingResponse_VTable::__cordl_internal_get_m_VTServerFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* const& Steamworks::ISteamMatchmakingPingResponse_VTable::__cordl_internal_get_m_VTServerFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse_VTable::__cordl_internal_set_m_VTServerFailedToRespond(::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTServerFailedToRespond = value;
}
inline void Steamworks::ISteamMatchmakingPingResponse_VTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::ISteamMatchmakingPingResponse_VTable* Steamworks::ISteamMatchmakingPingResponse_VTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPingResponse_VTable*>());
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPingResponse_VTable::ISteamMatchmakingPingResponse_VTable()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse::*)(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*, ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*)>(&::Steamworks::ISteamMatchmakingPingResponse::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180551570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse::*)()>(&::Steamworks::ISteamMatchmakingPingResponse::Finalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805514d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse.InternalOnServerResponded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse::*)(::System::IntPtr, ::Steamworks::gameserveritem_t*)>(&::Steamworks::ISteamMatchmakingPingResponse::InternalOnServerResponded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {"InternalOnServerResponded", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::gameserveritem_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse.InternalOnServerFailedToRespond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPingResponse::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPingResponse::InternalOnServerFailedToRespond)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {"InternalOnServerFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPingResponse.op_Explicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::ISteamMatchmakingPingResponse*)>(&::Steamworks::ISteamMatchmakingPingResponse::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805517a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingPingResponse_VTable*& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_VTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_VTable* const& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_VTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingPingResponse_VTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTable = value;
}
constexpr ::System::IntPtr& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_pVTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr ::System::IntPtr const& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_pVTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_set_m_pVTable(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pVTable = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_pGCHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_pGCHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pGCHandle = value;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_ServerResponded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerResponded;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded* const& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_ServerResponded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerResponded;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_set_m_ServerResponded(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ServerResponded = value;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_ServerFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond* const& Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_get_m_ServerFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingPingResponse::__cordl_internal_set_m_ServerFailedToRespond(::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ServerFailedToRespond = value;
}
inline void Steamworks::ISteamMatchmakingPingResponse::_ctor(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  onServerFailedToRespond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onServerResponded, onServerFailedToRespond);
}
inline void Steamworks::ISteamMatchmakingPingResponse::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Steamworks::ISteamMatchmakingPingResponse::InternalOnServerResponded(::System::IntPtr  thisptr, ::Steamworks::gameserveritem_t*  server)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {"InternalOnServerResponded", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::gameserveritem_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, server);
}
inline void Steamworks::ISteamMatchmakingPingResponse::InternalOnServerFailedToRespond(::System::IntPtr  thisptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {"InternalOnServerFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IntPtr Steamworks::ISteamMatchmakingPingResponse::op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingPingResponse*  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPingResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline ::Steamworks::ISteamMatchmakingPingResponse* Steamworks::ISteamMatchmakingPingResponse::New_ctor(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  onServerFailedToRespond)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPingResponse*>(onServerResponded, onServerFailedToRespond));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPingResponse::ISteamMatchmakingPingResponse()   {
}
