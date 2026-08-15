#pragma once
// IWYU pragma private; include "Mirror/NetworkAuthenticator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__UnityEventNetworkConnection_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::OnStartServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                    {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::OnStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                    {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.OnServerAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAuthenticator::OnServerAuthenticate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                    {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.ServerAccept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAuthenticator::ServerAccept)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181517840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ServerAccept", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.ServerReject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAuthenticator::ServerReject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181537740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ServerReject", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::OnStartClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                    {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::OnStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                    {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.OnClientAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::OnClientAuthenticate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                    {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.ClientAccept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::ClientAccept)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181537690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ClientAccept", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.ClientReject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::ClientReject)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815376b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ClientReject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAuthenticator::*)()>(&::Mirror::NetworkAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181537770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::UnityEventNetworkConnection*& Mirror::NetworkAuthenticator::__cordl_internal_get_OnServerAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServerAuthenticated;
}
constexpr ::Mirror::UnityEventNetworkConnection* const& Mirror::NetworkAuthenticator::__cordl_internal_get_OnServerAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnServerAuthenticated;
}
constexpr void Mirror::NetworkAuthenticator::__cordl_internal_set_OnServerAuthenticated(::Mirror::UnityEventNetworkConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnServerAuthenticated = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Mirror::NetworkAuthenticator::__cordl_internal_get_OnClientAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientAuthenticated;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Mirror::NetworkAuthenticator::__cordl_internal_get_OnClientAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientAuthenticated;
}
constexpr void Mirror::NetworkAuthenticator::__cordl_internal_set_OnClientAuthenticated(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientAuthenticated = value;
}
inline void Mirror::NetworkAuthenticator::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkAuthenticator::ServerAccept(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ServerAccept", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkAuthenticator::ServerReject(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ServerReject", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkAuthenticator::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::OnClientAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAuthenticator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::ClientAccept()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ClientAccept", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::ClientReject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"ClientReject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkAuthenticator* Mirror::NetworkAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkAuthenticator*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkAuthenticator::NetworkAuthenticator()   {
}
