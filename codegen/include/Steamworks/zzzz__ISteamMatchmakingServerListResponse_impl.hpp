#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingServerListResponse.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingServerListResponse_def.hpp"
#include "Steamworks/zzzz__EMatchMakingServerResponse_def.hpp"
#include "Steamworks/zzzz__HServerListRequest_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingServerListResponse_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::*)(::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::*)(::Steamworks::HServerListRequest, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::BeginInvoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180582880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::Invoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hRequest, iServer);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::BeginInvoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hRequest, iServer, callback, object);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded* Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded::ISteamMatchmakingServerListResponse_ServerResponded()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::*)(::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::*)(::Steamworks::HServerListRequest, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180582880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::Invoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hRequest, iServer);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::BeginInvoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hRequest, iServer, callback, object);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond* Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond::ISteamMatchmakingServerListResponse_ServerFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::*)(::Steamworks::HServerListRequest, ::Steamworks::EMatchMakingServerResponse)>(&::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::*)(::Steamworks::HServerListRequest, ::Steamworks::EMatchMakingServerResponse, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18057e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::Invoke(::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hRequest, response);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::BeginInvoke(::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hRequest, response, callback, object);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete* Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete::ISteamMatchmakingServerListResponse_RefreshComplete()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::*)(::System::IntPtr, ::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::*)(::System::IntPtr, ::Steamworks::HServerListRequest, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180552780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::Invoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, hRequest, iServer);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, hRequest, iServer, callback, object);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded* Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded::ISteamMatchmakingServerListResponse_InternalServerResponded()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::*)(::System::IntPtr, ::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::*)(::System::IntPtr, ::Steamworks::HServerListRequest, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180552780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::Invoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, hRequest, iServer);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, hRequest, iServer, callback, object);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond* Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::*)(::System::IntPtr, ::Steamworks::HServerListRequest, ::Steamworks::EMatchMakingServerResponse)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::*)(::System::IntPtr, ::Steamworks::HServerListRequest, ::Steamworks::EMatchMakingServerResponse, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180552440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::Invoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, hRequest, response);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, hRequest, response, callback, object);
}
inline void Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete* Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete::ISteamMatchmakingServerListResponse_InternalRefreshComplete()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse_VTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse_VTable::*)()>(&::Steamworks::ISteamMatchmakingServerListResponse_VTable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*& Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_get_m_VTServerResponded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerResponded;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded* const& Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_get_m_VTServerResponded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerResponded;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_set_m_VTServerResponded(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTServerResponded = value;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*& Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_get_m_VTServerFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond* const& Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_get_m_VTServerFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTServerFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_set_m_VTServerFailedToRespond(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTServerFailedToRespond = value;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*& Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_get_m_VTRefreshComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRefreshComplete;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete* const& Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_get_m_VTRefreshComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRefreshComplete;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse_VTable::__cordl_internal_set_m_VTRefreshComplete(::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTRefreshComplete = value;
}
inline void Steamworks::ISteamMatchmakingServerListResponse_VTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse_VTable* Steamworks::ISteamMatchmakingServerListResponse_VTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse_VTable*>());
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_VTable::ISteamMatchmakingServerListResponse_VTable()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse::*)(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*, ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*, ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*)>(&::Steamworks::ISteamMatchmakingServerListResponse::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180551f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse::*)()>(&::Steamworks::ISteamMatchmakingServerListResponse::Finalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805514d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse.InternalOnServerResponded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse::*)(::System::IntPtr, ::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::ISteamMatchmakingServerListResponse::InternalOnServerResponded)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180551ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"InternalOnServerResponded", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse.InternalOnServerFailedToRespond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse::*)(::System::IntPtr, ::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::ISteamMatchmakingServerListResponse::InternalOnServerFailedToRespond)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180551e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"InternalOnServerFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse.InternalOnRefreshComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingServerListResponse::*)(::System::IntPtr, ::Steamworks::HServerListRequest, ::Steamworks::EMatchMakingServerResponse)>(&::Steamworks::ISteamMatchmakingServerListResponse::InternalOnRefreshComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180551e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"InternalOnRefreshComplete", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<::Steamworks::EMatchMakingServerResponse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingServerListResponse.op_Explicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::ISteamMatchmakingServerListResponse::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805517a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_VTable*& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_VTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_VTable* const& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_VTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingServerListResponse_VTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTable = value;
}
constexpr ::System::IntPtr& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_pVTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr ::System::IntPtr const& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_pVTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_set_m_pVTable(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pVTable = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_pGCHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_pGCHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pGCHandle = value;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_ServerResponded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerResponded;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded* const& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_ServerResponded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerResponded;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_set_m_ServerResponded(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ServerResponded = value;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_ServerFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond* const& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_ServerFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ServerFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_set_m_ServerFailedToRespond(::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ServerFailedToRespond = value;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_RefreshComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshComplete;
}
constexpr ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete* const& Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_get_m_RefreshComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshComplete;
}
constexpr void Steamworks::ISteamMatchmakingServerListResponse::__cordl_internal_set_m_RefreshComplete(::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefreshComplete = value;
}
inline void Steamworks::ISteamMatchmakingServerListResponse::_ctor(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  onServerFailedToRespond, ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  onRefreshComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onServerResponded, onServerFailedToRespond, onRefreshComplete);
}
inline void Steamworks::ISteamMatchmakingServerListResponse::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Steamworks::ISteamMatchmakingServerListResponse::InternalOnServerResponded(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"InternalOnServerResponded", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, hRequest, iServer);
}
inline void Steamworks::ISteamMatchmakingServerListResponse::InternalOnServerFailedToRespond(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"InternalOnServerFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, hRequest, iServer);
}
inline void Steamworks::ISteamMatchmakingServerListResponse::InternalOnRefreshComplete(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"InternalOnRefreshComplete", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<::Steamworks::EMatchMakingServerResponse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, hRequest, response);
}
inline ::System::IntPtr Steamworks::ISteamMatchmakingServerListResponse::op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingServerListResponse*  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingServerListResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline ::Steamworks::ISteamMatchmakingServerListResponse* Steamworks::ISteamMatchmakingServerListResponse::New_ctor(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  onServerFailedToRespond, ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  onRefreshComplete)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingServerListResponse*>(onServerResponded, onServerFailedToRespond, onRefreshComplete));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingServerListResponse::ISteamMatchmakingServerListResponse()   {
}
