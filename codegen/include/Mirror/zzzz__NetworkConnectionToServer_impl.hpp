#pragma once
// IWYU pragma private; include "Mirror/NetworkConnectionToServer.hpp"
#include "Mirror/zzzz__NetworkConnection_impl.hpp"
#include "Mirror/zzzz__NetworkConnectionToServer_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkConnectionToServer.SendToTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToServer::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkConnectionToServer::SendToTransport)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181542600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnectionToServer*>(),
                    {::i2c::class_of<::Mirror::NetworkConnectionToServer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToServer::*)()>(&::Mirror::NetworkConnectionToServer::Disconnect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181542590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnectionToServer*>(),
                    {::i2c::class_of<::Mirror::NetworkConnectionToServer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToServer::*)()>(&::Mirror::NetworkConnectionToServer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181542650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkConnectionToServer::SendToTransport(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnectionToServer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::NetworkConnectionToServer::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnectionToServer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkConnectionToServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkConnectionToServer* Mirror::NetworkConnectionToServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkConnectionToServer*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkConnectionToServer::NetworkConnectionToServer()   {
}
