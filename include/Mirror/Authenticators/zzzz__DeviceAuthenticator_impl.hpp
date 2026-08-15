#pragma once
// IWYU pragma private; include "Mirror/Authenticators/DeviceAuthenticator.hpp"
#include "Mirror/zzzz__NetworkAuthenticator_impl.hpp"
#include "Mirror/Authenticators/zzzz__DeviceAuthenticator_def.hpp"
#include "Mirror/Authenticators/zzzz__DeviceAuthenticator_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "clientDeviceID", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage::DeviceAuthenticator_AuthRequestMessage(::StringW  clientDeviceID) noexcept  {
this->clientDeviceID = clientDeviceID;
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage::DeviceAuthenticator_AuthRequestMessage()   {
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage::DeviceAuthenticator_AuthResponseMessage()   {
}
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)()>(&::Mirror::Authenticators::DeviceAuthenticator::OnStartServer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815142a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)()>(&::Mirror::Authenticators::DeviceAuthenticator::OnStopServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181514300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnServerAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::Authenticators::DeviceAuthenticator::OnServerAuthenticate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnAuthRequestMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage)>(&::Mirror::Authenticators::DeviceAuthenticator::OnAuthRequestMessage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815140d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                        {"OnAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)()>(&::Mirror::Authenticators::DeviceAuthenticator::OnStartClient)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181514250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)()>(&::Mirror::Authenticators::DeviceAuthenticator::OnStopClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815142f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnClientAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)()>(&::Mirror::Authenticators::DeviceAuthenticator::OnClientAuthenticate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815141a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                    {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator.OnAuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)(::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage)>(&::Mirror::Authenticators::DeviceAuthenticator::OnAuthResponseMessage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181514170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Authenticators::DeviceAuthenticator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Authenticators::DeviceAuthenticator::*)()>(&::Mirror::Authenticators::DeviceAuthenticator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c7e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Authenticators::DeviceAuthenticator::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                        {"OnAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnClientAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Authenticators::DeviceAuthenticator::OnAuthResponseMessage(::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                        {"OnAuthResponseMessage", {}, {::i2c::type_of<::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Mirror::Authenticators::DeviceAuthenticator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Authenticators::DeviceAuthenticator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Authenticators::DeviceAuthenticator* Mirror::Authenticators::DeviceAuthenticator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Authenticators::DeviceAuthenticator*>());
}
// Ctor Parameters []
constexpr ::Mirror::Authenticators::DeviceAuthenticator::DeviceAuthenticator()   {
}
