#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingRulesResponse.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingRulesResponse_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingRulesResponse_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805827c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::*)(::StringW, ::StringW)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180582750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::Invoke(::StringW  pchRule, ::StringW  pchValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchRule, pchValue);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::BeginInvoke(::StringW  pchRule, ::StringW  pchValue, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRule, pchValue, callback, object);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded* Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded::ISteamMatchmakingRulesResponse_RulesResponded()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::*)()>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::*)(::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond* Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond::ISteamMatchmakingRulesResponse_RulesFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::*)()>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::*)(::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete* Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete::ISteamMatchmakingRulesResponse_RulesRefreshComplete()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805526d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180552640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::Invoke(::System::IntPtr  thisptr, ::System::IntPtr  pchRule, ::System::IntPtr  pchValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, pchRule, pchValue);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::BeginInvoke(::System::IntPtr  thisptr, ::System::IntPtr  pchRule, ::System::IntPtr  pchValue, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, pchRule, pchValue, callback, object);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded* Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded::ISteamMatchmakingRulesResponse_InternalRulesResponded()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::Invoke(::System::IntPtr  thisptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, callback, object);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond* Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::*)(::System::IAsyncResult*)>(&::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::Invoke(::System::IntPtr  thisptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IAsyncResult* Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, thisptr, callback, object);
}
inline void Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse_VTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse_VTable::*)()>(&::Steamworks::ISteamMatchmakingRulesResponse_VTable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*& Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_get_m_VTRulesResponded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRulesResponded;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded* const& Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_get_m_VTRulesResponded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRulesResponded;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_set_m_VTRulesResponded(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTRulesResponded = value;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*& Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_get_m_VTRulesFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRulesFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond* const& Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_get_m_VTRulesFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRulesFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_set_m_VTRulesFailedToRespond(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTRulesFailedToRespond = value;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*& Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_get_m_VTRulesRefreshComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRulesRefreshComplete;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* const& Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_get_m_VTRulesRefreshComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTRulesRefreshComplete;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse_VTable::__cordl_internal_set_m_VTRulesRefreshComplete(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTRulesRefreshComplete = value;
}
inline void Steamworks::ISteamMatchmakingRulesResponse_VTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse_VTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse_VTable* Steamworks::ISteamMatchmakingRulesResponse_VTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse_VTable*>());
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_VTable::ISteamMatchmakingRulesResponse_VTable()   {
}
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse::*)(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*, ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*, ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*)>(&::Steamworks::ISteamMatchmakingRulesResponse::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180551b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse::*)()>(&::Steamworks::ISteamMatchmakingRulesResponse::Finalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805514d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                    {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse.InternalOnRulesResponded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse::InternalOnRulesResponded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180551b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"InternalOnRulesResponded", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse.InternalOnRulesFailedToRespond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse::InternalOnRulesFailedToRespond)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"InternalOnRulesFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse.InternalOnRulesRefreshComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamMatchmakingRulesResponse::*)(::System::IntPtr)>(&::Steamworks::ISteamMatchmakingRulesResponse::InternalOnRulesRefreshComplete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180551810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"InternalOnRulesRefreshComplete", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamMatchmakingRulesResponse.op_Explicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::ISteamMatchmakingRulesResponse*)>(&::Steamworks::ISteamMatchmakingRulesResponse::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805517a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_VTable*& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_VTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_VTable* const& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_VTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VTable;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingRulesResponse_VTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VTable = value;
}
constexpr ::System::IntPtr& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_pVTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr ::System::IntPtr const& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_pVTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pVTable;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_set_m_pVTable(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pVTable = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_pGCHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_pGCHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pGCHandle;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pGCHandle = value;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_RulesResponded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RulesResponded;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded* const& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_RulesResponded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RulesResponded;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_set_m_RulesResponded(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RulesResponded = value;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_RulesFailedToRespond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RulesFailedToRespond;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond* const& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_RulesFailedToRespond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RulesFailedToRespond;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_set_m_RulesFailedToRespond(::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RulesFailedToRespond = value;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_RulesRefreshComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RulesRefreshComplete;
}
constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete* const& Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_get_m_RulesRefreshComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RulesRefreshComplete;
}
constexpr void Steamworks::ISteamMatchmakingRulesResponse::__cordl_internal_set_m_RulesRefreshComplete(::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RulesRefreshComplete = value;
}
inline void Steamworks::ISteamMatchmakingRulesResponse::_ctor(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  onRulesResponded, ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  onRulesFailedToRespond, ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  onRulesRefreshComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onRulesResponded, onRulesFailedToRespond, onRulesRefreshComplete);
}
inline void Steamworks::ISteamMatchmakingRulesResponse::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Steamworks::ISteamMatchmakingRulesResponse::InternalOnRulesResponded(::System::IntPtr  thisptr, ::System::IntPtr  pchRule, ::System::IntPtr  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"InternalOnRulesResponded", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr, pchRule, pchValue);
}
inline void Steamworks::ISteamMatchmakingRulesResponse::InternalOnRulesFailedToRespond(::System::IntPtr  thisptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"InternalOnRulesFailedToRespond", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline void Steamworks::ISteamMatchmakingRulesResponse::InternalOnRulesRefreshComplete(::System::IntPtr  thisptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"InternalOnRulesRefreshComplete", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisptr);
}
inline ::System::IntPtr Steamworks::ISteamMatchmakingRulesResponse::op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingRulesResponse*  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamMatchmakingRulesResponse*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline ::Steamworks::ISteamMatchmakingRulesResponse* Steamworks::ISteamMatchmakingRulesResponse::New_ctor(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  onRulesResponded, ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  onRulesFailedToRespond, ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  onRulesRefreshComplete)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::ISteamMatchmakingRulesResponse*>(onRulesResponded, onRulesFailedToRespond, onRulesRefreshComplete));
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamMatchmakingRulesResponse::ISteamMatchmakingRulesResponse()   {
}
