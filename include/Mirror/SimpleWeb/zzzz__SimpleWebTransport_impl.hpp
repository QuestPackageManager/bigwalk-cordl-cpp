#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebTransport.hpp"
#include "Mirror/SimpleWeb/zzzz__Log_impl.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebTransport_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Log_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebClient_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebServer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "Mirror/zzzz__PortTransport_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::get_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181588300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(uint16_t)>(&::Mirror::SimpleWeb::SimpleWebTransport::set_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181588310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.get_LogLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::Log_Levels (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::get_LogLevels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804081d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"get_LogLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.set_LogLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(::Mirror::SimpleWeb::Log_Levels)>(&::Mirror::SimpleWeb::SimpleWebTransport::set_LogLevels)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158c630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"set_LogLevels", {}, {::i2c::type_of<::Mirror::SimpleWeb::Log_Levels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.get_TcpConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::TcpConfig (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::get_TcpConfig)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"get_TcpConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158b950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158b950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::Available)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::SimpleWeb::SimpleWebTransport::*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebTransport::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::Shutdown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18158c330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.GetClientScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::GetClientScheme)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158bda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"GetClientScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ClientConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158bc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(::StringW)>(&::Mirror::SimpleWeb::SimpleWebTransport::ClientConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18158b9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(::System::Uri*)>(&::Mirror::SimpleWeb::SimpleWebTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18158ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ClientDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158bc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::SimpleWebTransport::ClientSend)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18158bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.GetServerScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::GetServerScheme)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158bdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"GetServerScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerUri)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18158c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerStart)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18158bf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerStop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18158c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerDisconnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18158be10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerSend)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18158bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::SimpleWebTransport::*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158be90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158c550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport._ClientConnect_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)()>(&::Mirror::SimpleWeb::SimpleWebTransport::_ClientConnect_b__36_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ClientConnect>b__36_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport._ClientConnect_b__36_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::SimpleWebTransport::_ClientConnect_b__36_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158c400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ClientConnect>b__36_1", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport._ClientConnect_b__36_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(::System::Exception*)>(&::Mirror::SimpleWeb::SimpleWebTransport::_ClientConnect_b__36_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18158c440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ClientConnect>b__36_2", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport._ServerStart_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::SimpleWebTransport::_ServerStart_b__43_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ServerStart>b__43_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebTransport._ServerStart_b__43_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebTransport::*)(int32_t, ::System::Exception*)>(&::Mirror::SimpleWeb::SimpleWebTransport::_ServerStart_b__43_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18158c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ServerStart>b__43_1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr uint16_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_port(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_ClientUseDefaultPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientUseDefaultPort;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_ClientUseDefaultPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientUseDefaultPort;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_ClientUseDefaultPort(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientUseDefaultPort = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_maxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessageSize;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_maxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessageSize;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_maxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMessageSize = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_handshakeMaxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handshakeMaxSize;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_handshakeMaxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handshakeMaxSize;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_handshakeMaxSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handshakeMaxSize = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_noDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noDelay;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_noDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noDelay;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_noDelay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noDelay = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sendTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTimeout;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sendTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTimeout;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_sendTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendTimeout = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_receiveTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveTimeout;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_receiveTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveTimeout;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_receiveTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveTimeout = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_serverMaxMessagesPerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMaxMessagesPerTick;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_serverMaxMessagesPerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMaxMessagesPerTick;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_serverMaxMessagesPerTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverMaxMessagesPerTick = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_clientMaxMessagesPerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMaxMessagesPerTick;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_clientMaxMessagesPerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMaxMessagesPerTick;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_clientMaxMessagesPerTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientMaxMessagesPerTick = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_batchSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchSend;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_batchSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchSend;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_batchSend(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batchSend = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_waitBeforeSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitBeforeSend;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_waitBeforeSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitBeforeSend;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_waitBeforeSend(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitBeforeSend = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_clientUseWss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientUseWss;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_clientUseWss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientUseWss;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_clientUseWss(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientUseWss = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sslEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslEnabled;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sslEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslEnabled;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_sslEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sslEnabled = value;
}
constexpr ::StringW& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sslCertJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslCertJson;
}
constexpr ::StringW const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sslCertJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslCertJson;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_sslCertJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sslCertJson = value;
}
constexpr ::System::Security::Authentication::SslProtocols& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sslProtocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_sslProtocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslProtocols;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_sslProtocols(::System::Security::Authentication::SslProtocols  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sslProtocols = value;
}
constexpr ::Mirror::SimpleWeb::Log_Levels& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get__logLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevels;
}
constexpr ::Mirror::SimpleWeb::Log_Levels const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get__logLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevels;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set__logLevels(::Mirror::SimpleWeb::Log_Levels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logLevels = value;
}
constexpr ::Mirror::SimpleWeb::SimpleWebClient*& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Mirror::SimpleWeb::SimpleWebClient* const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_client(::Mirror::SimpleWeb::SimpleWebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::Mirror::SimpleWeb::SimpleWebServer*& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr ::Mirror::SimpleWeb::SimpleWebServer* const& Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_get_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr void Mirror::SimpleWeb::SimpleWebTransport::__cordl_internal_set_server(::Mirror::SimpleWeb::SimpleWebServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___server = value;
}
inline uint16_t Mirror::SimpleWeb::SimpleWebTransport::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::set_Port(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mirror::SimpleWeb::Log_Levels Mirror::SimpleWeb::SimpleWebTransport::get_LogLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"get_LogLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::Log_Levels>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::set_LogLevels(::Mirror::SimpleWeb::Log_Levels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"set_LogLevels", {}, {::i2c::type_of<::Mirror::SimpleWeb::Log_Levels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mirror::SimpleWeb::TcpConfig Mirror::SimpleWeb::SimpleWebTransport::get_TcpConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"get_TcpConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::TcpConfig>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::SimpleWeb::SimpleWebTransport::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Mirror::SimpleWeb::SimpleWebTransport::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::SimpleWeb::SimpleWebTransport::GetClientScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"GetClientScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Mirror::SimpleWeb::SimpleWebTransport::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ClientConnect(::StringW  hostname)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostname);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::SimpleWeb::SimpleWebTransport::GetServerScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"GetServerScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Uri* Mirror::SimpleWeb::SimpleWebTransport::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool Mirror::SimpleWeb::SimpleWebTransport::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline ::StringW Mirror::SimpleWeb::SimpleWebTransport::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::_ClientConnect_b__36_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ClientConnect>b__36_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::_ClientConnect_b__36_1(::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ClientConnect>b__36_1", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::_ClientConnect_b__36_2(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ClientConnect>b__36_2", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::_ServerStart_b__43_0(int32_t  connId, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ServerStart>b__43_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connId, data);
}
inline void Mirror::SimpleWeb::SimpleWebTransport::_ServerStart_b__43_1(int32_t  connId, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebTransport*>(),
                        {"<ServerStart>b__43_1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connId, exception);
}
inline ::Mirror::SimpleWeb::SimpleWebTransport* Mirror::SimpleWeb::SimpleWebTransport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::SimpleWebTransport*>());
}
/// @brief Convert operator to "::Mirror::PortTransport"
constexpr  Mirror::SimpleWeb::SimpleWebTransport::operator ::Mirror::PortTransport*() noexcept {
return static_cast<::Mirror::PortTransport*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::PortTransport"
constexpr ::Mirror::PortTransport* Mirror::SimpleWeb::SimpleWebTransport::i___Mirror__PortTransport() noexcept {
return static_cast<::Mirror::PortTransport*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SimpleWebTransport::SimpleWebTransport()   {
}
