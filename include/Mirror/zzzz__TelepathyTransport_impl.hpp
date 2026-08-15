#pragma once
// IWYU pragma private; include "Mirror/TelepathyTransport.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "Mirror/zzzz__TelepathyTransport_def.hpp"
#include "Mirror/zzzz__PortTransport_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "Telepathy/zzzz__Client_def.hpp"
#include "Telepathy/zzzz__Server_def.hpp"
//  Writing Method size for method: ::Mirror::TelepathyTransport.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::get_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181588300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(uint16_t)>(&::Mirror::TelepathyTransport::set_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181588310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18158c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::Available)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x180c3e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.CreateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::CreateClient)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18158ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"CreateClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ClientConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158c910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(::StringW)>(&::Mirror::TelepathyTransport::ClientConnect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18158c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(::System::Uri*)>(&::Mirror::TelepathyTransport::ClientConnect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18158c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::TelepathyTransport::ClientSend)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18158c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ClientDisconnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18158c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ServerUri)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18158cef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ServerActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158cbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ServerStart)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18158cd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::TelepathyTransport::ServerSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18158cc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(int32_t)>(&::Mirror::TelepathyTransport::ServerDisconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::TelepathyTransport::*)(int32_t)>(&::Mirror::TelepathyTransport::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158cc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ServerStop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::Shutdown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18158cf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::TelepathyTransport::*)(int32_t)>(&::Mirror::TelepathyTransport::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18158cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                    {::i2c::class_of<::Mirror::TelepathyTransport*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18158d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._Awake_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::_Awake_b__19_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<Awake>b__19_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._CreateClient_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::_CreateClient_b__21_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815880d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<CreateClient>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._CreateClient_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::TelepathyTransport::_CreateClient_b__21_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158c400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<CreateClient>b__21_1", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._CreateClient_b__21_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)()>(&::Mirror::TelepathyTransport::_CreateClient_b__21_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<CreateClient>b__21_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._ServerStart_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(int32_t)>(&::Mirror::TelepathyTransport::_ServerStart_b__30_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803085a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<ServerStart>b__30_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._ServerStart_b__30_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(int32_t, ::System::ArraySegment_1<uint8_t>)>(&::Mirror::TelepathyTransport::_ServerStart_b__30_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18158c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<ServerStart>b__30_1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TelepathyTransport._ServerStart_b__30_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TelepathyTransport::*)(int32_t)>(&::Mirror::TelepathyTransport::_ServerStart_b__30_2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181588210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<ServerStart>b__30_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& Mirror::TelepathyTransport::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr uint16_t const& Mirror::TelepathyTransport::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_port(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
constexpr bool& Mirror::TelepathyTransport::__cordl_internal_get_NoDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr bool const& Mirror::TelepathyTransport::__cordl_internal_get_NoDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_NoDelay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoDelay = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_SendTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendTimeout;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_SendTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendTimeout;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_SendTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendTimeout = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_ReceiveTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveTimeout;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_ReceiveTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveTimeout;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_ReceiveTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiveTimeout = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_serverMaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMaxMessageSize;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_serverMaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMaxMessageSize;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_serverMaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverMaxMessageSize = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_serverMaxReceivesPerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMaxReceivesPerTick;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_serverMaxReceivesPerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMaxReceivesPerTick;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_serverMaxReceivesPerTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverMaxReceivesPerTick = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_serverSendQueueLimitPerConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSendQueueLimitPerConnection;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_serverSendQueueLimitPerConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSendQueueLimitPerConnection;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_serverSendQueueLimitPerConnection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverSendQueueLimitPerConnection = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_serverReceiveQueueLimitPerConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverReceiveQueueLimitPerConnection;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_serverReceiveQueueLimitPerConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverReceiveQueueLimitPerConnection;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_serverReceiveQueueLimitPerConnection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverReceiveQueueLimitPerConnection = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_clientMaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMaxMessageSize;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_clientMaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMaxMessageSize;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_clientMaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientMaxMessageSize = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_clientMaxReceivesPerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMaxReceivesPerTick;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_clientMaxReceivesPerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMaxReceivesPerTick;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_clientMaxReceivesPerTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientMaxReceivesPerTick = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_clientSendQueueLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSendQueueLimit;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_clientSendQueueLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSendQueueLimit;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_clientSendQueueLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSendQueueLimit = value;
}
constexpr int32_t& Mirror::TelepathyTransport::__cordl_internal_get_clientReceiveQueueLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientReceiveQueueLimit;
}
constexpr int32_t const& Mirror::TelepathyTransport::__cordl_internal_get_clientReceiveQueueLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientReceiveQueueLimit;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_clientReceiveQueueLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientReceiveQueueLimit = value;
}
constexpr ::Telepathy::Client*& Mirror::TelepathyTransport::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Telepathy::Client* const& Mirror::TelepathyTransport::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_client(::Telepathy::Client*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::Telepathy::Server*& Mirror::TelepathyTransport::__cordl_internal_get_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr ::Telepathy::Server* const& Mirror::TelepathyTransport::__cordl_internal_get_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_server(::Telepathy::Server*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___server = value;
}
constexpr ::System::Func_1<bool>*& Mirror::TelepathyTransport::__cordl_internal_get_enabledCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledCheck;
}
constexpr ::System::Func_1<bool>* const& Mirror::TelepathyTransport::__cordl_internal_get_enabledCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledCheck;
}
constexpr void Mirror::TelepathyTransport::__cordl_internal_set_enabledCheck(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledCheck = value;
}
inline uint16_t Mirror::TelepathyTransport::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::set_Port(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::TelepathyTransport::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::TelepathyTransport::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::CreateClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"CreateClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::TelepathyTransport::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Mirror::TelepathyTransport::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void Mirror::TelepathyTransport::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::TelepathyTransport::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* Mirror::TelepathyTransport::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool Mirror::TelepathyTransport::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void Mirror::TelepathyTransport::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline ::StringW Mirror::TelepathyTransport::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::TelepathyTransport::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::TelepathyTransport::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline ::StringW Mirror::TelepathyTransport::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TelepathyTransport*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::TelepathyTransport::_Awake_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<Awake>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::_CreateClient_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<CreateClient>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::_CreateClient_b__21_1(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<CreateClient>b__21_1", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void Mirror::TelepathyTransport::_CreateClient_b__21_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<CreateClient>b__21_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TelepathyTransport::_ServerStart_b__30_0(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<ServerStart>b__30_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::TelepathyTransport::_ServerStart_b__30_1(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<ServerStart>b__30_1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment);
}
inline void Mirror::TelepathyTransport::_ServerStart_b__30_2(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TelepathyTransport*>(),
                        {"<ServerStart>b__30_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline ::Mirror::TelepathyTransport* Mirror::TelepathyTransport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::TelepathyTransport*>());
}
/// @brief Convert operator to "::Mirror::PortTransport"
constexpr  Mirror::TelepathyTransport::operator ::Mirror::PortTransport*() noexcept {
return static_cast<::Mirror::PortTransport*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::PortTransport"
constexpr ::Mirror::PortTransport* Mirror::TelepathyTransport::i___Mirror__PortTransport() noexcept {
return static_cast<::Mirror::PortTransport*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::TelepathyTransport::TelepathyTransport()   {
}
