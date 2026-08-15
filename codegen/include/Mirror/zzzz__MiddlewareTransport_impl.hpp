#pragma once
// IWYU pragma private; include "Mirror/MiddlewareTransport.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "Mirror/zzzz__MiddlewareTransport_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::MiddlewareTransport.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::Available)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::MiddlewareTransport::*)(int32_t)>(&::Mirror::MiddlewareTransport::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.GetBatchThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::MiddlewareTransport::*)(int32_t)>(&::Mirror::MiddlewareTransport::GetBatchThreshold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::Shutdown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815754a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)(::StringW)>(&::Mirror::MiddlewareTransport::ClientConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181588470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ClientConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ClientDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::MiddlewareTransport::ClientSend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181588580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ClientLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ClientLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ServerActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ServerStart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181588630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ServerStop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815886d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::MiddlewareTransport::ServerSend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815885f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)(int32_t)>(&::Mirror::MiddlewareTransport::ServerDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::MiddlewareTransport::*)(int32_t)>(&::Mirror::MiddlewareTransport::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ServerUri)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport.ServerLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::ServerLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815885c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                    {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MiddlewareTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MiddlewareTransport::*)()>(&::Mirror::MiddlewareTransport::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::Transport>& Mirror::MiddlewareTransport::__cordl_internal_get_inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
constexpr ::UnityW<::Mirror::Transport> const& Mirror::MiddlewareTransport::__cordl_internal_get_inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
constexpr void Mirror::MiddlewareTransport::__cordl_internal_set_inner(::UnityW<::Mirror::Transport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inner = value;
}
inline bool Mirror::MiddlewareTransport::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Mirror::MiddlewareTransport::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline int32_t Mirror::MiddlewareTransport::GetBatchThreshold(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline void Mirror::MiddlewareTransport::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline bool Mirror::MiddlewareTransport::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::MiddlewareTransport::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ClientLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::MiddlewareTransport::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void Mirror::MiddlewareTransport::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline ::StringW Mirror::MiddlewareTransport::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline ::System::Uri* Mirror::MiddlewareTransport::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::ServerLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MiddlewareTransport*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MiddlewareTransport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MiddlewareTransport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::MiddlewareTransport* Mirror::MiddlewareTransport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::MiddlewareTransport*>());
}
// Ctor Parameters []
constexpr ::Mirror::MiddlewareTransport::MiddlewareTransport()   {
}
