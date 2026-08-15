#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugReceiver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugReceiver_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugHandler_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::Setup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803d08d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver.GetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> (*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::GetHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803d0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"GetHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver.OnConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::OnConnection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d0690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"OnConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver.OnDisconnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::OnDisconnection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d06e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"OnDisconnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver.OnRequestFromEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::OnRequestFromEditor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803d0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"OnRequestFromEditor", {}, {::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::setStaticF__isInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_isInitialized", ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(std::forward<bool>(value));
}
inline bool Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::getStaticF__isInitialized()  {
return ::cordl_internals::getStaticField<bool, "_isInitialized", ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>();
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::setStaticF__handler(::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>  value)  {
::cordl_internals::setStaticField<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>, "_handler", ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(std::forward<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>>(value));
}
inline ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::getStaticF__handler()  {
return ::cordl_internals::getStaticField<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>, "_handler", ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>();
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler> Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::GetHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"GetHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Shipmates::RemotePlayerDebug::RemotePlayerDebugHandler>>(nullptr, ___internal_method);
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::OnConnection(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"OnConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId);
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::OnDisconnection(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"OnDisconnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId);
}
inline void Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::OnRequestFromEditor(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver*>(),
                        {"OnRequestFromEditor", {}, {::i2c::type_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::RemotePlayerDebugReceiver::RemotePlayerDebugReceiver()   {
}
