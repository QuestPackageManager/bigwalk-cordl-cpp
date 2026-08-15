#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/IServer.hpp"
#include "Mirror/FizzySteam/zzzz__IServer_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::IServer.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IServer::*)()>(&::Mirror::FizzySteam::IServer::ReceiveData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IServer::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::IServer::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IServer::*)(int32_t)>(&::Mirror::FizzySteam::IServer::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IServer.FlushData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IServer::*)()>(&::Mirror::FizzySteam::IServer::FlushData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IServer.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::FizzySteam::IServer::*)(int32_t)>(&::Mirror::FizzySteam::IServer::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IServer.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IServer::*)()>(&::Mirror::FizzySteam::IServer::Shutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Mirror::FizzySteam::IServer::ReceiveData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::IServer::Send(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data, channelId);
}
inline void Mirror::FizzySteam::IServer::Disconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::IServer::FlushData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::FizzySteam::IServer::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::IServer::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IServer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
