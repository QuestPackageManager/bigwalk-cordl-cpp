#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingPlayersResponse.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingPlayersResponse_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingPlayersResponse_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18054aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::*)(::StringW, int32_t, float_t)>(&::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::Invoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18054adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::*)(::StringW, int32_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054ad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::Invoke(::StringW  pchName, int32_t  nScore, float_t  flTimePlayed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchName, nScore, flTimePlayed);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::BeginInvoke(::StringW  pchName, int32_t  nScore, float_t  flTimePlayed, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchName, nScore, flTimePlayed, callback, object);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList* Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList::ISteamMatchmakingPlayersResponse_AddPlayerToList()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::*)()>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::*)(::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::*)()>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::*)(::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::*)(::System::IntPtr, ::System::IntPtr, int32_t, float_t)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::*)(::System::IntPtr, ::System::IntPtr, int32_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::Invoke(::System::IntPtr  thisptr, ::System::IntPtr  pchName, int32_t  nScore, float_t  flTimePlayed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, pchName, nScore, flTimePlayed);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::BeginInvoke(::System::IntPtr  thisptr, ::System::IntPtr  pchName, int32_t  nScore, float_t  flTimePlayed, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, pchName, nScore, flTimePlayed, callback, object);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::Invoke(::System::IntPtr  thisptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, callback, object);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::Invoke(::System::IntPtr  thisptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, callback, object);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete* Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse_VTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse_VTable::*)()>(&::Steamworks::ISteamMatchmakingPlayersResponse_VTable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*& Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_get_m_VTAddPlayerToList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTAddPlayerToList;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* const& Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_get_m_VTAddPlayerToList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTAddPlayerToList;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_set_m_VTAddPlayerToList(::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTAddPlayerToList = value;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*& Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_get_m_VTPlayersFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTPlayersFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* const& Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_get_m_VTPlayersFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTPlayersFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_set_m_VTPlayersFailedToRespond(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTPlayersFailedToRespond = value;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*& Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_get_m_VTPlayersRefreshComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTPlayersRefreshComplete;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete* const& Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_get_m_VTPlayersRefreshComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTPlayersRefreshComplete;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse_VTable::__cordl_internal_set_m_VTPlayersRefreshComplete(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTPlayersRefreshComplete = value;
}
inline void Steamworks::ISteamMatchmakingPlayersResponse_VTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse_VTable* Steamworks::ISteamMatchmakingPlayersResponse_VTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse_VTable*>());
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_VTable::ISteamMatchmakingPlayersResponse_VTable()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse::*)(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*)>(&::Steamworks::ISteamMatchmakingPlayersResponse::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180551840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse::*)()>(&::Steamworks::ISteamMatchmakingPlayersResponse::Finalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805514d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse.InternalOnAddPlayerToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse::*)(::System::IntPtr, ::System::IntPtr, int32_t, float_t)>(&::Steamworks::ISteamMatchmakingPlayersResponse::InternalOnAddPlayerToList)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805517c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"InternalOnAddPlayerToList", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse.InternalOnPlayersFailedToRespond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse::InternalOnPlayersFailedToRespond)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"InternalOnPlayersFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse.InternalOnPlayersRefreshComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingPlayersResponse::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingPlayersResponse::InternalOnPlayersRefreshComplete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"InternalOnPlayersRefreshComplete", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingPlayersResponse.op_Explicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::ISteamMatchmakingPlayersResponse*)>(&::Steamworks::ISteamMatchmakingPlayersResponse::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805517a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_VTable*& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_VTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_VTable* const& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_VTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingPlayersResponse_VTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTable = value;
}
constexpr ::System::IntPtr& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_pVTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr ::System::IntPtr const& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_pVTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_set_m_pVTable(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pVTable = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_pGCHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_pGCHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pGCHandle = value;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_AddPlayerToList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddPlayerToList;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList* const& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_AddPlayerToList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddPlayerToList;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_set_m_AddPlayerToList(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddPlayerToList = value;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_PlayersFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayersFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* const& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_PlayersFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayersFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_set_m_PlayersFailedToRespond(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayersFailedToRespond = value;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_PlayersRefreshComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayersRefreshComplete;
}
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* const& Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_get_m_PlayersRefreshComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayersRefreshComplete;
}
constexpr void Steamworks::ISteamMatchmakingPlayersResponse::__cordl_internal_set_m_PlayersRefreshComplete(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayersRefreshComplete = value;
}
inline void Steamworks::ISteamMatchmakingPlayersResponse::_ctor(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  onAddPlayerToList, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  onPlayersFailedToRespond, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  onPlayersRefreshComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onAddPlayerToList, onPlayersFailedToRespond, onPlayersRefreshComplete);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse::InternalOnAddPlayerToList(::System::IntPtr  thisptr, ::System::IntPtr  pchName, int32_t  nScore, float_t  flTimePlayed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"InternalOnAddPlayerToList", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, pchName, nScore, flTimePlayed);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse::InternalOnPlayersFailedToRespond(::System::IntPtr  thisptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"InternalOnPlayersFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline void Steamworks::ISteamMatchmakingPlayersResponse::InternalOnPlayersRefreshComplete(::System::IntPtr  thisptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"InternalOnPlayersRefreshComplete", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IntPtr Steamworks::ISteamMatchmakingPlayersResponse::op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingPlayersResponse*  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingPlayersResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline ::Steamworks::ISteamMatchmakingPlayersResponse* Steamworks::ISteamMatchmakingPlayersResponse::New_ctor(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  onAddPlayerToList, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  onPlayersFailedToRespond, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  onPlayersRefreshComplete)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingPlayersResponse*>(onAddPlayerToList, onPlayersFailedToRespond, onPlayersRefreshComplete));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingPlayersResponse::ISteamMatchmakingPlayersResponse()   {
}
